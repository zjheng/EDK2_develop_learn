/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_C9FAF091_57F8_A64C_A07A_445B124F0D93
#define _AUTOGENH_C9FAF091_57F8_A64C_A07A_445B124F0D93

#ifdef __cplusplus
extern "C" {
#endif

#include <PiPei.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0xC9FAF091, 0x57F8, 0xA64C, {0xA0, 0x7A, 0x44, 0x5B, 0x12, 0x4F, 0x0D, 0x93}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x05FD064D, 0x1073, 0xE844, {0x93, 0x6C, 0xA0, 0xE1, 0x63, 0x17, 0x10, 0x7D}}
#define STACK_COOKIE_VALUE 0x6C81CF1A

// Guids
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gEmulatorPkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiStatusCodeSpecificDataGuid;
extern EFI_GUID gEfiStatusCodeDataTypeDebugGuid;
extern EFI_GUID gEfiHobMemoryAllocStackGuid;
extern EFI_GUID gEfiHobMemoryAllocBspStoreGuid;
extern EFI_GUID gEfiHobMemoryAllocModuleGuid;
extern EFI_GUID gEfiFirmwareFileSystem2Guid;

// PPIs
extern EFI_GUID gEmuThunkPpiGuid;
extern EFI_GUID gEfiPeiFirmwareVolumeInfoPpiGuid;
extern EFI_GUID gEfiPeiFirmwareVolumeInfo2PpiGuid;
extern EFI_GUID gPcdPpiGuid;
extern EFI_GUID gEfiPeiPcdPpiGuid;
extern EFI_GUID gGetPcdInfoPpiGuid;
extern EFI_GUID gEfiGetPcdInfoPpiGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdFlashNvStorageFtwWorkingSize  0U
#define _PCD_SIZE_PcdFlashNvStorageFtwWorkingSize 4
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageFtwWorkingSize  _PCD_SIZE_PcdFlashNvStorageFtwWorkingSize 
#define _PCD_VALUE_PcdFlashNvStorageFtwWorkingSize  0x00002000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwWorkingSize;
#define _PCD_GET_MODE_32_PcdFlashNvStorageFtwWorkingSize  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwWorkingSize
//#define _PCD_SET_MODE_32_PcdFlashNvStorageFtwWorkingSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashNvStorageFtwWorkingBase64  2U
#define _PCD_GET_MODE_64_PcdFlashNvStorageFtwWorkingBase64  LibPcdGet64(_PCD_TOKEN_PcdFlashNvStorageFtwWorkingBase64)
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageFtwWorkingBase64  LibPcdGetSize(_PCD_TOKEN_PcdFlashNvStorageFtwWorkingBase64)
#define _PCD_SET_MODE_64_PcdFlashNvStorageFtwWorkingBase64(Value)  LibPcdSet64(_PCD_TOKEN_PcdFlashNvStorageFtwWorkingBase64, (Value))
#define _PCD_SET_MODE_64_S_PcdFlashNvStorageFtwWorkingBase64(Value)  LibPcdSet64S(_PCD_TOKEN_PcdFlashNvStorageFtwWorkingBase64, (Value))

#define _PCD_TOKEN_PcdFlashNvStorageFtwSpareSize  0U
#define _PCD_SIZE_PcdFlashNvStorageFtwSpareSize 4
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageFtwSpareSize  _PCD_SIZE_PcdFlashNvStorageFtwSpareSize 
#define _PCD_VALUE_PcdFlashNvStorageFtwSpareSize  0x00010000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwSpareSize;
#define _PCD_GET_MODE_32_PcdFlashNvStorageFtwSpareSize  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwSpareSize
//#define _PCD_SET_MODE_32_PcdFlashNvStorageFtwSpareSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashNvStorageFtwSpareBase64  1U
#define _PCD_GET_MODE_64_PcdFlashNvStorageFtwSpareBase64  LibPcdGet64(_PCD_TOKEN_PcdFlashNvStorageFtwSpareBase64)
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageFtwSpareBase64  LibPcdGetSize(_PCD_TOKEN_PcdFlashNvStorageFtwSpareBase64)
#define _PCD_SET_MODE_64_PcdFlashNvStorageFtwSpareBase64(Value)  LibPcdSet64(_PCD_TOKEN_PcdFlashNvStorageFtwSpareBase64, (Value))
#define _PCD_SET_MODE_64_S_PcdFlashNvStorageFtwSpareBase64(Value)  LibPcdSet64S(_PCD_TOKEN_PcdFlashNvStorageFtwSpareBase64, (Value))

#define _PCD_TOKEN_PcdFlashNvStorageVariableSize  0U
#define _PCD_SIZE_PcdFlashNvStorageVariableSize 4
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageVariableSize  _PCD_SIZE_PcdFlashNvStorageVariableSize 
#define _PCD_VALUE_PcdFlashNvStorageVariableSize  0x0000C000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashNvStorageVariableSize;
#define _PCD_GET_MODE_32_PcdFlashNvStorageVariableSize  _gPcd_FixedAtBuild_PcdFlashNvStorageVariableSize
//#define _PCD_SET_MODE_32_PcdFlashNvStorageVariableSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashNvStorageVariableBase64  3U
#define _PCD_GET_MODE_64_PcdFlashNvStorageVariableBase64  LibPcdGet64(_PCD_TOKEN_PcdFlashNvStorageVariableBase64)
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageVariableBase64  LibPcdGetSize(_PCD_TOKEN_PcdFlashNvStorageVariableBase64)
#define _PCD_SET_MODE_64_PcdFlashNvStorageVariableBase64(Value)  LibPcdSet64(_PCD_TOKEN_PcdFlashNvStorageVariableBase64, (Value))
#define _PCD_SET_MODE_64_S_PcdFlashNvStorageVariableBase64(Value)  LibPcdSet64S(_PCD_TOKEN_PcdFlashNvStorageVariableBase64, (Value))

#define _PCD_TOKEN_PcdEmuFlashNvStorageFtwWorkingBase  0U
#define _PCD_SIZE_PcdEmuFlashNvStorageFtwWorkingBase 8
#define _PCD_GET_MODE_SIZE_PcdEmuFlashNvStorageFtwWorkingBase  _PCD_SIZE_PcdEmuFlashNvStorageFtwWorkingBase 
#define _PCD_VALUE_PcdEmuFlashNvStorageFtwWorkingBase  0x10258E000ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdEmuFlashNvStorageFtwWorkingBase;
#define _PCD_GET_MODE_64_PcdEmuFlashNvStorageFtwWorkingBase  _gPcd_FixedAtBuild_PcdEmuFlashNvStorageFtwWorkingBase
//#define _PCD_SET_MODE_64_PcdEmuFlashNvStorageFtwWorkingBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdEmuFlashNvStorageFtwSpareBase  0U
#define _PCD_SIZE_PcdEmuFlashNvStorageFtwSpareBase 8
#define _PCD_GET_MODE_SIZE_PcdEmuFlashNvStorageFtwSpareBase  _PCD_SIZE_PcdEmuFlashNvStorageFtwSpareBase 
#define _PCD_VALUE_PcdEmuFlashNvStorageFtwSpareBase  0x102590000ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdEmuFlashNvStorageFtwSpareBase;
#define _PCD_GET_MODE_64_PcdEmuFlashNvStorageFtwSpareBase  _gPcd_FixedAtBuild_PcdEmuFlashNvStorageFtwSpareBase
//#define _PCD_SET_MODE_64_PcdEmuFlashNvStorageFtwSpareBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdEmuFlashNvStorageVariableBase  0U
#define _PCD_SIZE_PcdEmuFlashNvStorageVariableBase 8
#define _PCD_GET_MODE_SIZE_PcdEmuFlashNvStorageVariableBase  _PCD_SIZE_PcdEmuFlashNvStorageVariableBase 
#define _PCD_VALUE_PcdEmuFlashNvStorageVariableBase  0x102580000ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdEmuFlashNvStorageVariableBase;
#define _PCD_GET_MODE_64_PcdEmuFlashNvStorageVariableBase  _gPcd_FixedAtBuild_PcdEmuFlashNvStorageVariableBase
//#define _PCD_SET_MODE_64_PcdEmuFlashNvStorageVariableBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
PeimInitializeFlashMap (
  IN       EFI_PEI_FILE_HANDLE  FileHandle,
  IN CONST EFI_PEI_SERVICES     **PeiServices
  );





#ifdef __cplusplus
}
#endif

#endif
