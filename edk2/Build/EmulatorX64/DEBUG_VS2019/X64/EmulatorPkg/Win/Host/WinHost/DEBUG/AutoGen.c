/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.c
  Abstract:       Auto-generated AutoGen.c for building module or library.
**/
#include <Base.h>
#include <Library/DebugLib.h>

GLOBAL_REMOVE_IF_UNREFERENCED GUID gEfiCallerIdGuid = {0x62E8F833, 0x2B0A, 0x4C19, {0xA9, 0x66, 0x63, 0xC1, 0x80, 0x58, 0x8B, 0xE7}};

GLOBAL_REMOVE_IF_UNREFERENCED GUID gEdkiiDscPlatformGuid = {0x05FD064D, 0x1073, 0xE844, {0x93, 0x6C, 0xA0, 0xE1, 0x63, 0x17, 0x10, 0x7D}};

GLOBAL_REMOVE_IF_UNREFERENCED CHAR8 *gEfiCallerBaseName = "WinHost";

// Guids
GLOBAL_REMOVE_IF_UNREFERENCED GUID gEfiFileSystemVolumeLabelInfoIdGuid = { 0xDB47D7D3, 0xFE81, 0x11D3, { 0x9A, 0x35, 0x00, 0x90, 0x27, 0x3F, 0xC1, 0x4D }};
GLOBAL_REMOVE_IF_UNREFERENCED GUID gEfiFileInfoGuid = { 0x09576E92, 0x6D3F, 0x11D2, { 0x8E, 0x39, 0x00, 0xA0, 0xC9, 0x69, 0x72, 0x3B }};
GLOBAL_REMOVE_IF_UNREFERENCED GUID gEfiFileSystemInfoGuid = { 0x09576E93, 0x6D3F, 0x11D2, { 0x8E, 0x39, 0x00, 0xA0, 0xC9, 0x69, 0x72, 0x3B }};
GLOBAL_REMOVE_IF_UNREFERENCED GUID gEfiMdeModulePkgTokenSpaceGuid = { 0xA1AFF049, 0xFDEB, 0x442a, { 0xB3, 0x20, 0x13, 0xAB, 0x4C, 0xB7, 0x2B, 0xBC }};
GLOBAL_REMOVE_IF_UNREFERENCED GUID gEmulatorPkgTokenSpaceGuid = { 0x4F792E68, 0xE8C8, 0x794E, { 0xB1, 0xD8, 0x37, 0x03, 0xF3, 0xF2, 0xD5, 0xA5 } };
GLOBAL_REMOVE_IF_UNREFERENCED GUID gEfiMdePkgTokenSpaceGuid = { 0x914AEBE7, 0x4635, 0x459b, { 0xAA, 0x1C, 0x11, 0xE2, 0x19, 0xB0, 0x3A, 0x10 }};

// Protocols
GLOBAL_REMOVE_IF_UNREFERENCED GUID gEmuIoThunkProtocolGuid = { 0x453368F6, 0x7C85, 0x434A, { 0xA9, 0x8A, 0x72, 0xD1, 0xB7, 0xFF, 0xA9, 0x26 } };
GLOBAL_REMOVE_IF_UNREFERENCED GUID gEmuGraphicsWindowProtocolGuid = { 0x30FD316A, 0x6728, 0x2E41, { 0xA6, 0x90, 0x0D, 0x13, 0x33, 0xD8, 0xCA, 0xC1 } };
GLOBAL_REMOVE_IF_UNREFERENCED GUID gEmuBlockIoProtocolGuid = { 0x6888A4AE, 0xAFCE, 0xE84B, { 0x91, 0x02, 0xF7, 0xB9, 0xDA, 0xE6, 0xA0, 0x30 } };
GLOBAL_REMOVE_IF_UNREFERENCED GUID gEfiSimpleFileSystemProtocolGuid = { 0x964E5B22, 0x6459, 0x11D2, { 0x8E, 0x39, 0x00, 0xA0, 0xC9, 0x69, 0x72, 0x3B }};
GLOBAL_REMOVE_IF_UNREFERENCED GUID gEmuSnpProtocolGuid = { 0xFD5FBE54, 0x8C35, 0xB345, { 0x8A, 0x0F, 0x7A, 0xC8, 0xA5, 0xFD, 0x05, 0x21 } };

// PPIs
GLOBAL_REMOVE_IF_UNREFERENCED GUID gEmuThunkPpiGuid = { 0xE113F896, 0x75CF, 0xF640, { 0x81, 0x7F, 0xC8, 0x5A, 0x79, 0xE8, 0xAE, 0x67 } };
GLOBAL_REMOVE_IF_UNREFERENCED GUID gEfiPeiReset2PpiGuid = { 0x6cc45765, 0xcce4, 0x42fd, {0xbc, 0x56, 0x1, 0x1a, 0xaa, 0xc6, 0xc9, 0xa8 } };

// Definition of SkuId Array
GLOBAL_REMOVE_IF_UNREFERENCED UINT64 _gPcd_SkuId_Array[] = {0x0};

// Definition of PCDs used in this module
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdInitValueInTempStack = _PCD_VALUE_PcdInitValueInTempStack;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdPersistentMemorySize = _PCD_VALUE_PcdPersistentMemorySize;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdEmuBootMode = _PCD_VALUE_PcdEmuBootMode;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT16 _gPcd_FixedAtBuild_PcdEmuFirmwareVolume[21] = {46, 46, 47, 70, 86, 47, 70, 86, 95, 82, 69, 67, 79, 86, 69, 82, 89, 46, 102, 100, 0 };
GLOBAL_REMOVE_IF_UNREFERENCED const UINTN _gPcd_FixedAtBuild_Size_PcdEmuFirmwareVolume = 42;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT16 _gPcd_FixedAtBuild_PcdEmuMemorySize[6] = {54, 52, 33, 54, 52, 0 };
GLOBAL_REMOVE_IF_UNREFERENCED const UINTN _gPcd_FixedAtBuild_Size_PcdEmuMemorySize = 12;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT64 _gPcd_FixedAtBuild_PcdEmuFdBaseAddress = _PCD_VALUE_PcdEmuFdBaseAddress;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT16 _gPcd_FixedAtBuild_PcdEmuVirtualDisk[12] = {100, 105, 115, 107, 46, 100, 109, 103, 58, 70, 87, 0 };
GLOBAL_REMOVE_IF_UNREFERENCED const UINTN _gPcd_FixedAtBuild_Size_PcdEmuVirtualDisk = 24;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT16 _gPcd_FixedAtBuild_PcdEmuGop[11] = {71, 79, 80, 32, 87, 105, 110, 100, 111, 119, 0 };
GLOBAL_REMOVE_IF_UNREFERENCED const UINTN _gPcd_FixedAtBuild_Size_PcdEmuGop = 22;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT16 _gPcd_FixedAtBuild_PcdEmuFileSystem[2] = {46, 0 };
GLOBAL_REMOVE_IF_UNREFERENCED const UINTN _gPcd_FixedAtBuild_Size_PcdEmuFileSystem = 4;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT64 _gPcd_FixedAtBuild_PcdPeiServicesTablePage = _PCD_VALUE_PcdPeiServicesTablePage;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT16 _gPcd_FixedAtBuild_PcdEmuNetworkInterface[4] = {101, 110, 48, 0 };
GLOBAL_REMOVE_IF_UNREFERENCED const UINTN _gPcd_FixedAtBuild_Size_PcdEmuNetworkInterface = 8;

// Definition of PCDs used in libraries

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



VOID
EFIAPI
ProcessLibraryConstructorList (
  VOID
  )
{

}



VOID
EFIAPI
ProcessLibraryDestructorList (
  VOID
  )
{

}
