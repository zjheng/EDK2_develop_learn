/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_52C05B14_0B98_496c_BC3B_04B50211D680
#define _AUTOGENH_52C05B14_0B98_496c_BC3B_04B50211D680

#ifdef __cplusplus
extern "C" {
#endif

#include <PiPei.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x52C05B14, 0x0B98, 0x496c, {0xBC, 0x3B, 0x04, 0xB5, 0x02, 0x11, 0xD6, 0x80}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x05FD064D, 0x1073, 0xE844, {0x93, 0x6C, 0xA0, 0xE1, 0x63, 0x17, 0x10, 0x7D}}
#define STACK_COOKIE_VALUE 0x4AEAD5D241D91E2CULL

// Guids
extern EFI_GUID gPeiAprioriFileNameGuid;
extern EFI_GUID gEfiFirmwareFileSystem2Guid;
extern EFI_GUID gEfiFirmwareFileSystem3Guid;
extern EFI_GUID gStatusCodeCallbackGuid;
extern EFI_GUID gEdkiiMigratedFvInfoGuid;
extern EFI_GUID gEdkiiMigrationInfoGuid;
extern EFI_GUID gEfiDelayedDispatchTableGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEmulatorPkgTokenSpaceGuid;
extern EFI_GUID gEfiStatusCodeDataTypeDebugGuid;
extern EFI_GUID gEfiHobMemoryAllocStackGuid;
extern EFI_GUID gEfiHobMemoryAllocBspStoreGuid;
extern EFI_GUID gEfiHobMemoryAllocModuleGuid;
extern EFI_GUID gEfiStatusCodeSpecificDataGuid;

// PPIs
extern EFI_GUID gEfiPeiStatusCodePpiGuid;
extern EFI_GUID gEfiPeiResetPpiGuid;
extern EFI_GUID gEfiDxeIplPpiGuid;
extern EFI_GUID gEfiPeiMemoryDiscoveredPpiGuid;
extern EFI_GUID gEfiPeiDecompressPpiGuid;
extern EFI_GUID gEfiPeiFirmwareVolumeInfoPpiGuid;
extern EFI_GUID gEfiPeiFirmwareVolumeInfo2PpiGuid;
extern EFI_GUID gEfiPeiLoadFilePpiGuid;
extern EFI_GUID gEfiPeiSecurity2PpiGuid;
extern EFI_GUID gEfiTemporaryRamSupportPpiGuid;
extern EFI_GUID gEfiTemporaryRamDonePpiGuid;
extern EFI_GUID gEfiPeiReset2PpiGuid;
extern EFI_GUID gEfiSecHobDataPpiGuid;
extern EFI_GUID gEfiPeiCoreFvLocationPpiGuid;
extern EFI_GUID gEdkiiPeiMigrateTempRamPpiGuid;
extern EFI_GUID gEfiPeiDelayedDispatchPpiGuid;
extern EFI_GUID gEfiEndOfPeiSignalPpiGuid;
extern EFI_GUID gEmuThunkPpiGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdPeiCoreMaxPeiStackSize  0U
#define _PCD_SIZE_PcdPeiCoreMaxPeiStackSize 4
#define _PCD_GET_MODE_SIZE_PcdPeiCoreMaxPeiStackSize  _PCD_SIZE_PcdPeiCoreMaxPeiStackSize 
#define _PCD_VALUE_PcdPeiCoreMaxPeiStackSize  0x20000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdPeiCoreMaxPeiStackSize;
#define _PCD_GET_MODE_32_PcdPeiCoreMaxPeiStackSize  _gPcd_FixedAtBuild_PcdPeiCoreMaxPeiStackSize
//#define _PCD_SET_MODE_32_PcdPeiCoreMaxPeiStackSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdPeiCoreImageLoaderSearchTeSectionFirst  0U
#define _PCD_SIZE_PcdPeiCoreImageLoaderSearchTeSectionFirst 1
#define _PCD_GET_MODE_SIZE_PcdPeiCoreImageLoaderSearchTeSectionFirst  _PCD_SIZE_PcdPeiCoreImageLoaderSearchTeSectionFirst 
#define _PCD_VALUE_PcdPeiCoreImageLoaderSearchTeSectionFirst  ((BOOLEAN)0U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdPeiCoreImageLoaderSearchTeSectionFirst;
#define _PCD_GET_MODE_BOOL_PcdPeiCoreImageLoaderSearchTeSectionFirst  _gPcd_FixedAtBuild_PcdPeiCoreImageLoaderSearchTeSectionFirst
//#define _PCD_SET_MODE_BOOL_PcdPeiCoreImageLoaderSearchTeSectionFirst  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdLoadFixAddressPeiCodePageNumber  0U
#define _PCD_PATCHABLE_VALUE_PcdLoadFixAddressPeiCodePageNumber  ((UINT32)0U)
extern volatile   UINT32  _gPcd_BinaryPatch_PcdLoadFixAddressPeiCodePageNumber;
#define _PCD_GET_MODE_32_PcdLoadFixAddressPeiCodePageNumber  _gPcd_BinaryPatch_PcdLoadFixAddressPeiCodePageNumber
#define _PCD_PATCHABLE_PcdLoadFixAddressPeiCodePageNumber_SIZE 4
#define _PCD_GET_MODE_SIZE_PcdLoadFixAddressPeiCodePageNumber  _gPcd_BinaryPatch_Size_PcdLoadFixAddressPeiCodePageNumber 
extern UINTN _gPcd_BinaryPatch_Size_PcdLoadFixAddressPeiCodePageNumber; 
#define _PCD_SET_MODE_32_PcdLoadFixAddressPeiCodePageNumber(Value)  (_gPcd_BinaryPatch_PcdLoadFixAddressPeiCodePageNumber = (Value))
#define _PCD_SET_MODE_32_S_PcdLoadFixAddressPeiCodePageNumber(Value)  ((_gPcd_BinaryPatch_PcdLoadFixAddressPeiCodePageNumber = (Value)), RETURN_SUCCESS) 

#define _PCD_TOKEN_PcdLoadFixAddressBootTimeCodePageNumber  0U
#define _PCD_PATCHABLE_VALUE_PcdLoadFixAddressBootTimeCodePageNumber  ((UINT32)0U)
extern volatile   UINT32  _gPcd_BinaryPatch_PcdLoadFixAddressBootTimeCodePageNumber;
#define _PCD_GET_MODE_32_PcdLoadFixAddressBootTimeCodePageNumber  _gPcd_BinaryPatch_PcdLoadFixAddressBootTimeCodePageNumber
#define _PCD_PATCHABLE_PcdLoadFixAddressBootTimeCodePageNumber_SIZE 4
#define _PCD_GET_MODE_SIZE_PcdLoadFixAddressBootTimeCodePageNumber  _gPcd_BinaryPatch_Size_PcdLoadFixAddressBootTimeCodePageNumber 
extern UINTN _gPcd_BinaryPatch_Size_PcdLoadFixAddressBootTimeCodePageNumber; 
#define _PCD_SET_MODE_32_PcdLoadFixAddressBootTimeCodePageNumber(Value)  (_gPcd_BinaryPatch_PcdLoadFixAddressBootTimeCodePageNumber = (Value))
#define _PCD_SET_MODE_32_S_PcdLoadFixAddressBootTimeCodePageNumber(Value)  ((_gPcd_BinaryPatch_PcdLoadFixAddressBootTimeCodePageNumber = (Value)), RETURN_SUCCESS) 

#define _PCD_TOKEN_PcdLoadFixAddressRuntimeCodePageNumber  0U
#define _PCD_PATCHABLE_VALUE_PcdLoadFixAddressRuntimeCodePageNumber  ((UINT32)0U)
extern volatile   UINT32  _gPcd_BinaryPatch_PcdLoadFixAddressRuntimeCodePageNumber;
#define _PCD_GET_MODE_32_PcdLoadFixAddressRuntimeCodePageNumber  _gPcd_BinaryPatch_PcdLoadFixAddressRuntimeCodePageNumber
#define _PCD_PATCHABLE_PcdLoadFixAddressRuntimeCodePageNumber_SIZE 4
#define _PCD_GET_MODE_SIZE_PcdLoadFixAddressRuntimeCodePageNumber  _gPcd_BinaryPatch_Size_PcdLoadFixAddressRuntimeCodePageNumber 
extern UINTN _gPcd_BinaryPatch_Size_PcdLoadFixAddressRuntimeCodePageNumber; 
#define _PCD_SET_MODE_32_PcdLoadFixAddressRuntimeCodePageNumber(Value)  (_gPcd_BinaryPatch_PcdLoadFixAddressRuntimeCodePageNumber = (Value))
#define _PCD_SET_MODE_32_S_PcdLoadFixAddressRuntimeCodePageNumber(Value)  ((_gPcd_BinaryPatch_PcdLoadFixAddressRuntimeCodePageNumber = (Value)), RETURN_SUCCESS) 

#define _PCD_TOKEN_PcdLoadModuleAtFixAddressEnable  0U
#define _PCD_SIZE_PcdLoadModuleAtFixAddressEnable 8
#define _PCD_GET_MODE_SIZE_PcdLoadModuleAtFixAddressEnable  _PCD_SIZE_PcdLoadModuleAtFixAddressEnable 
#define _PCD_VALUE_PcdLoadModuleAtFixAddressEnable  0ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdLoadModuleAtFixAddressEnable;
#define _PCD_GET_MODE_64_PcdLoadModuleAtFixAddressEnable  _gPcd_FixedAtBuild_PcdLoadModuleAtFixAddressEnable
//#define _PCD_SET_MODE_64_PcdLoadModuleAtFixAddressEnable  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdShadowPeimOnS3Boot  0U
#define _PCD_SIZE_PcdShadowPeimOnS3Boot 1
#define _PCD_GET_MODE_SIZE_PcdShadowPeimOnS3Boot  _PCD_SIZE_PcdShadowPeimOnS3Boot 
#define _PCD_VALUE_PcdShadowPeimOnS3Boot  0U
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdShadowPeimOnS3Boot;
#define _PCD_GET_MODE_BOOL_PcdShadowPeimOnS3Boot  _gPcd_FixedAtBuild_PcdShadowPeimOnS3Boot
//#define _PCD_SET_MODE_BOOL_PcdShadowPeimOnS3Boot  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdShadowPeimOnBoot  0U
#define _PCD_SIZE_PcdShadowPeimOnBoot 1
#define _PCD_GET_MODE_SIZE_PcdShadowPeimOnBoot  _PCD_SIZE_PcdShadowPeimOnBoot 
#define _PCD_VALUE_PcdShadowPeimOnBoot  1U
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdShadowPeimOnBoot;
#define _PCD_GET_MODE_BOOL_PcdShadowPeimOnBoot  _gPcd_FixedAtBuild_PcdShadowPeimOnBoot
//#define _PCD_SET_MODE_BOOL_PcdShadowPeimOnBoot  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdInitValueInTempStack  0U
#define _PCD_SIZE_PcdInitValueInTempStack 4
#define _PCD_GET_MODE_SIZE_PcdInitValueInTempStack  _PCD_SIZE_PcdInitValueInTempStack 
#define _PCD_VALUE_PcdInitValueInTempStack  0x5AA55AA5U
extern const  UINT32  _gPcd_FixedAtBuild_PcdInitValueInTempStack;
#define _PCD_GET_MODE_32_PcdInitValueInTempStack  _gPcd_FixedAtBuild_PcdInitValueInTempStack
//#define _PCD_SET_MODE_32_PcdInitValueInTempStack  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMigrateTemporaryRamFirmwareVolumes  0U
#define _PCD_SIZE_PcdMigrateTemporaryRamFirmwareVolumes 1
#define _PCD_GET_MODE_SIZE_PcdMigrateTemporaryRamFirmwareVolumes  _PCD_SIZE_PcdMigrateTemporaryRamFirmwareVolumes 
#define _PCD_VALUE_PcdMigrateTemporaryRamFirmwareVolumes  0U
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdMigrateTemporaryRamFirmwareVolumes;
#define _PCD_GET_MODE_BOOL_PcdMigrateTemporaryRamFirmwareVolumes  _gPcd_FixedAtBuild_PcdMigrateTemporaryRamFirmwareVolumes
//#define _PCD_SET_MODE_BOOL_PcdMigrateTemporaryRamFirmwareVolumes  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdDelayedDispatchMaxDelayUs  0U
#define _PCD_SIZE_PcdDelayedDispatchMaxDelayUs 4
#define _PCD_GET_MODE_SIZE_PcdDelayedDispatchMaxDelayUs  _PCD_SIZE_PcdDelayedDispatchMaxDelayUs 
#define _PCD_VALUE_PcdDelayedDispatchMaxDelayUs  5000000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdDelayedDispatchMaxDelayUs;
#define _PCD_GET_MODE_32_PcdDelayedDispatchMaxDelayUs  _gPcd_FixedAtBuild_PcdDelayedDispatchMaxDelayUs
//#define _PCD_SET_MODE_32_PcdDelayedDispatchMaxDelayUs  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdDelayedDispatchCompletionTimeoutUs  0U
#define _PCD_SIZE_PcdDelayedDispatchCompletionTimeoutUs 4
#define _PCD_GET_MODE_SIZE_PcdDelayedDispatchCompletionTimeoutUs  _PCD_SIZE_PcdDelayedDispatchCompletionTimeoutUs 
#define _PCD_VALUE_PcdDelayedDispatchCompletionTimeoutUs  10000000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdDelayedDispatchCompletionTimeoutUs;
#define _PCD_GET_MODE_32_PcdDelayedDispatchCompletionTimeoutUs  _gPcd_FixedAtBuild_PcdDelayedDispatchCompletionTimeoutUs
//#define _PCD_SET_MODE_32_PcdDelayedDispatchCompletionTimeoutUs  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdDelayedDispatchMaxEntries  0U
#define _PCD_SIZE_PcdDelayedDispatchMaxEntries 4
#define _PCD_GET_MODE_SIZE_PcdDelayedDispatchMaxEntries  _PCD_SIZE_PcdDelayedDispatchMaxEntries 
#define _PCD_VALUE_PcdDelayedDispatchMaxEntries  8U
extern const  UINT32  _gPcd_FixedAtBuild_PcdDelayedDispatchMaxEntries;
#define _PCD_GET_MODE_32_PcdDelayedDispatchMaxEntries  _gPcd_FixedAtBuild_PcdDelayedDispatchMaxEntries
//#define _PCD_SET_MODE_32_PcdDelayedDispatchMaxEntries  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


VOID
EFIAPI
PeiCore (
  IN CONST  EFI_SEC_PEI_HAND_OFF    *SecCoreData,
  IN CONST  EFI_PEI_PPI_DESCRIPTOR  *PpiList,
  IN VOID                           *Context
  );





#ifdef __cplusplus
}
#endif

#endif
