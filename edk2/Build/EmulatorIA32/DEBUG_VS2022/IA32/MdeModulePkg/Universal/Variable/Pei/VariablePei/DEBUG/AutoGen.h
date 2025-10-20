/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_34C8C28F_B61C_45a2_8F2E_89E46BECC63B
#define _AUTOGENH_34C8C28F_B61C_45a2_8F2E_89E46BECC63B

#ifdef __cplusplus
extern "C" {
#endif

#include <PiPei.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x34C8C28F, 0xB61C, 0x45a2, {0x8F, 0x2E, 0x89, 0xE4, 0x6B, 0xEC, 0xC6, 0x3B}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x05FD064D, 0x1073, 0xE844, {0x93, 0x6C, 0xA0, 0xE1, 0x63, 0x17, 0x10, 0x7D}}
#define STACK_COOKIE_VALUE 0x3800B68A

// Guids
extern EFI_GUID gEfiAuthenticatedVariableGuid;
extern EFI_GUID gEfiVariableGuid;
extern EFI_GUID gEfiVariableIndexTableGuid;
extern EFI_GUID gEfiSystemNvDataFvGuid;
extern EFI_GUID gEdkiiFaultTolerantWriteGuid;
extern EFI_GUID gEdkiiVariableRuntimeCacheInfoHobGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiStatusCodeSpecificDataGuid;
extern EFI_GUID gEfiStatusCodeDataTypeDebugGuid;
extern EFI_GUID gEfiFirmwareFileSystem2Guid;
extern EFI_GUID gEmulatorPkgTokenSpaceGuid;
extern EFI_GUID gEfiHobMemoryAllocStackGuid;
extern EFI_GUID gEfiHobMemoryAllocBspStoreGuid;
extern EFI_GUID gEfiHobMemoryAllocModuleGuid;
extern EFI_GUID gVariableFlashInfoHobGuid;

// PPIs
extern EFI_GUID gEfiPeiReadOnlyVariable2PpiGuid;
extern EFI_GUID gEfiPeiMemoryDiscoveredPpiGuid;
extern EFI_GUID gEfiPeiFirmwareVolumeInfoPpiGuid;
extern EFI_GUID gEfiPeiFirmwareVolumeInfo2PpiGuid;
extern EFI_GUID gPcdPpiGuid;
extern EFI_GUID gEfiPeiPcdPpiGuid;
extern EFI_GUID gGetPcdInfoPpiGuid;
extern EFI_GUID gEfiGetPcdInfoPpiGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdEmuVariableNvModeEnable  0U
#define _PCD_SIZE_PcdEmuVariableNvModeEnable 1
#define _PCD_GET_MODE_SIZE_PcdEmuVariableNvModeEnable  _PCD_SIZE_PcdEmuVariableNvModeEnable 
#define _PCD_VALUE_PcdEmuVariableNvModeEnable  0U
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdEmuVariableNvModeEnable;
#define _PCD_GET_MODE_BOOL_PcdEmuVariableNvModeEnable  _gPcd_FixedAtBuild_PcdEmuVariableNvModeEnable
//#define _PCD_SET_MODE_BOOL_PcdEmuVariableNvModeEnable  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdVariableStoreSize  0U
#define _PCD_SIZE_PcdVariableStoreSize 4
#define _PCD_GET_MODE_SIZE_PcdVariableStoreSize  _PCD_SIZE_PcdVariableStoreSize 
#define _PCD_VALUE_PcdVariableStoreSize  0x10000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdVariableStoreSize;
#define _PCD_GET_MODE_32_PcdVariableStoreSize  _gPcd_FixedAtBuild_PcdVariableStoreSize
//#define _PCD_SET_MODE_32_PcdVariableStoreSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdEnableVariableRuntimeCache  0U
#define _PCD_SIZE_PcdEnableVariableRuntimeCache 1
#define _PCD_GET_MODE_SIZE_PcdEnableVariableRuntimeCache  _PCD_SIZE_PcdEnableVariableRuntimeCache 
#define _PCD_VALUE_PcdEnableVariableRuntimeCache  ((BOOLEAN)1U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdEnableVariableRuntimeCache;
#define _PCD_GET_MODE_BOOL_PcdEnableVariableRuntimeCache  _gPcd_FixedAtBuild_PcdEnableVariableRuntimeCache
//#define _PCD_SET_MODE_BOOL_PcdEnableVariableRuntimeCache  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
PeimInitializeVariableServices (
  IN       EFI_PEI_FILE_HANDLE  FileHandle,
  IN CONST EFI_PEI_SERVICES     **PeiServices
  );





#ifdef __cplusplus
}
#endif

#endif
