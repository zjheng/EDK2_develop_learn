/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_BCAF98C9_22B0_3B4F_9CBD_C8A6B4DBCEE9
#define _AUTOGENH_BCAF98C9_22B0_3B4F_9CBD_C8A6B4DBCEE9

#ifdef __cplusplus
extern "C" {
#endif

#include <PiPei.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0xBCAF98C9, 0x22B0, 0x3B4F, {0x9C, 0xBD, 0xC8, 0xA6, 0xB4, 0xDB, 0xCE, 0xE9}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x05FD064D, 0x1073, 0xE844, {0x93, 0x6C, 0xA0, 0xE1, 0x63, 0x17, 0x10, 0x7D}}
#define STACK_COOKIE_VALUE 0xA68D1E11

// Guids
extern EFI_GUID gEmulatorPkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;

// PPIs
extern EFI_GUID gEfiTemporaryRamSupportPpiGuid;
extern EFI_GUID gEmuThunkPpiGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdPeiServicesTablePage  0U
#define _PCD_SIZE_PcdPeiServicesTablePage 8
#define _PCD_GET_MODE_SIZE_PcdPeiServicesTablePage  _PCD_SIZE_PcdPeiServicesTablePage 
#define _PCD_VALUE_PcdPeiServicesTablePage  0x1013000000ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdPeiServicesTablePage;
#define _PCD_GET_MODE_64_PcdPeiServicesTablePage  _gPcd_FixedAtBuild_PcdPeiServicesTablePage
//#define _PCD_SET_MODE_64_PcdPeiServicesTablePage  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c

// ProcessLibraryConstructorList() declared here because SEC has no standard entry point.
VOID
EFIAPI
ProcessLibraryConstructorList (
  VOID
  );


#ifdef __cplusplus
}
#endif

#endif
