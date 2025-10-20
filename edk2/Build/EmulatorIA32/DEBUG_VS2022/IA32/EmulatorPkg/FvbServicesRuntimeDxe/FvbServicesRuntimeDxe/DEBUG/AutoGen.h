/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_A01E498C_96E8_2A4C_95F4_85248F989753
#define _AUTOGENH_A01E498C_96E8_2A4C_95F4_85248F989753

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0xA01E498C, 0x96E8, 0x2A4C, {0x95, 0xF4, 0x85, 0x24, 0x8F, 0x98, 0x97, 0x53}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x05FD064D, 0x1073, 0xE844, {0x93, 0x6C, 0xA0, 0xE1, 0x63, 0x17, 0x10, 0x7D}}
#define STACK_COOKIE_VALUE 0x473F2146

// Guids
extern EFI_GUID gEfiEventVirtualAddressChangeGuid;
extern EFI_GUID gEmulatorPkgTokenSpaceGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiStatusCodeSpecificDataGuid;
extern EFI_GUID gEfiStatusCodeDataTypeDebugGuid;
extern EFI_GUID gEfiVTUTF8Guid;
extern EFI_GUID gEfiVT100Guid;
extern EFI_GUID gEfiVT100PlusGuid;
extern EFI_GUID gEfiPcAnsiGuid;
extern EFI_GUID gEfiUartDevicePathGuid;
extern EFI_GUID gEfiSasDevicePathGuid;
extern EFI_GUID gEfiVirtualDiskGuid;
extern EFI_GUID gEfiVirtualCdGuid;
extern EFI_GUID gEfiPersistentVirtualDiskGuid;
extern EFI_GUID gEfiPersistentVirtualCdGuid;
extern EFI_GUID gEfiEventReadyToBootGuid;
extern EFI_GUID gEfiEventAfterReadyToBootGuid;
extern EFI_GUID gEfiEventLegacyBootGuid;
extern EFI_GUID gEfiGlobalVariableGuid;
extern EFI_GUID gEfiAcpi20TableGuid;
extern EFI_GUID gEfiAcpi10TableGuid;
extern EFI_GUID gEfiHobListGuid;
extern EFI_GUID gEfiDxeServicesTableGuid;

// Protocols
extern EFI_GUID gEfiFirmwareVolumeBlockProtocolGuid;
extern EFI_GUID gEfiDevicePathProtocolGuid;
extern EFI_GUID gEfiStatusCodeRuntimeProtocolGuid;
extern EFI_GUID gPcdProtocolGuid;
extern EFI_GUID gEfiPcdProtocolGuid;
extern EFI_GUID gGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiDebugPortProtocolGuid;
extern EFI_GUID gEfiDriverBindingProtocolGuid;
extern EFI_GUID gEfiSimpleTextOutProtocolGuid;
extern EFI_GUID gEfiGraphicsOutputProtocolGuid;
extern EFI_GUID gEfiHiiFontProtocolGuid;
extern EFI_GUID gEfiSimpleFileSystemProtocolGuid;
extern EFI_GUID gEfiComponentNameProtocolGuid;
extern EFI_GUID gEfiComponentName2ProtocolGuid;
extern EFI_GUID gEfiDriverConfigurationProtocolGuid;
extern EFI_GUID gEfiDriverConfiguration2ProtocolGuid;
extern EFI_GUID gEfiDriverDiagnosticsProtocolGuid;
extern EFI_GUID gEfiDriverDiagnostics2ProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdEmuFirmwareFdSize  0U
#define _PCD_SIZE_PcdEmuFirmwareFdSize 4
#define _PCD_GET_MODE_SIZE_PcdEmuFirmwareFdSize  _PCD_SIZE_PcdEmuFirmwareFdSize 
#define _PCD_VALUE_PcdEmuFirmwareFdSize  0x005a0000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdEmuFirmwareFdSize;
#define _PCD_GET_MODE_32_PcdEmuFirmwareFdSize  _gPcd_FixedAtBuild_PcdEmuFirmwareFdSize
//#define _PCD_SET_MODE_32_PcdEmuFirmwareFdSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdEmuFirmwareBlockSize  0U
#define _PCD_SIZE_PcdEmuFirmwareBlockSize 4
#define _PCD_GET_MODE_SIZE_PcdEmuFirmwareBlockSize  _PCD_SIZE_PcdEmuFirmwareBlockSize 
#define _PCD_VALUE_PcdEmuFirmwareBlockSize  0x10000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdEmuFirmwareBlockSize;
#define _PCD_GET_MODE_32_PcdEmuFirmwareBlockSize  _gPcd_FixedAtBuild_PcdEmuFirmwareBlockSize
//#define _PCD_SET_MODE_32_PcdEmuFirmwareBlockSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdEmuFlashFvRecoveryBase  0U
#define _PCD_SIZE_PcdEmuFlashFvRecoveryBase 8
#define _PCD_GET_MODE_SIZE_PcdEmuFlashFvRecoveryBase  _PCD_SIZE_PcdEmuFlashFvRecoveryBase 
#define _PCD_VALUE_PcdEmuFlashFvRecoveryBase  0x102000000ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdEmuFlashFvRecoveryBase;
#define _PCD_GET_MODE_64_PcdEmuFlashFvRecoveryBase  _gPcd_FixedAtBuild_PcdEmuFlashFvRecoveryBase
//#define _PCD_SET_MODE_64_PcdEmuFlashFvRecoveryBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdEmuFlashFvRecoverySize  0U
#define _PCD_SIZE_PcdEmuFlashFvRecoverySize 4
#define _PCD_GET_MODE_SIZE_PcdEmuFlashFvRecoverySize  _PCD_SIZE_PcdEmuFlashFvRecoverySize 
#define _PCD_VALUE_PcdEmuFlashFvRecoverySize  0x00580000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdEmuFlashFvRecoverySize;
#define _PCD_GET_MODE_32_PcdEmuFlashFvRecoverySize  _gPcd_FixedAtBuild_PcdEmuFlashFvRecoverySize
//#define _PCD_SET_MODE_32_PcdEmuFlashFvRecoverySize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdEmuFlashNvStorageEventLogBase  0U
#define _PCD_SIZE_PcdEmuFlashNvStorageEventLogBase 8
#define _PCD_GET_MODE_SIZE_PcdEmuFlashNvStorageEventLogBase  _PCD_SIZE_PcdEmuFlashNvStorageEventLogBase 
#define _PCD_VALUE_PcdEmuFlashNvStorageEventLogBase  0x10258C000ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdEmuFlashNvStorageEventLogBase;
#define _PCD_GET_MODE_64_PcdEmuFlashNvStorageEventLogBase  _gPcd_FixedAtBuild_PcdEmuFlashNvStorageEventLogBase
//#define _PCD_SET_MODE_64_PcdEmuFlashNvStorageEventLogBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdEmuFlashNvStorageEventLogSize  0U
#define _PCD_SIZE_PcdEmuFlashNvStorageEventLogSize 4
#define _PCD_GET_MODE_SIZE_PcdEmuFlashNvStorageEventLogSize  _PCD_SIZE_PcdEmuFlashNvStorageEventLogSize 
#define _PCD_VALUE_PcdEmuFlashNvStorageEventLogSize  0x00002000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdEmuFlashNvStorageEventLogSize;
#define _PCD_GET_MODE_32_PcdEmuFlashNvStorageEventLogSize  _gPcd_FixedAtBuild_PcdEmuFlashNvStorageEventLogSize
//#define _PCD_SET_MODE_32_PcdEmuFlashNvStorageEventLogSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashNvStorageFtwWorkingSize  0U
#define _PCD_SIZE_PcdFlashNvStorageFtwWorkingSize 4
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageFtwWorkingSize  _PCD_SIZE_PcdFlashNvStorageFtwWorkingSize 
#define _PCD_VALUE_PcdFlashNvStorageFtwWorkingSize  0x00002000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwWorkingSize;
#define _PCD_GET_MODE_32_PcdFlashNvStorageFtwWorkingSize  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwWorkingSize
//#define _PCD_SET_MODE_32_PcdFlashNvStorageFtwWorkingSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashNvStorageFtwWorkingBase  0U
#define _PCD_SIZE_PcdFlashNvStorageFtwWorkingBase 4
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageFtwWorkingBase  _PCD_SIZE_PcdFlashNvStorageFtwWorkingBase 
#define _PCD_VALUE_PcdFlashNvStorageFtwWorkingBase  0x0U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwWorkingBase;
#define _PCD_GET_MODE_32_PcdFlashNvStorageFtwWorkingBase  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwWorkingBase
//#define _PCD_SET_MODE_32_PcdFlashNvStorageFtwWorkingBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashNvStorageFtwSpareSize  0U
#define _PCD_SIZE_PcdFlashNvStorageFtwSpareSize 4
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageFtwSpareSize  _PCD_SIZE_PcdFlashNvStorageFtwSpareSize 
#define _PCD_VALUE_PcdFlashNvStorageFtwSpareSize  0x00010000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwSpareSize;
#define _PCD_GET_MODE_32_PcdFlashNvStorageFtwSpareSize  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwSpareSize
//#define _PCD_SET_MODE_32_PcdFlashNvStorageFtwSpareSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashNvStorageFtwSpareBase  0U
#define _PCD_SIZE_PcdFlashNvStorageFtwSpareBase 4
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageFtwSpareBase  _PCD_SIZE_PcdFlashNvStorageFtwSpareBase 
#define _PCD_VALUE_PcdFlashNvStorageFtwSpareBase  0x0U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwSpareBase;
#define _PCD_GET_MODE_32_PcdFlashNvStorageFtwSpareBase  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwSpareBase
//#define _PCD_SET_MODE_32_PcdFlashNvStorageFtwSpareBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashNvStorageVariableSize  0U
#define _PCD_SIZE_PcdFlashNvStorageVariableSize 4
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageVariableSize  _PCD_SIZE_PcdFlashNvStorageVariableSize 
#define _PCD_VALUE_PcdFlashNvStorageVariableSize  0x0000C000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashNvStorageVariableSize;
#define _PCD_GET_MODE_32_PcdFlashNvStorageVariableSize  _gPcd_FixedAtBuild_PcdFlashNvStorageVariableSize
//#define _PCD_SET_MODE_32_PcdFlashNvStorageVariableSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashNvStorageVariableBase  0U
#define _PCD_SIZE_PcdFlashNvStorageVariableBase 4
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageVariableBase  _PCD_SIZE_PcdFlashNvStorageVariableBase 
#define _PCD_VALUE_PcdFlashNvStorageVariableBase  0x0U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashNvStorageVariableBase;
#define _PCD_GET_MODE_32_PcdFlashNvStorageVariableBase  _gPcd_FixedAtBuild_PcdFlashNvStorageVariableBase
//#define _PCD_SET_MODE_32_PcdFlashNvStorageVariableBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
FvbInitialize (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
