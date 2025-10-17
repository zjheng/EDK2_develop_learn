;------------------------------------------------------------------------------ ;
; Copyright (c) 2025, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   ApRunLoop.nasm
;
; Abstract:
;
;   This is the assembly code for run loop for APs in the guest TD
;
;-------------------------------------------------------------------------------

%include "TdxCommondefs.inc"

DEFAULT REL

SECTION .bss
global STACK_BASE
STACK_BASE:
 resb 1024
STACK_TOP:

SECTION .text

%define TDX_WORK_AREA_MAILBOX_GDTR   (FixedPcdGet32 (PcdOvmfWorkAreaBase) + 128)
%define PT_ADDR(Offset)              (FixedPcdGet32 (PcdOvmfSecPageTablesBase) + (Offset))
%define TDX_WORK_AREA_PGTBL_READY    (FixedPcdGet32 (PcdOvmfWorkAreaBase) + 4)
%define PG_5_LEVEL                   (FixedPcdGetBool (PcdUse5LevelPageTable))

%define TDX_BSP         1
%define TDX_AP          2
%define TDX_AP_5_LEVEL  3

BITS 64

%define TDVMCALL_EXPOSE_REGS_MASK       0xffc4
%define TDVMCALL                        0x0
%define EXIT_REASON_CPUID               0xa

; Defined in ACPI 6.6 section 5.2.12.19 MultiProcessor Wakeup Mailbox Command.
%define MULTIPROCESSOR_WAKEUP_MAILBOX_COMMAND_NOOP    0
%define MULTIPROCESSOR_WAKEUP_MAILBOX_COMMAND_WAKEUP  1
%define MULTIPROCESSOR_WAKEUP_MAILBOX_COMMAND_TEST    2

%macro  tdcall  0
  db  0x66, 0x0f, 0x01, 0xcc
%endmacro

%macro tdcall_regs_preamble 2
    mov rax, %1

    xor rcx, rcx
    mov ecx, %2

    ; R10 = 0 (standard TDVMCALL)

    xor r10d, r10d

    ; Zero out unused (for standard TDVMCALL) registers to avoid leaking
    ; secrets to the VMM.

    xor esi, esi
    xor edi, edi

    xor edx, edx
    xor ebp, ebp
    xor r8d, r8d
    xor r9d, r9d
    xor r14, r14
    xor r15, r15
%endmacro

;
; Relocated Ap Mailbox loop
;
; @param[in]  RBX:  Relocated mailbox address
; @param[in]  RBP:  vCpuId
;
; @return     None  This routine does not return
;
global ASM_PFX(AsmRelocateApMailBoxLoop)
ASM_PFX(AsmRelocateApMailBoxLoop):
AsmRelocateApMailBoxLoopStart:

    mov         r11, EXIT_REASON_CPUID
    mov         r12, 0xb
    tdcall_regs_preamble TDVMCALL, TDVMCALL_EXPOSE_REGS_MASK
    tdcall
    test        r10, r10
    jnz         Panic
    mov         r8, r15
    mov         qword[rel mailbox_address], rbx

MailBoxLoop:
    ; Spin until command set
    cmp        dword [rbx + CommandOffset], MULTIPROCESSOR_WAKEUP_MAILBOX_COMMAND_NOOP
    je         MailBoxLoop
    ; Determine if this is a broadcast or directly for my apic-id, if not, ignore
    cmp        dword [rbx + ApicidOffset], MailboxApicidBroadcast
    je         MailBoxProcessCommand
    cmp        dword [rbx + ApicidOffset], r8d
    jne        MailBoxLoop
MailBoxProcessCommand:
    cmp        dword [rbx + CommandOffset], MULTIPROCESSOR_WAKEUP_MAILBOX_COMMAND_WAKEUP
    je         MailBoxWakeUp
    cmp        dword [rbx + CommandOffset], MULTIPROCESSOR_WAKEUP_MAILBOX_COMMAND_TEST
    je         MailBoxTest
    ; Don't support this command, so ignore
    jmp        MailBoxLoop
MailBoxWakeUp:
    mov        rax, [rbx + WakeupVectorOffset]
    ; OS sends a wakeup command for a given APIC ID, firmware is supposed to reset
    ; the command field back to zero as acknowledgement.
    mov        qword [rbx + CommandOffset], 0
    jmp        rax
MailBoxTest:
    mov        qword [rbx + CommandOffset], 0
    jmp        MailBoxLoop
Panic:
    ud2

AsmRelocateApResetVector:

.prepareStack:
    ; The stack can then be used to switch from long mode to compatibility mode
    mov rsp, STACK_TOP

.loadGDT:
    cli
    mov      rax, TDX_WORK_AREA_MAILBOX_GDTR
    lgdt     [rax]

.loadSwicthModeCode:
    mov     rcx, dword 0x10    ; load long mode selector
    shl     rcx, 32
    lea     rdx, [LongMode]    ; assume address < 4G
    or      rcx, rdx
    push    rcx

    mov     rcx, dword 0x08     ; load compatible mode selector
    shl     rcx, 32
    lea     rdx, [Compatible]  ; assume address < 4G
    or      rcx, rdx
    push    rcx
    retf

BITS 32
Compatible:
    mov     eax, dword 0x18
;     ; reload DS/ES/SS to make sure they are correct referred to current GDT
    mov     ds, ax
    mov     es, ax
    mov     ss, ax
    ; reload the fs and gs
    mov     fs, ax
    mov     gs, ax

    ; Must clear the CR4.PCIDE before clearing paging
    mov     ecx, cr4
    btc     ecx, 17
    mov     cr4, ecx
    ;
    ; Disable paging
    ;
    mov     ecx, cr0
    btc     ecx, 31
    mov     cr0, ecx
    ;
RestoreCr0:
    ; Only enable  PE(bit 0), NE(bit 5), ET(bit 4) 0x31
    mov    eax, dword 0x31
    mov    cr0, eax


    ; Only Enable MCE(bit 6), VMXE(bit 13) 0x2040
    ; TDX enforeced the VMXE = 1 and mask it in VMM, so not set it.
RestoreCr4:
    mov     eax, 0x40
    mov     cr4, eax

%if PG_5_LEVEL
    mov     al, byte[TDX_WORK_AREA_PGTBL_READY]
    inc     eax
    cmp     eax, TDX_AP_5_LEVEL
    jne     SetCr3
SetCr4La57:
    ; set la57 bit in cr4
    mov     eax, cr4
    bts     eax, 12
    mov     cr4, eax
%endif

SetCr3:
    ;
    ; Can use the boot page tables since it's reserved

    mov     eax, PT_ADDR (0)
    mov     cr3, eax

EnablePAE:
    mov     eax, cr4
    bts     eax, 5
    mov     cr4, eax

EnablePaging:
    mov     eax, cr0
    bts     eax, 31                     ; set PG
    mov     cr0, eax                    ; enable paging
    ; return to LongMode
    retf

BITS  64
LongMode:
    mov      rbx, qword[rel mailbox_address]
    jmp      AsmRelocateApMailBoxLoopStart
align 16
mailbox_address:
    dq 0
BITS 64
AsmRelocateApMailBoxLoopEnd:

;-------------------------------------------------------------------------------------
;  AsmGetRelocationMap (&RelocationMap);
;-------------------------------------------------------------------------------------
global ASM_PFX(AsmGetRelocationMap)
ASM_PFX(AsmGetRelocationMap):
    ; mov        byte[TDX_WORK_AREA_MB_PGTBL_READY], 0
    lea        rax, [AsmRelocateApMailBoxLoopStart]
    mov        qword [rcx], rax
    mov        qword [rcx +  8h], AsmRelocateApMailBoxLoopEnd - AsmRelocateApMailBoxLoopStart
    lea        rax, [AsmRelocateApResetVector]
    mov        qword [rcx + 10h], rax
    ret
