/*****************************************************************************
* Copyright 2015 Nexteer Automotive, All Rights Reserved.
* Nexteer Confidential
*
* Module File Name  : gmheader.c
* Module Description: GM Header
* Product           : Gen II Plus - EA3
* Author            : P.Srinivasa
*****************************************************************************/
/* Version Control:
 * Date Created:      Mon Mar 9 11:34:17 2015
 * %version:          EA3#17.2.2 %
 * %date_modified:    Mon Mar 9 14:18:08 2015 %
 *
 *---------------------------------------------------------------------------------------------------------------------
 * Date      Rev      Author         Change Description                                                        SCR #
 * -------   -------  --------  ---------------------------------------------------------------------------  ----------
 * 07/29/13  1        LWW       Initial C1xx Synergy Version
 * 10/01/13  4        LWW       Updates for build
 * 07/02/14  8        BWL       Updates for 01.04.00
 * 09/04/14  9        JWJ       Updates for 02.00.00                                                          12163
 * 10/16/14  10       JWJ       Updates for 02.00.05                                                          12549
 * 10/22/14  11       JWJ       Updates for 02.00.06                                                          12570
 * 12/16/14  12       JWJ       Updates for 03.02.01                                                          12824
 * 01/27/15  13       JWJ       Updates for 04.01.00                                                          12850
 * 02/25/15  14       JWJ       Updates for 04.01.03                                                          13069
 * 05/14/15  16       GMN       Updates for 05.01.00
 * 07/28/15  17       GMN       Updates for 05.03.00
 * 10/27/15  17.2.1   GMN       Updates for 06.00.00                                                          EA3#4135
 * 04/10/16  17.2.2   CP        Changed Cal Part Number to array of uint16 to avoid packing
 */

#define GM_HEADER_DATA

/******************************************************************************/
/* Include files                                                              */
/******************************************************************************/
#include "gmheader.h"

#pragma DATA_SECTION (PresencePatternApp, "N_PresPattAppSeg")
const uint16 PresencePatternApp = 0xA596U;
#pragma DATA_SECTION (PresencePatternCal, "N_PresPattCalSeg")
const uint16 PresencePatternCal = 0xA596U;
#pragma DATA_SECTION (PresencePatternCal2, "N_PresPattCalSeg2")
const uint16 PresencePatternCal2 = 0xA596U;

/* #pragma to locate data to the first segment of the application via linker command file!!! */
#pragma DATA_SECTION(GM_ApplHeader,"N_AppHeaderSeg");/* PRQA S:DS46_3116 3116 */
const tSwmApplHeader GM_ApplHeader =
{
	/* 16-Bit value calculated from integrity algorithm */
	INTEGRITY_WORD,

	/* 2-byte Configuration options */
	CONFIG_OPTIONS,

	/* 2 bytes for the Module ID */
	MODID_APPLICATION,

	/* Followed by 2 byte Data Compatibility Identifier */
	DCID_APPLICATION,

	/* Indicates the Application software-Not Before ID of the current application software version */
	APP_NBID,

	/* DLS: Design Level Suffix - 2 bytes ASCII */
	APP_DLS,

	/* 4 byte SW module Part Number in hex format */
	HEX_PART_NO_APPLICATION,

	/* No of Application region's */
	SWM_DATA_MAX_NOAR_APP,

	/* Application SW Location Info */
	{             /* App SW Info */
        {{0x0004U,0x0000U}, {0x0007U,0xFFF0U}}    /* Application */
	},

	/* Followed by Number-of-Partitions */
	SWM_DATA_MAX_NOAM,

	/* Provide as many additional-modules in NOAM (we use 2 in our example). */
	{                        /* Region Info */                                                                 /* Cal module Info */
            {0x0001U, {0x0001U,0x0000U},  {0x0000U,0x4000U}, 0x0001U, MODID_CALIBRATION2,  DCID_CALIBRATION, {0x0001U,0x0000U},  {0x0000U,0x3FF0U}}, /* Calibration 1 */
            {0x0001U, {0x0001U,0x4000U},  {0x0002U,0xC000U}, 0x0001U, MODID_CALIBRATION,   DCID_CALIBRATION, {0x0001U,0x4000U},  {0x0002U,0xBFF0U}}, /* Calibration 2 */
	}
};

/* #pragma to locate data to the first segment of the calibration via linker command file!!! */
#pragma DATA_SECTION(GM_CalHeader,"N_CalHeaderSeg"); /* PRQA S:DS46_3116 3116 */
const tSwmCalHeader GM_CalHeader=
{
	/* 16-Bit value calculated from integrity algorithm */
	INTEGRITY_WORD,

	/* 2-byte Configuration options */
	CONFIG_OPTIONS,

	/* 2 bytes for the Module ID */
	MODID_CALIBRATION,

	/* Followed by 2 byte Data Compatibility Identifier */
	DCID_CALIBRATION,

	/*DLS: Design Level Suffix - 2 bytes ASCII */
	CAL_DLS,

	/* 4 byte SW module Part Number in hex format */
	HEX_PART_NO_CALIBRATION
};

/* #pragma to locate data to the first segment of the calibration via linker command file!!! */
#pragma DATA_SECTION(GM_Cal2Header,"N_Cal2HeaderSeg"); /* PRQA S:DS46_3116 3116 */
const tSwmCalHeader GM_Cal2Header=
{
	/* 16-Bit value calculated from integrity algorithm */
	INTEGRITY_WORD,

	/* 2-byte Configuration options */
	CONFIG_OPTIONS,

	/* 2 bytes for the Module ID */
	MODID_CALIBRATION2,

	/* Followed by 2 byte Data Compatibility Identifier */
	DCID_CALIBRATION,

	/*DLS: Design Level Suffix - 2 bytes ASCII */
	CAL2_DLS,

	/* 4 byte SW module Part Number in hex format */
	HEX_PART_NO_CALIBRATION2
};
