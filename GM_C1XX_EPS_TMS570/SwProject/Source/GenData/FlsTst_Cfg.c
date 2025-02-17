
/*****************************************************************************
* Copyright 2010 Nexteer Automotive, All Rights Reserved.
* Nexteer Confidential
*
* Module File Name  : FlsTst_Cfg.c
* Module Description: Configuration file of FlsTst module
* Product           : Gen II Plus - EA3.0
* Generator         : artt 2.0.2.0
* Generation Time   : 29.10.2015 14:19:23
*****************************************************************************/
/* Version Control:
 * Date Created:      Fri Jul 13 18:34:17 2012
 * %version:          EA3#7 %
 * %date_modified:    Mon Nov 26 14:46:05 2012 %
 *---------------------------------------------------------------------------------------------------------------------
 * Date      Rev      Author         Change Description                                                        SCR #
 * -------   -------  --------  ---------------------------------------------------------------------------  ----------
 * 07/13/12   1       JJW       Initial template creation
 * 09/17/12   2       JJW       Remove extra comma in generation of FlsTst_ConfigType definition
 * 11/26/12   3       JJW       Notification funciton generation support added
 */

#include "FlsTst.h" /*[FlsTst003]*/

/* Externally defined symbols */
extern CONST(uint64, AUTOMATIC) _CCT_Range_10_Address;
extern CONST(uint64, AUTOMATIC) _CCT_Range_10_Start;

extern CONST(uint64, AUTOMATIC) _CCT_Range_01_Address;
extern CONST(uint64, AUTOMATIC) _CCT_Range_01_Start;

extern CONST(uint64, AUTOMATIC) _CRC_Boot_Address;
extern CONST(uint64, AUTOMATIC) _CRC_Boot_Start;

extern CONST(uint64, AUTOMATIC) _CCT_Range_11_Address;
extern CONST(uint64, AUTOMATIC) _CCT_Range_11_Start;

#define FLSTST_START_SEC_CONST_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */

/* FlsTst Notification Function Extern Definitions */
extern FUNC(void, AUTOMATIC) Appl_FlsTstCompletedNotif(void);

/* FlsTst Configuration Definitions */
CONST(FlsTst_MemBlockType, AUTOMATIC) FlsTst_MemBlk_Runtime[ 4u ] = {
	{  /* Cal block config */
		0UL,	/* CRC L32 Init Value */
		0UL,	/* CRC H32 Init Value */
		(P2CONST(uint64, AUTOMATIC, AUTOMATIC))&_CCT_Range_10_Address, /*crcPtr*/
		(P2CONST(uint64, AUTOMATIC, AUTOMATIC))&_CCT_Range_10_Start, /*startPtr*/
		1U, /* secnum */
		22520u, /* seclength */
		2815u, /* dmaElementCnt */
		8u /* dmaFrameCnt */
	},
	{  /* App block config */
		0UL,	/* CRC L32 Init Value */
		0UL,	/* CRC H32 Init Value */
		(P2CONST(uint64, AUTOMATIC, AUTOMATIC))&_CCT_Range_01_Address, /*crcPtr*/
		(P2CONST(uint64, AUTOMATIC, AUTOMATIC))&_CCT_Range_01_Start, /*startPtr*/
		1U, /* secnum */
		65518u, /* seclength */
		3854u, /* dmaElementCnt */
		17u /* dmaFrameCnt */
	},
	{  /* Boot block config */
		0UL,	/* CRC L32 Init Value */
		0UL,	/* CRC H32 Init Value */
		(P2CONST(uint64, AUTOMATIC, AUTOMATIC))&_CRC_Boot_Address, /*crcPtr*/
		(P2CONST(uint64, AUTOMATIC, AUTOMATIC))&_CRC_Boot_Start, /*startPtr*/
		1U, /* secnum */
		8191u, /* seclength */
		1u, /* dmaElementCnt */
		8191u /* dmaFrameCnt */
	},
	{  /* Cal2 block config */
		0UL,	/* CRC L32 Init Value */
		0UL,	/* CRC H32 Init Value */
		(P2CONST(uint64, AUTOMATIC, AUTOMATIC))&_CCT_Range_11_Address, /*crcPtr*/
		(P2CONST(uint64, AUTOMATIC, AUTOMATIC))&_CCT_Range_11_Start, /*startPtr*/
		1U, /* secnum */
		2040u, /* seclength */
		2040u, /* dmaElementCnt */
		1u /* dmaFrameCnt */
	}
};


CONST(FlsTst_ConfigType, AUTOMATIC) FlsTst_Runtime = {
	4, /* numBgndBlks */
	0, /* numBgndBlks */
	FlsTst_MemBlk_Runtime, /* MemBlk */
	Appl_FlsTstCompletedNotif	/*notifFcn*/
};


#define FLSTST_STOP_SEC_CONST_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */
