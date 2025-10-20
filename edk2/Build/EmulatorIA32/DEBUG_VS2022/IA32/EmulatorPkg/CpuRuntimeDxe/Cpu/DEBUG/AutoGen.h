/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_f3794b60_8985_11db_8e53_0040d02b1835
#define _AUTOGENH_f3794b60_8985_11db_8e53_0040d02b1835

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0xf3794b60, 0x8985, 0x11db, {0x8e, 0x53, 0x00, 0x40, 0xd0, 0x2b, 0x18, 0x35}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x05FD064D, 0x1073, 0xE844, {0x93, 0x6C, 0xA0, 0xE1, 0x63, 0x17, 0x10, 0x7D}}
#define STACK_COOKIE_VALUE 0x31B19F29

// Guids
extern EFI_GUID gIdleLoopEventGuid;
extern EFI_GUID gEmulatorPkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
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
extern EFI_GUID gEfiStatusCodeSpecificDataGuid;
extern EFI_GUID gEfiStatusCodeDataTypeDebugGuid;
extern EFI_GUID gEfiEventReadyToBootGuid;
extern EFI_GUID gEfiEventAfterReadyToBootGuid;
extern EFI_GUID gEfiEventLegacyBootGuid;
extern EFI_GUID gEfiGlobalVariableGuid;
extern EFI_GUID gEfiAcpi20TableGuid;
extern EFI_GUID gEfiAcpi10TableGuid;
extern EFI_GUID gEfiHobListGuid;
extern EFI_GUID gEdkiiIfrBitVarstoreGuid;

// Protocols
extern EFI_GUID gEmuIoThunkProtocolGuid;
extern EFI_GUID gEfiSmbiosProtocolGuid;
extern EFI_GUID gEfiCpuIo2ProtocolGuid;
extern EFI_GUID gEfiCpuArchProtocolGuid;
extern EFI_GUID gEmuThreadThunkProtocolGuid;
extern EFI_GUID gEfiMpServiceProtocolGuid;
extern EFI_GUID gEfiDevicePathProtocolGuid;
extern EFI_GUID gEfiDebugPortProtocolGuid;
extern EFI_GUID gEfiStatusCodeRuntimeProtocolGuid;
extern EFI_GUID gPcdProtocolGuid;
extern EFI_GUID gEfiPcdProtocolGuid;
extern EFI_GUID gGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiGetPcdInfoProtocolGuid;
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
extern EFI_GUID gEfiHiiStringProtocolGuid;
extern EFI_GUID gEfiHiiImageProtocolGuid;
extern EFI_GUID gEfiHiiDatabaseProtocolGuid;
extern EFI_GUID gEfiHiiConfigRoutingProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;
extern EFI_GUID gEfiFormBrowser2ProtocolGuid;
extern EFI_GUID gEmuThunkProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdEmuMpServicesPollingInterval  0U
#define _PCD_SIZE_PcdEmuMpServicesPollingInterval 8
#define _PCD_GET_MODE_SIZE_PcdEmuMpServicesPollingInterval  _PCD_SIZE_PcdEmuMpServicesPollingInterval 
#define _PCD_VALUE_PcdEmuMpServicesPollingInterval  0x100ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdEmuMpServicesPollingInterval;
#define _PCD_GET_MODE_64_PcdEmuMpServicesPollingInterval  _gPcd_FixedAtBuild_PcdEmuMpServicesPollingInterval
//#define _PCD_SET_MODE_64_PcdEmuMpServicesPollingInterval  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
InitializeCpu (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
