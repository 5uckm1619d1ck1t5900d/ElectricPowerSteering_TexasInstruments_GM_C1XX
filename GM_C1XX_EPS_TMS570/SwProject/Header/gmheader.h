/*****************************************************************************
* Copyright 2015 Nexteer Automotive, All Rights Reserved.
* Nexteer Confidential
*
* Module File Name  : gmheader.h
* Module Description: GM Header
* Product           : Gen II Plus - EA3
* Author            : P.Srinivasa
*****************************************************************************/
/* Version Control:
 * Date Created:      Mon Mar 9 11:34:17 2015
 * %version:          EA3#20.1.7 %
 * %date_modified:    Mon Mar 9 14:18:08 2015 %
 *
 *---------------------------------------------------------------------------------------------------------------------
 * Date      Rev      Author         Change Description                                                        SCR #
 * -------   -------  --------  ---------------------------------------------------------------------------  ----------
 * 07/29/13  1        LWW       Initial C1xx Synergy Version
 * 09/12/13  3        LWW       Updates for build
 * 10/01/13  4        LWW       Updates for build
 * 03/21/14  11       BWL       Updates for build
 * 03/21/14  12       BWL       Updates for build
 * 04/30/14  13       BWL       Added cal sector
 * 05/06/14  14       BWL       Updates for build
 * 05/15/14  16       BWL       Updates for build
 * 06/03/14  17       BWL       Updates for build
 * 07/02/14  18       BWL       Updates for 01.04.00
 * 01/21/15  19       JWJ       Updates for DCID for 04.00.00 release
 * 03/30/15  20       JWJ       Updated cal DCID for 05.00.00                                                 13188
 * 10/27/15  20.1.1   GMN       Updated for 06.00.00                                                          EA3#4135
 * 12/12/15  20.1.2   CP        Updated for 06.01.00                                                          EA3#4183
 * 04/10/16  20.1.3   CP        Updated APP_NBID and Cal Header for 06.02.00 -EA3#5944,EA3#7024               EA3#5966
 * 05/12/16  20.1.4   CP        Updated Cal Compatibility DCID for calibration 
 * 06/03/16  20.1.5   CP        Updated APP_DLS for 06.04.00
 * 06/22/16  20.1.6   CP        Updated APP_DLS for BEV 03.00.00
 * 07/07/16  20.1.7   CP        Updated APP_DLS for BEV 03.00.01
 * 08/10/16  20.1.8   CP        Updated APP_DLS for BEV 03.01.00
 */

#ifndef GMHEADER_H
#define GMHEADER_H

#include "Std_Types.h"

/* Use this number as the max. PMA you will reserve for CANFlash */
#define SWM_DATA_MAX_NOAR_APP       0x0001u

/* Use this number as the max. additional-modules reserved for CANFlash */
#define SWM_DATA_MAX_NOAM           0x0002u

/* Checksum magic code to instruct CANFLash to calculate the HEX-File checksum */
#define INTEGRITY_WORD              0xFFFFu
#define CONFIG_OPTIONS              0x0000u
#define APP_NBID                    0x0001u

/* Module ID for the application */
#define MODID_APPLICATION           0x0001u
#define MODID_CALIBRATION           0x0002u
#define MODID_CALIBRATION2          0x0003u

/* SWMI Part Numbers */
#define HEX_PART_NO_APPLICATION     0x02895472u /* 42554482 */
#define HEX_PART_NO_CALIBRATION     {0x2222U, 0x2222U}
#define HEX_PART_NO_CALIBRATION2    {0x3333U, 0x3333U}

/* DLS: Design Level Suffix - 2 bytes ASCII */
#define APP_DLS  0x4142u /* AB */
#define CAL_DLS  0x4141u /* AA */
#define CAL2_DLS 0x4141u /* AA */

/* Data Compatibility ID for the application: Must match DCID in FBL */
#define DCID_APPLICATION            0x8003u

/* Data Compatibility ID for the calibration: Must match DCID in App */
#define DCID_CALIBRATION            0x8004u

typedef struct {
	uint16     IW;                  /* Integrity Word */
	uint16     CONFIG;              /* Configuration Options */
	uint16     MID;                 /* Module ID */
	uint16     DCID;                /* Data Compatibility Identifier */
	uint16     App_NBID;            /* Application Software-Not Before ID */
	uint16     DLS;                 /* Design Level Suffix */
	uint32     PART_NO;             /* Hex Part Number */
	uint16     NOAR;                /* Number Of Address Regions */
	struct {
		uint16 PMA[2];              /* Product Memory Address */
		uint16 NOB[2];              /* Number Of Bytes */
	} PMA_NOB[SWM_DATA_MAX_NOAR_APP];
	uint16     NOAM;                /* Number of Additional Modules */
	struct {
		uint16 NOAR;                /* Number of Address Regions */
		uint16 PMA[2];              /* Product Memory Address */
		uint16 NOB[2];              /* Number Of Bytes */
		uint16 NOCM;                /* Number of Cal modules */
		uint16 CMID;                /* Cal Module ID */
		uint16 CCID;                /* Cal Compatibility Identifier */
		uint16 PMA_Cal[2];          /* Product Memory Address */
		uint16 NOB_Cal[2];          /* Number Of Bytes */
	} PMA_NOAM[SWM_DATA_MAX_NOAM];
} tSwmApplHeader;

typedef struct {
	uint16     IW;                  /* Integrity Word */
	uint16     CONFIG;              /* Configuration Options */
	uint16     MID;                 /* Module ID */
	uint16     DCID;                /* Data Compatibility Identifier */
	uint16     DLS;                 /* Design Level Suffix */
	uint16     SWMI[2];             /* Hex Part Number - Used array of uint16 to avoid packing */
} tSwmCalHeader;

/* Export the header definition */
extern const tSwmApplHeader GM_ApplHeader;
extern const tSwmCalHeader GM_CalHeader;
extern const tSwmCalHeader GM_Cal2Header;

#endif
