 /*****************************************************************************
* Copyright 2010 Nexteer, Inc., All Rights Reserved.
* Nexteer Confidential
*
* Module File Name  : Ap_DiagMgr_Types.h
* Module Description: This file contains diagmgr type definitions
* Product           : Gen II Plus - EA3.0
* Author            : Jeremy Warmbier
*****************************************************************************/
/*---------------------------------------------------------------------------
* Version Control:
* Date Created:      Fri Dec  2 07:36:54 2011
* %version:          1 %
* %derived_by:       kzdyfh %
* %date_modified:    Mon Sep 30 18:00:54 2013 %
*---------------------------------------------------------------------------*/
#ifndef AP_DIAGMGR_TYPES_H
#define AP_DIAGMGR_TYPES_H

#include "Std_Types.h" 

/* Type Defines for DiagMgr Data Structures */
typedef struct
{
    uint32 Response : 24;
    uint32 DEMEventID : 8;
} FltRsp_Str;

typedef struct
{
  uint8 NTC_Cnt_u08;
  uint8 Param_Cnt_u08;
  uint8 SystemState_Cnt_u08;
  uint8 VehSpd_Kph_u8p0;
  uint32 BlkBoxCfgData1;
  uint32 BlkBoxCfgData2;
  uint32 BlkBoxCfgData3;
  sint16 HwTrq_HwNm_s4p11;
  sint16 MtrTrq_MtrNm_s4p11;
  uint16 IgnCtr_Cnt_u16;
} NTCBlkBoxType;

typedef NTCBlkBoxType NTCBlkBoxData[8];

typedef struct
{
  NTCNumber NTC;
  uint8 Status;
  uint8 AgingCounter;
} NTCStrg;

typedef NTCStrg NTCStrgArray[15];

#endif


/******************************************************************************
CHANGE HISTORY:

 Date      Rev      Author 			Change Description              SCR #
 				  					 (MDD Rev & Date) 		
-------   -------   --------  -----------------------------------  ----------
12/02/2011	1	    JJW       Initial Version
******************************************************************************/
