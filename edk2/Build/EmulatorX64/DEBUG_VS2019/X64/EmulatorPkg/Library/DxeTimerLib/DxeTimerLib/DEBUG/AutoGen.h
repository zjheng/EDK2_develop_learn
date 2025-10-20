/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_74B62391_AD0D_1B4D_8784_151404F9D538
#define _AUTOGENH_74B62391_AD0D_1B4D_8784_151404F9D538

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define STACK_COOKIE_VALUE 0xA2080981C1506CDULL

// Protocols
extern EFI_GUID gEfiTimerArchProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

EFI_STATUS
EFIAPI
DxeTimerLibConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );


#ifdef __cplusplus
}
#endif

#endif
