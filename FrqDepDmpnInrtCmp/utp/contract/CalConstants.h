/*****************************************************************************
* Copyright 2010 Nexteer Automotive, All Rights Reserved.
* Nexteer Confidential
*
* Module File Name  : CalConstants.h
* Module Description: This file contains the declarations of calibration 
*                     constants used in the EPS Software.
* Product           : Gen II Plus EA3.0
* Author            : Lucas Wendling
*****************************************************************************/
/* Version Control:
 * Date Created:      Wed Apr 13 12:17:00 2011
 * %version:          5 %
 * %derived_by:       lz4p8n %
 * %date_modified:    Fri Apr 12 14:08:43 2013 %
 *---------------------------------------------------------------------------------------------------------------------
 */

#ifndef CALCONSTANTS_H
#define CALCONSTANTS_H

#include "Std_Types.h"

/*********************** Start of Auto Generated Code ************************/

/****************** File Generated on 10/15/2015 2:29:45 PM ******************/
/**** SF-14 Inertia Compenstation / Frequency Dependent Damping - Rev 17 *****/



extern CONST(float32, CAL_CONST) k_InrtCmp_MtrInertia_KgmSq_f32;
extern CONST(uint16, CAL_CONST) t_InrtCmp_ScaleFactorTblY_Uls_u9p7[12];
extern CONST(float32, CAL_CONST) k_InrtCmp_TBarVelLPFKn_Hz_f32;
extern CONST(uint16, CAL_CONST) t_InrtCmp_TBarVel_ScaleFactorTblY_Uls_u9p7[12];
extern CONST(float32, CAL_CONST) k_InrtCmp_MtrVel_ScaleFactor_Uls_f32;
extern CONST(uint16, CAL_CONST) t_CmnVehSpd_Kph_u9p7[12];
extern CONST(uint16, CAL_CONST) t2_FDD_ADDRollingTblYM_MtrNmpRadpS_um1p17[2][10];
extern CONST(uint16, CAL_CONST) t_FDD_AttenTblX_MtrRadpS_u12p4[2];
extern CONST(uint16, CAL_CONST) t_FDD_AttenTblY_Uls_u8p8[2];
extern CONST(uint16, CAL_CONST) t_DmpDecelGainSlewY_UlspS_u13p3[6];
extern CONST(uint16, CAL_CONST) t_DmpDecelGainSlewX_MtrRadpS_u11p5[6];
extern CONST(float32, CAL_CONST) k_DmpGainOnThresh_KphpS_f32;
extern CONST(float32, CAL_CONST) k_DmpDecelGain_Uls_f32;
extern CONST(float32, CAL_CONST) k_DmpDecelGainFSlew_UlspS_f32;
extern CONST(float32, CAL_CONST) k_DmpGainOffThresh_KphpS_f32;
extern CONST(uint16, CAL_CONST) t_DmpADDCoefX_MtrNm_u4p12[10];
extern CONST(uint16, CAL_CONST) t_FDD_ADDStaticTblY_MtrNmpRadpS_um1p17[10];
extern CONST(uint16, CAL_CONST) t_FDD_BlendTblY_Uls_u8p8[12];
extern CONST(uint16, CAL_CONST) t2_FDD_FreqTblYM_Hz_u12p4[2][12];
extern CONST(uint16, CAL_CONST) t_WIRBlndTblX_MtrNm_u8p8[5];
extern CONST(uint16, CAL_CONST) t_RIAstWIRBlndTblY_Uls_u2p14[5];
extern CONST(uint16, CAL_CONST) t_DmpFiltKpWIRBlndY_Uls_u2p14[5];
extern CONST(float32, CAL_CONST) k_CmnTbarStiff_NmpDeg_f32;
extern CONST(float32, CAL_CONST) k_CmnSysKinRatio_MtrDegpHwDeg_f32;
#endif
