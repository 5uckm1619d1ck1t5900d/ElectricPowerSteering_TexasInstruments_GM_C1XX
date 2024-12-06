/*****************************************************************************
* Copyright 2010 Nexteer Automotive, All Rights Reserved.
* Nexteer Confidential
*
* Module File Name  : CalConstants.h
* Module Description: This file contains the declarations of calibration 
*                     constants used in the EPS Software.
* Product           : Gen II Plus EA3.0
* Author            : Selva Sengottaiyan
*****************************************************************************/
/*---------------------------------------------------------------------------
* Version Control:
* Date Created:      Fri Jan  17 16:48:22 2014
* %version:          2 %
* %derived_by:       gzkys7 %
* %date_modified:    Thu Jan 23 17:29:13 2014 %
*---------------------------------------------------------------------------*/

#ifndef CALCONSTANTS_H
#define CALCONSTANTS_H


#include "Rte_Ap_TrqArblim.h"

/*********************** Start of Auto Generated Code ************************/

/****************** File Generated on 1/23/2014 4:41:28 PM *******************/
/***************************** TrqArbLim - Rev 1 *****************************/


extern CONST(float32, CAL_CONST) k_APASmoothHwTrqLPFKn_Hz_f32;
extern CONST(float32, CAL_CONST) k_APAEnableRate_pSec_f32;
extern CONST(boolean, CAL_CONST) k_APAUseAsstScale_lgc;
extern CONST(boolean, CAL_CONST) k_APAUseRetScale_lgc;
extern CONST(boolean, CAL_CONST) k_APAUseADmpScale_lgc;
extern CONST(boolean, CAL_CONST) k_LKAUseSlewCal_lgc;
extern CONST(float32, CAL_CONST) k_ESCMax_HwNm_f32;
extern CONST(uint16, CAL_CONST) t_LKASlewX_Kph_u8p8[6];
extern CONST(uint16, CAL_CONST) t_LKASlewY_NmpSec_u4p12[6];
extern CONST(uint16, CAL_CONST) t_APASmoothX_Uls_u2p14[10];
extern CONST(uint16, CAL_CONST) t_APASmoothY_Uls_u2p14[10];
extern CONST(uint16, CAL_CONST) t_APADisableRateX_HwNm_u4p12[6];
extern CONST(uint16, CAL_CONST) t_APADisableRateY_pSec_u7p9[6];
#endif
