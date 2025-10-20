/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_79C4E72A_730B_F040_8129_95877B3A97A8
#define _AUTOGENH_79C4E72A_730B_F040_8129_95877B3A97A8

#ifdef __cplusplus
extern "C" {
#endif

#include <PiPei.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define STACK_COOKIE_VALUE 0x48068D6B

// Guids
extern EFI_GUID gEmulatorPkgTokenSpaceGuid;

// PPIs
extern EFI_GUID gEmuThunkPpiGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdPeiServicesTablePage  0U
extern const UINT64 _gPcd_FixedAtBuild_PcdPeiServicesTablePage;
#define _PCD_GET_MODE_64_PcdPeiServicesTablePage  _gPcd_FixedAtBuild_PcdPeiServicesTablePage
//#define _PCD_SET_MODE_64_PcdPeiServicesTablePage  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdPeiServicesTablePage 0x1013000000
#define _PCD_SIZE_PcdPeiServicesTablePage 8
#define _PCD_GET_MODE_SIZE_PcdPeiServicesTablePage _PCD_SIZE_PcdPeiServicesTablePage


#ifdef __cplusplus
}
#endif

#endif
