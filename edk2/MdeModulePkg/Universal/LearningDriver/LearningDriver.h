/**
 *
 * @file I2CToEcTimeStamp.c
 *
 *
 *
 * Copyright (c) 2022-2023, Qualcomm Technologies, Inc. All rights reserved.
 * Confidential and Proprietary - Qualcomm Technologies, Inc.
 *
 */

/*=============================================================================
                              EDIT HISTORY


 when         who      what, where, why
 --------     ---      ----------------------------------------------------------

=============================================================================*/

#include <Uefi.h>
#include <Library/UefiLib.h>
#include <Library/DebugLib.h>
#include <Library/UefiBootServicesTableLib.h>
#include <Library/UefiRuntimeServicesTableLib.h>
#include <Library/CustomizedDisplayLib.h>
#include <Protocol/SimpleTextOut.h>
#include <Protocol/GraphicsOutput.h>
#include <Protocol/FormBrowser2.h>