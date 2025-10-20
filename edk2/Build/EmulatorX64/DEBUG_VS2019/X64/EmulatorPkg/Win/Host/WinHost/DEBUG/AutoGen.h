/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_62E8F833_2B0A_4C19_A966_63C180588BE7
#define _AUTOGENH_62E8F833_2B0A_4C19_A966_63C180588BE7

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x62E8F833, 0x2B0A, 0x4C19, {0xA9, 0x66, 0x63, 0xC1, 0x80, 0x58, 0x8B, 0xE7}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x05FD064D, 0x1073, 0xE844, {0x93, 0x6C, 0xA0, 0xE1, 0x63, 0x17, 0x10, 0x7D}}
#define STACK_COOKIE_VALUE 0x7B7276CA1B9CC00BULL

// Guids
extern GUID gEfiFileSystemVolumeLabelInfoIdGuid;
extern GUID gEfiFileInfoGuid;
extern GUID gEfiFileSystemInfoGuid;
extern GUID gEfiMdeModulePkgTokenSpaceGuid;
extern GUID gEmulatorPkgTokenSpaceGuid;
extern GUID gEfiMdePkgTokenSpaceGuid;

// Protocols
extern GUID gEmuIoThunkProtocolGuid;
extern GUID gEmuGraphicsWindowProtocolGuid;
extern GUID gEmuBlockIoProtocolGuid;
extern GUID gEfiSimpleFileSystemProtocolGuid;
extern GUID gEmuSnpProtocolGuid;

// PPIs
extern GUID gEmuThunkPpiGuid;
extern GUID gEfiPeiReset2PpiGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdInitValueInTempStack  0U
#define _PCD_SIZE_PcdInitValueInTempStack 4
#define _PCD_GET_MODE_SIZE_PcdInitValueInTempStack  _PCD_SIZE_PcdInitValueInTempStack 
#define _PCD_VALUE_PcdInitValueInTempStack  0x5AA55AA5U
extern const  UINT32  _gPcd_FixedAtBuild_PcdInitValueInTempStack;
#define _PCD_GET_MODE_32_PcdInitValueInTempStack  _gPcd_FixedAtBuild_PcdInitValueInTempStack
//#define _PCD_SET_MODE_32_PcdInitValueInTempStack  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdPersistentMemorySize  0U
#define _PCD_SIZE_PcdPersistentMemorySize 4
#define _PCD_GET_MODE_SIZE_PcdPersistentMemorySize  _PCD_SIZE_PcdPersistentMemorySize 
#define _PCD_VALUE_PcdPersistentMemorySize  0x4000000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdPersistentMemorySize;
#define _PCD_GET_MODE_32_PcdPersistentMemorySize  _gPcd_FixedAtBuild_PcdPersistentMemorySize
//#define _PCD_SET_MODE_32_PcdPersistentMemorySize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdEmuBootMode  0U
#define _PCD_SIZE_PcdEmuBootMode 4
#define _PCD_GET_MODE_SIZE_PcdEmuBootMode  _PCD_SIZE_PcdEmuBootMode 
#define _PCD_VALUE_PcdEmuBootMode  0U
extern const  UINT32  _gPcd_FixedAtBuild_PcdEmuBootMode;
#define _PCD_GET_MODE_32_PcdEmuBootMode  _gPcd_FixedAtBuild_PcdEmuBootMode
//#define _PCD_SET_MODE_32_PcdEmuBootMode  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdEmuFirmwareVolume  0U
#define _PCD_VALUE_PcdEmuFirmwareVolume  _gPcd_FixedAtBuild_PcdEmuFirmwareVolume
extern const UINT16 _gPcd_FixedAtBuild_PcdEmuFirmwareVolume[21];
#define _PCD_GET_MODE_PTR_PcdEmuFirmwareVolume  _gPcd_FixedAtBuild_PcdEmuFirmwareVolume
#define _PCD_SIZE_PcdEmuFirmwareVolume 42
#define _PCD_GET_MODE_SIZE_PcdEmuFirmwareVolume  _PCD_SIZE_PcdEmuFirmwareVolume 
//#define _PCD_SET_MODE_PTR_PcdEmuFirmwareVolume  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdEmuMemorySize  0U
#define _PCD_VALUE_PcdEmuMemorySize  _gPcd_FixedAtBuild_PcdEmuMemorySize
extern const UINT16 _gPcd_FixedAtBuild_PcdEmuMemorySize[6];
#define _PCD_GET_MODE_PTR_PcdEmuMemorySize  _gPcd_FixedAtBuild_PcdEmuMemorySize
#define _PCD_SIZE_PcdEmuMemorySize 12
#define _PCD_GET_MODE_SIZE_PcdEmuMemorySize  _PCD_SIZE_PcdEmuMemorySize 
//#define _PCD_SET_MODE_PTR_PcdEmuMemorySize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdEmuFdBaseAddress  0U
#define _PCD_SIZE_PcdEmuFdBaseAddress 8
#define _PCD_GET_MODE_SIZE_PcdEmuFdBaseAddress  _PCD_SIZE_PcdEmuFdBaseAddress 
#define _PCD_VALUE_PcdEmuFdBaseAddress  0x102000000ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdEmuFdBaseAddress;
#define _PCD_GET_MODE_64_PcdEmuFdBaseAddress  _gPcd_FixedAtBuild_PcdEmuFdBaseAddress
//#define _PCD_SET_MODE_64_PcdEmuFdBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdEmuVirtualDisk  0U
#define _PCD_VALUE_PcdEmuVirtualDisk  _gPcd_FixedAtBuild_PcdEmuVirtualDisk
extern const UINT16 _gPcd_FixedAtBuild_PcdEmuVirtualDisk[12];
#define _PCD_GET_MODE_PTR_PcdEmuVirtualDisk  _gPcd_FixedAtBuild_PcdEmuVirtualDisk
#define _PCD_SIZE_PcdEmuVirtualDisk 24
#define _PCD_GET_MODE_SIZE_PcdEmuVirtualDisk  _PCD_SIZE_PcdEmuVirtualDisk 
//#define _PCD_SET_MODE_PTR_PcdEmuVirtualDisk  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdEmuGop  0U
#define _PCD_VALUE_PcdEmuGop  _gPcd_FixedAtBuild_PcdEmuGop
extern const UINT16 _gPcd_FixedAtBuild_PcdEmuGop[11];
#define _PCD_GET_MODE_PTR_PcdEmuGop  _gPcd_FixedAtBuild_PcdEmuGop
#define _PCD_SIZE_PcdEmuGop 22
#define _PCD_GET_MODE_SIZE_PcdEmuGop  _PCD_SIZE_PcdEmuGop 
//#define _PCD_SET_MODE_PTR_PcdEmuGop  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdEmuFileSystem  0U
#define _PCD_VALUE_PcdEmuFileSystem  _gPcd_FixedAtBuild_PcdEmuFileSystem
extern const UINT16 _gPcd_FixedAtBuild_PcdEmuFileSystem[2];
#define _PCD_GET_MODE_PTR_PcdEmuFileSystem  _gPcd_FixedAtBuild_PcdEmuFileSystem
#define _PCD_SIZE_PcdEmuFileSystem 4
#define _PCD_GET_MODE_SIZE_PcdEmuFileSystem  _PCD_SIZE_PcdEmuFileSystem 
//#define _PCD_SET_MODE_PTR_PcdEmuFileSystem  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdPeiServicesTablePage  0U
#define _PCD_SIZE_PcdPeiServicesTablePage 8
#define _PCD_GET_MODE_SIZE_PcdPeiServicesTablePage  _PCD_SIZE_PcdPeiServicesTablePage 
#define _PCD_VALUE_PcdPeiServicesTablePage  0x1013000000ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdPeiServicesTablePage;
#define _PCD_GET_MODE_64_PcdPeiServicesTablePage  _gPcd_FixedAtBuild_PcdPeiServicesTablePage
//#define _PCD_SET_MODE_64_PcdPeiServicesTablePage  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdEmuNetworkInterface  0U
#define _PCD_VALUE_PcdEmuNetworkInterface  _gPcd_FixedAtBuild_PcdEmuNetworkInterface
extern const UINT16 _gPcd_FixedAtBuild_PcdEmuNetworkInterface[4];
#define _PCD_GET_MODE_PTR_PcdEmuNetworkInterface  _gPcd_FixedAtBuild_PcdEmuNetworkInterface
#define _PCD_SIZE_PcdEmuNetworkInterface 8
#define _PCD_GET_MODE_SIZE_PcdEmuNetworkInterface  _PCD_SIZE_PcdEmuNetworkInterface 
//#define _PCD_SET_MODE_PTR_PcdEmuNetworkInterface  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


#ifdef __cplusplus
}
#endif

#endif
