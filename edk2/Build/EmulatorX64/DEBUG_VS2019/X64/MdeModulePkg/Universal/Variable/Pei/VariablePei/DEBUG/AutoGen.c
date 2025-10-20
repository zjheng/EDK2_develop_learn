/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.c
  Abstract:       Auto-generated AutoGen.c for building module or library.
**/
#include <PiPei.h>
#include <Library/DebugLib.h>
#include <Library/PeimEntryPoint.h>

GLOBAL_REMOVE_IF_UNREFERENCED GUID gEfiCallerIdGuid = {0x34C8C28F, 0xB61C, 0x45a2, {0x8F, 0x2E, 0x89, 0xE4, 0x6B, 0xEC, 0xC6, 0x3B}};

GLOBAL_REMOVE_IF_UNREFERENCED GUID gEdkiiDscPlatformGuid = {0x05FD064D, 0x1073, 0xE844, {0x93, 0x6C, 0xA0, 0xE1, 0x63, 0x17, 0x10, 0x7D}};

GLOBAL_REMOVE_IF_UNREFERENCED CHAR8 *gEfiCallerBaseName = "PeiVariable";

// Guids
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiAuthenticatedVariableGuid = { 0xaaf32c78, 0x947b, 0x439a, { 0xa1, 0x80, 0x2e, 0x14, 0x4e, 0xc3, 0x77, 0x92 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiVariableGuid = { 0xddcf3616, 0x3275, 0x4164, { 0x98, 0xb6, 0xfe, 0x85, 0x70, 0x7f, 0xfe, 0x7d }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiVariableIndexTableGuid = { 0x8cfdb8c8, 0xd6b2, 0x40f3, { 0x8e, 0x97, 0x02, 0x30, 0x7c, 0xc9, 0x8b, 0x7c }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiSystemNvDataFvGuid = { 0xFFF12B8D, 0x7696, 0x4C8B, { 0xA9, 0x85, 0x27, 0x47, 0x07, 0x5B, 0x4F, 0x50 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEdkiiFaultTolerantWriteGuid = { 0x1d3e9cb8, 0x43af, 0x490b, { 0x83,  0xa, 0x35, 0x16, 0xaa, 0x53, 0x20, 0x47 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEdkiiVariableRuntimeCacheInfoHobGuid = { 0x0f472f7d, 0x6713, 0x4915, { 0x96, 0x14, 0x5d, 0xda, 0x28, 0x40, 0x10, 0x56 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiMdeModulePkgTokenSpaceGuid = { 0xA1AFF049, 0xFDEB, 0x442a, { 0xB3, 0x20, 0x13, 0xAB, 0x4C, 0xB7, 0x2B, 0xBC }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiMdePkgTokenSpaceGuid = { 0x914AEBE7, 0x4635, 0x459b, { 0xAA, 0x1C, 0x11, 0xE2, 0x19, 0xB0, 0x3A, 0x10 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiStatusCodeSpecificDataGuid = { 0x335984BD, 0xE805, 0x409A, { 0xB8, 0xF8, 0xD2, 0x7E, 0xCE, 0x5F, 0xF7, 0xA6 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiStatusCodeDataTypeDebugGuid = { 0x9A4E9246, 0xD553, 0x11D5, { 0x87, 0xE2, 0x00, 0x06, 0x29, 0x45, 0xC3, 0xB9 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiFirmwareFileSystem2Guid = { 0x8c8ce578, 0x8a3d, 0x4f1c, { 0x99, 0x35, 0x89, 0x61, 0x85, 0xc3, 0x2d, 0xd3 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEmulatorPkgTokenSpaceGuid = { 0x4F792E68, 0xE8C8, 0x794E, { 0xB1, 0xD8, 0x37, 0x03, 0xF3, 0xF2, 0xD5, 0xA5 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiHobMemoryAllocStackGuid = { 0x4ED4BF27, 0x4092, 0x42E9, { 0x80, 0x7D, 0x52, 0x7B, 0x1D, 0x00, 0xC9, 0xBD }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiHobMemoryAllocBspStoreGuid = { 0x564B33CD, 0xC92A, 0x4593, { 0x90, 0xBF, 0x24, 0x73, 0xE4, 0x3C, 0x63, 0x22 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiHobMemoryAllocModuleGuid = { 0xF8E21975, 0x0899, 0x4F58, { 0xA4, 0xBE, 0x55, 0x25, 0xA9, 0xC6, 0xD7, 0x7A }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gVariableFlashInfoHobGuid = { 0x5d11c653, 0x8154, 0x4ac3, { 0xa8, 0xc2, 0xfb, 0xa2, 0x89, 0x20, 0xfc, 0x90 }};

// PPIs
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPeiReadOnlyVariable2PpiGuid = { 0x2ab86ef5, 0xecb5, 0x4134, { 0xb5, 0x56, 0x38, 0x54, 0xca, 0x1f, 0xe1, 0xb4 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPeiMemoryDiscoveredPpiGuid = {0xf894643d, 0xc449, 0x42d1, {0x8e, 0xa8, 0x85, 0xbd, 0xd8, 0xc6, 0x5b, 0xde } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPeiFirmwareVolumeInfoPpiGuid = { 0x49edb1c1, 0xbf21, 0x4761, { 0xbb, 0x12, 0xeb, 0x0, 0x31, 0xaa, 0xbb, 0x39 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPeiFirmwareVolumeInfo2PpiGuid = { 0xea7ca24b, 0xded5, 0x4dad, { 0xa3, 0x89, 0xbf, 0x82, 0x7e, 0x8f, 0x9b, 0x38 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gPcdPpiGuid = { 0x6e81c58, 0x4ad7, 0x44bc, { 0x83, 0x90, 0xf1, 0x2, 0x65, 0xf7, 0x24, 0x80 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPeiPcdPpiGuid = { 0x1f34d25, 0x4de2, 0x23ad, { 0x3f, 0xf3, 0x36, 0x35, 0x3f, 0xf3, 0x23, 0xf1 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gGetPcdInfoPpiGuid = { 0x4d8b155b, 0xc059, 0x4c8f, { 0x89, 0x26,  0x6, 0xfd, 0x43, 0x31, 0xdb, 0x8a } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiGetPcdInfoPpiGuid = { 0xa60c6b59, 0xe459, 0x425d, { 0x9c, 0x69,  0xb, 0xcc, 0x9c, 0xb2, 0x7d, 0x81 } };

// Definition of SkuId Array
GLOBAL_REMOVE_IF_UNREFERENCED UINT64 _gPcd_SkuId_Array[] = {0x0};

// Definition of PCDs used in this module
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdEmuVariableNvModeEnable = _PCD_VALUE_PcdEmuVariableNvModeEnable;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdVariableStoreSize = _PCD_VALUE_PcdVariableStoreSize;
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdEnableVariableRuntimeCache = _PCD_VALUE_PcdEnableVariableRuntimeCache;

// Definition of PCDs used in libraries

#define _PCD_TOKEN_PcdDebugPrintErrorLevel  0U
#define _PCD_SIZE_PcdDebugPrintErrorLevel 4
#define _PCD_GET_MODE_SIZE_PcdDebugPrintErrorLevel  _PCD_SIZE_PcdDebugPrintErrorLevel 
#define _PCD_VALUE_PcdDebugPrintErrorLevel  0x80000040U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdDebugPrintErrorLevel = _PCD_VALUE_PcdDebugPrintErrorLevel;
extern const  UINT32  _gPcd_FixedAtBuild_PcdDebugPrintErrorLevel;
#define _PCD_GET_MODE_32_PcdDebugPrintErrorLevel  _gPcd_FixedAtBuild_PcdDebugPrintErrorLevel
//#define _PCD_SET_MODE_32_PcdDebugPrintErrorLevel  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdReportStatusCodePropertyMask  0U
#define _PCD_SIZE_PcdReportStatusCodePropertyMask 1
#define _PCD_GET_MODE_SIZE_PcdReportStatusCodePropertyMask  _PCD_SIZE_PcdReportStatusCodePropertyMask 
#define _PCD_VALUE_PcdReportStatusCodePropertyMask  0x0fU
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdReportStatusCodePropertyMask = _PCD_VALUE_PcdReportStatusCodePropertyMask;
extern const  UINT8  _gPcd_FixedAtBuild_PcdReportStatusCodePropertyMask;
#define _PCD_GET_MODE_8_PcdReportStatusCodePropertyMask  _gPcd_FixedAtBuild_PcdReportStatusCodePropertyMask
//#define _PCD_SET_MODE_8_PcdReportStatusCodePropertyMask  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdVerifyNodeInList  0U
#define _PCD_SIZE_PcdVerifyNodeInList 1
#define _PCD_GET_MODE_SIZE_PcdVerifyNodeInList  _PCD_SIZE_PcdVerifyNodeInList 
#define _PCD_VALUE_PcdVerifyNodeInList  ((BOOLEAN)0U)
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdVerifyNodeInList = _PCD_VALUE_PcdVerifyNodeInList;
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdVerifyNodeInList;
#define _PCD_GET_MODE_BOOL_PcdVerifyNodeInList  _gPcd_FixedAtBuild_PcdVerifyNodeInList
//#define _PCD_SET_MODE_BOOL_PcdVerifyNodeInList  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMaximumLinkedListLength  0U
#define _PCD_SIZE_PcdMaximumLinkedListLength 4
#define _PCD_GET_MODE_SIZE_PcdMaximumLinkedListLength  _PCD_SIZE_PcdMaximumLinkedListLength 
#define _PCD_VALUE_PcdMaximumLinkedListLength  1000000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMaximumLinkedListLength = _PCD_VALUE_PcdMaximumLinkedListLength;
extern const  UINT32  _gPcd_FixedAtBuild_PcdMaximumLinkedListLength;
#define _PCD_GET_MODE_32_PcdMaximumLinkedListLength  _gPcd_FixedAtBuild_PcdMaximumLinkedListLength
//#define _PCD_SET_MODE_32_PcdMaximumLinkedListLength  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMaximumAsciiStringLength  0U
#define _PCD_SIZE_PcdMaximumAsciiStringLength 4
#define _PCD_GET_MODE_SIZE_PcdMaximumAsciiStringLength  _PCD_SIZE_PcdMaximumAsciiStringLength 
#define _PCD_VALUE_PcdMaximumAsciiStringLength  1000000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMaximumAsciiStringLength = _PCD_VALUE_PcdMaximumAsciiStringLength;
extern const  UINT32  _gPcd_FixedAtBuild_PcdMaximumAsciiStringLength;
#define _PCD_GET_MODE_32_PcdMaximumAsciiStringLength  _gPcd_FixedAtBuild_PcdMaximumAsciiStringLength
//#define _PCD_SET_MODE_32_PcdMaximumAsciiStringLength  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMaximumUnicodeStringLength  0U
#define _PCD_SIZE_PcdMaximumUnicodeStringLength 4
#define _PCD_GET_MODE_SIZE_PcdMaximumUnicodeStringLength  _PCD_SIZE_PcdMaximumUnicodeStringLength 
#define _PCD_VALUE_PcdMaximumUnicodeStringLength  1000000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMaximumUnicodeStringLength = _PCD_VALUE_PcdMaximumUnicodeStringLength;
extern const  UINT32  _gPcd_FixedAtBuild_PcdMaximumUnicodeStringLength;
#define _PCD_GET_MODE_32_PcdMaximumUnicodeStringLength  _gPcd_FixedAtBuild_PcdMaximumUnicodeStringLength
//#define _PCD_SET_MODE_32_PcdMaximumUnicodeStringLength  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdControlFlowEnforcementPropertyMask  0U
#define _PCD_SIZE_PcdControlFlowEnforcementPropertyMask 4
#define _PCD_GET_MODE_SIZE_PcdControlFlowEnforcementPropertyMask  _PCD_SIZE_PcdControlFlowEnforcementPropertyMask 
#define _PCD_VALUE_PcdControlFlowEnforcementPropertyMask  0x0U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdControlFlowEnforcementPropertyMask = _PCD_VALUE_PcdControlFlowEnforcementPropertyMask;
extern const  UINT32  _gPcd_FixedAtBuild_PcdControlFlowEnforcementPropertyMask;
#define _PCD_GET_MODE_32_PcdControlFlowEnforcementPropertyMask  _gPcd_FixedAtBuild_PcdControlFlowEnforcementPropertyMask
//#define _PCD_SET_MODE_32_PcdControlFlowEnforcementPropertyMask  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSpeculationBarrierType  0U
#define _PCD_SIZE_PcdSpeculationBarrierType 1
#define _PCD_GET_MODE_SIZE_PcdSpeculationBarrierType  _PCD_SIZE_PcdSpeculationBarrierType 
#define _PCD_VALUE_PcdSpeculationBarrierType  0x01U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdSpeculationBarrierType = _PCD_VALUE_PcdSpeculationBarrierType;
extern const  UINT8  _gPcd_FixedAtBuild_PcdSpeculationBarrierType;
#define _PCD_GET_MODE_8_PcdSpeculationBarrierType  _gPcd_FixedAtBuild_PcdSpeculationBarrierType
//#define _PCD_SET_MODE_8_PcdSpeculationBarrierType  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdPeiServicesTablePage  0U
#define _PCD_SIZE_PcdPeiServicesTablePage 8
#define _PCD_GET_MODE_SIZE_PcdPeiServicesTablePage  _PCD_SIZE_PcdPeiServicesTablePage 
#define _PCD_VALUE_PcdPeiServicesTablePage  0x1013000000ULL
GLOBAL_REMOVE_IF_UNREFERENCED const UINT64 _gPcd_FixedAtBuild_PcdPeiServicesTablePage = _PCD_VALUE_PcdPeiServicesTablePage;
extern const  UINT64  _gPcd_FixedAtBuild_PcdPeiServicesTablePage;
#define _PCD_GET_MODE_64_PcdPeiServicesTablePage  _gPcd_FixedAtBuild_PcdPeiServicesTablePage
//#define _PCD_SET_MODE_64_PcdPeiServicesTablePage  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdDebugClearMemoryValue  0U
#define _PCD_SIZE_PcdDebugClearMemoryValue 1
#define _PCD_GET_MODE_SIZE_PcdDebugClearMemoryValue  _PCD_SIZE_PcdDebugClearMemoryValue 
#define _PCD_VALUE_PcdDebugClearMemoryValue  0xAFU
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdDebugClearMemoryValue = _PCD_VALUE_PcdDebugClearMemoryValue;
extern const  UINT8  _gPcd_FixedAtBuild_PcdDebugClearMemoryValue;
#define _PCD_GET_MODE_8_PcdDebugClearMemoryValue  _gPcd_FixedAtBuild_PcdDebugClearMemoryValue
//#define _PCD_SET_MODE_8_PcdDebugClearMemoryValue  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdDebugPropertyMask  0U
#define _PCD_SIZE_PcdDebugPropertyMask 1
#define _PCD_GET_MODE_SIZE_PcdDebugPropertyMask  _PCD_SIZE_PcdDebugPropertyMask 
#define _PCD_VALUE_PcdDebugPropertyMask  0x1fU
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdDebugPropertyMask = _PCD_VALUE_PcdDebugPropertyMask;
extern const  UINT8  _gPcd_FixedAtBuild_PcdDebugPropertyMask;
#define _PCD_GET_MODE_8_PcdDebugPropertyMask  _gPcd_FixedAtBuild_PcdDebugPropertyMask
//#define _PCD_SET_MODE_8_PcdDebugPropertyMask  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFixedDebugPrintErrorLevel  0U
#define _PCD_SIZE_PcdFixedDebugPrintErrorLevel 4
#define _PCD_GET_MODE_SIZE_PcdFixedDebugPrintErrorLevel  _PCD_SIZE_PcdFixedDebugPrintErrorLevel 
#define _PCD_VALUE_PcdFixedDebugPrintErrorLevel  0xFFFFFFFFU
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdFixedDebugPrintErrorLevel = _PCD_VALUE_PcdFixedDebugPrintErrorLevel;
extern const  UINT32  _gPcd_FixedAtBuild_PcdFixedDebugPrintErrorLevel;
#define _PCD_GET_MODE_32_PcdFixedDebugPrintErrorLevel  _gPcd_FixedAtBuild_PcdFixedDebugPrintErrorLevel
//#define _PCD_SET_MODE_32_PcdFixedDebugPrintErrorLevel  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashNvStorageVariableBase  0U
#define _PCD_SIZE_PcdFlashNvStorageVariableBase 4
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageVariableBase  _PCD_SIZE_PcdFlashNvStorageVariableBase 
#define _PCD_VALUE_PcdFlashNvStorageVariableBase  0x0U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdFlashNvStorageVariableBase = _PCD_VALUE_PcdFlashNvStorageVariableBase;
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashNvStorageVariableBase;
#define _PCD_GET_MODE_32_PcdFlashNvStorageVariableBase  _gPcd_FixedAtBuild_PcdFlashNvStorageVariableBase
//#define _PCD_SET_MODE_32_PcdFlashNvStorageVariableBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashNvStorageVariableBase64  3U
#define _PCD_GET_MODE_64_PcdFlashNvStorageVariableBase64  LibPcdGet64(_PCD_TOKEN_PcdFlashNvStorageVariableBase64)
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageVariableBase64  LibPcdGetSize(_PCD_TOKEN_PcdFlashNvStorageVariableBase64)
#define _PCD_SET_MODE_64_PcdFlashNvStorageVariableBase64(Value)  LibPcdSet64(_PCD_TOKEN_PcdFlashNvStorageVariableBase64, (Value))
#define _PCD_SET_MODE_64_S_PcdFlashNvStorageVariableBase64(Value)  LibPcdSet64S(_PCD_TOKEN_PcdFlashNvStorageVariableBase64, (Value))

#define _PCD_TOKEN_PcdFlashNvStorageVariableSize  0U
#define _PCD_SIZE_PcdFlashNvStorageVariableSize 4
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageVariableSize  _PCD_SIZE_PcdFlashNvStorageVariableSize 
#define _PCD_VALUE_PcdFlashNvStorageVariableSize  0x0000C000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdFlashNvStorageVariableSize = _PCD_VALUE_PcdFlashNvStorageVariableSize;
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashNvStorageVariableSize;
#define _PCD_GET_MODE_32_PcdFlashNvStorageVariableSize  _gPcd_FixedAtBuild_PcdFlashNvStorageVariableSize
//#define _PCD_SET_MODE_32_PcdFlashNvStorageVariableSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashNvStorageFtwSpareBase  0U
#define _PCD_SIZE_PcdFlashNvStorageFtwSpareBase 4
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageFtwSpareBase  _PCD_SIZE_PcdFlashNvStorageFtwSpareBase 
#define _PCD_VALUE_PcdFlashNvStorageFtwSpareBase  0x0U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdFlashNvStorageFtwSpareBase = _PCD_VALUE_PcdFlashNvStorageFtwSpareBase;
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwSpareBase;
#define _PCD_GET_MODE_32_PcdFlashNvStorageFtwSpareBase  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwSpareBase
//#define _PCD_SET_MODE_32_PcdFlashNvStorageFtwSpareBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashNvStorageFtwSpareBase64  1U
#define _PCD_GET_MODE_64_PcdFlashNvStorageFtwSpareBase64  LibPcdGet64(_PCD_TOKEN_PcdFlashNvStorageFtwSpareBase64)
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageFtwSpareBase64  LibPcdGetSize(_PCD_TOKEN_PcdFlashNvStorageFtwSpareBase64)
#define _PCD_SET_MODE_64_PcdFlashNvStorageFtwSpareBase64(Value)  LibPcdSet64(_PCD_TOKEN_PcdFlashNvStorageFtwSpareBase64, (Value))
#define _PCD_SET_MODE_64_S_PcdFlashNvStorageFtwSpareBase64(Value)  LibPcdSet64S(_PCD_TOKEN_PcdFlashNvStorageFtwSpareBase64, (Value))

#define _PCD_TOKEN_PcdFlashNvStorageFtwSpareSize  0U
#define _PCD_SIZE_PcdFlashNvStorageFtwSpareSize 4
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageFtwSpareSize  _PCD_SIZE_PcdFlashNvStorageFtwSpareSize 
#define _PCD_VALUE_PcdFlashNvStorageFtwSpareSize  0x00010000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdFlashNvStorageFtwSpareSize = _PCD_VALUE_PcdFlashNvStorageFtwSpareSize;
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwSpareSize;
#define _PCD_GET_MODE_32_PcdFlashNvStorageFtwSpareSize  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwSpareSize
//#define _PCD_SET_MODE_32_PcdFlashNvStorageFtwSpareSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashNvStorageFtwWorkingBase  0U
#define _PCD_SIZE_PcdFlashNvStorageFtwWorkingBase 4
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageFtwWorkingBase  _PCD_SIZE_PcdFlashNvStorageFtwWorkingBase 
#define _PCD_VALUE_PcdFlashNvStorageFtwWorkingBase  0x0U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdFlashNvStorageFtwWorkingBase = _PCD_VALUE_PcdFlashNvStorageFtwWorkingBase;
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwWorkingBase;
#define _PCD_GET_MODE_32_PcdFlashNvStorageFtwWorkingBase  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwWorkingBase
//#define _PCD_SET_MODE_32_PcdFlashNvStorageFtwWorkingBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashNvStorageFtwWorkingBase64  2U
#define _PCD_GET_MODE_64_PcdFlashNvStorageFtwWorkingBase64  LibPcdGet64(_PCD_TOKEN_PcdFlashNvStorageFtwWorkingBase64)
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageFtwWorkingBase64  LibPcdGetSize(_PCD_TOKEN_PcdFlashNvStorageFtwWorkingBase64)
#define _PCD_SET_MODE_64_PcdFlashNvStorageFtwWorkingBase64(Value)  LibPcdSet64(_PCD_TOKEN_PcdFlashNvStorageFtwWorkingBase64, (Value))
#define _PCD_SET_MODE_64_S_PcdFlashNvStorageFtwWorkingBase64(Value)  LibPcdSet64S(_PCD_TOKEN_PcdFlashNvStorageFtwWorkingBase64, (Value))

#define _PCD_TOKEN_PcdFlashNvStorageFtwWorkingSize  0U
#define _PCD_SIZE_PcdFlashNvStorageFtwWorkingSize 4
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageFtwWorkingSize  _PCD_SIZE_PcdFlashNvStorageFtwWorkingSize 
#define _PCD_VALUE_PcdFlashNvStorageFtwWorkingSize  0x00002000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdFlashNvStorageFtwWorkingSize = _PCD_VALUE_PcdFlashNvStorageFtwWorkingSize;
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwWorkingSize;
#define _PCD_GET_MODE_32_PcdFlashNvStorageFtwWorkingSize  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwWorkingSize
//#define _PCD_SET_MODE_32_PcdFlashNvStorageFtwWorkingSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD



VOID
EFIAPI
ProcessLibraryConstructorList (
  IN       EFI_PEI_FILE_HANDLE       FileHandle,
  IN CONST EFI_PEI_SERVICES          **PeiServices
  )
{

}



VOID
EFIAPI
ProcessLibraryDestructorList (
  IN       EFI_PEI_FILE_HANDLE       FileHandle,
  IN CONST EFI_PEI_SERVICES          **PeiServices
  )
{

}

GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPeimRevision = 0x00000000U;

EFI_STATUS
EFIAPI
ProcessModuleEntryPointList (
  IN       EFI_PEI_FILE_HANDLE  FileHandle,
  IN CONST EFI_PEI_SERVICES     **PeiServices
  )

{
  return PeimInitializeVariableServices (FileHandle, PeiServices);
}


GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gDriverUnloadImageCount = 0U;

EFI_STATUS
EFIAPI
ProcessModuleUnloadList (
  IN EFI_HANDLE        ImageHandle
  )
{
  return EFI_SUCCESS;
}
