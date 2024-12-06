/*****************************************************************************
* Copyright 2010 Nexteer Automotive., All Rights Reserved.
* Nexteer Confidential
* 
* Module File Name  : CalConstants.c
* Module Description: This file contains the definitions of calibration 
*                     constants used in the EPS Software.
* Product           : Gen II Plus EA3.0
* Author            : Lucas Wendling
*****************************************************************************/
/* Version Control:
 * Date Created:      Wed Apr 13 12:17:00 2011
 * %version:          EA3#62.1.8 %
 * %derived_by:       fz9hxm %
 * %date_modified:    Wed Mar  5 17:22:17 2014 %
 */

#include "CalConstants.h"

#define TUNINGSELAUTH_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */
P2CONST(TUNING_P_Str, AUTOMATIC, AUTOMATIC) TunPer_Ptr_Str;
P2CONST(TUNING_Y_Str, AUTOMATIC, AUTOMATIC) TunSet_Ptr_Str;
#define TUNINGSELAUTH_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */

/* Put this at end of file
CONSTP2CONST(TUNING_Y_Str, AUTOMATIC, AUTOMATIC) T_TunSetSelectionTbl_Ptr_Str[D_NUMOFTUNSETS_CNT_U16] =
		{	&k_TunSet0_Cnt_Str};

CONSTP2CONST(TUNING_P_Str, AUTOMATIC, AUTOMATIC) T_TunPersSelectionTbl_Ptr_Str[D_NUMOFTUNSETS_CNT_U16][D_NUMOFPERS_CNT_U16] =
		{	{	&k_TunSet0Per0_Cnt_Str,
				&k_TunSet0Per1_Cnt_Str,
				&k_TunSet0Per2_Cnt_Str,
				&k_TunSet0Per3_Cnt_Str}};
*/
/*********************** Start of Auto Generated Code ************************/

/****************** File Generated on 6/22/2016 3:01:29 PM *******************/
/************************* GM C1XX Project - Rev 68 **************************/


#pragma DATA_SECTION(k_TunSet0_Cnt_Str, ".TunCal0");
CONST(TUNING_Y_Str, CAL_CONST)k_TunSet0_Cnt_Str = { 2100.0f, 45.0f, 2.8f, 10.0f, 2000UL, 160.0f, 60.0f, 1.0f, 1.0f, 0.25f, 0.04f, 0.222232320828211f, 0.269597308951354f, 3.0f, 45.0f, 0.5f, 100.0f, 6.26348737522175E-03f, 3.0f, 45.0f, 45.0f, 1.0f, 100UL, 1.0f, 45.0f, 3.0f, 1.0f, 1.0f, 3.69973466030251E-02f, {FPM_InitFixedPoint_m(0.0, u9p7_T), FPM_InitFixedPoint_m(30.0, u9p7_T),
	 FPM_InitFixedPoint_m(60.0, u9p7_T), FPM_InitFixedPoint_m(90.0, u9p7_T)}, {FPM_InitFixedPoint_m(0.0, u2p14_T),
	 FPM_InitFixedPoint_m(0.25, u2p14_T), FPM_InitFixedPoint_m(1.0, u2p14_T),
	 FPM_InitFixedPoint_m(1.0, u2p14_T)}, {FPM_InitFixedPoint_m(75.0, u16p0_T),
	 FPM_InitFixedPoint_m(100.0, u16p0_T)}, {FPM_InitFixedPoint_m(1.0, u2p14_T), FPM_InitFixedPoint_m(1.0, u2p14_T)}, { FPM_InitFixedPoint_m(0.0, u9p7_T), FPM_InitFixedPoint_m(5.0, u9p7_T),
	 FPM_InitFixedPoint_m(15.0, u9p7_T), FPM_InitFixedPoint_m(30.0, u9p7_T),
	 FPM_InitFixedPoint_m(60.0, u9p7_T), FPM_InitFixedPoint_m(80.0, u9p7_T),
	 FPM_InitFixedPoint_m(100.0, u9p7_T),
	 FPM_InitFixedPoint_m(120.0, u9p7_T),
	 FPM_InitFixedPoint_m(150.0, u9p7_T),
	 FPM_InitFixedPoint_m(180.0, u9p7_T),
	 FPM_InitFixedPoint_m(200.0, u9p7_T),
	 FPM_InitFixedPoint_m(220.0, u9p7_T) }, 0.1f, 0.0f, 50.0f, 5.0f, -5.0f, 1.0f, 5.0f, -5.0f, 50.0f, 15.0f, 50000UL, 0.98f, 360.0f, 800.0f, 0.0f, 100.0f, 1.0f, 0.0f, 0.2f, 1UL, 65534U, 50.0f, 100.0f, 0.0f, {0.0f, 0.0f, 0.0f, 0.0f}, {-15.0f, -5.0f, 5.0f, 15.0f}, {1.0f, 1.0f, 1.0f, 1.0f}, {FPM_InitFixedPoint_m(0.0, u11p5_T),
	 FPM_InitFixedPoint_m(30.0, u11p5_T),
	 FPM_InitFixedPoint_m(60.0, u11p5_T),
	 FPM_InitFixedPoint_m(90.0, u11p5_T),
	 FPM_InitFixedPoint_m(120.0, u11p5_T),
	 FPM_InitFixedPoint_m(180.0, u11p5_T),
	 FPM_InitFixedPoint_m(270.0, u11p5_T),
	 FPM_InitFixedPoint_m(360.0, u11p5_T),
	 FPM_InitFixedPoint_m(450.0, u11p5_T),
	 FPM_InitFixedPoint_m(540.0, u11p5_T)}, {FPM_InitFixedPoint_m(23.7, u6p10_T),
	 FPM_InitFixedPoint_m(23.7, u6p10_T),
	 FPM_InitFixedPoint_m(23.7, u6p10_T),
	 FPM_InitFixedPoint_m(23.7, u6p10_T),
	 FPM_InitFixedPoint_m(23.7, u6p10_T),
	 FPM_InitFixedPoint_m(23.7, u6p10_T),
	 FPM_InitFixedPoint_m(23.7, u6p10_T),
	 FPM_InitFixedPoint_m(23.7, u6p10_T),
	 FPM_InitFixedPoint_m(23.7, u6p10_T),
	 FPM_InitFixedPoint_m(23.7, u6p10_T)}, {1, 1, 1, 1}, {{0U, 0U, 0U}, {0U, 0U, 0U}, {0U, 0U, 0U}, {0U, 0U, 0U}, {0U, 0U, 0U},
	 {0U, 0U, 0U}, {0U, 0U, 0U}, {0U, 0U, 0U}}, {{0.0f, 0.0f, 0.0f, 0.0f}, {0.0f, 0.0f, 0.0f, 0.0f}, {0.0f, 0.0f, 0.0f,
	 0.0f}, {0.0f, 0.0f, 0.0f, 0.0f}, {0.0f, 0.0f, 0.0f, 0.0f}, {0.0f, 0.0f,
	 0.0f, 0.0f}, {0.0f, 0.0f, 0.0f, 0.0f}, {0.0f, 0.0f, 0.0f, 0.0f}}, {{0.0f, 5.0f}, {60.0f, 80.0f}, {80.0f, 100.0f}, {100.0f, 120.0f}}, 5.0f, 0.5f, 1.5f, 3000.0f, 10.0f, 0.5f, 0.4f, 8.0f, 2.0f, 3000.0f, 12.0f, 0.8f, 1.0f, 10.0f, 1U, 5.0f, 0.5f, 1.0f, 10.0f, 1U, 5.0f, 0.0011f, {FPM_InitFixedPoint_m(8.0, u8p8_T), FPM_InitFixedPoint_m(10.0, u8p8_T)}, {FPM_InitFixedPoint_m(1.0, u1p15_T),
	  FPM_InitFixedPoint_m(0.0, u1p15_T)}, {FPM_InitFixedPoint_m(-40.0, s8p7_T),
	 FPM_InitFixedPoint_m(-35.0, s8p7_T),
	 FPM_InitFixedPoint_m(-30.0, s8p7_T),
	 FPM_InitFixedPoint_m(-20.0, s8p7_T),
	 FPM_InitFixedPoint_m(-10.0, s8p7_T), FPM_InitFixedPoint_m(0.0, s8p7_T),
	 FPM_InitFixedPoint_m(10.0, s8p7_T), FPM_InitFixedPoint_m(20.0, s8p7_T),
	 FPM_InitFixedPoint_m(40.0, s8p7_T), FPM_InitFixedPoint_m(60.0, s8p7_T),
	 FPM_InitFixedPoint_m(90.0, s8p7_T)}, {FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T)}, 0.2f, 2.0f, 1U, 1U, 5.0f, 1U, 1U, 10.0f, 25.0f, {FPM_InitFixedPoint_m(0.0, u11p5_T),
	 FPM_InitFixedPoint_m(25.0, u11p5_T),
	 FPM_InitFixedPoint_m(50.0, u11p5_T),
	 FPM_InitFixedPoint_m(75.0, u11p5_T),
	 FPM_InitFixedPoint_m(100.0, u11p5_T),
	 FPM_InitFixedPoint_m(200.0, u11p5_T),
	 FPM_InitFixedPoint_m(300.0, u11p5_T),
	 FPM_InitFixedPoint_m(400.0, u11p5_T)}, {FPM_InitFixedPoint_m(0.0, u5p11_T), FPM_InitFixedPoint_m(0.0, u5p11_T),
	 FPM_InitFixedPoint_m(0.0, u5p11_T), FPM_InitFixedPoint_m(0.0, u5p11_T),
	 FPM_InitFixedPoint_m(0.0, u5p11_T), FPM_InitFixedPoint_m(0.0, u5p11_T),
	 FPM_InitFixedPoint_m(0.0, u5p11_T), FPM_InitFixedPoint_m(0.0, u5p11_T)}, {FPM_InitFixedPoint_m(0.0, u11p5_T),
	 FPM_InitFixedPoint_m(25.0, u11p5_T),
	 FPM_InitFixedPoint_m(50.0, u11p5_T),
	 FPM_InitFixedPoint_m(75.0, u11p5_T),
	 FPM_InitFixedPoint_m(100.0, u11p5_T),
	 FPM_InitFixedPoint_m(200.0, u11p5_T),
	 FPM_InitFixedPoint_m(300.0, u11p5_T),
	 FPM_InitFixedPoint_m(400.0, u11p5_T)}, {FPM_InitFixedPoint_m(0.0, u5p11_T), FPM_InitFixedPoint_m(0.0, u5p11_T),
	 FPM_InitFixedPoint_m(0.0, u5p11_T), FPM_InitFixedPoint_m(0.0, u5p11_T),
	 FPM_InitFixedPoint_m(0.0, u5p11_T), FPM_InitFixedPoint_m(0.0, u5p11_T),
	 FPM_InitFixedPoint_m(0.0, u5p11_T), FPM_InitFixedPoint_m(0.0, u5p11_T)}, {50U,100U}, {FPM_InitFixedPoint_m(0.0, u11p5_T),
	 FPM_InitFixedPoint_m(10.0, u11p5_T),
	 FPM_InitFixedPoint_m(25.0, u11p5_T),
	 FPM_InitFixedPoint_m(50.0, u11p5_T),
	 FPM_InitFixedPoint_m(100.0, u11p5_T),
	 FPM_InitFixedPoint_m(150.0, u11p5_T),
	 FPM_InitFixedPoint_m(200.0, u11p5_T),
	 FPM_InitFixedPoint_m(250.0, u11p5_T),
	 FPM_InitFixedPoint_m(300.0, u11p5_T),
	 FPM_InitFixedPoint_m(350.0, u11p5_T),
	 FPM_InitFixedPoint_m(400.0, u11p5_T)}, {FPM_InitFixedPoint_m(0.0, u5p11_T),
	 FPM_InitFixedPoint_m(0.05, u5p11_T), FPM_InitFixedPoint_m(0.1, u5p11_T),
	 FPM_InitFixedPoint_m(0.15, u5p11_T), FPM_InitFixedPoint_m(0.5, u5p11_T),
	 FPM_InitFixedPoint_m(1.4, u5p11_T), FPM_InitFixedPoint_m(2.5, u5p11_T),
	 FPM_InitFixedPoint_m(4.0, u5p11_T), FPM_InitFixedPoint_m(6.0, u5p11_T),
	 FPM_InitFixedPoint_m(10.0, u5p11_T),
	 FPM_InitFixedPoint_m(14.0, u5p11_T)}, {50U,200U}, {FPM_InitFixedPoint_m(-700.0, s11p4_T),
	 FPM_InitFixedPoint_m(-50.0, s11p4_T),
	 FPM_InitFixedPoint_m(0.0, s11p4_T), FPM_InitFixedPoint_m(50.0, s11p4_T),
	 FPM_InitFixedPoint_m(100.0, s11p4_T),
	 FPM_InitFixedPoint_m(150.0, s11p4_T),
	 FPM_InitFixedPoint_m(200.0, s11p4_T),
	 FPM_InitFixedPoint_m(350.0, s11p4_T),
	 FPM_InitFixedPoint_m(400.0, s11p4_T),
	 FPM_InitFixedPoint_m(500.0, s11p4_T),
	 FPM_InitFixedPoint_m(700.0, s11p4_T)}, {FPM_InitFixedPoint_m(0.0, u9p7_T), FPM_InitFixedPoint_m(20.0, u9p7_T),
	 FPM_InitFixedPoint_m(50.0, u9p7_T), FPM_InitFixedPoint_m(75.0, u9p7_T),
	 FPM_InitFixedPoint_m(100.0, u9p7_T),
	 FPM_InitFixedPoint_m(150.0, u9p7_T),
	 FPM_InitFixedPoint_m(200.0, u9p7_T),
	 FPM_InitFixedPoint_m(255.0, u9p7_T)}, {{FPM_InitFixedPoint_m(16.0, s7p8_T),
	 FPM_InitFixedPoint_m(16.0, s7p8_T), FPM_InitFixedPoint_m(16.0, s7p8_T),
	 FPM_InitFixedPoint_m(16.0, s7p8_T), FPM_InitFixedPoint_m(16.0, s7p8_T),
	 FPM_InitFixedPoint_m(16.0, s7p8_T), FPM_InitFixedPoint_m(16.0, s7p8_T),
	 FPM_InitFixedPoint_m(16.0, s7p8_T), FPM_InitFixedPoint_m(16.0, s7p8_T),
	 FPM_InitFixedPoint_m(16.0, s7p8_T), FPM_InitFixedPoint_m(16.0, s7p8_T)},
	 {FPM_InitFixedPoint_m(16.0, s7p8_T), FPM_InitFixedPoint_m(16.0, s7p8_T),
	 FPM_InitFixedPoint_m(16.0, s7p8_T), FPM_InitFixedPoint_m(16.0, s7p8_T),
	 FPM_InitFixedPoint_m(16.0, s7p8_T), FPM_InitFixedPoint_m(16.0, s7p8_T),
	 FPM_InitFixedPoint_m(16.0, s7p8_T), FPM_InitFixedPoint_m(16.0, s7p8_T),
	 FPM_InitFixedPoint_m(16.0, s7p8_T), FPM_InitFixedPoint_m(16.0, s7p8_T),
	 FPM_InitFixedPoint_m(16.0, s7p8_T)},
	 {FPM_InitFixedPoint_m(16.0, s7p8_T), FPM_InitFixedPoint_m(16.0, s7p8_T),
	 FPM_InitFixedPoint_m(16.0, s7p8_T), FPM_InitFixedPoint_m(16.0, s7p8_T),
	 FPM_InitFixedPoint_m(16.0, s7p8_T), FPM_InitFixedPoint_m(16.0, s7p8_T),
	 FPM_InitFixedPoint_m(16.0, s7p8_T), FPM_InitFixedPoint_m(16.0, s7p8_T),
	 FPM_InitFixedPoint_m(16.0, s7p8_T), FPM_InitFixedPoint_m(16.0, s7p8_T),
	 FPM_InitFixedPoint_m(16.0, s7p8_T)},
	 {FPM_InitFixedPoint_m(16.0, s7p8_T), FPM_InitFixedPoint_m(16.0, s7p8_T),
	 FPM_InitFixedPoint_m(16.0, s7p8_T), FPM_InitFixedPoint_m(16.0, s7p8_T),
	 FPM_InitFixedPoint_m(16.0, s7p8_T), FPM_InitFixedPoint_m(16.0, s7p8_T),
	 FPM_InitFixedPoint_m(16.0, s7p8_T), FPM_InitFixedPoint_m(16.0, s7p8_T),
	 FPM_InitFixedPoint_m(16.0, s7p8_T), FPM_InitFixedPoint_m(16.0, s7p8_T),
	 FPM_InitFixedPoint_m(16.0, s7p8_T)},
	 {FPM_InitFixedPoint_m(16.0, s7p8_T), FPM_InitFixedPoint_m(16.0, s7p8_T),
	 FPM_InitFixedPoint_m(16.0, s7p8_T), FPM_InitFixedPoint_m(16.0, s7p8_T),
	 FPM_InitFixedPoint_m(16.0, s7p8_T), FPM_InitFixedPoint_m(16.0, s7p8_T),
	 FPM_InitFixedPoint_m(16.0, s7p8_T), FPM_InitFixedPoint_m(16.0, s7p8_T),
	 FPM_InitFixedPoint_m(16.0, s7p8_T), FPM_InitFixedPoint_m(16.0, s7p8_T),
	 FPM_InitFixedPoint_m(16.0, s7p8_T)},
	 {FPM_InitFixedPoint_m(16.0, s7p8_T), FPM_InitFixedPoint_m(16.0, s7p8_T),
	 FPM_InitFixedPoint_m(16.0, s7p8_T), FPM_InitFixedPoint_m(16.0, s7p8_T),
	 FPM_InitFixedPoint_m(16.0, s7p8_T), FPM_InitFixedPoint_m(16.0, s7p8_T),
	 FPM_InitFixedPoint_m(16.0, s7p8_T), FPM_InitFixedPoint_m(16.0, s7p8_T),
	 FPM_InitFixedPoint_m(16.0, s7p8_T), FPM_InitFixedPoint_m(16.0, s7p8_T),
	 FPM_InitFixedPoint_m(16.0, s7p8_T)},
	 {FPM_InitFixedPoint_m(16.0, s7p8_T), FPM_InitFixedPoint_m(16.0, s7p8_T),
	 FPM_InitFixedPoint_m(16.0, s7p8_T), FPM_InitFixedPoint_m(16.0, s7p8_T),
	 FPM_InitFixedPoint_m(16.0, s7p8_T), FPM_InitFixedPoint_m(16.0, s7p8_T),
	 FPM_InitFixedPoint_m(16.0, s7p8_T), FPM_InitFixedPoint_m(16.0, s7p8_T),
	 FPM_InitFixedPoint_m(16.0, s7p8_T), FPM_InitFixedPoint_m(16.0, s7p8_T),
	 FPM_InitFixedPoint_m(16.0, s7p8_T)},
	 {FPM_InitFixedPoint_m(16.0, s7p8_T), FPM_InitFixedPoint_m(16.0, s7p8_T),
	 FPM_InitFixedPoint_m(16.0, s7p8_T), FPM_InitFixedPoint_m(16.0, s7p8_T),
	 FPM_InitFixedPoint_m(16.0, s7p8_T), FPM_InitFixedPoint_m(16.0, s7p8_T),
	 FPM_InitFixedPoint_m(16.0, s7p8_T), FPM_InitFixedPoint_m(16.0, s7p8_T),
	 FPM_InitFixedPoint_m(16.0, s7p8_T), FPM_InitFixedPoint_m(16.0, s7p8_T),
	 FPM_InitFixedPoint_m(16.0, s7p8_T)},
	 {FPM_InitFixedPoint_m(16.0, s7p8_T), FPM_InitFixedPoint_m(16.0, s7p8_T),
	 FPM_InitFixedPoint_m(16.0, s7p8_T), FPM_InitFixedPoint_m(16.0, s7p8_T),
	 FPM_InitFixedPoint_m(16.0, s7p8_T), FPM_InitFixedPoint_m(16.0, s7p8_T),
	 FPM_InitFixedPoint_m(16.0, s7p8_T), FPM_InitFixedPoint_m(16.0, s7p8_T),
	 FPM_InitFixedPoint_m(16.0, s7p8_T), FPM_InitFixedPoint_m(16.0, s7p8_T),
	 FPM_InitFixedPoint_m(16.0, s7p8_T)},
	 {FPM_InitFixedPoint_m(16.0, s7p8_T), FPM_InitFixedPoint_m(16.0, s7p8_T),
	 FPM_InitFixedPoint_m(16.0, s7p8_T), FPM_InitFixedPoint_m(16.0, s7p8_T),
	 FPM_InitFixedPoint_m(16.0, s7p8_T), FPM_InitFixedPoint_m(16.0, s7p8_T),
	 FPM_InitFixedPoint_m(16.0, s7p8_T), FPM_InitFixedPoint_m(16.0, s7p8_T),
	 FPM_InitFixedPoint_m(16.0, s7p8_T), FPM_InitFixedPoint_m(16.0, s7p8_T),
	 FPM_InitFixedPoint_m(16.0, s7p8_T)},
	 {FPM_InitFixedPoint_m(16.0, s7p8_T), FPM_InitFixedPoint_m(16.0, s7p8_T),
	 FPM_InitFixedPoint_m(16.0, s7p8_T), FPM_InitFixedPoint_m(16.0, s7p8_T),
	 FPM_InitFixedPoint_m(16.0, s7p8_T), FPM_InitFixedPoint_m(16.0, s7p8_T),
	 FPM_InitFixedPoint_m(16.0, s7p8_T), FPM_InitFixedPoint_m(16.0, s7p8_T),
	 FPM_InitFixedPoint_m(16.0, s7p8_T), FPM_InitFixedPoint_m(16.0, s7p8_T),
	 FPM_InitFixedPoint_m(16.0, s7p8_T)},
	 {FPM_InitFixedPoint_m(16.0, s7p8_T), FPM_InitFixedPoint_m(16.0, s7p8_T),
	 FPM_InitFixedPoint_m(16.0, s7p8_T), FPM_InitFixedPoint_m(16.0, s7p8_T),
	 FPM_InitFixedPoint_m(16.0, s7p8_T), FPM_InitFixedPoint_m(16.0, s7p8_T),
	 FPM_InitFixedPoint_m(16.0, s7p8_T), FPM_InitFixedPoint_m(16.0, s7p8_T),
	 FPM_InitFixedPoint_m(16.0, s7p8_T), FPM_InitFixedPoint_m(16.0, s7p8_T),
	 FPM_InitFixedPoint_m(16.0, s7p8_T)}}, 3.0f, 4500.0f, 1.0f, 10.0f, 0.00004f, 1.0f, 20.0f, {FPM_InitFixedPoint_m(0.0, u4p12_T), FPM_InitFixedPoint_m(0.5, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T),FPM_InitFixedPoint_m(1.5, u4p12_T),
	 FPM_InitFixedPoint_m(2.0, u4p12_T), FPM_InitFixedPoint_m(2.5, u4p12_T),
	 FPM_InitFixedPoint_m(3.0, u4p12_T), FPM_InitFixedPoint_m(3.5, u4p12_T),
	 FPM_InitFixedPoint_m(4.0, u4p12_T), FPM_InitFixedPoint_m(4.5, u4p12_T)}, {FPM_InitFixedPoint_m(0.0, u11p5_T),
	 FPM_InitFixedPoint_m(20.0, u11p5_T),FPM_InitFixedPoint_m(50.0, u11p5_T),
	FPM_InitFixedPoint_m(100.0, u11p5_T),
	 FPM_InitFixedPoint_m(200.0, u11p5_T),
	 FPM_InitFixedPoint_m(400.0, u11p5_T)}, {FPM_InitFixedPoint_m(4500.0, u13p3_T),
	FPM_InitFixedPoint_m(4500.0, u13p3_T),
	FPM_InitFixedPoint_m(4500.0, u13p3_T),
	FPM_InitFixedPoint_m(4500.0, u13p3_T),
	FPM_InitFixedPoint_m(4500.0, u13p3_T),
	FPM_InitFixedPoint_m(4500.0, u13p3_T)}, { FPM_InitFixedPoint_m(62.8125, u12p4_T),
	 FPM_InitFixedPoint_m(586.4375, u12p4_T) }, { FPM_InitFixedPoint_m(1.0, u8p8_T), FPM_InitFixedPoint_m(1.0, u8p8_T) }, { FPM_InitFixedPoint_m(1.0, u9p7_T), FPM_InitFixedPoint_m(1.0, u9p7_T),
	 FPM_InitFixedPoint_m(1.0, u9p7_T), FPM_InitFixedPoint_m(1.0, u9p7_T),
	 FPM_InitFixedPoint_m(1.0, u9p7_T),FPM_InitFixedPoint_m(1.0, u9p7_T),
	FPM_InitFixedPoint_m(1.0, u9p7_T), FPM_InitFixedPoint_m(1.0, u9p7_T),
	FPM_InitFixedPoint_m(1.0, u9p7_T), FPM_InitFixedPoint_m(1.0, u9p7_T),
	FPM_InitFixedPoint_m(1.0, u9p7_T), FPM_InitFixedPoint_m(1.0, u9p7_T) }, { FPM_InitFixedPoint_m(1.0, u9p7_T), FPM_InitFixedPoint_m(1.0, u9p7_T),
	 FPM_InitFixedPoint_m(1.0, u9p7_T), FPM_InitFixedPoint_m(1.0, u9p7_T),
	 FPM_InitFixedPoint_m(1.0, u9p7_T),FPM_InitFixedPoint_m(1.0, u9p7_T),
	FPM_InitFixedPoint_m(1.0, u9p7_T), FPM_InitFixedPoint_m(1.0, u9p7_T),
	FPM_InitFixedPoint_m(1.0, u9p7_T), FPM_InitFixedPoint_m(1.0, u9p7_T),
	FPM_InitFixedPoint_m(1.0, u9p7_T), FPM_InitFixedPoint_m(1.0, u9p7_T) }, {{FPM_InitFixedPoint_m(.005, um1p17_T),
	FPM_InitFixedPoint_m(.005, um1p17_T),
	FPM_InitFixedPoint_m(.005, um1p17_T),
	FPM_InitFixedPoint_m(.005, um1p17_T),
	FPM_InitFixedPoint_m(.005, um1p17_T),
	FPM_InitFixedPoint_m(.005, um1p17_T),
	FPM_InitFixedPoint_m(.005, um1p17_T),
	FPM_InitFixedPoint_m(.005, um1p17_T),
	FPM_InitFixedPoint_m(.005, um1p17_T),
	FPM_InitFixedPoint_m(.005, um1p17_T)},
	{FPM_InitFixedPoint_m(.005, um1p17_T),
	FPM_InitFixedPoint_m(.005, um1p17_T),
	FPM_InitFixedPoint_m(.005, um1p17_T),
	FPM_InitFixedPoint_m(.005, um1p17_T),
	FPM_InitFixedPoint_m(.005, um1p17_T),
	FPM_InitFixedPoint_m(.005, um1p17_T),
	FPM_InitFixedPoint_m(.005, um1p17_T),
	FPM_InitFixedPoint_m(.005, um1p17_T),
	FPM_InitFixedPoint_m(.005, um1p17_T),
	FPM_InitFixedPoint_m(.005, um1p17_T)}}, FPM_InitFixedPoint_m(100.0, u12p4_T), FPM_InitFixedPoint_m(550.0, u12p4_T), FALSE, FPM_InitFixedPoint_m(550.0, u12p4_T), 100.0f, 50.0f, 50.0f, 50.0f, 6.0f, FPM_InitFixedPoint_m(100.0, u9p7_T), { FPM_InitFixedPoint_m(-40.0, s14p1_T),
	 FPM_InitFixedPoint_m(-30.0, s14p1_T),
	 FPM_InitFixedPoint_m(-20.0, s14p1_T),
	 FPM_InitFixedPoint_m(-10.0, s14p1_T),
	 FPM_InitFixedPoint_m(0.0, s14p1_T), FPM_InitFixedPoint_m(25.0, s14p1_T),
	 FPM_InitFixedPoint_m(50.0, s14p1_T),
	 FPM_InitFixedPoint_m(80.0, s14p1_T) }, { FPM_InitFixedPoint_m(1.0, u9p7_T), FPM_InitFixedPoint_m(1.0, u9p7_T),
	 FPM_InitFixedPoint_m(1.0, u9p7_T), FPM_InitFixedPoint_m(1.0, u9p7_T),
	 FPM_InitFixedPoint_m(1.0, u9p7_T), FPM_InitFixedPoint_m(1.0, u9p7_T),
	 FPM_InitFixedPoint_m(1.0, u9p7_T), FPM_InitFixedPoint_m(1.0, u9p7_T) }, { FPM_InitFixedPoint_m(0.0, u2p14_T),
	 FPM_InitFixedPoint_m(0.094773206, u2p14_T),
	 FPM_InitFixedPoint_m(0.128210527, u2p14_T),
	 FPM_InitFixedPoint_m(0.154492771, u2p14_T),
	 FPM_InitFixedPoint_m(0.181721481, u2p14_T),
	 FPM_InitFixedPoint_m(0.2, u2p14_T) }, { FPM_InitFixedPoint_m(0.0, u2p14_T),
	 FPM_InitFixedPoint_m(0.6015625, u2p14_T),
	 FPM_InitFixedPoint_m(0.797, u2p14_T),
	 FPM_InitFixedPoint_m(0.912, u2p14_T),
	 FPM_InitFixedPoint_m(0.981, u2p14_T),
	 FPM_InitFixedPoint_m(1.0, u2p14_T) }, {{FPM_InitFixedPoint_m(0.0, u4p12_T),FPM_InitFixedPoint_m(0.2, u4p12_T),
	FPM_InitFixedPoint_m(0.4, u4p12_T),FPM_InitFixedPoint_m(0.6, u4p12_T),
	FPM_InitFixedPoint_m(1.0, u4p12_T),FPM_InitFixedPoint_m(1.4, u4p12_T),
	FPM_InitFixedPoint_m(2.0, u4p12_T),FPM_InitFixedPoint_m(10.0, u4p12_T)},
	{FPM_InitFixedPoint_m(0.0, u4p12_T),FPM_InitFixedPoint_m(0.2, u4p12_T),
	FPM_InitFixedPoint_m(0.4, u4p12_T),FPM_InitFixedPoint_m(0.6, u4p12_T),
	FPM_InitFixedPoint_m(1.0, u4p12_T),FPM_InitFixedPoint_m(1.4, u4p12_T),
	FPM_InitFixedPoint_m(2.0, u4p12_T),FPM_InitFixedPoint_m(10.0, u4p12_T)},
	{FPM_InitFixedPoint_m(0.0, u4p12_T),FPM_InitFixedPoint_m(0.2, u4p12_T),
	FPM_InitFixedPoint_m(0.4, u4p12_T),FPM_InitFixedPoint_m(0.6, u4p12_T),
	FPM_InitFixedPoint_m(1.0, u4p12_T),FPM_InitFixedPoint_m(1.4, u4p12_T),
	FPM_InitFixedPoint_m(2.0, u4p12_T),FPM_InitFixedPoint_m(10.0, u4p12_T)},
	{FPM_InitFixedPoint_m(0.0, u4p12_T),FPM_InitFixedPoint_m(0.2, u4p12_T),
	FPM_InitFixedPoint_m(0.4, u4p12_T),FPM_InitFixedPoint_m(0.6, u4p12_T),
	FPM_InitFixedPoint_m(1.0, u4p12_T),FPM_InitFixedPoint_m(1.4, u4p12_T),
	FPM_InitFixedPoint_m(2.0, u4p12_T),FPM_InitFixedPoint_m(10.0, u4p12_T)},
	{FPM_InitFixedPoint_m(0.0, u4p12_T),FPM_InitFixedPoint_m(0.2, u4p12_T),
	FPM_InitFixedPoint_m(0.4, u4p12_T),FPM_InitFixedPoint_m(0.6, u4p12_T),
	FPM_InitFixedPoint_m(1.0, u4p12_T),FPM_InitFixedPoint_m(1.4, u4p12_T),
	FPM_InitFixedPoint_m(2.0, u4p12_T),FPM_InitFixedPoint_m(10.0, u4p12_T)},
	{FPM_InitFixedPoint_m(0.0, u4p12_T),FPM_InitFixedPoint_m(0.2, u4p12_T),
	FPM_InitFixedPoint_m(0.4, u4p12_T),FPM_InitFixedPoint_m(0.6, u4p12_T),
	FPM_InitFixedPoint_m(1.0, u4p12_T),FPM_InitFixedPoint_m(1.4, u4p12_T),
	FPM_InitFixedPoint_m(2.0, u4p12_T),FPM_InitFixedPoint_m(10.0, u4p12_T)},
	{FPM_InitFixedPoint_m(0.0, u4p12_T),FPM_InitFixedPoint_m(0.2, u4p12_T),
	FPM_InitFixedPoint_m(0.4, u4p12_T),FPM_InitFixedPoint_m(0.6, u4p12_T),
	FPM_InitFixedPoint_m(1.0, u4p12_T),FPM_InitFixedPoint_m(1.4, u4p12_T),
	FPM_InitFixedPoint_m(2.0, u4p12_T),FPM_InitFixedPoint_m(10.0, u4p12_T)},
	{FPM_InitFixedPoint_m(0.0, u4p12_T),FPM_InitFixedPoint_m(0.2, u4p12_T),
	FPM_InitFixedPoint_m(0.4, u4p12_T),FPM_InitFixedPoint_m(0.6, u4p12_T),
	FPM_InitFixedPoint_m(1.0, u4p12_T),FPM_InitFixedPoint_m(1.4, u4p12_T),
	FPM_InitFixedPoint_m(2.0, u4p12_T),FPM_InitFixedPoint_m(10.0, u4p12_T)},
	{FPM_InitFixedPoint_m(0.0, u4p12_T),FPM_InitFixedPoint_m(0.2, u4p12_T),
	FPM_InitFixedPoint_m(0.4, u4p12_T),FPM_InitFixedPoint_m(0.6, u4p12_T),
	FPM_InitFixedPoint_m(1.0, u4p12_T),FPM_InitFixedPoint_m(1.4, u4p12_T),
	FPM_InitFixedPoint_m(2.0, u4p12_T),FPM_InitFixedPoint_m(10.0, u4p12_T)},
	{FPM_InitFixedPoint_m(0.0, u4p12_T),FPM_InitFixedPoint_m(0.2, u4p12_T),
	FPM_InitFixedPoint_m(0.4, u4p12_T),FPM_InitFixedPoint_m(0.6, u4p12_T),
	FPM_InitFixedPoint_m(1.0, u4p12_T),FPM_InitFixedPoint_m(1.4, u4p12_T),
	FPM_InitFixedPoint_m(2.0, u4p12_T),FPM_InitFixedPoint_m(10.0, u4p12_T)},
	{FPM_InitFixedPoint_m(0.0, u4p12_T),FPM_InitFixedPoint_m(0.2, u4p12_T),
	FPM_InitFixedPoint_m(0.4, u4p12_T),FPM_InitFixedPoint_m(0.6, u4p12_T),
	FPM_InitFixedPoint_m(1.0, u4p12_T),FPM_InitFixedPoint_m(1.4, u4p12_T),
	FPM_InitFixedPoint_m(2.0, u4p12_T),FPM_InitFixedPoint_m(10.0, u4p12_T)},
	{FPM_InitFixedPoint_m(0.0, u4p12_T),FPM_InitFixedPoint_m(0.2, u4p12_T),
	FPM_InitFixedPoint_m(0.4, u4p12_T),FPM_InitFixedPoint_m(0.6, u4p12_T),
	FPM_InitFixedPoint_m(1.0, u4p12_T),FPM_InitFixedPoint_m(1.4, u4p12_T),
	FPM_InitFixedPoint_m(2.0, u4p12_T),FPM_InitFixedPoint_m(10.0, u4p12_T)}}, {{FPM_InitFixedPoint_m(1.0, u4p12_T),FPM_InitFixedPoint_m(1.0, u4p12_T),
	FPM_InitFixedPoint_m(1.0, u4p12_T),FPM_InitFixedPoint_m(1.0, u4p12_T),
	FPM_InitFixedPoint_m(1.0, u4p12_T),FPM_InitFixedPoint_m(1.0, u4p12_T),
	FPM_InitFixedPoint_m(1.0, u4p12_T),FPM_InitFixedPoint_m(1.0, u4p12_T)},
	{FPM_InitFixedPoint_m(1.0, u4p12_T),FPM_InitFixedPoint_m(1.0, u4p12_T),
	FPM_InitFixedPoint_m(1.0, u4p12_T),FPM_InitFixedPoint_m(1.0, u4p12_T),
	FPM_InitFixedPoint_m(1.0, u4p12_T),FPM_InitFixedPoint_m(1.0, u4p12_T),
	FPM_InitFixedPoint_m(1.0, u4p12_T),FPM_InitFixedPoint_m(1.0, u4p12_T)},
	{FPM_InitFixedPoint_m(1.0, u4p12_T),FPM_InitFixedPoint_m(1.0, u4p12_T),
	FPM_InitFixedPoint_m(1.0, u4p12_T),FPM_InitFixedPoint_m(1.0, u4p12_T),
	FPM_InitFixedPoint_m(1.0, u4p12_T),FPM_InitFixedPoint_m(1.0, u4p12_T),
	FPM_InitFixedPoint_m(1.0, u4p12_T),FPM_InitFixedPoint_m(1.0, u4p12_T)},
	{FPM_InitFixedPoint_m(1.0, u4p12_T),FPM_InitFixedPoint_m(1.0, u4p12_T),
	FPM_InitFixedPoint_m(1.0, u4p12_T),FPM_InitFixedPoint_m(1.0, u4p12_T),
	FPM_InitFixedPoint_m(1.0, u4p12_T),FPM_InitFixedPoint_m(1.0, u4p12_T),
	FPM_InitFixedPoint_m(1.0, u4p12_T),FPM_InitFixedPoint_m(1.0, u4p12_T)},
	{FPM_InitFixedPoint_m(1.0, u4p12_T),FPM_InitFixedPoint_m(1.0, u4p12_T),
	FPM_InitFixedPoint_m(1.0, u4p12_T),FPM_InitFixedPoint_m(1.0, u4p12_T),
	FPM_InitFixedPoint_m(1.0, u4p12_T),FPM_InitFixedPoint_m(1.0, u4p12_T),
	FPM_InitFixedPoint_m(1.0, u4p12_T),FPM_InitFixedPoint_m(1.0, u4p12_T)},
	{FPM_InitFixedPoint_m(1.0, u4p12_T),FPM_InitFixedPoint_m(1.0, u4p12_T),
	FPM_InitFixedPoint_m(1.0, u4p12_T),FPM_InitFixedPoint_m(1.0, u4p12_T),
	FPM_InitFixedPoint_m(1.0, u4p12_T),FPM_InitFixedPoint_m(1.0, u4p12_T),
	FPM_InitFixedPoint_m(1.0, u4p12_T),FPM_InitFixedPoint_m(1.0, u4p12_T)},
	{FPM_InitFixedPoint_m(1.0, u4p12_T),FPM_InitFixedPoint_m(1.0, u4p12_T),
	FPM_InitFixedPoint_m(1.0, u4p12_T),FPM_InitFixedPoint_m(1.0, u4p12_T),
	FPM_InitFixedPoint_m(1.0, u4p12_T),FPM_InitFixedPoint_m(1.0, u4p12_T),
	FPM_InitFixedPoint_m(1.0, u4p12_T),FPM_InitFixedPoint_m(1.0, u4p12_T)},
	{FPM_InitFixedPoint_m(1.0, u4p12_T),FPM_InitFixedPoint_m(1.0, u4p12_T),
	FPM_InitFixedPoint_m(1.0, u4p12_T),FPM_InitFixedPoint_m(1.0, u4p12_T),
	FPM_InitFixedPoint_m(1.0, u4p12_T),FPM_InitFixedPoint_m(1.0, u4p12_T),
	FPM_InitFixedPoint_m(1.0, u4p12_T),FPM_InitFixedPoint_m(1.0, u4p12_T)},
	{FPM_InitFixedPoint_m(1.0, u4p12_T),FPM_InitFixedPoint_m(1.0, u4p12_T),
	FPM_InitFixedPoint_m(1.0, u4p12_T),FPM_InitFixedPoint_m(1.0, u4p12_T),
	FPM_InitFixedPoint_m(1.0, u4p12_T),FPM_InitFixedPoint_m(1.0, u4p12_T),
	FPM_InitFixedPoint_m(1.0, u4p12_T),FPM_InitFixedPoint_m(1.0, u4p12_T)},
	{FPM_InitFixedPoint_m(1.0, u4p12_T),FPM_InitFixedPoint_m(1.0, u4p12_T),
	FPM_InitFixedPoint_m(1.0, u4p12_T),FPM_InitFixedPoint_m(1.0, u4p12_T),
	FPM_InitFixedPoint_m(1.0, u4p12_T),FPM_InitFixedPoint_m(1.0, u4p12_T),
	FPM_InitFixedPoint_m(1.0, u4p12_T),FPM_InitFixedPoint_m(1.0, u4p12_T)},
	{FPM_InitFixedPoint_m(1.0, u4p12_T),FPM_InitFixedPoint_m(1.0, u4p12_T),
	FPM_InitFixedPoint_m(1.0, u4p12_T),FPM_InitFixedPoint_m(1.0, u4p12_T),
	FPM_InitFixedPoint_m(1.0, u4p12_T),FPM_InitFixedPoint_m(1.0, u4p12_T),
	FPM_InitFixedPoint_m(1.0, u4p12_T),FPM_InitFixedPoint_m(1.0, u4p12_T)},
	{FPM_InitFixedPoint_m(1.0, u4p12_T),FPM_InitFixedPoint_m(1.0, u4p12_T),
	FPM_InitFixedPoint_m(1.0, u4p12_T),FPM_InitFixedPoint_m(1.0, u4p12_T),
	FPM_InitFixedPoint_m(1.0, u4p12_T),FPM_InitFixedPoint_m(1.0, u4p12_T),
	FPM_InitFixedPoint_m(1.0, u4p12_T),FPM_InitFixedPoint_m(1.0, u4p12_T)}}, 1.0f, 100U, 633.0f, 400.0f, 50.0f, 10.0f, 0.5f, 2.0f, 2.0f, FPM_InitFixedPoint_m(3.2578125, u9p7_T), {FPM_InitFixedPoint_m(600.0, u12p4_T),
	FPM_InitFixedPoint_m(600.0, u12p4_T),
	FPM_InitFixedPoint_m(600.0, u12p4_T)}, {FPM_InitFixedPoint_m(0.0, u9p7_T), FPM_InitFixedPoint_m(5.0, u9p7_T),
	 FPM_InitFixedPoint_m(12.0, u9p7_T), FPM_InitFixedPoint_m(12.1, u9p7_T)}, {FPM_InitFixedPoint_m(8.8, u5p11_T), FPM_InitFixedPoint_m(8.8, u5p11_T),
	 FPM_InitFixedPoint_m(8.8, u5p11_T), FPM_InitFixedPoint_m(8.8, u5p11_T)}, {FPM_InitFixedPoint_m(6.0, u7p9_T), FPM_InitFixedPoint_m(6.0, u7p9_T),
	 FPM_InitFixedPoint_m(6.0, u7p9_T)}, {FPM_InitFixedPoint_m(0.0, u11p5_T), FPM_InitFixedPoint_m(1.0, u11p5_T),
	 FPM_InitFixedPoint_m(2.0, u11p5_T), FPM_InitFixedPoint_m(3.0, u11p5_T),
	 FPM_InitFixedPoint_m(4.0, u11p5_T), FPM_InitFixedPoint_m(7.0, u11p5_T)}, {FPM_InitFixedPoint_m(0.3, u12p4_T), FPM_InitFixedPoint_m(0.4, u12p4_T),
	 FPM_InitFixedPoint_m(0.5, u12p4_T), FPM_InitFixedPoint_m(1.0, u12p4_T),
	 FPM_InitFixedPoint_m(2.0, u12p4_T), FPM_InitFixedPoint_m(5.0, u12p4_T)}, {FPM_InitFixedPoint_m(0.0, u11p5_T),FPM_InitFixedPoint_m(50.0, u11p5_T),
	FPM_InitFixedPoint_m(100.0, u11p5_T),
	FPM_InitFixedPoint_m(167.5625, u11p5_T),
	FPM_InitFixedPoint_m(175.9375, u11p5_T),
	FPM_InitFixedPoint_m(188.5, u11p5_T),
	FPM_InitFixedPoint_m(201.0625, u11p5_T),
	FPM_InitFixedPoint_m(217.8125, u11p5_T),
	FPM_InitFixedPoint_m(230.375, u11p5_T),
	FPM_InitFixedPoint_m(259.6875, u11p5_T),
	FPM_InitFixedPoint_m(335.125, u11p5_T),
	FPM_InitFixedPoint_m(377.0, u11p5_T),
	FPM_InitFixedPoint_m(418.875, u11p5_T)}, {FPM_InitFixedPoint_m(0.3, u2p14_T), FPM_InitFixedPoint_m(0.3, u2p14_T),
	 FPM_InitFixedPoint_m(0.3, u2p14_T)}, {FPM_InitFixedPoint_m(2.0, u9p7_T), FPM_InitFixedPoint_m(1.5, u9p7_T),
	 FPM_InitFixedPoint_m(1.0, u9p7_T)}, {FPM_InitFixedPoint_m(0.0, u12p4_T), FPM_InitFixedPoint_m(2.0, u12p4_T),
	 FPM_InitFixedPoint_m(4.0, u12p4_T), FPM_InitFixedPoint_m(8.0, u12p4_T),
	 FPM_InitFixedPoint_m(20.0, u12p4_T),
	 FPM_InitFixedPoint_m(25.0, u12p4_T),
	 FPM_InitFixedPoint_m(30.0, u12p4_T)}, {FPM_InitFixedPoint_m(0.0, u6p10_T), FPM_InitFixedPoint_m(0.1, u6p10_T),
	 FPM_InitFixedPoint_m(0.2, u6p10_T), FPM_InitFixedPoint_m(0.3, u6p10_T),
	 FPM_InitFixedPoint_m(0.4, u6p10_T), FPM_InitFixedPoint_m(0.6, u6p10_T),
	 FPM_InitFixedPoint_m(0.7, u6p10_T), FPM_InitFixedPoint_m(0.8, u6p10_T),
	 FPM_InitFixedPoint_m(0.9, u6p10_T), FPM_InitFixedPoint_m(1.0, u6p10_T)}, {FPM_InitFixedPoint_m(0.000, u6p10_T),
	 FPM_InitFixedPoint_m(0.024, u6p10_T),
	 FPM_InitFixedPoint_m(0.095, u6p10_T),
	 FPM_InitFixedPoint_m(0.206, u6p10_T),
	 FPM_InitFixedPoint_m(0.345, u6p10_T),
	 FPM_InitFixedPoint_m(0.655, u6p10_T),
	 FPM_InitFixedPoint_m(0.794, u6p10_T),
	 FPM_InitFixedPoint_m(0.905, u6p10_T),
	 FPM_InitFixedPoint_m(0.976, u6p10_T),
	 FPM_InitFixedPoint_m(1.000, u6p10_T)}, {FPM_InitFixedPoint_m(0.0, u9p7_T), FPM_InitFixedPoint_m(2.0, u9p7_T),
	 FPM_InitFixedPoint_m(5.0, u9p7_T)}, {{FPM_InitFixedPoint_m(0.0000, u4p12_T),
	FPM_InitFixedPoint_m(0.3500, u4p12_T),
	FPM_InitFixedPoint_m(0.7000, u4p12_T),
	FPM_InitFixedPoint_m(1.1729, u4p12_T),
	FPM_InitFixedPoint_m(1.2443, u4p12_T),
	FPM_InitFixedPoint_m(1.3654, u4p12_T),
	FPM_InitFixedPoint_m(1.5075, u4p12_T),
	FPM_InitFixedPoint_m(1.6995, u4p12_T),
	FPM_InitFixedPoint_m(1.8543, u4p12_T),
	FPM_InitFixedPoint_m(2.1928, u4p12_T),
	FPM_InitFixedPoint_m(2.9626, u4p12_T),
	FPM_InitFixedPoint_m(3.3392, u4p12_T),
	FPM_InitFixedPoint_m(3.6821, u4p12_T)},
	{FPM_InitFixedPoint_m(0.0000, u4p12_T),
	FPM_InitFixedPoint_m(0.3500, u4p12_T),
	FPM_InitFixedPoint_m(0.7000, u4p12_T),
	FPM_InitFixedPoint_m(1.1729, u4p12_T),
	FPM_InitFixedPoint_m(1.2443, u4p12_T),
	FPM_InitFixedPoint_m(1.3654, u4p12_T),
	FPM_InitFixedPoint_m(1.5075, u4p12_T),
	FPM_InitFixedPoint_m(1.6995, u4p12_T),
	FPM_InitFixedPoint_m(1.8543, u4p12_T),
	FPM_InitFixedPoint_m(2.1928, u4p12_T),
	FPM_InitFixedPoint_m(2.9626, u4p12_T),
	FPM_InitFixedPoint_m(3.3392, u4p12_T),
	FPM_InitFixedPoint_m(3.6821, u4p12_T)},
	{FPM_InitFixedPoint_m(0.0000, u4p12_T),
	FPM_InitFixedPoint_m(0.3500, u4p12_T),
	FPM_InitFixedPoint_m(0.7000, u4p12_T),
	FPM_InitFixedPoint_m(1.1729, u4p12_T),
	FPM_InitFixedPoint_m(1.2443, u4p12_T),
	FPM_InitFixedPoint_m(1.3654, u4p12_T),
	FPM_InitFixedPoint_m(1.5075, u4p12_T),
	FPM_InitFixedPoint_m(1.6995, u4p12_T),
	FPM_InitFixedPoint_m(1.8543, u4p12_T),
	FPM_InitFixedPoint_m(2.1928, u4p12_T),
	FPM_InitFixedPoint_m(2.9626, u4p12_T),
	FPM_InitFixedPoint_m(3.3392, u4p12_T),
	FPM_InitFixedPoint_m(3.6821, u4p12_T)}}, {{FPM_InitFixedPoint_m(0.0, u9p7_T), FPM_InitFixedPoint_m(0.09, u9p7_T),
	 FPM_InitFixedPoint_m(0.25, u9p7_T), FPM_InitFixedPoint_m(0.74, u9p7_T),
	 FPM_InitFixedPoint_m(2.8, u9p7_T), FPM_InitFixedPoint_m(3.2, u9p7_T),
	 FPM_InitFixedPoint_m(3.257, u9p7_T)},
	 {FPM_InitFixedPoint_m(0.0, u9p7_T), FPM_InitFixedPoint_m(0.09, u9p7_T),
	 FPM_InitFixedPoint_m(0.25, u9p7_T), FPM_InitFixedPoint_m(0.74, u9p7_T),
	 FPM_InitFixedPoint_m(2.8, u9p7_T), FPM_InitFixedPoint_m(3.2, u9p7_T),
	 FPM_InitFixedPoint_m(3.257, u9p7_T)},
	 {FPM_InitFixedPoint_m(0.0, u9p7_T), FPM_InitFixedPoint_m(0.09, u9p7_T),
	 FPM_InitFixedPoint_m(0.25, u9p7_T), FPM_InitFixedPoint_m(0.74, u9p7_T),
	 FPM_InitFixedPoint_m(2.8, u9p7_T), FPM_InitFixedPoint_m(3.2, u9p7_T),
	 FPM_InitFixedPoint_m(3.257, u9p7_T)}}, { FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T) }, { FPM_InitFixedPoint_m(-40.0, s11p4_T),
	 FPM_InitFixedPoint_m(-35.0, s11p4_T),
	 FPM_InitFixedPoint_m(-30.0, s11p4_T),
	 FPM_InitFixedPoint_m(-20.0, s11p4_T),
	 FPM_InitFixedPoint_m(-10.0, s11p4_T),
	 FPM_InitFixedPoint_m(0.0, s11p4_T), FPM_InitFixedPoint_m(10.0, s11p4_T),
	 FPM_InitFixedPoint_m(20.0, s11p4_T),FPM_InitFixedPoint_m(30.0, s11p4_T),
	FPM_InitFixedPoint_m(40.0, s11p4_T),FPM_InitFixedPoint_m(50.0, s11p4_T),
	 FPM_InitFixedPoint_m(60.0, s11p4_T),FPM_InitFixedPoint_m(70.0, s11p4_T),
	 FPM_InitFixedPoint_m(90.0, s11p4_T) }, {FPM_InitFixedPoint_m(1.0, u2p14_T), FPM_InitFixedPoint_m(2.0, u2p14_T)}, {FPM_InitFixedPoint_m(0.0, u2p14_T), FPM_InitFixedPoint_m(1.0, u2p14_T)}, {FPM_InitFixedPoint_m(0.0, u8p8_T),  FPM_InitFixedPoint_m(2.0, u8p8_T),
	  FPM_InitFixedPoint_m(4.0, u8p8_T), FPM_InitFixedPoint_m(6.0, u8p8_T),
	 FPM_InitFixedPoint_m(8.0, u8p8_T)}, {FPM_InitFixedPoint_m(0.0, u8p8_T),  FPM_InitFixedPoint_m(2.0, u8p8_T),
	  FPM_InitFixedPoint_m(4.0, u8p8_T), FPM_InitFixedPoint_m(6.0, u8p8_T),
	 FPM_InitFixedPoint_m(8.0, u8p8_T)}, {{FPM_InitFixedPoint_m(1.0, u2p14_T),
	 FPM_InitFixedPoint_m(1.0, u2p14_T), FPM_InitFixedPoint_m(1.0, u2p14_T),
	 FPM_InitFixedPoint_m(1.0, u2p14_T), FPM_InitFixedPoint_m(1.0, u2p14_T)},
	{FPM_InitFixedPoint_m(1.0, u2p14_T), FPM_InitFixedPoint_m(1.0, u2p14_T),
	 FPM_InitFixedPoint_m(1.0, u2p14_T), FPM_InitFixedPoint_m(1.0, u2p14_T),
	 FPM_InitFixedPoint_m(1.0, u2p14_T)},{FPM_InitFixedPoint_m(1.0, u2p14_T),
	 FPM_InitFixedPoint_m(1.0, u2p14_T), FPM_InitFixedPoint_m(1.0, u2p14_T),
	 FPM_InitFixedPoint_m(1.0, u2p14_T), FPM_InitFixedPoint_m(1.0, u2p14_T)},
	{FPM_InitFixedPoint_m(1.0, u2p14_T), FPM_InitFixedPoint_m(1.0, u2p14_T),
	 FPM_InitFixedPoint_m(1.0, u2p14_T), FPM_InitFixedPoint_m(1.0, u2p14_T),
	 FPM_InitFixedPoint_m(1.0, u2p14_T)},{FPM_InitFixedPoint_m(1.0, u2p14_T),
	 FPM_InitFixedPoint_m(1.0, u2p14_T), FPM_InitFixedPoint_m(1.0, u2p14_T),
	 FPM_InitFixedPoint_m(1.0, u2p14_T), FPM_InitFixedPoint_m(1.0, u2p14_T)},
	{FPM_InitFixedPoint_m(1.0, u2p14_T), FPM_InitFixedPoint_m(1.0, u2p14_T),
	 FPM_InitFixedPoint_m(1.0, u2p14_T), FPM_InitFixedPoint_m(1.0, u2p14_T),
	 FPM_InitFixedPoint_m(1.0, u2p14_T)}}, {{FPM_InitFixedPoint_m(1.0, u2p14_T),
	 FPM_InitFixedPoint_m(1.0, u2p14_T), FPM_InitFixedPoint_m(1.0, u2p14_T),
	 FPM_InitFixedPoint_m(1.0, u2p14_T), FPM_InitFixedPoint_m(1.0, u2p14_T)},
	{FPM_InitFixedPoint_m(1.0, u2p14_T), FPM_InitFixedPoint_m(1.0, u2p14_T),
	 FPM_InitFixedPoint_m(1.0, u2p14_T), FPM_InitFixedPoint_m(1.0, u2p14_T),
	 FPM_InitFixedPoint_m(1.0, u2p14_T)},{FPM_InitFixedPoint_m(1.0, u2p14_T),
	 FPM_InitFixedPoint_m(1.0, u2p14_T), FPM_InitFixedPoint_m(1.0, u2p14_T),
	 FPM_InitFixedPoint_m(1.0, u2p14_T), FPM_InitFixedPoint_m(1.0, u2p14_T)},
	{FPM_InitFixedPoint_m(1.0, u2p14_T), FPM_InitFixedPoint_m(1.0, u2p14_T),
	 FPM_InitFixedPoint_m(1.0, u2p14_T), FPM_InitFixedPoint_m(1.0, u2p14_T),
	 FPM_InitFixedPoint_m(1.0, u2p14_T)},{FPM_InitFixedPoint_m(1.0, u2p14_T),
	 FPM_InitFixedPoint_m(1.0, u2p14_T), FPM_InitFixedPoint_m(1.0, u2p14_T),
	 FPM_InitFixedPoint_m(1.0, u2p14_T), FPM_InitFixedPoint_m(1.0, u2p14_T)},
	{FPM_InitFixedPoint_m(1.0, u2p14_T), FPM_InitFixedPoint_m(1.0, u2p14_T),
	 FPM_InitFixedPoint_m(1.0, u2p14_T), FPM_InitFixedPoint_m(1.0, u2p14_T),
	 FPM_InitFixedPoint_m(1.0, u2p14_T)}}, {{FPM_InitFixedPoint_m(0.0, u2p14_T),
	 FPM_InitFixedPoint_m(0.0, u2p14_T), FPM_InitFixedPoint_m(0.0, u2p14_T),
	 FPM_InitFixedPoint_m(0.0, u2p14_T), FPM_InitFixedPoint_m(0.0, u2p14_T)},
	{FPM_InitFixedPoint_m(0.25, u2p14_T),
	 FPM_InitFixedPoint_m(0.25, u2p14_T),
	 FPM_InitFixedPoint_m(0.25, u2p14_T),
	 FPM_InitFixedPoint_m(0.25, u2p14_T),
	 FPM_InitFixedPoint_m(0.25, u2p14_T)},
	{FPM_InitFixedPoint_m(0.5, u2p14_T), FPM_InitFixedPoint_m(0.5, u2p14_T),
	 FPM_InitFixedPoint_m(0.5, u2p14_T), FPM_InitFixedPoint_m(0.5, u2p14_T),
	 FPM_InitFixedPoint_m(0.5, u2p14_T)},
	{FPM_InitFixedPoint_m(0.75, u2p14_T),
	 FPM_InitFixedPoint_m(0.75, u2p14_T),
	 FPM_InitFixedPoint_m(0.75, u2p14_T),
	 FPM_InitFixedPoint_m(0.75, u2p14_T),
	 FPM_InitFixedPoint_m(0.75, u2p14_T)},
	{FPM_InitFixedPoint_m(1.0, u2p14_T), FPM_InitFixedPoint_m(1.0, u2p14_T),
	 FPM_InitFixedPoint_m(1.0, u2p14_T), FPM_InitFixedPoint_m(1.0, u2p14_T),
	 FPM_InitFixedPoint_m(1.0, u2p14_T)},{FPM_InitFixedPoint_m(1.0, u2p14_T),
	 FPM_InitFixedPoint_m(1.0, u2p14_T), FPM_InitFixedPoint_m(1.0, u2p14_T),
	 FPM_InitFixedPoint_m(1.0, u2p14_T), FPM_InitFixedPoint_m(1.0, u2p14_T)}}, {{FPM_InitFixedPoint_m(0.0, u2p14_T),
	 FPM_InitFixedPoint_m(0.0, u2p14_T), FPM_InitFixedPoint_m(0.0, u2p14_T),
	 FPM_InitFixedPoint_m(0.0, u2p14_T), FPM_InitFixedPoint_m(0.0, u2p14_T)},
	{FPM_InitFixedPoint_m(0.25, u2p14_T),
	 FPM_InitFixedPoint_m(0.25, u2p14_T),
	 FPM_InitFixedPoint_m(0.25, u2p14_T),
	 FPM_InitFixedPoint_m(0.25, u2p14_T),
	 FPM_InitFixedPoint_m(0.25, u2p14_T)},
	{FPM_InitFixedPoint_m(0.5, u2p14_T), FPM_InitFixedPoint_m(0.5, u2p14_T),
	 FPM_InitFixedPoint_m(0.5, u2p14_T), FPM_InitFixedPoint_m(0.5, u2p14_T),
	 FPM_InitFixedPoint_m(0.5, u2p14_T)},
	{FPM_InitFixedPoint_m(0.75, u2p14_T),
	 FPM_InitFixedPoint_m(0.75, u2p14_T),
	 FPM_InitFixedPoint_m(0.75, u2p14_T),
	 FPM_InitFixedPoint_m(0.75, u2p14_T),
	 FPM_InitFixedPoint_m(0.75, u2p14_T)},
	{FPM_InitFixedPoint_m(1.0, u2p14_T), FPM_InitFixedPoint_m(1.0, u2p14_T),
	 FPM_InitFixedPoint_m(1.0, u2p14_T), FPM_InitFixedPoint_m(1.0, u2p14_T),
	 FPM_InitFixedPoint_m(1.0, u2p14_T)},{FPM_InitFixedPoint_m(1.0, u2p14_T),
	 FPM_InitFixedPoint_m(1.0, u2p14_T), FPM_InitFixedPoint_m(1.0, u2p14_T),
	 FPM_InitFixedPoint_m(1.0, u2p14_T), FPM_InitFixedPoint_m(1.0, u2p14_T)}}, 0.5f, 3.0f, TRUE, TRUE, TRUE, {FPM_InitFixedPoint_m(0.0, u4p12_T),FPM_InitFixedPoint_m(1.0, u4p12_T),
	FPM_InitFixedPoint_m(2.0, u4p12_T),FPM_InitFixedPoint_m(3.0, u4p12_T),
	FPM_InitFixedPoint_m(4.0, u4p12_T),FPM_InitFixedPoint_m(7.0, u4p12_T)}, {FPM_InitFixedPoint_m(0.3, u7p9_T),FPM_InitFixedPoint_m(0.4, u7p9_T),
	FPM_InitFixedPoint_m(0.5, u7p9_T),FPM_InitFixedPoint_m(1.0, u7p9_T),
	FPM_InitFixedPoint_m(2.0, u7p9_T),FPM_InitFixedPoint_m(5.0, u7p9_T)}, {FPM_InitFixedPoint_m(0.0, u2p14_T), FPM_InitFixedPoint_m(0.1, u2p14_T),
	FPM_InitFixedPoint_m(0.2, u2p14_T), FPM_InitFixedPoint_m(0.3, u2p14_T),
	 FPM_InitFixedPoint_m(0.4, u2p14_T), FPM_InitFixedPoint_m(0.6, u2p14_T),
	 FPM_InitFixedPoint_m(0.7, u2p14_T), FPM_InitFixedPoint_m(0.8, u2p14_T),
	 FPM_InitFixedPoint_m(0.9, u2p14_T), FPM_InitFixedPoint_m(1.0, u2p14_T)}, {FPM_InitFixedPoint_m(0.0, u2p14_T),
	FPM_InitFixedPoint_m(0.024, u2p14_T),
	 FPM_InitFixedPoint_m(0.095, u2p14_T),
	 FPM_InitFixedPoint_m(0.206, u2p14_T),
	 FPM_InitFixedPoint_m(0.345, u2p14_T),
	 FPM_InitFixedPoint_m(0.655, u2p14_T),
	 FPM_InitFixedPoint_m(0.794, u2p14_T),
	 FPM_InitFixedPoint_m(0.905, u2p14_T),
	 FPM_InitFixedPoint_m(0.976, u2p14_T),
	 FPM_InitFixedPoint_m(1.0, u2p14_T)}, 10.0f, 3.0f, 0.05f, 10.0f, 180.0f, 0.5f, 0.45f, 20.0f, 0.35f, 180.0f, 10.0f, 0.5f, 0.2f, 2.5f, 0.25f, 30.0f, FPM_InitFixedPoint_m(140.0, u12p4_T), FPM_InitFixedPoint_m(120.0, u12p4_T), 0.199996948f, 5.0f, 5.0f, 0.002f, 0.5f, 0.01f, 0.01171875f, FPM_InitFixedPoint_m(500.0, u16p0_T), 0.05078125f, 0.0005f, 0.209f, 0.21f, 14.0f, 4.0f, 0.99999f, 0.5f, 90.0f, FPM_InitFixedPoint_m(500.0, u16p0_T), 3.0f, 0.05f, 0.125f, 8000U, 0.2f, { FPM_InitFixedPoint_m(14.75390625, u7p9_T),
	FPM_InitFixedPoint_m(20.0, u7p9_T),FPM_InitFixedPoint_m(30.0, u7p9_T) }, { FPM_InitFixedPoint_m(145.0, s8p7_T),
	 FPM_InitFixedPoint_m(145.0, s8p7_T),
	 FPM_InitFixedPoint_m(145.0, s8p7_T) }, { FPM_InitFixedPoint_m(8.0, u7p9_T), FPM_InitFixedPoint_m(9.0, u7p9_T),
	 FPM_InitFixedPoint_m(10.0, u7p9_T), FPM_InitFixedPoint_m(23.0, u7p9_T),
	 FPM_InitFixedPoint_m(24.0, u7p9_T), FPM_InitFixedPoint_m(25.0, u7p9_T) }, { FPM_InitFixedPoint_m(0.0, u2p14_T),FPM_InitFixedPoint_m(0.5, u2p14_T),
	FPM_InitFixedPoint_m(1.0, u2p14_T),FPM_InitFixedPoint_m(1.0, u2p14_T),
	FPM_InitFixedPoint_m(0.5, u2p14_T),FPM_InitFixedPoint_m(0.0, u2p14_T) }, 3.0f };

#pragma DATA_SECTION(k_TunSet0Per0_Cnt_Str, ".TunCal0Per0");
CONST(TUNING_P_Str, CAL_CONST)k_TunSet0Per0_Cnt_Str = { 1.0f, {{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.0234375, s4p11_T),
	FPM_InitFixedPoint_m(0.03515625, s4p11_T),
	FPM_InitFixedPoint_m(0.05078125, s4p11_T),
	FPM_InitFixedPoint_m(0.0703125, s4p11_T),
	FPM_InitFixedPoint_m(0.09375, s4p11_T),
	FPM_InitFixedPoint_m(0.12109375, s4p11_T),
	FPM_InitFixedPoint_m(0.15234375, s4p11_T),
	FPM_InitFixedPoint_m(0.18359375, s4p11_T),
	FPM_InitFixedPoint_m(0.21875, s4p11_T),
	FPM_InitFixedPoint_m(0.26171875, s4p11_T),
	FPM_InitFixedPoint_m(0.30078125, s4p11_T),
	FPM_InitFixedPoint_m(0.34765625, s4p11_T),
	FPM_InitFixedPoint_m(0.3984375, s4p11_T),
	FPM_InitFixedPoint_m(0.44921875, s4p11_T),
	FPM_InitFixedPoint_m(0.5078125, s4p11_T),
	FPM_InitFixedPoint_m(0.56640625, s4p11_T),
	FPM_InitFixedPoint_m(0.62890625, s4p11_T),
	FPM_InitFixedPoint_m(0.69140625, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.03125, s4p11_T),
	FPM_InitFixedPoint_m(0.05078125, s4p11_T),
	FPM_InitFixedPoint_m(0.07421875, s4p11_T),
	FPM_InitFixedPoint_m(0.10546875, s4p11_T),
	FPM_InitFixedPoint_m(0.140625, s4p11_T),
	FPM_InitFixedPoint_m(0.18359375, s4p11_T),
	FPM_InitFixedPoint_m(0.23046875, s4p11_T),
	FPM_InitFixedPoint_m(0.28125, s4p11_T),
	FPM_InitFixedPoint_m(0.33984375, s4p11_T),
	FPM_InitFixedPoint_m(0.40234375, s4p11_T),
	FPM_InitFixedPoint_m(0.47265625, s4p11_T),
	FPM_InitFixedPoint_m(0.546875, s4p11_T),
	FPM_InitFixedPoint_m(0.625, s4p11_T),
	FPM_InitFixedPoint_m(0.7109375, s4p11_T),
	FPM_InitFixedPoint_m(0.80078125, s4p11_T),
	FPM_InitFixedPoint_m(0.89453125, s4p11_T),
	FPM_InitFixedPoint_m(0.99609375, s4p11_T),
	FPM_InitFixedPoint_m(1.10546875, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.015625, s4p11_T),
	FPM_InitFixedPoint_m(0.0390625, s4p11_T),
	FPM_InitFixedPoint_m(0.06640625, s4p11_T),
	FPM_InitFixedPoint_m(0.09765625, s4p11_T),
	FPM_InitFixedPoint_m(0.1328125, s4p11_T),
	FPM_InitFixedPoint_m(0.17578125, s4p11_T),
	FPM_InitFixedPoint_m(0.21875, s4p11_T),
	FPM_InitFixedPoint_m(0.26953125, s4p11_T),
	FPM_InitFixedPoint_m(0.328125, s4p11_T),
	FPM_InitFixedPoint_m(0.38671875, s4p11_T),
	FPM_InitFixedPoint_m(0.453125, s4p11_T),
	FPM_InitFixedPoint_m(0.5234375, s4p11_T),
	FPM_InitFixedPoint_m(0.59765625, s4p11_T),
	FPM_InitFixedPoint_m(0.6796875, s4p11_T),
	FPM_InitFixedPoint_m(0.76171875, s4p11_T),
	FPM_InitFixedPoint_m(0.8515625, s4p11_T),
	FPM_InitFixedPoint_m(0.94921875, s4p11_T),
	FPM_InitFixedPoint_m(1.046875, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.015625, s4p11_T),
	FPM_InitFixedPoint_m(0.03515625, s4p11_T),
	FPM_InitFixedPoint_m(0.0625, s4p11_T),
	FPM_InitFixedPoint_m(0.0859375, s4p11_T),
	FPM_InitFixedPoint_m(0.1171875, s4p11_T),
	FPM_InitFixedPoint_m(0.15234375, s4p11_T),
	FPM_InitFixedPoint_m(0.1875, s4p11_T),
	FPM_InitFixedPoint_m(0.23046875, s4p11_T),
	FPM_InitFixedPoint_m(0.2734375, s4p11_T),
	FPM_InitFixedPoint_m(0.3203125, s4p11_T),
	FPM_InitFixedPoint_m(0.37109375, s4p11_T),
	FPM_InitFixedPoint_m(0.42578125, s4p11_T),
	FPM_InitFixedPoint_m(0.48046875, s4p11_T),
	FPM_InitFixedPoint_m(0.54296875, s4p11_T),
	FPM_InitFixedPoint_m(0.60546875, s4p11_T),
	FPM_InitFixedPoint_m(0.671875, s4p11_T),
	FPM_InitFixedPoint_m(0.7421875, s4p11_T),
	FPM_InitFixedPoint_m(0.81640625, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.015625, s4p11_T),
	FPM_InitFixedPoint_m(0.03515625, s4p11_T),
	FPM_InitFixedPoint_m(0.05859375, s4p11_T),
	FPM_InitFixedPoint_m(0.0859375, s4p11_T),
	FPM_InitFixedPoint_m(0.11328125, s4p11_T),
	FPM_InitFixedPoint_m(0.14453125, s4p11_T),
	FPM_InitFixedPoint_m(0.17578125, s4p11_T),
	FPM_InitFixedPoint_m(0.21484375, s4p11_T),
	FPM_InitFixedPoint_m(0.25390625, s4p11_T),
	FPM_InitFixedPoint_m(0.29296875, s4p11_T),
	FPM_InitFixedPoint_m(0.33984375, s4p11_T),
	FPM_InitFixedPoint_m(0.38671875, s4p11_T),
	FPM_InitFixedPoint_m(0.4375, s4p11_T),
	FPM_InitFixedPoint_m(0.48828125, s4p11_T),
	FPM_InitFixedPoint_m(0.546875, s4p11_T),
	FPM_InitFixedPoint_m(0.60546875, s4p11_T),
	FPM_InitFixedPoint_m(0.66796875, s4p11_T),
	FPM_InitFixedPoint_m(0.73046875, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.01, s4p11_T),
	FPM_InitFixedPoint_m(0.02, s4p11_T),FPM_InitFixedPoint_m(0.035, s4p11_T),
	FPM_InitFixedPoint_m(0.06, s4p11_T),FPM_InitFixedPoint_m(0.08, s4p11_T),
	FPM_InitFixedPoint_m(0.12, s4p11_T),FPM_InitFixedPoint_m(0.16, s4p11_T),
	FPM_InitFixedPoint_m(0.2, s4p11_T),FPM_InitFixedPoint_m(0.24, s4p11_T),
	FPM_InitFixedPoint_m(0.29, s4p11_T),FPM_InitFixedPoint_m(0.35, s4p11_T),
	FPM_InitFixedPoint_m(0.39, s4p11_T),FPM_InitFixedPoint_m(0.46, s4p11_T),
	FPM_InitFixedPoint_m(0.51171875, s4p11_T),
	FPM_InitFixedPoint_m(0.5625, s4p11_T),
	FPM_InitFixedPoint_m(0.62109375, s4p11_T),
	FPM_InitFixedPoint_m(0.6796875, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.01, s4p11_T),
	FPM_InitFixedPoint_m(0.02, s4p11_T),FPM_InitFixedPoint_m(0.035, s4p11_T),
	FPM_InitFixedPoint_m(0.06, s4p11_T),FPM_InitFixedPoint_m(0.08, s4p11_T),
	FPM_InitFixedPoint_m(0.1, s4p11_T),FPM_InitFixedPoint_m(0.14, s4p11_T),
	FPM_InitFixedPoint_m(0.18, s4p11_T),FPM_InitFixedPoint_m(0.21, s4p11_T),
	FPM_InitFixedPoint_m(0.26, s4p11_T),FPM_InitFixedPoint_m(0.3, s4p11_T),
	FPM_InitFixedPoint_m(0.34, s4p11_T),
	FPM_InitFixedPoint_m(0.3984375, s4p11_T),
	FPM_InitFixedPoint_m(0.4375, s4p11_T),
	FPM_InitFixedPoint_m(0.48046875, s4p11_T),
	FPM_InitFixedPoint_m(0.52734375, s4p11_T),
	FPM_InitFixedPoint_m(0.57421875, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.01, s4p11_T),FPM_InitFixedPoint_m(0.03, s4p11_T),
	FPM_InitFixedPoint_m(0.05, s4p11_T),FPM_InitFixedPoint_m(0.07, s4p11_T),
	FPM_InitFixedPoint_m(0.095, s4p11_T),FPM_InitFixedPoint_m(0.13, s4p11_T),
	FPM_InitFixedPoint_m(0.16, s4p11_T),FPM_InitFixedPoint_m(0.2, s4p11_T),
	FPM_InitFixedPoint_m(0.24, s4p11_T),FPM_InitFixedPoint_m(0.28, s4p11_T),
	FPM_InitFixedPoint_m(0.32, s4p11_T),
	FPM_InitFixedPoint_m(0.3671875, s4p11_T),
	FPM_InitFixedPoint_m(0.40625, s4p11_T),
	FPM_InitFixedPoint_m(0.4453125, s4p11_T),
	FPM_InitFixedPoint_m(0.48828125, s4p11_T),
	FPM_InitFixedPoint_m(0.53125, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.01, s4p11_T),FPM_InitFixedPoint_m(0.015, s4p11_T),
	FPM_InitFixedPoint_m(0.03, s4p11_T),FPM_InitFixedPoint_m(0.05, s4p11_T),
	FPM_InitFixedPoint_m(0.07, s4p11_T),FPM_InitFixedPoint_m(0.1, s4p11_T),
	FPM_InitFixedPoint_m(0.135, s4p11_T),FPM_InitFixedPoint_m(0.16, s4p11_T),
	FPM_InitFixedPoint_m(0.2, s4p11_T),FPM_InitFixedPoint_m(0.23, s4p11_T),
	FPM_InitFixedPoint_m(0.26, s4p11_T),FPM_InitFixedPoint_m(0.31, s4p11_T),
	FPM_InitFixedPoint_m(0.35, s4p11_T),FPM_InitFixedPoint_m(0.38, s4p11_T),
	FPM_InitFixedPoint_m(0.43, s4p11_T),
	FPM_InitFixedPoint_m(0.47265625, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.01, s4p11_T),FPM_InitFixedPoint_m(0.015, s4p11_T),
	FPM_InitFixedPoint_m(0.03, s4p11_T),FPM_InitFixedPoint_m(0.05, s4p11_T),
	FPM_InitFixedPoint_m(0.07, s4p11_T),FPM_InitFixedPoint_m(0.1, s4p11_T),
	FPM_InitFixedPoint_m(0.135, s4p11_T),FPM_InitFixedPoint_m(0.16, s4p11_T),
	FPM_InitFixedPoint_m(0.2, s4p11_T),FPM_InitFixedPoint_m(0.23, s4p11_T),
	FPM_InitFixedPoint_m(0.26, s4p11_T),FPM_InitFixedPoint_m(0.31, s4p11_T),
	FPM_InitFixedPoint_m(0.35, s4p11_T),FPM_InitFixedPoint_m(0.38, s4p11_T),
	FPM_InitFixedPoint_m(0.43, s4p11_T),
	FPM_InitFixedPoint_m(0.47265625, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.01, s4p11_T),FPM_InitFixedPoint_m(0.015, s4p11_T),
	FPM_InitFixedPoint_m(0.03, s4p11_T),FPM_InitFixedPoint_m(0.05, s4p11_T),
	FPM_InitFixedPoint_m(0.07, s4p11_T),FPM_InitFixedPoint_m(0.1, s4p11_T),
	FPM_InitFixedPoint_m(0.135, s4p11_T),FPM_InitFixedPoint_m(0.16, s4p11_T),
	FPM_InitFixedPoint_m(0.2, s4p11_T),FPM_InitFixedPoint_m(0.23, s4p11_T),
	FPM_InitFixedPoint_m(0.26, s4p11_T),FPM_InitFixedPoint_m(0.31, s4p11_T),
	FPM_InitFixedPoint_m(0.35, s4p11_T),FPM_InitFixedPoint_m(0.38, s4p11_T),
	FPM_InitFixedPoint_m(0.43, s4p11_T),
	FPM_InitFixedPoint_m(0.47265625, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.01, s4p11_T),FPM_InitFixedPoint_m(0.015, s4p11_T),
	FPM_InitFixedPoint_m(0.03, s4p11_T),FPM_InitFixedPoint_m(0.05, s4p11_T),
	FPM_InitFixedPoint_m(0.07, s4p11_T),FPM_InitFixedPoint_m(0.1, s4p11_T),
	FPM_InitFixedPoint_m(0.135, s4p11_T),FPM_InitFixedPoint_m(0.16, s4p11_T),
	FPM_InitFixedPoint_m(0.2, s4p11_T),FPM_InitFixedPoint_m(0.23, s4p11_T),
	FPM_InitFixedPoint_m(0.26, s4p11_T),FPM_InitFixedPoint_m(0.31, s4p11_T),
	FPM_InitFixedPoint_m(0.35, s4p11_T),FPM_InitFixedPoint_m(0.38, s4p11_T),
	FPM_InitFixedPoint_m(0.43, s4p11_T),
	FPM_InitFixedPoint_m(0.47265625, s4p11_T)}}, {{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.0234375, s4p11_T),
	FPM_InitFixedPoint_m(0.03515625, s4p11_T),
	FPM_InitFixedPoint_m(0.05078125, s4p11_T),
	FPM_InitFixedPoint_m(0.0703125, s4p11_T),
	FPM_InitFixedPoint_m(0.09375, s4p11_T),
	FPM_InitFixedPoint_m(0.12109375, s4p11_T),
	FPM_InitFixedPoint_m(0.15234375, s4p11_T),
	FPM_InitFixedPoint_m(0.18359375, s4p11_T),
	FPM_InitFixedPoint_m(0.21875, s4p11_T),
	FPM_InitFixedPoint_m(0.26171875, s4p11_T),
	FPM_InitFixedPoint_m(0.30078125, s4p11_T),
	FPM_InitFixedPoint_m(0.34765625, s4p11_T),
	FPM_InitFixedPoint_m(0.3984375, s4p11_T),
	FPM_InitFixedPoint_m(0.44921875, s4p11_T),
	FPM_InitFixedPoint_m(0.5078125, s4p11_T),
	FPM_InitFixedPoint_m(0.56640625, s4p11_T),
	FPM_InitFixedPoint_m(0.62890625, s4p11_T),
	FPM_InitFixedPoint_m(0.69140625, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.03125, s4p11_T),
	FPM_InitFixedPoint_m(0.05078125, s4p11_T),
	FPM_InitFixedPoint_m(0.07421875, s4p11_T),
	FPM_InitFixedPoint_m(0.10546875, s4p11_T),
	FPM_InitFixedPoint_m(0.140625, s4p11_T),
	FPM_InitFixedPoint_m(0.18359375, s4p11_T),
	FPM_InitFixedPoint_m(0.23046875, s4p11_T),
	FPM_InitFixedPoint_m(0.28125, s4p11_T),
	FPM_InitFixedPoint_m(0.33984375, s4p11_T),
	FPM_InitFixedPoint_m(0.40234375, s4p11_T),
	FPM_InitFixedPoint_m(0.47265625, s4p11_T),
	FPM_InitFixedPoint_m(0.546875, s4p11_T),
	FPM_InitFixedPoint_m(0.625, s4p11_T),
	FPM_InitFixedPoint_m(0.7109375, s4p11_T),
	FPM_InitFixedPoint_m(0.80078125, s4p11_T),
	FPM_InitFixedPoint_m(0.89453125, s4p11_T),
	FPM_InitFixedPoint_m(0.99609375, s4p11_T),
	FPM_InitFixedPoint_m(1.10546875, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.015625, s4p11_T),
	FPM_InitFixedPoint_m(0.0390625, s4p11_T),
	FPM_InitFixedPoint_m(0.06640625, s4p11_T),
	FPM_InitFixedPoint_m(0.09765625, s4p11_T),
	FPM_InitFixedPoint_m(0.1328125, s4p11_T),
	FPM_InitFixedPoint_m(0.17578125, s4p11_T),
	FPM_InitFixedPoint_m(0.21875, s4p11_T),
	FPM_InitFixedPoint_m(0.26953125, s4p11_T),
	FPM_InitFixedPoint_m(0.328125, s4p11_T),
	FPM_InitFixedPoint_m(0.38671875, s4p11_T),
	FPM_InitFixedPoint_m(0.453125, s4p11_T),
	FPM_InitFixedPoint_m(0.5234375, s4p11_T),
	FPM_InitFixedPoint_m(0.59765625, s4p11_T),
	FPM_InitFixedPoint_m(0.6796875, s4p11_T),
	FPM_InitFixedPoint_m(0.76171875, s4p11_T),
	FPM_InitFixedPoint_m(0.8515625, s4p11_T),
	FPM_InitFixedPoint_m(0.94921875, s4p11_T),
	FPM_InitFixedPoint_m(1.046875, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.015625, s4p11_T),
	FPM_InitFixedPoint_m(0.03515625, s4p11_T),
	FPM_InitFixedPoint_m(0.0625, s4p11_T),
	FPM_InitFixedPoint_m(0.0859375, s4p11_T),
	FPM_InitFixedPoint_m(0.1171875, s4p11_T),
	FPM_InitFixedPoint_m(0.15234375, s4p11_T),
	FPM_InitFixedPoint_m(0.1875, s4p11_T),
	FPM_InitFixedPoint_m(0.23046875, s4p11_T),
	FPM_InitFixedPoint_m(0.2734375, s4p11_T),
	FPM_InitFixedPoint_m(0.3203125, s4p11_T),
	FPM_InitFixedPoint_m(0.37109375, s4p11_T),
	FPM_InitFixedPoint_m(0.42578125, s4p11_T),
	FPM_InitFixedPoint_m(0.48046875, s4p11_T),
	FPM_InitFixedPoint_m(0.54296875, s4p11_T),
	FPM_InitFixedPoint_m(0.60546875, s4p11_T),
	FPM_InitFixedPoint_m(0.671875, s4p11_T),
	FPM_InitFixedPoint_m(0.7421875, s4p11_T),
	FPM_InitFixedPoint_m(0.81640625, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.015625, s4p11_T),
	FPM_InitFixedPoint_m(0.03515625, s4p11_T),
	FPM_InitFixedPoint_m(0.05859375, s4p11_T),
	FPM_InitFixedPoint_m(0.0859375, s4p11_T),
	FPM_InitFixedPoint_m(0.11328125, s4p11_T),
	FPM_InitFixedPoint_m(0.14453125, s4p11_T),
	FPM_InitFixedPoint_m(0.17578125, s4p11_T),
	FPM_InitFixedPoint_m(0.21484375, s4p11_T),
	FPM_InitFixedPoint_m(0.25390625, s4p11_T),
	FPM_InitFixedPoint_m(0.29296875, s4p11_T),
	FPM_InitFixedPoint_m(0.33984375, s4p11_T),
	FPM_InitFixedPoint_m(0.38671875, s4p11_T),
	FPM_InitFixedPoint_m(0.4375, s4p11_T),
	FPM_InitFixedPoint_m(0.48828125, s4p11_T),
	FPM_InitFixedPoint_m(0.546875, s4p11_T),
	FPM_InitFixedPoint_m(0.60546875, s4p11_T),
	FPM_InitFixedPoint_m(0.66796875, s4p11_T),
	FPM_InitFixedPoint_m(0.73046875, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.01, s4p11_T),
	FPM_InitFixedPoint_m(0.02, s4p11_T),FPM_InitFixedPoint_m(0.035, s4p11_T),
	FPM_InitFixedPoint_m(0.06, s4p11_T),FPM_InitFixedPoint_m(0.08, s4p11_T),
	FPM_InitFixedPoint_m(0.12, s4p11_T),FPM_InitFixedPoint_m(0.16, s4p11_T),
	FPM_InitFixedPoint_m(0.2, s4p11_T),FPM_InitFixedPoint_m(0.24, s4p11_T),
	FPM_InitFixedPoint_m(0.29, s4p11_T),FPM_InitFixedPoint_m(0.35, s4p11_T),
	FPM_InitFixedPoint_m(0.39, s4p11_T),FPM_InitFixedPoint_m(0.46, s4p11_T),
	FPM_InitFixedPoint_m(0.51171875, s4p11_T),
	FPM_InitFixedPoint_m(0.5625, s4p11_T),
	FPM_InitFixedPoint_m(0.62109375, s4p11_T),
	FPM_InitFixedPoint_m(0.6796875, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.01, s4p11_T),
	FPM_InitFixedPoint_m(0.02, s4p11_T),FPM_InitFixedPoint_m(0.035, s4p11_T),
	FPM_InitFixedPoint_m(0.06, s4p11_T),FPM_InitFixedPoint_m(0.08, s4p11_T),
	FPM_InitFixedPoint_m(0.1, s4p11_T),FPM_InitFixedPoint_m(0.14, s4p11_T),
	FPM_InitFixedPoint_m(0.18, s4p11_T),FPM_InitFixedPoint_m(0.21, s4p11_T),
	FPM_InitFixedPoint_m(0.26, s4p11_T),FPM_InitFixedPoint_m(0.3, s4p11_T),
	FPM_InitFixedPoint_m(0.34, s4p11_T),
	FPM_InitFixedPoint_m(0.3984375, s4p11_T),
	FPM_InitFixedPoint_m(0.4375, s4p11_T),
	FPM_InitFixedPoint_m(0.48046875, s4p11_T),
	FPM_InitFixedPoint_m(0.52734375, s4p11_T),
	FPM_InitFixedPoint_m(0.57421875, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.01, s4p11_T),FPM_InitFixedPoint_m(0.03, s4p11_T),
	FPM_InitFixedPoint_m(0.05, s4p11_T),FPM_InitFixedPoint_m(0.07, s4p11_T),
	FPM_InitFixedPoint_m(0.095, s4p11_T),FPM_InitFixedPoint_m(0.13, s4p11_T),
	FPM_InitFixedPoint_m(0.16, s4p11_T),FPM_InitFixedPoint_m(0.2, s4p11_T),
	FPM_InitFixedPoint_m(0.24, s4p11_T),FPM_InitFixedPoint_m(0.28, s4p11_T),
	FPM_InitFixedPoint_m(0.32, s4p11_T),
	FPM_InitFixedPoint_m(0.3671875, s4p11_T),
	FPM_InitFixedPoint_m(0.40625, s4p11_T),
	FPM_InitFixedPoint_m(0.4453125, s4p11_T),
	FPM_InitFixedPoint_m(0.48828125, s4p11_T),
	FPM_InitFixedPoint_m(0.53125, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.01, s4p11_T),FPM_InitFixedPoint_m(0.015, s4p11_T),
	FPM_InitFixedPoint_m(0.03, s4p11_T),FPM_InitFixedPoint_m(0.05, s4p11_T),
	FPM_InitFixedPoint_m(0.07, s4p11_T),FPM_InitFixedPoint_m(0.1, s4p11_T),
	FPM_InitFixedPoint_m(0.135, s4p11_T),FPM_InitFixedPoint_m(0.16, s4p11_T),
	FPM_InitFixedPoint_m(0.2, s4p11_T),FPM_InitFixedPoint_m(0.23, s4p11_T),
	FPM_InitFixedPoint_m(0.26, s4p11_T),FPM_InitFixedPoint_m(0.31, s4p11_T),
	FPM_InitFixedPoint_m(0.35, s4p11_T),FPM_InitFixedPoint_m(0.38, s4p11_T),
	FPM_InitFixedPoint_m(0.43, s4p11_T),
	FPM_InitFixedPoint_m(0.47265625, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.01, s4p11_T),FPM_InitFixedPoint_m(0.015, s4p11_T),
	FPM_InitFixedPoint_m(0.03, s4p11_T),FPM_InitFixedPoint_m(0.05, s4p11_T),
	FPM_InitFixedPoint_m(0.07, s4p11_T),FPM_InitFixedPoint_m(0.1, s4p11_T),
	FPM_InitFixedPoint_m(0.135, s4p11_T),FPM_InitFixedPoint_m(0.16, s4p11_T),
	FPM_InitFixedPoint_m(0.2, s4p11_T),FPM_InitFixedPoint_m(0.23, s4p11_T),
	FPM_InitFixedPoint_m(0.26, s4p11_T),FPM_InitFixedPoint_m(0.31, s4p11_T),
	FPM_InitFixedPoint_m(0.35, s4p11_T),FPM_InitFixedPoint_m(0.38, s4p11_T),
	FPM_InitFixedPoint_m(0.43, s4p11_T),
	FPM_InitFixedPoint_m(0.47265625, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.01, s4p11_T),FPM_InitFixedPoint_m(0.015, s4p11_T),
	FPM_InitFixedPoint_m(0.03, s4p11_T),FPM_InitFixedPoint_m(0.05, s4p11_T),
	FPM_InitFixedPoint_m(0.07, s4p11_T),FPM_InitFixedPoint_m(0.1, s4p11_T),
	FPM_InitFixedPoint_m(0.135, s4p11_T),FPM_InitFixedPoint_m(0.16, s4p11_T),
	FPM_InitFixedPoint_m(0.2, s4p11_T),FPM_InitFixedPoint_m(0.23, s4p11_T),
	FPM_InitFixedPoint_m(0.26, s4p11_T),FPM_InitFixedPoint_m(0.31, s4p11_T),
	FPM_InitFixedPoint_m(0.35, s4p11_T),FPM_InitFixedPoint_m(0.38, s4p11_T),
	FPM_InitFixedPoint_m(0.43, s4p11_T),
	FPM_InitFixedPoint_m(0.47265625, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.01, s4p11_T),FPM_InitFixedPoint_m(0.015, s4p11_T),
	FPM_InitFixedPoint_m(0.03, s4p11_T),FPM_InitFixedPoint_m(0.05, s4p11_T),
	FPM_InitFixedPoint_m(0.07, s4p11_T),FPM_InitFixedPoint_m(0.1, s4p11_T),
	FPM_InitFixedPoint_m(0.135, s4p11_T),FPM_InitFixedPoint_m(0.16, s4p11_T),
	FPM_InitFixedPoint_m(0.2, s4p11_T),FPM_InitFixedPoint_m(0.23, s4p11_T),
	FPM_InitFixedPoint_m(0.26, s4p11_T),FPM_InitFixedPoint_m(0.31, s4p11_T),
	FPM_InitFixedPoint_m(0.35, s4p11_T),FPM_InitFixedPoint_m(0.38, s4p11_T),
	FPM_InitFixedPoint_m(0.43, s4p11_T),
	FPM_InitFixedPoint_m(0.47265625, s4p11_T)}}, {{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.0234375, u8p8_T),
	FPM_InitFixedPoint_m(0.03515625, u8p8_T),
	FPM_InitFixedPoint_m(0.05078125, u8p8_T),
	FPM_InitFixedPoint_m(0.0703125, u8p8_T),
	FPM_InitFixedPoint_m(0.09375, u8p8_T),
	FPM_InitFixedPoint_m(0.12109375, u8p8_T),
	FPM_InitFixedPoint_m(0.15234375, u8p8_T),
	FPM_InitFixedPoint_m(0.18359375, u8p8_T),
	FPM_InitFixedPoint_m(0.21875, u8p8_T),
	FPM_InitFixedPoint_m(0.26171875, u8p8_T),
	FPM_InitFixedPoint_m(0.30078125, u8p8_T),
	FPM_InitFixedPoint_m(0.34765625, u8p8_T),
	FPM_InitFixedPoint_m(0.3984375, u8p8_T),
	FPM_InitFixedPoint_m(0.44921875, u8p8_T),
	FPM_InitFixedPoint_m(0.5078125, u8p8_T),
	FPM_InitFixedPoint_m(0.56640625, u8p8_T),
	FPM_InitFixedPoint_m(0.62890625, u8p8_T),
	FPM_InitFixedPoint_m(0.69140625, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.03125, u8p8_T),
	FPM_InitFixedPoint_m(0.05078125, u8p8_T),
	FPM_InitFixedPoint_m(0.07421875, u8p8_T),
	FPM_InitFixedPoint_m(0.10546875, u8p8_T),
	FPM_InitFixedPoint_m(0.140625, u8p8_T),
	FPM_InitFixedPoint_m(0.18359375, u8p8_T),
	FPM_InitFixedPoint_m(0.23046875, u8p8_T),
	FPM_InitFixedPoint_m(0.28125, u8p8_T),
	FPM_InitFixedPoint_m(0.33984375, u8p8_T),
	FPM_InitFixedPoint_m(0.40234375, u8p8_T),
	FPM_InitFixedPoint_m(0.47265625, u8p8_T),
	FPM_InitFixedPoint_m(0.546875, u8p8_T),
	FPM_InitFixedPoint_m(0.625, u8p8_T),
	FPM_InitFixedPoint_m(0.7109375, u8p8_T),
	FPM_InitFixedPoint_m(0.80078125, u8p8_T),
	FPM_InitFixedPoint_m(0.89453125, u8p8_T),
	FPM_InitFixedPoint_m(0.99609375, u8p8_T),
	FPM_InitFixedPoint_m(1.10546875, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.015625, u8p8_T),
	FPM_InitFixedPoint_m(0.0390625, u8p8_T),
	FPM_InitFixedPoint_m(0.06640625, u8p8_T),
	FPM_InitFixedPoint_m(0.09765625, u8p8_T),
	FPM_InitFixedPoint_m(0.1328125, u8p8_T),
	FPM_InitFixedPoint_m(0.17578125, u8p8_T),
	FPM_InitFixedPoint_m(0.21875, u8p8_T),
	FPM_InitFixedPoint_m(0.26953125, u8p8_T),
	FPM_InitFixedPoint_m(0.328125, u8p8_T),
	FPM_InitFixedPoint_m(0.38671875, u8p8_T),
	FPM_InitFixedPoint_m(0.453125, u8p8_T),
	FPM_InitFixedPoint_m(0.5234375, u8p8_T),
	FPM_InitFixedPoint_m(0.59765625, u8p8_T),
	FPM_InitFixedPoint_m(0.6796875, u8p8_T),
	FPM_InitFixedPoint_m(0.76171875, u8p8_T),
	FPM_InitFixedPoint_m(0.8515625, u8p8_T),
	FPM_InitFixedPoint_m(0.94921875, u8p8_T),
	FPM_InitFixedPoint_m(1.046875, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.015625, u8p8_T),
	FPM_InitFixedPoint_m(0.03515625, u8p8_T),
	FPM_InitFixedPoint_m(0.0625, u8p8_T),
	FPM_InitFixedPoint_m(0.0859375, u8p8_T),
	FPM_InitFixedPoint_m(0.1171875, u8p8_T),
	FPM_InitFixedPoint_m(0.15234375, u8p8_T),
	FPM_InitFixedPoint_m(0.1875, u8p8_T),
	FPM_InitFixedPoint_m(0.23046875, u8p8_T),
	FPM_InitFixedPoint_m(0.2734375, u8p8_T),
	FPM_InitFixedPoint_m(0.3203125, u8p8_T),
	FPM_InitFixedPoint_m(0.37109375, u8p8_T),
	FPM_InitFixedPoint_m(0.42578125, u8p8_T),
	FPM_InitFixedPoint_m(0.48046875, u8p8_T),
	FPM_InitFixedPoint_m(0.54296875, u8p8_T),
	FPM_InitFixedPoint_m(0.60546875, u8p8_T),
	FPM_InitFixedPoint_m(0.671875, u8p8_T),
	FPM_InitFixedPoint_m(0.7421875, u8p8_T),
	FPM_InitFixedPoint_m(0.81640625, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.015625, u8p8_T),
	FPM_InitFixedPoint_m(0.03515625, u8p8_T),
	FPM_InitFixedPoint_m(0.05859375, u8p8_T),
	FPM_InitFixedPoint_m(0.0859375, u8p8_T),
	FPM_InitFixedPoint_m(0.11328125, u8p8_T),
	FPM_InitFixedPoint_m(0.14453125, u8p8_T),
	FPM_InitFixedPoint_m(0.17578125, u8p8_T),
	FPM_InitFixedPoint_m(0.21484375, u8p8_T),
	FPM_InitFixedPoint_m(0.25390625, u8p8_T),
	FPM_InitFixedPoint_m(0.29296875, u8p8_T),
	FPM_InitFixedPoint_m(0.33984375, u8p8_T),
	FPM_InitFixedPoint_m(0.38671875, u8p8_T),
	FPM_InitFixedPoint_m(0.4375, u8p8_T),
	FPM_InitFixedPoint_m(0.48828125, u8p8_T),
	FPM_InitFixedPoint_m(0.546875, u8p8_T),
	FPM_InitFixedPoint_m(0.60546875, u8p8_T),
	FPM_InitFixedPoint_m(0.66796875, u8p8_T),
	FPM_InitFixedPoint_m(0.73046875, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.01, u8p8_T),
	FPM_InitFixedPoint_m(0.02, u8p8_T),FPM_InitFixedPoint_m(0.035, u8p8_T),
	FPM_InitFixedPoint_m(0.06, u8p8_T),FPM_InitFixedPoint_m(0.08, u8p8_T),
	FPM_InitFixedPoint_m(0.12, u8p8_T),FPM_InitFixedPoint_m(0.16, u8p8_T),
	FPM_InitFixedPoint_m(0.2, u8p8_T),FPM_InitFixedPoint_m(0.24, u8p8_T),
	FPM_InitFixedPoint_m(0.29, u8p8_T),FPM_InitFixedPoint_m(0.35, u8p8_T),
	FPM_InitFixedPoint_m(0.39, u8p8_T),FPM_InitFixedPoint_m(0.46, u8p8_T),
	FPM_InitFixedPoint_m(0.51171875, u8p8_T),
	FPM_InitFixedPoint_m(0.5625, u8p8_T),
	FPM_InitFixedPoint_m(0.62109375, u8p8_T),
	FPM_InitFixedPoint_m(0.6796875, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.01, u8p8_T),
	FPM_InitFixedPoint_m(0.02, u8p8_T),FPM_InitFixedPoint_m(0.035, u8p8_T),
	FPM_InitFixedPoint_m(0.06, u8p8_T),FPM_InitFixedPoint_m(0.08, u8p8_T),
	FPM_InitFixedPoint_m(0.1, u8p8_T),FPM_InitFixedPoint_m(0.14, u8p8_T),
	FPM_InitFixedPoint_m(0.18, u8p8_T),FPM_InitFixedPoint_m(0.21, u8p8_T),
	FPM_InitFixedPoint_m(0.26, u8p8_T),FPM_InitFixedPoint_m(0.3, u8p8_T),
	FPM_InitFixedPoint_m(0.34, u8p8_T),
	FPM_InitFixedPoint_m(0.3984375, u8p8_T),
	FPM_InitFixedPoint_m(0.4375, u8p8_T),
	FPM_InitFixedPoint_m(0.48046875, u8p8_T),
	FPM_InitFixedPoint_m(0.52734375, u8p8_T),
	FPM_InitFixedPoint_m(0.57421875, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.01, u8p8_T),FPM_InitFixedPoint_m(0.03, u8p8_T),
	FPM_InitFixedPoint_m(0.05, u8p8_T),FPM_InitFixedPoint_m(0.07, u8p8_T),
	FPM_InitFixedPoint_m(0.095, u8p8_T),FPM_InitFixedPoint_m(0.13, u8p8_T),
	FPM_InitFixedPoint_m(0.16, u8p8_T),FPM_InitFixedPoint_m(0.2, u8p8_T),
	FPM_InitFixedPoint_m(0.24, u8p8_T),FPM_InitFixedPoint_m(0.28, u8p8_T),
	FPM_InitFixedPoint_m(0.32, u8p8_T),
	FPM_InitFixedPoint_m(0.3671875, u8p8_T),
	FPM_InitFixedPoint_m(0.40625, u8p8_T),
	FPM_InitFixedPoint_m(0.4453125, u8p8_T),
	FPM_InitFixedPoint_m(0.48828125, u8p8_T),
	FPM_InitFixedPoint_m(0.53125, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.01, u8p8_T),FPM_InitFixedPoint_m(0.015, u8p8_T),
	FPM_InitFixedPoint_m(0.03, u8p8_T),FPM_InitFixedPoint_m(0.05, u8p8_T),
	FPM_InitFixedPoint_m(0.07, u8p8_T),FPM_InitFixedPoint_m(0.1, u8p8_T),
	FPM_InitFixedPoint_m(0.135, u8p8_T),FPM_InitFixedPoint_m(0.16, u8p8_T),
	FPM_InitFixedPoint_m(0.2, u8p8_T),FPM_InitFixedPoint_m(0.23, u8p8_T),
	FPM_InitFixedPoint_m(0.26, u8p8_T),FPM_InitFixedPoint_m(0.31, u8p8_T),
	FPM_InitFixedPoint_m(0.35, u8p8_T),FPM_InitFixedPoint_m(0.38, u8p8_T),
	FPM_InitFixedPoint_m(0.43, u8p8_T),
	FPM_InitFixedPoint_m(0.47265625, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.01, u8p8_T),FPM_InitFixedPoint_m(0.015, u8p8_T),
	FPM_InitFixedPoint_m(0.03, u8p8_T),FPM_InitFixedPoint_m(0.05, u8p8_T),
	FPM_InitFixedPoint_m(0.07, u8p8_T),FPM_InitFixedPoint_m(0.1, u8p8_T),
	FPM_InitFixedPoint_m(0.135, u8p8_T),FPM_InitFixedPoint_m(0.16, u8p8_T),
	FPM_InitFixedPoint_m(0.2, u8p8_T),FPM_InitFixedPoint_m(0.23, u8p8_T),
	FPM_InitFixedPoint_m(0.26, u8p8_T),FPM_InitFixedPoint_m(0.31, u8p8_T),
	FPM_InitFixedPoint_m(0.35, u8p8_T),FPM_InitFixedPoint_m(0.38, u8p8_T),
	FPM_InitFixedPoint_m(0.43, u8p8_T),
	FPM_InitFixedPoint_m(0.47265625, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.01, u8p8_T),FPM_InitFixedPoint_m(0.015, u8p8_T),
	FPM_InitFixedPoint_m(0.03, u8p8_T),FPM_InitFixedPoint_m(0.05, u8p8_T),
	FPM_InitFixedPoint_m(0.07, u8p8_T),FPM_InitFixedPoint_m(0.1, u8p8_T),
	FPM_InitFixedPoint_m(0.135, u8p8_T),FPM_InitFixedPoint_m(0.16, u8p8_T),
	FPM_InitFixedPoint_m(0.2, u8p8_T),FPM_InitFixedPoint_m(0.23, u8p8_T),
	FPM_InitFixedPoint_m(0.26, u8p8_T),FPM_InitFixedPoint_m(0.31, u8p8_T),
	FPM_InitFixedPoint_m(0.35, u8p8_T),FPM_InitFixedPoint_m(0.38, u8p8_T),
	FPM_InitFixedPoint_m(0.43, u8p8_T),
	FPM_InitFixedPoint_m(0.47265625, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.01, u8p8_T),FPM_InitFixedPoint_m(0.015, u8p8_T),
	FPM_InitFixedPoint_m(0.03, u8p8_T),FPM_InitFixedPoint_m(0.05, u8p8_T),
	FPM_InitFixedPoint_m(0.07, u8p8_T),FPM_InitFixedPoint_m(0.1, u8p8_T),
	FPM_InitFixedPoint_m(0.135, u8p8_T),FPM_InitFixedPoint_m(0.16, u8p8_T),
	FPM_InitFixedPoint_m(0.2, u8p8_T),FPM_InitFixedPoint_m(0.23, u8p8_T),
	FPM_InitFixedPoint_m(0.26, u8p8_T),FPM_InitFixedPoint_m(0.31, u8p8_T),
	FPM_InitFixedPoint_m(0.35, u8p8_T),FPM_InitFixedPoint_m(0.38, u8p8_T),
	FPM_InitFixedPoint_m(0.43, u8p8_T),
	FPM_InitFixedPoint_m(0.47265625, u8p8_T)}}, {{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.0234375, u8p8_T),
	FPM_InitFixedPoint_m(0.03515625, u8p8_T),
	FPM_InitFixedPoint_m(0.05078125, u8p8_T),
	FPM_InitFixedPoint_m(0.0703125, u8p8_T),
	FPM_InitFixedPoint_m(0.09375, u8p8_T),
	FPM_InitFixedPoint_m(0.12109375, u8p8_T),
	FPM_InitFixedPoint_m(0.15234375, u8p8_T),
	FPM_InitFixedPoint_m(0.18359375, u8p8_T),
	FPM_InitFixedPoint_m(0.21875, u8p8_T),
	FPM_InitFixedPoint_m(0.26171875, u8p8_T),
	FPM_InitFixedPoint_m(0.30078125, u8p8_T),
	FPM_InitFixedPoint_m(0.34765625, u8p8_T),
	FPM_InitFixedPoint_m(0.3984375, u8p8_T),
	FPM_InitFixedPoint_m(0.44921875, u8p8_T),
	FPM_InitFixedPoint_m(0.5078125, u8p8_T),
	FPM_InitFixedPoint_m(0.56640625, u8p8_T),
	FPM_InitFixedPoint_m(0.62890625, u8p8_T),
	FPM_InitFixedPoint_m(0.69140625, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.03125, u8p8_T),
	FPM_InitFixedPoint_m(0.05078125, u8p8_T),
	FPM_InitFixedPoint_m(0.07421875, u8p8_T),
	FPM_InitFixedPoint_m(0.10546875, u8p8_T),
	FPM_InitFixedPoint_m(0.140625, u8p8_T),
	FPM_InitFixedPoint_m(0.18359375, u8p8_T),
	FPM_InitFixedPoint_m(0.23046875, u8p8_T),
	FPM_InitFixedPoint_m(0.28125, u8p8_T),
	FPM_InitFixedPoint_m(0.33984375, u8p8_T),
	FPM_InitFixedPoint_m(0.40234375, u8p8_T),
	FPM_InitFixedPoint_m(0.47265625, u8p8_T),
	FPM_InitFixedPoint_m(0.546875, u8p8_T),
	FPM_InitFixedPoint_m(0.625, u8p8_T),
	FPM_InitFixedPoint_m(0.7109375, u8p8_T),
	FPM_InitFixedPoint_m(0.80078125, u8p8_T),
	FPM_InitFixedPoint_m(0.89453125, u8p8_T),
	FPM_InitFixedPoint_m(0.99609375, u8p8_T),
	FPM_InitFixedPoint_m(1.10546875, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.015625, u8p8_T),
	FPM_InitFixedPoint_m(0.0390625, u8p8_T),
	FPM_InitFixedPoint_m(0.06640625, u8p8_T),
	FPM_InitFixedPoint_m(0.09765625, u8p8_T),
	FPM_InitFixedPoint_m(0.1328125, u8p8_T),
	FPM_InitFixedPoint_m(0.17578125, u8p8_T),
	FPM_InitFixedPoint_m(0.21875, u8p8_T),
	FPM_InitFixedPoint_m(0.26953125, u8p8_T),
	FPM_InitFixedPoint_m(0.328125, u8p8_T),
	FPM_InitFixedPoint_m(0.38671875, u8p8_T),
	FPM_InitFixedPoint_m(0.453125, u8p8_T),
	FPM_InitFixedPoint_m(0.5234375, u8p8_T),
	FPM_InitFixedPoint_m(0.59765625, u8p8_T),
	FPM_InitFixedPoint_m(0.6796875, u8p8_T),
	FPM_InitFixedPoint_m(0.76171875, u8p8_T),
	FPM_InitFixedPoint_m(0.8515625, u8p8_T),
	FPM_InitFixedPoint_m(0.94921875, u8p8_T),
	FPM_InitFixedPoint_m(1.046875, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.015625, u8p8_T),
	FPM_InitFixedPoint_m(0.03515625, u8p8_T),
	FPM_InitFixedPoint_m(0.0625, u8p8_T),
	FPM_InitFixedPoint_m(0.0859375, u8p8_T),
	FPM_InitFixedPoint_m(0.1171875, u8p8_T),
	FPM_InitFixedPoint_m(0.15234375, u8p8_T),
	FPM_InitFixedPoint_m(0.1875, u8p8_T),
	FPM_InitFixedPoint_m(0.23046875, u8p8_T),
	FPM_InitFixedPoint_m(0.2734375, u8p8_T),
	FPM_InitFixedPoint_m(0.3203125, u8p8_T),
	FPM_InitFixedPoint_m(0.37109375, u8p8_T),
	FPM_InitFixedPoint_m(0.42578125, u8p8_T),
	FPM_InitFixedPoint_m(0.48046875, u8p8_T),
	FPM_InitFixedPoint_m(0.54296875, u8p8_T),
	FPM_InitFixedPoint_m(0.60546875, u8p8_T),
	FPM_InitFixedPoint_m(0.671875, u8p8_T),
	FPM_InitFixedPoint_m(0.7421875, u8p8_T),
	FPM_InitFixedPoint_m(0.81640625, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.015625, u8p8_T),
	FPM_InitFixedPoint_m(0.03515625, u8p8_T),
	FPM_InitFixedPoint_m(0.05859375, u8p8_T),
	FPM_InitFixedPoint_m(0.0859375, u8p8_T),
	FPM_InitFixedPoint_m(0.11328125, u8p8_T),
	FPM_InitFixedPoint_m(0.14453125, u8p8_T),
	FPM_InitFixedPoint_m(0.17578125, u8p8_T),
	FPM_InitFixedPoint_m(0.21484375, u8p8_T),
	FPM_InitFixedPoint_m(0.25390625, u8p8_T),
	FPM_InitFixedPoint_m(0.29296875, u8p8_T),
	FPM_InitFixedPoint_m(0.33984375, u8p8_T),
	FPM_InitFixedPoint_m(0.38671875, u8p8_T),
	FPM_InitFixedPoint_m(0.4375, u8p8_T),
	FPM_InitFixedPoint_m(0.48828125, u8p8_T),
	FPM_InitFixedPoint_m(0.546875, u8p8_T),
	FPM_InitFixedPoint_m(0.60546875, u8p8_T),
	FPM_InitFixedPoint_m(0.66796875, u8p8_T),
	FPM_InitFixedPoint_m(0.73046875, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.01, u8p8_T),
	FPM_InitFixedPoint_m(0.02, u8p8_T),FPM_InitFixedPoint_m(0.035, u8p8_T),
	FPM_InitFixedPoint_m(0.06, u8p8_T),FPM_InitFixedPoint_m(0.08, u8p8_T),
	FPM_InitFixedPoint_m(0.12, u8p8_T),FPM_InitFixedPoint_m(0.16, u8p8_T),
	FPM_InitFixedPoint_m(0.2, u8p8_T),FPM_InitFixedPoint_m(0.24, u8p8_T),
	FPM_InitFixedPoint_m(0.29, u8p8_T),FPM_InitFixedPoint_m(0.35, u8p8_T),
	FPM_InitFixedPoint_m(0.39, u8p8_T),FPM_InitFixedPoint_m(0.46, u8p8_T),
	FPM_InitFixedPoint_m(0.51171875, u8p8_T),
	FPM_InitFixedPoint_m(0.5625, u8p8_T),
	FPM_InitFixedPoint_m(0.62109375, u8p8_T),
	FPM_InitFixedPoint_m(0.6796875, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.01, u8p8_T),
	FPM_InitFixedPoint_m(0.02, u8p8_T),FPM_InitFixedPoint_m(0.035, u8p8_T),
	FPM_InitFixedPoint_m(0.06, u8p8_T),FPM_InitFixedPoint_m(0.08, u8p8_T),
	FPM_InitFixedPoint_m(0.1, u8p8_T),FPM_InitFixedPoint_m(0.14, u8p8_T),
	FPM_InitFixedPoint_m(0.18, u8p8_T),FPM_InitFixedPoint_m(0.21, u8p8_T),
	FPM_InitFixedPoint_m(0.26, u8p8_T),FPM_InitFixedPoint_m(0.3, u8p8_T),
	FPM_InitFixedPoint_m(0.34, u8p8_T),
	FPM_InitFixedPoint_m(0.3984375, u8p8_T),
	FPM_InitFixedPoint_m(0.4375, u8p8_T),
	FPM_InitFixedPoint_m(0.48046875, u8p8_T),
	FPM_InitFixedPoint_m(0.52734375, u8p8_T),
	FPM_InitFixedPoint_m(0.57421875, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.01, u8p8_T),FPM_InitFixedPoint_m(0.03, u8p8_T),
	FPM_InitFixedPoint_m(0.05, u8p8_T),FPM_InitFixedPoint_m(0.07, u8p8_T),
	FPM_InitFixedPoint_m(0.095, u8p8_T),FPM_InitFixedPoint_m(0.13, u8p8_T),
	FPM_InitFixedPoint_m(0.16, u8p8_T),FPM_InitFixedPoint_m(0.2, u8p8_T),
	FPM_InitFixedPoint_m(0.24, u8p8_T),FPM_InitFixedPoint_m(0.28, u8p8_T),
	FPM_InitFixedPoint_m(0.32, u8p8_T),
	FPM_InitFixedPoint_m(0.3671875, u8p8_T),
	FPM_InitFixedPoint_m(0.40625, u8p8_T),
	FPM_InitFixedPoint_m(0.4453125, u8p8_T),
	FPM_InitFixedPoint_m(0.48828125, u8p8_T),
	FPM_InitFixedPoint_m(0.53125, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.01, u8p8_T),FPM_InitFixedPoint_m(0.015, u8p8_T),
	FPM_InitFixedPoint_m(0.03, u8p8_T),FPM_InitFixedPoint_m(0.05, u8p8_T),
	FPM_InitFixedPoint_m(0.07, u8p8_T),FPM_InitFixedPoint_m(0.1, u8p8_T),
	FPM_InitFixedPoint_m(0.135, u8p8_T),FPM_InitFixedPoint_m(0.16, u8p8_T),
	FPM_InitFixedPoint_m(0.2, u8p8_T),FPM_InitFixedPoint_m(0.23, u8p8_T),
	FPM_InitFixedPoint_m(0.26, u8p8_T),FPM_InitFixedPoint_m(0.31, u8p8_T),
	FPM_InitFixedPoint_m(0.35, u8p8_T),FPM_InitFixedPoint_m(0.38, u8p8_T),
	FPM_InitFixedPoint_m(0.43, u8p8_T),
	FPM_InitFixedPoint_m(0.47265625, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.01, u8p8_T),FPM_InitFixedPoint_m(0.015, u8p8_T),
	FPM_InitFixedPoint_m(0.03, u8p8_T),FPM_InitFixedPoint_m(0.05, u8p8_T),
	FPM_InitFixedPoint_m(0.07, u8p8_T),FPM_InitFixedPoint_m(0.1, u8p8_T),
	FPM_InitFixedPoint_m(0.135, u8p8_T),FPM_InitFixedPoint_m(0.16, u8p8_T),
	FPM_InitFixedPoint_m(0.2, u8p8_T),FPM_InitFixedPoint_m(0.23, u8p8_T),
	FPM_InitFixedPoint_m(0.26, u8p8_T),FPM_InitFixedPoint_m(0.31, u8p8_T),
	FPM_InitFixedPoint_m(0.35, u8p8_T),FPM_InitFixedPoint_m(0.38, u8p8_T),
	FPM_InitFixedPoint_m(0.43, u8p8_T),
	FPM_InitFixedPoint_m(0.47265625, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.01, u8p8_T),FPM_InitFixedPoint_m(0.015, u8p8_T),
	FPM_InitFixedPoint_m(0.03, u8p8_T),FPM_InitFixedPoint_m(0.05, u8p8_T),
	FPM_InitFixedPoint_m(0.07, u8p8_T),FPM_InitFixedPoint_m(0.1, u8p8_T),
	FPM_InitFixedPoint_m(0.135, u8p8_T),FPM_InitFixedPoint_m(0.16, u8p8_T),
	FPM_InitFixedPoint_m(0.2, u8p8_T),FPM_InitFixedPoint_m(0.23, u8p8_T),
	FPM_InitFixedPoint_m(0.26, u8p8_T),FPM_InitFixedPoint_m(0.31, u8p8_T),
	FPM_InitFixedPoint_m(0.35, u8p8_T),FPM_InitFixedPoint_m(0.38, u8p8_T),
	FPM_InitFixedPoint_m(0.43, u8p8_T),
	FPM_InitFixedPoint_m(0.47265625, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.01, u8p8_T),FPM_InitFixedPoint_m(0.015, u8p8_T),
	FPM_InitFixedPoint_m(0.03, u8p8_T),FPM_InitFixedPoint_m(0.05, u8p8_T),
	FPM_InitFixedPoint_m(0.07, u8p8_T),FPM_InitFixedPoint_m(0.1, u8p8_T),
	FPM_InitFixedPoint_m(0.135, u8p8_T),FPM_InitFixedPoint_m(0.16, u8p8_T),
	FPM_InitFixedPoint_m(0.2, u8p8_T),FPM_InitFixedPoint_m(0.23, u8p8_T),
	FPM_InitFixedPoint_m(0.26, u8p8_T),FPM_InitFixedPoint_m(0.31, u8p8_T),
	FPM_InitFixedPoint_m(0.35, u8p8_T),FPM_InitFixedPoint_m(0.38, u8p8_T),
	FPM_InitFixedPoint_m(0.43, u8p8_T),
	FPM_InitFixedPoint_m(0.47265625, u8p8_T)}}, {{FPM_InitFixedPoint_m(0.0, u2p14_T),FPM_InitFixedPoint_m(0.0, u2p14_T),
	FPM_InitFixedPoint_m(0.0, u2p14_T),FPM_InitFixedPoint_m(0.0, u2p14_T),
	FPM_InitFixedPoint_m(0.0, u2p14_T)},{FPM_InitFixedPoint_m(0.0, u2p14_T),
	FPM_InitFixedPoint_m(0.0, u2p14_T),FPM_InitFixedPoint_m(0.0, u2p14_T),
	FPM_InitFixedPoint_m(0.0, u2p14_T),FPM_InitFixedPoint_m(0.0, u2p14_T)},
	{FPM_InitFixedPoint_m(0.0, u2p14_T),FPM_InitFixedPoint_m(0.0, u2p14_T),
	FPM_InitFixedPoint_m(0.0, u2p14_T),FPM_InitFixedPoint_m(0.0, u2p14_T),
	FPM_InitFixedPoint_m(0.0, u2p14_T)},{FPM_InitFixedPoint_m(0.0, u2p14_T),
	FPM_InitFixedPoint_m(0.0, u2p14_T),FPM_InitFixedPoint_m(0.0, u2p14_T),
	FPM_InitFixedPoint_m(0.0, u2p14_T),FPM_InitFixedPoint_m(0.0, u2p14_T)},
	{FPM_InitFixedPoint_m(0.0, u2p14_T),FPM_InitFixedPoint_m(0.0, u2p14_T),
	FPM_InitFixedPoint_m(0.0, u2p14_T),FPM_InitFixedPoint_m(0.0, u2p14_T),
	FPM_InitFixedPoint_m(0.0, u2p14_T)},{FPM_InitFixedPoint_m(0.5, u2p14_T),
	FPM_InitFixedPoint_m(0.5, u2p14_T),FPM_InitFixedPoint_m(0.5, u2p14_T),
	FPM_InitFixedPoint_m(0.5, u2p14_T),FPM_InitFixedPoint_m(0.5, u2p14_T)},
	{FPM_InitFixedPoint_m(0.5, u2p14_T),FPM_InitFixedPoint_m(0.5, u2p14_T),
	FPM_InitFixedPoint_m(0.5, u2p14_T),FPM_InitFixedPoint_m(0.5, u2p14_T),
	FPM_InitFixedPoint_m(0.5, u2p14_T)},{FPM_InitFixedPoint_m(0.9, u2p14_T),
	FPM_InitFixedPoint_m(0.9, u2p14_T),FPM_InitFixedPoint_m(0.9, u2p14_T),
	FPM_InitFixedPoint_m(0.9, u2p14_T),FPM_InitFixedPoint_m(0.9, u2p14_T)},
	{FPM_InitFixedPoint_m(0.9, u2p14_T),FPM_InitFixedPoint_m(0.9, u2p14_T),
	FPM_InitFixedPoint_m(0.9, u2p14_T),FPM_InitFixedPoint_m(0.9, u2p14_T),
	FPM_InitFixedPoint_m(0.9, u2p14_T)},{FPM_InitFixedPoint_m(0.9, u2p14_T),
	FPM_InitFixedPoint_m(0.9, u2p14_T),FPM_InitFixedPoint_m(0.9, u2p14_T),
	FPM_InitFixedPoint_m(0.9, u2p14_T),FPM_InitFixedPoint_m(0.9, u2p14_T)},
	{FPM_InitFixedPoint_m(1.0, u2p14_T),FPM_InitFixedPoint_m(1.0, u2p14_T),
	FPM_InitFixedPoint_m(1.0, u2p14_T),FPM_InitFixedPoint_m(1.0, u2p14_T),
	FPM_InitFixedPoint_m(1.0, u2p14_T)},{FPM_InitFixedPoint_m(1.0, u2p14_T),
	FPM_InitFixedPoint_m(1.0, u2p14_T),FPM_InitFixedPoint_m(1.0, u2p14_T),
	FPM_InitFixedPoint_m(1.0, u2p14_T),FPM_InitFixedPoint_m(1.0, u2p14_T)}}, {{FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T)},{FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T)},
	{FPM_InitFixedPoint_m(0.25, u5p11_T),FPM_InitFixedPoint_m(0.25, u5p11_T),
	FPM_InitFixedPoint_m(0.25, u5p11_T),FPM_InitFixedPoint_m(0.25, u5p11_T),
	FPM_InitFixedPoint_m(0.25, u5p11_T)},
	{FPM_InitFixedPoint_m(0.25, u5p11_T),FPM_InitFixedPoint_m(0.25, u5p11_T),
	FPM_InitFixedPoint_m(0.25, u5p11_T),FPM_InitFixedPoint_m(0.25, u5p11_T),
	FPM_InitFixedPoint_m(0.25, u5p11_T)},{FPM_InitFixedPoint_m(0.5, u5p11_T),
	FPM_InitFixedPoint_m(0.5, u5p11_T),FPM_InitFixedPoint_m(0.5, u5p11_T),
	FPM_InitFixedPoint_m(0.5, u5p11_T),FPM_InitFixedPoint_m(0.5, u5p11_T)},
	{FPM_InitFixedPoint_m(0.5, u5p11_T),FPM_InitFixedPoint_m(0.5, u5p11_T),
	FPM_InitFixedPoint_m(0.5, u5p11_T),FPM_InitFixedPoint_m(0.5, u5p11_T),
	FPM_InitFixedPoint_m(0.5, u5p11_T)},{FPM_InitFixedPoint_m(0.75, u5p11_T),
	FPM_InitFixedPoint_m(0.75, u5p11_T),FPM_InitFixedPoint_m(0.75, u5p11_T),
	FPM_InitFixedPoint_m(0.75, u5p11_T),FPM_InitFixedPoint_m(0.75, u5p11_T)},
	{FPM_InitFixedPoint_m(0.75, u5p11_T),FPM_InitFixedPoint_m(0.75, u5p11_T),
	FPM_InitFixedPoint_m(0.75, u5p11_T),FPM_InitFixedPoint_m(0.75, u5p11_T),
	FPM_InitFixedPoint_m(0.75, u5p11_T)},{FPM_InitFixedPoint_m(1.1, u5p11_T),
	FPM_InitFixedPoint_m(1.1, u5p11_T),FPM_InitFixedPoint_m(1.1, u5p11_T),
	FPM_InitFixedPoint_m(1.1, u5p11_T),FPM_InitFixedPoint_m(1.1, u5p11_T)},
	{FPM_InitFixedPoint_m(1.1, u5p11_T),FPM_InitFixedPoint_m(1.1, u5p11_T),
	FPM_InitFixedPoint_m(1.1, u5p11_T),FPM_InitFixedPoint_m(1.1, u5p11_T),
	FPM_InitFixedPoint_m(1.1, u5p11_T)},{FPM_InitFixedPoint_m(1.1, u5p11_T),
	FPM_InitFixedPoint_m(1.1, u5p11_T),FPM_InitFixedPoint_m(1.1, u5p11_T),
	FPM_InitFixedPoint_m(1.1, u5p11_T),FPM_InitFixedPoint_m(1.1, u5p11_T)},
	{FPM_InitFixedPoint_m(1.1, u5p11_T),FPM_InitFixedPoint_m(1.1, u5p11_T),
	FPM_InitFixedPoint_m(1.1, u5p11_T),FPM_InitFixedPoint_m(1.1, u5p11_T),
	FPM_InitFixedPoint_m(1.1, u5p11_T)}}, {FPM_InitFixedPoint_m(0.0, u9p7_T), FPM_InitFixedPoint_m(5.0, u9p7_T),
	 FPM_InitFixedPoint_m(30.0, u9p7_T), FPM_InitFixedPoint_m(60.0, u9p7_T),
	 FPM_InitFixedPoint_m(80.0, u9p7_T), FPM_InitFixedPoint_m(100.0, u9p7_T),
	 FPM_InitFixedPoint_m(120.0, u9p7_T),
	 FPM_InitFixedPoint_m(150.0, u9p7_T)}, 0.0f, {FPM_InitFixedPoint_m(8.8, u4p12_T), FPM_InitFixedPoint_m(8.8, u4p12_T),
	 FPM_InitFixedPoint_m(8.8, u4p12_T), FPM_InitFixedPoint_m(8.8, u4p12_T),
	 FPM_InitFixedPoint_m(8.8, u4p12_T), FPM_InitFixedPoint_m(8.8, u4p12_T),
	 FPM_InitFixedPoint_m(8.8, u4p12_T), FPM_InitFixedPoint_m(8.8, u4p12_T),
	 FPM_InitFixedPoint_m(8.8, u4p12_T), FPM_InitFixedPoint_m(8.8, u4p12_T),
	 FPM_InitFixedPoint_m(8.8, u4p12_T), FPM_InitFixedPoint_m(8.8, u4p12_T)}, {FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T)}, {FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T)}, {FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T)}, {FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T)}, {{FPM_InitFixedPoint_m(2.086427077, u12p4_T),
	FPM_InitFixedPoint_m(10.16797672, u12p4_T),
	FPM_InitFixedPoint_m(21.4030946, u12p4_T),
	FPM_InitFixedPoint_m(34.63743345, u12p4_T),
	FPM_InitFixedPoint_m(54.51215389, u12p4_T),
	FPM_InitFixedPoint_m(78.73446942, u12p4_T),
	FPM_InitFixedPoint_m(103.9123004, u12p4_T),
	FPM_InitFixedPoint_m(126.9879974, u12p4_T),
	FPM_InitFixedPoint_m(150.0636944, u12p4_T),
	FPM_InitFixedPoint_m(173.1871673, u12p4_T),
	FPM_InitFixedPoint_m(219.2907856, u12p4_T),
	FPM_InitFixedPoint_m(277.0516919, u12p4_T),
	FPM_InitFixedPoint_m(369.4022558, u12p4_T)},
	{FPM_InitFixedPoint_m(2.086427077, u12p4_T),
	FPM_InitFixedPoint_m(10.16797672, u12p4_T),
	FPM_InitFixedPoint_m(21.4030946, u12p4_T),
	FPM_InitFixedPoint_m(34.63743345, u12p4_T),
	FPM_InitFixedPoint_m(54.51215389, u12p4_T),
	FPM_InitFixedPoint_m(78.73446942, u12p4_T),
	FPM_InitFixedPoint_m(103.9123004, u12p4_T),
	FPM_InitFixedPoint_m(126.9879974, u12p4_T),
	FPM_InitFixedPoint_m(150.0636944, u12p4_T),
	FPM_InitFixedPoint_m(173.1871673, u12p4_T),
	FPM_InitFixedPoint_m(219.2907856, u12p4_T),
	FPM_InitFixedPoint_m(277.0516919, u12p4_T),
	FPM_InitFixedPoint_m(369.4022558, u12p4_T)},
	{FPM_InitFixedPoint_m(2.086427077, u12p4_T),
	FPM_InitFixedPoint_m(10.16797672, u12p4_T),
	FPM_InitFixedPoint_m(21.4030946, u12p4_T),
	FPM_InitFixedPoint_m(34.63743345, u12p4_T),
	FPM_InitFixedPoint_m(54.51215389, u12p4_T),
	FPM_InitFixedPoint_m(78.73446942, u12p4_T),
	FPM_InitFixedPoint_m(103.9123004, u12p4_T),
	FPM_InitFixedPoint_m(126.9879974, u12p4_T),
	FPM_InitFixedPoint_m(150.0636944, u12p4_T),
	FPM_InitFixedPoint_m(173.1871673, u12p4_T),
	FPM_InitFixedPoint_m(219.2907856, u12p4_T),
	FPM_InitFixedPoint_m(277.0516919, u12p4_T),
	FPM_InitFixedPoint_m(369.4022558, u12p4_T)},
	{FPM_InitFixedPoint_m(2.086427077, u12p4_T),
	FPM_InitFixedPoint_m(10.16797672, u12p4_T),
	FPM_InitFixedPoint_m(21.4030946, u12p4_T),
	FPM_InitFixedPoint_m(34.63743345, u12p4_T),
	FPM_InitFixedPoint_m(54.51215389, u12p4_T),
	FPM_InitFixedPoint_m(78.73446942, u12p4_T),
	FPM_InitFixedPoint_m(103.9123004, u12p4_T),
	FPM_InitFixedPoint_m(126.9879974, u12p4_T),
	FPM_InitFixedPoint_m(150.0636944, u12p4_T),
	FPM_InitFixedPoint_m(173.1871673, u12p4_T),
	FPM_InitFixedPoint_m(219.2907856, u12p4_T),
	FPM_InitFixedPoint_m(277.0516919, u12p4_T),
	FPM_InitFixedPoint_m(369.4022558, u12p4_T)},
	{FPM_InitFixedPoint_m(2.086427077, u12p4_T),
	FPM_InitFixedPoint_m(10.16797672, u12p4_T),
	FPM_InitFixedPoint_m(21.4030946, u12p4_T),
	FPM_InitFixedPoint_m(34.63743345, u12p4_T),
	FPM_InitFixedPoint_m(54.51215389, u12p4_T),
	FPM_InitFixedPoint_m(78.73446942, u12p4_T),
	FPM_InitFixedPoint_m(103.9123004, u12p4_T),
	FPM_InitFixedPoint_m(126.9879974, u12p4_T),
	FPM_InitFixedPoint_m(150.0636944, u12p4_T),
	FPM_InitFixedPoint_m(173.1871673, u12p4_T),
	FPM_InitFixedPoint_m(219.2907856, u12p4_T),
	FPM_InitFixedPoint_m(277.0516919, u12p4_T),
	FPM_InitFixedPoint_m(369.4022558, u12p4_T)},
	{FPM_InitFixedPoint_m(2.086427077, u12p4_T),
	FPM_InitFixedPoint_m(10.16797672, u12p4_T),
	FPM_InitFixedPoint_m(21.4030946, u12p4_T),
	FPM_InitFixedPoint_m(34.63743345, u12p4_T),
	FPM_InitFixedPoint_m(54.51215389, u12p4_T),
	FPM_InitFixedPoint_m(78.73446942, u12p4_T),
	FPM_InitFixedPoint_m(103.9123004, u12p4_T),
	FPM_InitFixedPoint_m(126.9879974, u12p4_T),
	FPM_InitFixedPoint_m(150.0636944, u12p4_T),
	FPM_InitFixedPoint_m(173.1871673, u12p4_T),
	FPM_InitFixedPoint_m(219.2907856, u12p4_T),
	FPM_InitFixedPoint_m(277.0516919, u12p4_T),
	FPM_InitFixedPoint_m(369.4022558, u12p4_T)},
	{FPM_InitFixedPoint_m(2.086427077, u12p4_T),
	FPM_InitFixedPoint_m(10.16797672, u12p4_T),
	FPM_InitFixedPoint_m(21.4030946, u12p4_T),
	FPM_InitFixedPoint_m(34.63743345, u12p4_T),
	FPM_InitFixedPoint_m(54.51215389, u12p4_T),
	FPM_InitFixedPoint_m(78.73446942, u12p4_T),
	FPM_InitFixedPoint_m(103.9123004, u12p4_T),
	FPM_InitFixedPoint_m(126.9879974, u12p4_T),
	FPM_InitFixedPoint_m(150.0636944, u12p4_T),
	FPM_InitFixedPoint_m(173.1871673, u12p4_T),
	FPM_InitFixedPoint_m(219.2907856, u12p4_T),
	FPM_InitFixedPoint_m(277.0516919, u12p4_T),
	FPM_InitFixedPoint_m(369.4022558, u12p4_T)},
	{FPM_InitFixedPoint_m(2.086427077, u12p4_T),
	FPM_InitFixedPoint_m(10.16797672, u12p4_T),
	FPM_InitFixedPoint_m(21.4030946, u12p4_T),
	FPM_InitFixedPoint_m(34.63743345, u12p4_T),
	FPM_InitFixedPoint_m(54.51215389, u12p4_T),
	FPM_InitFixedPoint_m(78.73446942, u12p4_T),
	FPM_InitFixedPoint_m(103.9123004, u12p4_T),
	FPM_InitFixedPoint_m(126.9879974, u12p4_T),
	FPM_InitFixedPoint_m(150.0636944, u12p4_T),
	FPM_InitFixedPoint_m(173.1871673, u12p4_T),
	FPM_InitFixedPoint_m(219.2907856, u12p4_T),
	FPM_InitFixedPoint_m(277.0516919, u12p4_T),
	FPM_InitFixedPoint_m(369.4022558, u12p4_T)},
	{FPM_InitFixedPoint_m(2.086427077, u12p4_T),
	FPM_InitFixedPoint_m(10.16797672, u12p4_T),
	FPM_InitFixedPoint_m(21.4030946, u12p4_T),
	FPM_InitFixedPoint_m(34.63743345, u12p4_T),
	FPM_InitFixedPoint_m(54.51215389, u12p4_T),
	FPM_InitFixedPoint_m(78.73446942, u12p4_T),
	FPM_InitFixedPoint_m(103.9123004, u12p4_T),
	FPM_InitFixedPoint_m(126.9879974, u12p4_T),
	FPM_InitFixedPoint_m(150.0636944, u12p4_T),
	FPM_InitFixedPoint_m(173.1871673, u12p4_T),
	FPM_InitFixedPoint_m(219.2907856, u12p4_T),
	FPM_InitFixedPoint_m(277.0516919, u12p4_T),
	FPM_InitFixedPoint_m(369.4022558, u12p4_T)},
	{FPM_InitFixedPoint_m(2.086427077, u12p4_T),
	FPM_InitFixedPoint_m(10.16797672, u12p4_T),
	FPM_InitFixedPoint_m(21.4030946, u12p4_T),
	FPM_InitFixedPoint_m(34.63743345, u12p4_T),
	FPM_InitFixedPoint_m(54.51215389, u12p4_T),
	FPM_InitFixedPoint_m(78.73446942, u12p4_T),
	FPM_InitFixedPoint_m(103.9123004, u12p4_T),
	FPM_InitFixedPoint_m(126.9879974, u12p4_T),
	FPM_InitFixedPoint_m(150.0636944, u12p4_T),
	FPM_InitFixedPoint_m(173.1871673, u12p4_T),
	FPM_InitFixedPoint_m(219.2907856, u12p4_T),
	FPM_InitFixedPoint_m(277.0516919, u12p4_T),
	FPM_InitFixedPoint_m(369.4022558, u12p4_T)},
	{FPM_InitFixedPoint_m(2.086427077, u12p4_T),
	FPM_InitFixedPoint_m(10.16797672, u12p4_T),
	FPM_InitFixedPoint_m(21.4030946, u12p4_T),
	FPM_InitFixedPoint_m(34.63743345, u12p4_T),
	FPM_InitFixedPoint_m(54.51215389, u12p4_T),
	FPM_InitFixedPoint_m(78.73446942, u12p4_T),
	FPM_InitFixedPoint_m(103.9123004, u12p4_T),
	FPM_InitFixedPoint_m(126.9879974, u12p4_T),
	FPM_InitFixedPoint_m(150.0636944, u12p4_T),
	FPM_InitFixedPoint_m(173.1871673, u12p4_T),
	FPM_InitFixedPoint_m(219.2907856, u12p4_T),
	FPM_InitFixedPoint_m(277.0516919, u12p4_T),
	FPM_InitFixedPoint_m(369.4022558, u12p4_T)},
	{FPM_InitFixedPoint_m(2.086427077, u12p4_T),
	FPM_InitFixedPoint_m(10.16797672, u12p4_T),
	FPM_InitFixedPoint_m(21.4030946, u12p4_T),
	FPM_InitFixedPoint_m(34.63743345, u12p4_T),
	FPM_InitFixedPoint_m(54.51215389, u12p4_T),
	FPM_InitFixedPoint_m(78.73446942, u12p4_T),
	FPM_InitFixedPoint_m(103.9123004, u12p4_T),
	FPM_InitFixedPoint_m(126.9879974, u12p4_T),
	FPM_InitFixedPoint_m(150.0636944, u12p4_T),
	FPM_InitFixedPoint_m(173.1871673, u12p4_T),
	FPM_InitFixedPoint_m(219.2907856, u12p4_T),
	FPM_InitFixedPoint_m(277.0516919, u12p4_T),
	FPM_InitFixedPoint_m(369.4022558, u12p4_T)}}, {{FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T)},{FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T)},
	{FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T)},{FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T)},
	{FPM_InitFixedPoint_m(4.73E-06, u5p11_T),
	FPM_InitFixedPoint_m(0.000112305, u5p11_T),
	FPM_InitFixedPoint_m(0.000497601, u5p11_T),
	FPM_InitFixedPoint_m(0.001303225, u5p11_T),
	FPM_InitFixedPoint_m(0.003227861, u5p11_T),
	FPM_InitFixedPoint_m(0.006733764, u5p11_T),
	FPM_InitFixedPoint_m(0.011729028, u5p11_T),
	FPM_InitFixedPoint_m(0.017516747, u5p11_T),
	FPM_InitFixedPoint_m(0.024461291, u5p11_T),
	FPM_InitFixedPoint_m(0.032580633, u5p11_T),
	FPM_InitFixedPoint_m(0.052235875, u5p11_T),
	FPM_InitFixedPoint_m(0.083377663, u5p11_T),
	FPM_InitFixedPoint_m(0.148226957, u5p11_T)},
	{FPM_InitFixedPoint_m(0.000486471, u5p11_T),
	FPM_InitFixedPoint_m(0.002683176, u5p11_T),
	FPM_InitFixedPoint_m(0.006562175, u5p11_T),
	FPM_InitFixedPoint_m(0.0123626, u5p11_T),
	FPM_InitFixedPoint_m(0.023575163, u5p11_T),
	FPM_InitFixedPoint_m(0.041301363, u5p11_T),
	FPM_InitFixedPoint_m(0.064455533, u5p11_T),
	FPM_InitFixedPoint_m(0.089909836, u5p11_T),
	FPM_InitFixedPoint_m(0.119413028, u5p11_T),
	FPM_InitFixedPoint_m(0.153038774, u5p11_T),
	FPM_InitFixedPoint_m(0.232215934, u5p11_T),
	FPM_InitFixedPoint_m(0.354221553, u5p11_T),
	FPM_InitFixedPoint_m(0.601993991, u5p11_T)},
	{FPM_InitFixedPoint_m(0.00237325, u5p11_T),
	FPM_InitFixedPoint_m(0.012012076, u5p11_T),
	FPM_InitFixedPoint_m(0.02659086, u5p11_T),
	FPM_InitFixedPoint_m(0.045522684, u5p11_T),
	FPM_InitFixedPoint_m(0.077527555, u5p11_T),
	FPM_InitFixedPoint_m(0.122334762, u5p11_T),
	FPM_InitFixedPoint_m(0.175664812, u5p11_T),
	FPM_InitFixedPoint_m(0.230589844, u5p11_T),
	FPM_InitFixedPoint_m(0.291299003, u5p11_T),
	FPM_InitFixedPoint_m(0.357935954, u5p11_T),
	FPM_InitFixedPoint_m(0.508131234, u5p11_T),
	FPM_InitFixedPoint_m(0.728886973, u5p11_T),
	FPM_InitFixedPoint_m(1.157132994, u5p11_T)},
	{FPM_InitFixedPoint_m(0.004734678, u5p11_T),
	FPM_InitFixedPoint_m(0.02374339, u5p11_T),
	FPM_InitFixedPoint_m(0.051937718, u5p11_T),
	FPM_InitFixedPoint_m(0.087787305, u5p11_T),
	FPM_InitFixedPoint_m(0.146985458, u5p11_T),
	FPM_InitFixedPoint_m(0.227835113, u5p11_T),
	FPM_InitFixedPoint_m(0.322007055, u5p11_T),
	FPM_InitFixedPoint_m(0.417387822, u5p11_T),
	FPM_InitFixedPoint_m(0.521444778, u5p11_T),
	FPM_InitFixedPoint_m(0.634420325, u5p11_T),
	FPM_InitFixedPoint_m(0.885672782, u5p11_T),
	FPM_InitFixedPoint_m(1.249329789, u5p11_T),
	FPM_InitFixedPoint_m(1.943698596, u5p11_T)},
	{FPM_InitFixedPoint_m(0.004734678, u5p11_T),
	FPM_InitFixedPoint_m(0.02374339, u5p11_T),
	FPM_InitFixedPoint_m(0.051937718, u5p11_T),
	FPM_InitFixedPoint_m(0.087787305, u5p11_T),
	FPM_InitFixedPoint_m(0.146985458, u5p11_T),
	FPM_InitFixedPoint_m(0.227835113, u5p11_T),
	FPM_InitFixedPoint_m(0.322007055, u5p11_T),
	FPM_InitFixedPoint_m(0.417387822, u5p11_T),
	FPM_InitFixedPoint_m(0.521444778, u5p11_T),
	FPM_InitFixedPoint_m(0.634420325, u5p11_T),
	FPM_InitFixedPoint_m(0.885672782, u5p11_T),
	FPM_InitFixedPoint_m(1.249329789, u5p11_T),
	FPM_InitFixedPoint_m(1.943698596, u5p11_T)},
	{FPM_InitFixedPoint_m(0.004734678, u5p11_T),
	FPM_InitFixedPoint_m(0.02374339, u5p11_T),
	FPM_InitFixedPoint_m(0.051937718, u5p11_T),
	FPM_InitFixedPoint_m(0.087787305, u5p11_T),
	FPM_InitFixedPoint_m(0.146985458, u5p11_T),
	FPM_InitFixedPoint_m(0.227835113, u5p11_T),
	FPM_InitFixedPoint_m(0.322007055, u5p11_T),
	FPM_InitFixedPoint_m(0.417387822, u5p11_T),
	FPM_InitFixedPoint_m(0.521444778, u5p11_T),
	FPM_InitFixedPoint_m(0.634420325, u5p11_T),
	FPM_InitFixedPoint_m(0.885672782, u5p11_T),
	FPM_InitFixedPoint_m(1.249329789, u5p11_T),
	FPM_InitFixedPoint_m(1.943698596, u5p11_T)},
	{FPM_InitFixedPoint_m(0.004734678, u5p11_T),
	FPM_InitFixedPoint_m(0.02374339, u5p11_T),
	FPM_InitFixedPoint_m(0.051937718, u5p11_T),
	FPM_InitFixedPoint_m(0.087787305, u5p11_T),
	FPM_InitFixedPoint_m(0.146985458, u5p11_T),
	FPM_InitFixedPoint_m(0.227835113, u5p11_T),
	FPM_InitFixedPoint_m(0.322007055, u5p11_T),
	FPM_InitFixedPoint_m(0.417387822, u5p11_T),
	FPM_InitFixedPoint_m(0.521444778, u5p11_T),
	FPM_InitFixedPoint_m(0.634420325, u5p11_T),
	FPM_InitFixedPoint_m(0.885672782, u5p11_T),
	FPM_InitFixedPoint_m(1.249329789, u5p11_T),
	FPM_InitFixedPoint_m(1.943698596, u5p11_T)},
	{FPM_InitFixedPoint_m(0.004734678, u5p11_T),
	FPM_InitFixedPoint_m(0.02374339, u5p11_T),
	FPM_InitFixedPoint_m(0.051937718, u5p11_T),
	FPM_InitFixedPoint_m(0.087787305, u5p11_T),
	FPM_InitFixedPoint_m(0.146985458, u5p11_T),
	FPM_InitFixedPoint_m(0.227835113, u5p11_T),
	FPM_InitFixedPoint_m(0.322007055, u5p11_T),
	FPM_InitFixedPoint_m(0.417387822, u5p11_T),
	FPM_InitFixedPoint_m(0.521444778, u5p11_T),
	FPM_InitFixedPoint_m(0.634420325, u5p11_T),
	FPM_InitFixedPoint_m(0.885672782, u5p11_T),
	FPM_InitFixedPoint_m(1.249329789, u5p11_T),
	FPM_InitFixedPoint_m(1.943698596, u5p11_T)}}, { FPM_InitFixedPoint_m(1.0, u2p14_T),FPM_InitFixedPoint_m(1.0, u2p14_T),
	FPM_InitFixedPoint_m(1.0, u2p14_T),FPM_InitFixedPoint_m(1.0, u2p14_T),
	FPM_InitFixedPoint_m(1.0, u2p14_T) }, { FPM_InitFixedPoint_m(0.005, um1p17_T),
	 FPM_InitFixedPoint_m(0.005, um1p17_T),
	 FPM_InitFixedPoint_m(0.005, um1p17_T),
	 FPM_InitFixedPoint_m(0.005, um1p17_T),
	 FPM_InitFixedPoint_m(0.005, um1p17_T),
	 FPM_InitFixedPoint_m(0.005, um1p17_T),
	 FPM_InitFixedPoint_m(0.005, um1p17_T),
	 FPM_InitFixedPoint_m(0.005, um1p17_T),
	 FPM_InitFixedPoint_m(0.005, um1p17_T),
	 FPM_InitFixedPoint_m(0.005, um1p17_T) }, { FPM_InitFixedPoint_m(1.0, u8p8_T), FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(0.3, u8p8_T), FPM_InitFixedPoint_m(0.2, u8p8_T),
	 FPM_InitFixedPoint_m(0.1, u8p8_T), FPM_InitFixedPoint_m(0.0, u8p8_T),
	 FPM_InitFixedPoint_m(0.0, u8p8_T), FPM_InitFixedPoint_m(0.0, u8p8_T),
	 FPM_InitFixedPoint_m(0.0, u8p8_T), FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.0, u8p8_T), FPM_InitFixedPoint_m(0.0, u8p8_T) }, { FPM_InitFixedPoint_m(1.0, u2p14_T),FPM_InitFixedPoint_m(1.0, u2p14_T),
	FPM_InitFixedPoint_m(1.0, u2p14_T),FPM_InitFixedPoint_m(1.0, u2p14_T),
	FPM_InitFixedPoint_m(1.0, u2p14_T) }, { FPM_InitFixedPoint_m(0.05078125, u8p8_T),
	 FPM_InitFixedPoint_m(0.10546875, u8p8_T),
	 FPM_InitFixedPoint_m(0.15625, u8p8_T),
	 FPM_InitFixedPoint_m(0.20703125, u8p8_T),
	 FPM_InitFixedPoint_m(0.2578125, u8p8_T) }, {{FPM_InitFixedPoint_m(15.0, u12p4_T),
	 FPM_InitFixedPoint_m(15.0, u12p4_T),
	 FPM_InitFixedPoint_m(15.0, u12p4_T),FPM_InitFixedPoint_m(15.0, u12p4_T),
	FPM_InitFixedPoint_m(15.0, u12p4_T), FPM_InitFixedPoint_m(15.0, u12p4_T),
	 FPM_InitFixedPoint_m(15.0, u12p4_T),
	 FPM_InitFixedPoint_m(15.0, u12p4_T),FPM_InitFixedPoint_m(15.0, u12p4_T),
	FPM_InitFixedPoint_m(15.0, u12p4_T),FPM_InitFixedPoint_m(15.0, u12p4_T),
	 FPM_InitFixedPoint_m(15.0, u12p4_T)},
	{FPM_InitFixedPoint_m(15.0, u12p4_T),
	 FPM_InitFixedPoint_m(15.0, u12p4_T),FPM_InitFixedPoint_m(15.0, u12p4_T),
	FPM_InitFixedPoint_m(15.0, u12p4_T), FPM_InitFixedPoint_m(15.0, u12p4_T),
	 FPM_InitFixedPoint_m(15.0, u12p4_T),FPM_InitFixedPoint_m(15.0, u12p4_T),
	 FPM_InitFixedPoint_m(15.0, u12p4_T),
	 FPM_InitFixedPoint_m(15.0, u12p4_T),
	 FPM_InitFixedPoint_m(15.0, u12p4_T),
	 FPM_InitFixedPoint_m(15.0, u12p4_T),
	 FPM_InitFixedPoint_m(15.0, u12p4_T)}}, FPM_InitFixedPoint_m(0.0, u9p7_T), 20583U, 3991U, FPM_InitFixedPoint_m(30.0, u9p7_T), FPM_InitFixedPoint_m(3.0, u12p4_T), FPM_InitFixedPoint_m(0.0195, u4p12_T), { FPM_InitFixedPoint_m(0.0, u9p7_T), FPM_InitFixedPoint_m(5.0, u9p7_T),
	 FPM_InitFixedPoint_m(10.0, u9p7_T), FPM_InitFixedPoint_m(20.0, u9p7_T) }, { FPM_InitFixedPoint_m(0.0, u9p7_T), FPM_InitFixedPoint_m(5.0, u9p7_T),
	 FPM_InitFixedPoint_m(10.0, u9p7_T), FPM_InitFixedPoint_m(20.0, u9p7_T) }, { FPM_InitFixedPoint_m(25.0, u12p4_T),
	 FPM_InitFixedPoint_m(50.0, u12p4_T) }, { FPM_InitFixedPoint_m(60.0, u12p4_T),
	 FPM_InitFixedPoint_m(15.0, u12p4_T) }, { FPM_InitFixedPoint_m(0.0, u8p8_T), FPM_InitFixedPoint_m(1.0, u8p8_T) }, {{FPM_InitFixedPoint_m(90.0, u12p4_T),
	 FPM_InitFixedPoint_m(60.0, u12p4_T),
	 FPM_InitFixedPoint_m(30.0, u12p4_T),
	 FPM_InitFixedPoint_m(0.0, u12p4_T)},
	{FPM_InitFixedPoint_m(90.0, u12p4_T),
	 FPM_InitFixedPoint_m(60.0, u12p4_T),
	 FPM_InitFixedPoint_m(30.0, u12p4_T),
	 FPM_InitFixedPoint_m(0.0, u12p4_T)},
	{FPM_InitFixedPoint_m(90.0, u12p4_T),
	 FPM_InitFixedPoint_m(60.0, u12p4_T),
	 FPM_InitFixedPoint_m(30.0, u12p4_T),
	 FPM_InitFixedPoint_m(0.0, u12p4_T)},
	{FPM_InitFixedPoint_m(90.0, u12p4_T),
	 FPM_InitFixedPoint_m(60.0, u12p4_T),
	 FPM_InitFixedPoint_m(30.0, u12p4_T),
	 FPM_InitFixedPoint_m(0.0, u12p4_T)}}, {{FPM_InitFixedPoint_m(1.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.66, u1p15_T),
	 FPM_InitFixedPoint_m(0.33, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T)},{FPM_InitFixedPoint_m(1.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.66, u1p15_T),
	 FPM_InitFixedPoint_m(0.33, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T)},{FPM_InitFixedPoint_m(1.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.66, u1p15_T),
	 FPM_InitFixedPoint_m(0.33, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T)},{FPM_InitFixedPoint_m(1.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.66, u1p15_T),
	 FPM_InitFixedPoint_m(0.33, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T)}}, {{FPM_InitFixedPoint_m(0.0, u0p16_T),
	 FPM_InitFixedPoint_m(0.004, u0p16_T)},
	{FPM_InitFixedPoint_m(0.0, u0p16_T),
	 FPM_InitFixedPoint_m(0.004, u0p16_T)},
	{FPM_InitFixedPoint_m(0.0, u0p16_T),
	 FPM_InitFixedPoint_m(0.004, u0p16_T)},
	{FPM_InitFixedPoint_m(0.0, u0p16_T),
	 FPM_InitFixedPoint_m(0.004, u0p16_T)}}, {{FPM_InitFixedPoint_m(0.0, u0p16_T),
	 FPM_InitFixedPoint_m(0.001953125, u0p16_T)},
	{FPM_InitFixedPoint_m(0.0, u0p16_T),
	 FPM_InitFixedPoint_m(0.001953125, u0p16_T)},
	{FPM_InitFixedPoint_m(0.0, u0p16_T),
	 FPM_InitFixedPoint_m(0.001953125, u0p16_T)},
	{FPM_InitFixedPoint_m(0.0, u0p16_T),
	 FPM_InitFixedPoint_m(0.001953125, u0p16_T)}}, {{FPM_InitFixedPoint_m(20.0, u12p4_T),
	FPM_InitFixedPoint_m(0.0, u12p4_T)},{FPM_InitFixedPoint_m(20.0, u12p4_T),
	FPM_InitFixedPoint_m(0.0, u12p4_T)},{FPM_InitFixedPoint_m(20.0, u12p4_T),
	FPM_InitFixedPoint_m(0.0, u12p4_T)},{FPM_InitFixedPoint_m(20.0, u12p4_T),
	FPM_InitFixedPoint_m(0.0, u12p4_T)}}, {FPM_InitFixedPoint_m(8.0, u7p9_T), FPM_InitFixedPoint_m(8.0, u7p9_T),
	 FPM_InitFixedPoint_m(8.0, u7p9_T), FPM_InitFixedPoint_m(8.0, u7p9_T),
	 FPM_InitFixedPoint_m(8.0, u7p9_T), FPM_InitFixedPoint_m(8.0, u7p9_T),
	 FPM_InitFixedPoint_m(8.0, u7p9_T), FPM_InitFixedPoint_m(8.0, u7p9_T),
	 FPM_InitFixedPoint_m(8.0, u7p9_T), FPM_InitFixedPoint_m(8.0, u7p9_T),
	 FPM_InitFixedPoint_m(8.0, u7p9_T), FPM_InitFixedPoint_m(8.0, u7p9_T)}, {{FPM_InitFixedPoint_m(0.25, u3p13_T),
	FPM_InitFixedPoint_m(0.25, u3p13_T),FPM_InitFixedPoint_m(0.25, u3p13_T),
	FPM_InitFixedPoint_m(0.25, u3p13_T),FPM_InitFixedPoint_m(0.25, u3p13_T),
	FPM_InitFixedPoint_m(0.25, u3p13_T),FPM_InitFixedPoint_m(0.25, u3p13_T),
	FPM_InitFixedPoint_m(0.25, u3p13_T),FPM_InitFixedPoint_m(0.25, u3p13_T),
	FPM_InitFixedPoint_m(0.25, u3p13_T),FPM_InitFixedPoint_m(0.25, u3p13_T),
	FPM_InitFixedPoint_m(0.25, u3p13_T),FPM_InitFixedPoint_m(0.25, u3p13_T)},
	{FPM_InitFixedPoint_m(0.2, u3p13_T),FPM_InitFixedPoint_m(0.2, u3p13_T),
	FPM_InitFixedPoint_m(0.2, u3p13_T),FPM_InitFixedPoint_m(0.2, u3p13_T),
	FPM_InitFixedPoint_m(0.2, u3p13_T),FPM_InitFixedPoint_m(0.2, u3p13_T),
	FPM_InitFixedPoint_m(0.2, u3p13_T),FPM_InitFixedPoint_m(0.2, u3p13_T),
	FPM_InitFixedPoint_m(0.2, u3p13_T),FPM_InitFixedPoint_m(0.2, u3p13_T),
	FPM_InitFixedPoint_m(0.2, u3p13_T),FPM_InitFixedPoint_m(0.2, u3p13_T),
	FPM_InitFixedPoint_m(0.2, u3p13_T)},{FPM_InitFixedPoint_m(0.13, u3p13_T),
	FPM_InitFixedPoint_m(0.13, u3p13_T),FPM_InitFixedPoint_m(0.13, u3p13_T),
	FPM_InitFixedPoint_m(0.13, u3p13_T),FPM_InitFixedPoint_m(0.13, u3p13_T),
	FPM_InitFixedPoint_m(0.13, u3p13_T),FPM_InitFixedPoint_m(0.13, u3p13_T),
	FPM_InitFixedPoint_m(0.13, u3p13_T),FPM_InitFixedPoint_m(0.13, u3p13_T),
	FPM_InitFixedPoint_m(0.13, u3p13_T),FPM_InitFixedPoint_m(0.13, u3p13_T),
	FPM_InitFixedPoint_m(0.13, u3p13_T),FPM_InitFixedPoint_m(0.13, u3p13_T)},
	{FPM_InitFixedPoint_m(0.08, u3p13_T),FPM_InitFixedPoint_m(0.08, u3p13_T),
	FPM_InitFixedPoint_m(0.08, u3p13_T),FPM_InitFixedPoint_m(0.08, u3p13_T),
	FPM_InitFixedPoint_m(0.08, u3p13_T),FPM_InitFixedPoint_m(0.08, u3p13_T),
	FPM_InitFixedPoint_m(0.08, u3p13_T),FPM_InitFixedPoint_m(0.08, u3p13_T),
	FPM_InitFixedPoint_m(0.08, u3p13_T),FPM_InitFixedPoint_m(0.08, u3p13_T),
	FPM_InitFixedPoint_m(0.08, u3p13_T),FPM_InitFixedPoint_m(0.08, u3p13_T),
	FPM_InitFixedPoint_m(0.08, u3p13_T)},
	{FPM_InitFixedPoint_m(0.04, u3p13_T),FPM_InitFixedPoint_m(0.04, u3p13_T),
	FPM_InitFixedPoint_m(0.04, u3p13_T),FPM_InitFixedPoint_m(0.04, u3p13_T),
	FPM_InitFixedPoint_m(0.04, u3p13_T),FPM_InitFixedPoint_m(0.04, u3p13_T),
	FPM_InitFixedPoint_m(0.04, u3p13_T),FPM_InitFixedPoint_m(0.04, u3p13_T),
	FPM_InitFixedPoint_m(0.04, u3p13_T),FPM_InitFixedPoint_m(0.04, u3p13_T),
	FPM_InitFixedPoint_m(0.04, u3p13_T),FPM_InitFixedPoint_m(0.04, u3p13_T),
	FPM_InitFixedPoint_m(0.04, u3p13_T)},
	{FPM_InitFixedPoint_m(0.01, u3p13_T),FPM_InitFixedPoint_m(0.01, u3p13_T),
	FPM_InitFixedPoint_m(0.01, u3p13_T),FPM_InitFixedPoint_m(0.01, u3p13_T),
	FPM_InitFixedPoint_m(0.01, u3p13_T),FPM_InitFixedPoint_m(0.01, u3p13_T),
	FPM_InitFixedPoint_m(0.01, u3p13_T),FPM_InitFixedPoint_m(0.01, u3p13_T),
	FPM_InitFixedPoint_m(0.01, u3p13_T),FPM_InitFixedPoint_m(0.01, u3p13_T),
	FPM_InitFixedPoint_m(0.01, u3p13_T),FPM_InitFixedPoint_m(0.01, u3p13_T),
	FPM_InitFixedPoint_m(0.01, u3p13_T)},{FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T)},
	{FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T)},{FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T)},
	{FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T)},{FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T)},
	{FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T)}}, {{FPM_InitFixedPoint_m(0.25, u3p13_T),
	FPM_InitFixedPoint_m(0.25, u3p13_T),FPM_InitFixedPoint_m(0.25, u3p13_T),
	FPM_InitFixedPoint_m(0.25, u3p13_T),FPM_InitFixedPoint_m(0.25, u3p13_T),
	FPM_InitFixedPoint_m(0.25, u3p13_T),FPM_InitFixedPoint_m(0.25, u3p13_T),
	FPM_InitFixedPoint_m(0.25, u3p13_T),FPM_InitFixedPoint_m(0.25, u3p13_T),
	FPM_InitFixedPoint_m(0.25, u3p13_T),FPM_InitFixedPoint_m(0.25, u3p13_T),
	FPM_InitFixedPoint_m(0.25, u3p13_T),FPM_InitFixedPoint_m(0.25, u3p13_T)},
	{FPM_InitFixedPoint_m(0.2, u3p13_T),FPM_InitFixedPoint_m(0.2, u3p13_T),
	FPM_InitFixedPoint_m(0.2, u3p13_T),FPM_InitFixedPoint_m(0.2, u3p13_T),
	FPM_InitFixedPoint_m(0.2, u3p13_T),FPM_InitFixedPoint_m(0.2, u3p13_T),
	FPM_InitFixedPoint_m(0.2, u3p13_T),FPM_InitFixedPoint_m(0.2, u3p13_T),
	FPM_InitFixedPoint_m(0.2, u3p13_T),FPM_InitFixedPoint_m(0.2, u3p13_T),
	FPM_InitFixedPoint_m(0.2, u3p13_T),FPM_InitFixedPoint_m(0.2, u3p13_T),
	FPM_InitFixedPoint_m(0.2, u3p13_T)},{FPM_InitFixedPoint_m(0.13, u3p13_T),
	FPM_InitFixedPoint_m(0.13, u3p13_T),FPM_InitFixedPoint_m(0.13, u3p13_T),
	FPM_InitFixedPoint_m(0.13, u3p13_T),FPM_InitFixedPoint_m(0.13, u3p13_T),
	FPM_InitFixedPoint_m(0.13, u3p13_T),FPM_InitFixedPoint_m(0.13, u3p13_T),
	FPM_InitFixedPoint_m(0.13, u3p13_T),FPM_InitFixedPoint_m(0.13, u3p13_T),
	FPM_InitFixedPoint_m(0.13, u3p13_T),FPM_InitFixedPoint_m(0.13, u3p13_T),
	FPM_InitFixedPoint_m(0.13, u3p13_T),FPM_InitFixedPoint_m(0.13, u3p13_T)},
	{FPM_InitFixedPoint_m(0.08, u3p13_T),FPM_InitFixedPoint_m(0.08, u3p13_T),
	FPM_InitFixedPoint_m(0.08, u3p13_T),FPM_InitFixedPoint_m(0.08, u3p13_T),
	FPM_InitFixedPoint_m(0.08, u3p13_T),FPM_InitFixedPoint_m(0.08, u3p13_T),
	FPM_InitFixedPoint_m(0.08, u3p13_T),FPM_InitFixedPoint_m(0.08, u3p13_T),
	FPM_InitFixedPoint_m(0.08, u3p13_T),FPM_InitFixedPoint_m(0.08, u3p13_T),
	FPM_InitFixedPoint_m(0.08, u3p13_T),FPM_InitFixedPoint_m(0.08, u3p13_T),
	FPM_InitFixedPoint_m(0.08, u3p13_T)},
	{FPM_InitFixedPoint_m(0.04, u3p13_T),FPM_InitFixedPoint_m(0.04, u3p13_T),
	FPM_InitFixedPoint_m(0.04, u3p13_T),FPM_InitFixedPoint_m(0.04, u3p13_T),
	FPM_InitFixedPoint_m(0.04, u3p13_T),FPM_InitFixedPoint_m(0.04, u3p13_T),
	FPM_InitFixedPoint_m(0.04, u3p13_T),FPM_InitFixedPoint_m(0.04, u3p13_T),
	FPM_InitFixedPoint_m(0.04, u3p13_T),FPM_InitFixedPoint_m(0.04, u3p13_T),
	FPM_InitFixedPoint_m(0.04, u3p13_T),FPM_InitFixedPoint_m(0.04, u3p13_T),
	FPM_InitFixedPoint_m(0.04, u3p13_T)},
	{FPM_InitFixedPoint_m(0.01, u3p13_T),FPM_InitFixedPoint_m(0.01, u3p13_T),
	FPM_InitFixedPoint_m(0.01, u3p13_T),FPM_InitFixedPoint_m(0.01, u3p13_T),
	FPM_InitFixedPoint_m(0.01, u3p13_T),FPM_InitFixedPoint_m(0.01, u3p13_T),
	FPM_InitFixedPoint_m(0.01, u3p13_T),FPM_InitFixedPoint_m(0.01, u3p13_T),
	FPM_InitFixedPoint_m(0.01, u3p13_T),FPM_InitFixedPoint_m(0.01, u3p13_T),
	FPM_InitFixedPoint_m(0.01, u3p13_T),FPM_InitFixedPoint_m(0.01, u3p13_T),
	FPM_InitFixedPoint_m(0.01, u3p13_T)},{FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T)},
	{FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T)},{FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T)},
	{FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T)},{FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T)},
	{FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T)}}, {{FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T)},{FPM_InitFixedPoint_m(0.25, u5p11_T),
	FPM_InitFixedPoint_m(0.25, u5p11_T),FPM_InitFixedPoint_m(0.25, u5p11_T),
	FPM_InitFixedPoint_m(0.25, u5p11_T),FPM_InitFixedPoint_m(0.25, u5p11_T),
	FPM_InitFixedPoint_m(0.25, u5p11_T),FPM_InitFixedPoint_m(0.25, u5p11_T),
	FPM_InitFixedPoint_m(0.25, u5p11_T),FPM_InitFixedPoint_m(0.25, u5p11_T),
	FPM_InitFixedPoint_m(0.25, u5p11_T),FPM_InitFixedPoint_m(0.25, u5p11_T),
	FPM_InitFixedPoint_m(0.25, u5p11_T),FPM_InitFixedPoint_m(0.25, u5p11_T)},
	{FPM_InitFixedPoint_m(0.5, u5p11_T),FPM_InitFixedPoint_m(0.5, u5p11_T),
	FPM_InitFixedPoint_m(0.5, u5p11_T),FPM_InitFixedPoint_m(0.5, u5p11_T),
	FPM_InitFixedPoint_m(0.5, u5p11_T),FPM_InitFixedPoint_m(0.5, u5p11_T),
	FPM_InitFixedPoint_m(0.5, u5p11_T),FPM_InitFixedPoint_m(0.5, u5p11_T),
	FPM_InitFixedPoint_m(0.5, u5p11_T),FPM_InitFixedPoint_m(0.5, u5p11_T),
	FPM_InitFixedPoint_m(0.5, u5p11_T),FPM_InitFixedPoint_m(0.5, u5p11_T),
	FPM_InitFixedPoint_m(0.5, u5p11_T)},{FPM_InitFixedPoint_m(0.75, u5p11_T),
	FPM_InitFixedPoint_m(0.75, u5p11_T),FPM_InitFixedPoint_m(0.75, u5p11_T),
	FPM_InitFixedPoint_m(0.75, u5p11_T),FPM_InitFixedPoint_m(0.75, u5p11_T),
	FPM_InitFixedPoint_m(0.75, u5p11_T),FPM_InitFixedPoint_m(0.75, u5p11_T),
	FPM_InitFixedPoint_m(0.75, u5p11_T),FPM_InitFixedPoint_m(0.75, u5p11_T),
	FPM_InitFixedPoint_m(0.75, u5p11_T),FPM_InitFixedPoint_m(0.75, u5p11_T),
	FPM_InitFixedPoint_m(0.75, u5p11_T),FPM_InitFixedPoint_m(0.75, u5p11_T)},
	{FPM_InitFixedPoint_m(1.0, u5p11_T),FPM_InitFixedPoint_m(1.0, u5p11_T),
	FPM_InitFixedPoint_m(1.0, u5p11_T),FPM_InitFixedPoint_m(1.0, u5p11_T),
	FPM_InitFixedPoint_m(1.0, u5p11_T),FPM_InitFixedPoint_m(1.0, u5p11_T),
	FPM_InitFixedPoint_m(1.0, u5p11_T),FPM_InitFixedPoint_m(1.0, u5p11_T),
	FPM_InitFixedPoint_m(1.0, u5p11_T),FPM_InitFixedPoint_m(1.0, u5p11_T),
	FPM_InitFixedPoint_m(1.0, u5p11_T),FPM_InitFixedPoint_m(1.0, u5p11_T),
	FPM_InitFixedPoint_m(1.0, u5p11_T)},{FPM_InitFixedPoint_m(1.25, u5p11_T),
	FPM_InitFixedPoint_m(1.25, u5p11_T),FPM_InitFixedPoint_m(1.25, u5p11_T),
	FPM_InitFixedPoint_m(1.25, u5p11_T),FPM_InitFixedPoint_m(1.25, u5p11_T),
	FPM_InitFixedPoint_m(1.25, u5p11_T),FPM_InitFixedPoint_m(1.25, u5p11_T),
	FPM_InitFixedPoint_m(1.25, u5p11_T),FPM_InitFixedPoint_m(1.25, u5p11_T),
	FPM_InitFixedPoint_m(1.25, u5p11_T),FPM_InitFixedPoint_m(1.25, u5p11_T),
	FPM_InitFixedPoint_m(1.25, u5p11_T),FPM_InitFixedPoint_m(1.25, u5p11_T)},
	{FPM_InitFixedPoint_m(1.5, u5p11_T),FPM_InitFixedPoint_m(1.5, u5p11_T),
	FPM_InitFixedPoint_m(1.5, u5p11_T),FPM_InitFixedPoint_m(1.5, u5p11_T),
	FPM_InitFixedPoint_m(1.5, u5p11_T),FPM_InitFixedPoint_m(1.5, u5p11_T),
	FPM_InitFixedPoint_m(1.5, u5p11_T),FPM_InitFixedPoint_m(1.5, u5p11_T),
	FPM_InitFixedPoint_m(1.5, u5p11_T),FPM_InitFixedPoint_m(1.5, u5p11_T),
	FPM_InitFixedPoint_m(1.5, u5p11_T),FPM_InitFixedPoint_m(1.5, u5p11_T),
	FPM_InitFixedPoint_m(1.5, u5p11_T)},{FPM_InitFixedPoint_m(2.0, u5p11_T),
	FPM_InitFixedPoint_m(2.0, u5p11_T),FPM_InitFixedPoint_m(2.0, u5p11_T),
	FPM_InitFixedPoint_m(2.0, u5p11_T),FPM_InitFixedPoint_m(2.0, u5p11_T),
	FPM_InitFixedPoint_m(2.0, u5p11_T),FPM_InitFixedPoint_m(2.0, u5p11_T),
	FPM_InitFixedPoint_m(2.0, u5p11_T),FPM_InitFixedPoint_m(2.0, u5p11_T),
	FPM_InitFixedPoint_m(2.0, u5p11_T),FPM_InitFixedPoint_m(2.0, u5p11_T),
	FPM_InitFixedPoint_m(2.0, u5p11_T),FPM_InitFixedPoint_m(2.0, u5p11_T)},
	{FPM_InitFixedPoint_m(4.0, u5p11_T),FPM_InitFixedPoint_m(4.0, u5p11_T),
	FPM_InitFixedPoint_m(4.0, u5p11_T),FPM_InitFixedPoint_m(4.0, u5p11_T),
	FPM_InitFixedPoint_m(4.0, u5p11_T),FPM_InitFixedPoint_m(4.0, u5p11_T),
	FPM_InitFixedPoint_m(4.0, u5p11_T),FPM_InitFixedPoint_m(4.0, u5p11_T),
	FPM_InitFixedPoint_m(4.0, u5p11_T),FPM_InitFixedPoint_m(4.0, u5p11_T),
	FPM_InitFixedPoint_m(4.0, u5p11_T),FPM_InitFixedPoint_m(4.0, u5p11_T),
	FPM_InitFixedPoint_m(4.0, u5p11_T)},{FPM_InitFixedPoint_m(6.0, u5p11_T),
	FPM_InitFixedPoint_m(6.0, u5p11_T),FPM_InitFixedPoint_m(6.0, u5p11_T),
	FPM_InitFixedPoint_m(6.0, u5p11_T),FPM_InitFixedPoint_m(6.0, u5p11_T),
	FPM_InitFixedPoint_m(6.0, u5p11_T),FPM_InitFixedPoint_m(6.0, u5p11_T),
	FPM_InitFixedPoint_m(6.0, u5p11_T),FPM_InitFixedPoint_m(6.0, u5p11_T),
	FPM_InitFixedPoint_m(6.0, u5p11_T),FPM_InitFixedPoint_m(6.0, u5p11_T),
	FPM_InitFixedPoint_m(6.0, u5p11_T),FPM_InitFixedPoint_m(6.0, u5p11_T)},
	{FPM_InitFixedPoint_m(7.5, u5p11_T),FPM_InitFixedPoint_m(7.5, u5p11_T),
	FPM_InitFixedPoint_m(7.5, u5p11_T),FPM_InitFixedPoint_m(7.5, u5p11_T),
	FPM_InitFixedPoint_m(7.5, u5p11_T),FPM_InitFixedPoint_m(7.5, u5p11_T),
	FPM_InitFixedPoint_m(7.5, u5p11_T),FPM_InitFixedPoint_m(7.5, u5p11_T),
	FPM_InitFixedPoint_m(7.5, u5p11_T),FPM_InitFixedPoint_m(7.5, u5p11_T),
	FPM_InitFixedPoint_m(7.5, u5p11_T),FPM_InitFixedPoint_m(7.5, u5p11_T),
	FPM_InitFixedPoint_m(7.5, u5p11_T)},{FPM_InitFixedPoint_m(8.0, u5p11_T),
	FPM_InitFixedPoint_m(8.0, u5p11_T),FPM_InitFixedPoint_m(8.0, u5p11_T),
	FPM_InitFixedPoint_m(8.0, u5p11_T),FPM_InitFixedPoint_m(8.0, u5p11_T),
	FPM_InitFixedPoint_m(8.0, u5p11_T),FPM_InitFixedPoint_m(8.0, u5p11_T),
	FPM_InitFixedPoint_m(8.0, u5p11_T),FPM_InitFixedPoint_m(8.0, u5p11_T),
	FPM_InitFixedPoint_m(8.0, u5p11_T),FPM_InitFixedPoint_m(8.0, u5p11_T),
	FPM_InitFixedPoint_m(8.0, u5p11_T),FPM_InitFixedPoint_m(8.0, u5p11_T)}}, {{FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T)},{FPM_InitFixedPoint_m(0.25, u5p11_T),
	FPM_InitFixedPoint_m(0.25, u5p11_T),FPM_InitFixedPoint_m(0.25, u5p11_T),
	FPM_InitFixedPoint_m(0.25, u5p11_T),FPM_InitFixedPoint_m(0.25, u5p11_T),
	FPM_InitFixedPoint_m(0.25, u5p11_T),FPM_InitFixedPoint_m(0.25, u5p11_T),
	FPM_InitFixedPoint_m(0.25, u5p11_T),FPM_InitFixedPoint_m(0.25, u5p11_T),
	FPM_InitFixedPoint_m(0.25, u5p11_T),FPM_InitFixedPoint_m(0.25, u5p11_T),
	FPM_InitFixedPoint_m(0.25, u5p11_T),FPM_InitFixedPoint_m(0.25, u5p11_T)},
	{FPM_InitFixedPoint_m(0.5, u5p11_T),FPM_InitFixedPoint_m(0.5, u5p11_T),
	FPM_InitFixedPoint_m(0.5, u5p11_T),FPM_InitFixedPoint_m(0.5, u5p11_T),
	FPM_InitFixedPoint_m(0.5, u5p11_T),FPM_InitFixedPoint_m(0.5, u5p11_T),
	FPM_InitFixedPoint_m(0.5, u5p11_T),FPM_InitFixedPoint_m(0.5, u5p11_T),
	FPM_InitFixedPoint_m(0.5, u5p11_T),FPM_InitFixedPoint_m(0.5, u5p11_T),
	FPM_InitFixedPoint_m(0.5, u5p11_T),FPM_InitFixedPoint_m(0.5, u5p11_T),
	FPM_InitFixedPoint_m(0.5, u5p11_T)},{FPM_InitFixedPoint_m(0.75, u5p11_T),
	FPM_InitFixedPoint_m(0.75, u5p11_T),FPM_InitFixedPoint_m(0.75, u5p11_T),
	FPM_InitFixedPoint_m(0.75, u5p11_T),FPM_InitFixedPoint_m(0.75, u5p11_T),
	FPM_InitFixedPoint_m(0.75, u5p11_T),FPM_InitFixedPoint_m(0.75, u5p11_T),
	FPM_InitFixedPoint_m(0.75, u5p11_T),FPM_InitFixedPoint_m(0.75, u5p11_T),
	FPM_InitFixedPoint_m(0.75, u5p11_T),FPM_InitFixedPoint_m(0.75, u5p11_T),
	FPM_InitFixedPoint_m(0.75, u5p11_T),FPM_InitFixedPoint_m(0.75, u5p11_T)},
	{FPM_InitFixedPoint_m(1.0, u5p11_T),FPM_InitFixedPoint_m(1.0, u5p11_T),
	FPM_InitFixedPoint_m(1.0, u5p11_T),FPM_InitFixedPoint_m(1.0, u5p11_T),
	FPM_InitFixedPoint_m(1.0, u5p11_T),FPM_InitFixedPoint_m(1.0, u5p11_T),
	FPM_InitFixedPoint_m(1.0, u5p11_T),FPM_InitFixedPoint_m(1.0, u5p11_T),
	FPM_InitFixedPoint_m(1.0, u5p11_T),FPM_InitFixedPoint_m(1.0, u5p11_T),
	FPM_InitFixedPoint_m(1.0, u5p11_T),FPM_InitFixedPoint_m(1.0, u5p11_T),
	FPM_InitFixedPoint_m(1.0, u5p11_T)},{FPM_InitFixedPoint_m(1.25, u5p11_T),
	FPM_InitFixedPoint_m(1.25, u5p11_T),FPM_InitFixedPoint_m(1.25, u5p11_T),
	FPM_InitFixedPoint_m(1.25, u5p11_T),FPM_InitFixedPoint_m(1.25, u5p11_T),
	FPM_InitFixedPoint_m(1.25, u5p11_T),FPM_InitFixedPoint_m(1.25, u5p11_T),
	FPM_InitFixedPoint_m(1.25, u5p11_T),FPM_InitFixedPoint_m(1.25, u5p11_T),
	FPM_InitFixedPoint_m(1.25, u5p11_T),FPM_InitFixedPoint_m(1.25, u5p11_T),
	FPM_InitFixedPoint_m(1.25, u5p11_T),FPM_InitFixedPoint_m(1.25, u5p11_T)},
	{FPM_InitFixedPoint_m(1.5, u5p11_T),FPM_InitFixedPoint_m(1.5, u5p11_T),
	FPM_InitFixedPoint_m(1.5, u5p11_T),FPM_InitFixedPoint_m(1.5, u5p11_T),
	FPM_InitFixedPoint_m(1.5, u5p11_T),FPM_InitFixedPoint_m(1.5, u5p11_T),
	FPM_InitFixedPoint_m(1.5, u5p11_T),FPM_InitFixedPoint_m(1.5, u5p11_T),
	FPM_InitFixedPoint_m(1.5, u5p11_T),FPM_InitFixedPoint_m(1.5, u5p11_T),
	FPM_InitFixedPoint_m(1.5, u5p11_T),FPM_InitFixedPoint_m(1.5, u5p11_T),
	FPM_InitFixedPoint_m(1.5, u5p11_T)},{FPM_InitFixedPoint_m(2.0, u5p11_T),
	FPM_InitFixedPoint_m(2.0, u5p11_T),FPM_InitFixedPoint_m(2.0, u5p11_T),
	FPM_InitFixedPoint_m(2.0, u5p11_T),FPM_InitFixedPoint_m(2.0, u5p11_T),
	FPM_InitFixedPoint_m(2.0, u5p11_T),FPM_InitFixedPoint_m(2.0, u5p11_T),
	FPM_InitFixedPoint_m(2.0, u5p11_T),FPM_InitFixedPoint_m(2.0, u5p11_T),
	FPM_InitFixedPoint_m(2.0, u5p11_T),FPM_InitFixedPoint_m(2.0, u5p11_T),
	FPM_InitFixedPoint_m(2.0, u5p11_T),FPM_InitFixedPoint_m(2.0, u5p11_T)},
	{FPM_InitFixedPoint_m(4.0, u5p11_T),FPM_InitFixedPoint_m(4.0, u5p11_T),
	FPM_InitFixedPoint_m(4.0, u5p11_T),FPM_InitFixedPoint_m(4.0, u5p11_T),
	FPM_InitFixedPoint_m(4.0, u5p11_T),FPM_InitFixedPoint_m(4.0, u5p11_T),
	FPM_InitFixedPoint_m(4.0, u5p11_T),FPM_InitFixedPoint_m(4.0, u5p11_T),
	FPM_InitFixedPoint_m(4.0, u5p11_T),FPM_InitFixedPoint_m(4.0, u5p11_T),
	FPM_InitFixedPoint_m(4.0, u5p11_T),FPM_InitFixedPoint_m(4.0, u5p11_T),
	FPM_InitFixedPoint_m(4.0, u5p11_T)},{FPM_InitFixedPoint_m(6.0, u5p11_T),
	FPM_InitFixedPoint_m(6.0, u5p11_T),FPM_InitFixedPoint_m(6.0, u5p11_T),
	FPM_InitFixedPoint_m(6.0, u5p11_T),FPM_InitFixedPoint_m(6.0, u5p11_T),
	FPM_InitFixedPoint_m(6.0, u5p11_T),FPM_InitFixedPoint_m(6.0, u5p11_T),
	FPM_InitFixedPoint_m(6.0, u5p11_T),FPM_InitFixedPoint_m(6.0, u5p11_T),
	FPM_InitFixedPoint_m(6.0, u5p11_T),FPM_InitFixedPoint_m(6.0, u5p11_T),
	FPM_InitFixedPoint_m(6.0, u5p11_T),FPM_InitFixedPoint_m(6.0, u5p11_T)},
	{FPM_InitFixedPoint_m(7.5, u5p11_T),FPM_InitFixedPoint_m(7.5, u5p11_T),
	FPM_InitFixedPoint_m(7.5, u5p11_T),FPM_InitFixedPoint_m(7.5, u5p11_T),
	FPM_InitFixedPoint_m(7.5, u5p11_T),FPM_InitFixedPoint_m(7.5, u5p11_T),
	FPM_InitFixedPoint_m(7.5, u5p11_T),FPM_InitFixedPoint_m(7.5, u5p11_T),
	FPM_InitFixedPoint_m(7.5, u5p11_T),FPM_InitFixedPoint_m(7.5, u5p11_T),
	FPM_InitFixedPoint_m(7.5, u5p11_T),FPM_InitFixedPoint_m(7.5, u5p11_T),
	FPM_InitFixedPoint_m(7.5, u5p11_T)},{FPM_InitFixedPoint_m(8.0, u5p11_T),
	FPM_InitFixedPoint_m(8.0, u5p11_T),FPM_InitFixedPoint_m(8.0, u5p11_T),
	FPM_InitFixedPoint_m(8.0, u5p11_T),FPM_InitFixedPoint_m(8.0, u5p11_T),
	FPM_InitFixedPoint_m(8.0, u5p11_T),FPM_InitFixedPoint_m(8.0, u5p11_T),
	FPM_InitFixedPoint_m(8.0, u5p11_T),FPM_InitFixedPoint_m(8.0, u5p11_T),
	FPM_InitFixedPoint_m(8.0, u5p11_T),FPM_InitFixedPoint_m(8.0, u5p11_T),
	FPM_InitFixedPoint_m(8.0, u5p11_T),FPM_InitFixedPoint_m(8.0, u5p11_T)}}, {{FPM_InitFixedPoint_m(0.0, u4p12_T),
	 FPM_InitFixedPoint_m(0.25, u4p12_T), FPM_InitFixedPoint_m(0.5, u4p12_T),
	 FPM_InitFixedPoint_m(0.75, u4p12_T),
	 FPM_InitFixedPoint_m(1.1, u4p12_T)},
	 {FPM_InitFixedPoint_m(0.0, u4p12_T),
	 FPM_InitFixedPoint_m(0.25, u4p12_T), FPM_InitFixedPoint_m(0.5, u4p12_T),
	 FPM_InitFixedPoint_m(0.75, u4p12_T),
	 FPM_InitFixedPoint_m(1.1, u4p12_T)},
	 {FPM_InitFixedPoint_m(0.0, u4p12_T),
	 FPM_InitFixedPoint_m(0.25, u4p12_T), FPM_InitFixedPoint_m(0.5, u4p12_T),
	 FPM_InitFixedPoint_m(0.75, u4p12_T),
	 FPM_InitFixedPoint_m(1.1, u4p12_T)},
	 {FPM_InitFixedPoint_m(0.0, u4p12_T),
	 FPM_InitFixedPoint_m(0.25, u4p12_T), FPM_InitFixedPoint_m(0.5, u4p12_T),
	 FPM_InitFixedPoint_m(0.75, u4p12_T),
	 FPM_InitFixedPoint_m(1.1, u4p12_T)},
	 {FPM_InitFixedPoint_m(0.0, u4p12_T),
	 FPM_InitFixedPoint_m(0.25, u4p12_T), FPM_InitFixedPoint_m(0.5, u4p12_T),
	 FPM_InitFixedPoint_m(0.75, u4p12_T),
	 FPM_InitFixedPoint_m(1.1, u4p12_T)},
	 {FPM_InitFixedPoint_m(0.0, u4p12_T),
	 FPM_InitFixedPoint_m(0.25, u4p12_T), FPM_InitFixedPoint_m(0.5, u4p12_T),
	 FPM_InitFixedPoint_m(0.75, u4p12_T),
	 FPM_InitFixedPoint_m(1.1, u4p12_T)},
	 {FPM_InitFixedPoint_m(0.0, u4p12_T),
	 FPM_InitFixedPoint_m(0.25, u4p12_T), FPM_InitFixedPoint_m(0.5, u4p12_T),
	 FPM_InitFixedPoint_m(0.75, u4p12_T),
	 FPM_InitFixedPoint_m(1.1, u4p12_T)},
	 {FPM_InitFixedPoint_m(0.0, u4p12_T),
	 FPM_InitFixedPoint_m(0.25, u4p12_T), FPM_InitFixedPoint_m(0.5, u4p12_T),
	 FPM_InitFixedPoint_m(0.75, u4p12_T),
	 FPM_InitFixedPoint_m(1.1, u4p12_T)},
	 {FPM_InitFixedPoint_m(0.0, u4p12_T),
	 FPM_InitFixedPoint_m(0.25, u4p12_T), FPM_InitFixedPoint_m(0.5, u4p12_T),
	 FPM_InitFixedPoint_m(0.75, u4p12_T),
	 FPM_InitFixedPoint_m(1.1, u4p12_T)},
	 {FPM_InitFixedPoint_m(0.0, u4p12_T),
	 FPM_InitFixedPoint_m(0.25, u4p12_T), FPM_InitFixedPoint_m(0.5, u4p12_T),
	 FPM_InitFixedPoint_m(0.75, u4p12_T),
	 FPM_InitFixedPoint_m(1.1, u4p12_T)},
	 {FPM_InitFixedPoint_m(0.0, u4p12_T),
	 FPM_InitFixedPoint_m(0.25, u4p12_T), FPM_InitFixedPoint_m(0.5, u4p12_T),
	 FPM_InitFixedPoint_m(0.75, u4p12_T),
	 FPM_InitFixedPoint_m(1.1, u4p12_T)},
	 {FPM_InitFixedPoint_m(0.0, u4p12_T),
	 FPM_InitFixedPoint_m(0.25, u4p12_T), FPM_InitFixedPoint_m(0.5, u4p12_T),
	 FPM_InitFixedPoint_m(0.75, u4p12_T),
	 FPM_InitFixedPoint_m(1.1, u4p12_T)}}, {{FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T)},
	 {FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T)},
	 {FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T)},
	 {FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T)},
	 {FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T)},
	 {FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T)},
	 {FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T)},
	 {FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T)},
	 {FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T)},
	 {FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T)},
	 {FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T)},
	 {FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T)}}, { FPM_InitFixedPoint_m(0.0, u4p12_T),
	 FPM_InitFixedPoint_m(0.0, u4p12_T), FPM_InitFixedPoint_m(0.0, u4p12_T),
	 FPM_InitFixedPoint_m(0.0, u4p12_T), FPM_InitFixedPoint_m(0.0, u4p12_T),
	 FPM_InitFixedPoint_m(0.0, u4p12_T), FPM_InitFixedPoint_m(0.0, u4p12_T),
	 FPM_InitFixedPoint_m(0.0, u4p12_T), FPM_InitFixedPoint_m(0.0, u4p12_T),
	 FPM_InitFixedPoint_m(0.0, u4p12_T), FPM_InitFixedPoint_m(0.0, u4p12_T),
	 FPM_InitFixedPoint_m(0.0, u4p12_T) }, { FPM_InitFixedPoint_m(0.0, u9p7_T), FPM_InitFixedPoint_m(0.0, u9p7_T),
	 FPM_InitFixedPoint_m(0.0, u9p7_T), FPM_InitFixedPoint_m(0.0, u9p7_T),
	 FPM_InitFixedPoint_m(0.0, u9p7_T), FPM_InitFixedPoint_m(0.0, u9p7_T),
	 FPM_InitFixedPoint_m(0.0, u9p7_T), FPM_InitFixedPoint_m(0.0, u9p7_T),
	 FPM_InitFixedPoint_m(0.0, u9p7_T), FPM_InitFixedPoint_m(0.0, u9p7_T),
	 FPM_InitFixedPoint_m(0.0, u9p7_T), FPM_InitFixedPoint_m(0.0, u9p7_T) }, { FPM_InitFixedPoint_m(0.0, u8p8_T), FPM_InitFixedPoint_m(0.2, u8p8_T),
	 FPM_InitFixedPoint_m(0.4, u8p8_T), FPM_InitFixedPoint_m(0.6, u8p8_T),
	 FPM_InitFixedPoint_m(0.8, u8p8_T), FPM_InitFixedPoint_m(1.0, u8p8_T) }, { FPM_InitFixedPoint_m(0.0, u2p14_T),
	 FPM_InitFixedPoint_m(0.0, u2p14_T), FPM_InitFixedPoint_m(0.0, u2p14_T),
	 FPM_InitFixedPoint_m(0.0, u2p14_T), FPM_InitFixedPoint_m(0.0, u2p14_T),
	 FPM_InitFixedPoint_m(0.0, u2p14_T) }, {{FPM_InitFixedPoint_m(0.0, u9p7_T),FPM_InitFixedPoint_m(0.0, u9p7_T),
	FPM_InitFixedPoint_m(0.0, u9p7_T),FPM_InitFixedPoint_m(0.0, u9p7_T),
	FPM_InitFixedPoint_m(0.0, u9p7_T),FPM_InitFixedPoint_m(0.0, u9p7_T),
	FPM_InitFixedPoint_m(0.0, u9p7_T),FPM_InitFixedPoint_m(0.0, u9p7_T),
	FPM_InitFixedPoint_m(0.0, u9p7_T),FPM_InitFixedPoint_m(0.0, u9p7_T),
	FPM_InitFixedPoint_m(0.0, u9p7_T),FPM_InitFixedPoint_m(0.0, u9p7_T)},
	{FPM_InitFixedPoint_m(0.0, u9p7_T),FPM_InitFixedPoint_m(0.0, u9p7_T),
	FPM_InitFixedPoint_m(0.0, u9p7_T),FPM_InitFixedPoint_m(0.0, u9p7_T),
	FPM_InitFixedPoint_m(0.0, u9p7_T),FPM_InitFixedPoint_m(0.0, u9p7_T),
	FPM_InitFixedPoint_m(0.0, u9p7_T),FPM_InitFixedPoint_m(0.0, u9p7_T),
	FPM_InitFixedPoint_m(0.0, u9p7_T),FPM_InitFixedPoint_m(0.0, u9p7_T),
	FPM_InitFixedPoint_m(0.0, u9p7_T),FPM_InitFixedPoint_m(0.0, u9p7_T)}}, { FPM_InitFixedPoint_m(15.0, u9p7_T),
	 FPM_InitFixedPoint_m(15.0, u9p7_T), FPM_InitFixedPoint_m(15.0, u9p7_T),
	 FPM_InitFixedPoint_m(15.0, u9p7_T), FPM_InitFixedPoint_m(15.0, u9p7_T),
	 FPM_InitFixedPoint_m(15.0, u9p7_T), FPM_InitFixedPoint_m(15.0, u9p7_T),
	 FPM_InitFixedPoint_m(15.0, u9p7_T), FPM_InitFixedPoint_m(15.0, u9p7_T),
	 FPM_InitFixedPoint_m(15.0, u9p7_T), FPM_InitFixedPoint_m(15.0, u9p7_T),
	 FPM_InitFixedPoint_m(15.0, u9p7_T) }, { FPM_InitFixedPoint_m(0.0, u9p7_T), FPM_InitFixedPoint_m(1.0, u9p7_T),
	 FPM_InitFixedPoint_m(2.0, u9p7_T), FPM_InitFixedPoint_m(3.0, u9p7_T),
	 FPM_InitFixedPoint_m(4.0, u9p7_T) }, { FPM_InitFixedPoint_m(1.0, u2p14_T),
	 FPM_InitFixedPoint_m(1.0, u2p14_T), FPM_InitFixedPoint_m(1.0, u2p14_T),
	 FPM_InitFixedPoint_m(1.0, u2p14_T), FPM_InitFixedPoint_m(1.0, u2p14_T) }, { FPM_InitFixedPoint_m(0.0, u8p8_T), FPM_InitFixedPoint_m(0.1, u8p8_T),
	 FPM_InitFixedPoint_m(0.2, u8p8_T), FPM_InitFixedPoint_m(0.4, u8p8_T),
	 FPM_InitFixedPoint_m(0.6, u8p8_T), FPM_InitFixedPoint_m(0.8, u8p8_T),
	 FPM_InitFixedPoint_m(0.9, u8p8_T), FPM_InitFixedPoint_m(1.0, u8p8_T) }, { FPM_InitFixedPoint_m(0.0, u9p7_T),FPM_InitFixedPoint_m(0.0, u9p7_T),
	FPM_InitFixedPoint_m(0.0, u9p7_T),FPM_InitFixedPoint_m(0.0, u9p7_T),
	FPM_InitFixedPoint_m(0.0, u9p7_T),FPM_InitFixedPoint_m(0.0, u9p7_T),
	FPM_InitFixedPoint_m(0.0, u9p7_T),FPM_InitFixedPoint_m(0.0, u9p7_T) }, { FPM_InitFixedPoint_m(0.0, u9p7_T),FPM_InitFixedPoint_m(3.0, u9p7_T),
	FPM_InitFixedPoint_m(7.0, u9p7_T),FPM_InitFixedPoint_m(12.0, u9p7_T),
	FPM_InitFixedPoint_m(20.0, u9p7_T),FPM_InitFixedPoint_m(30.0, u9p7_T),
	FPM_InitFixedPoint_m(45.0, u9p7_T),FPM_InitFixedPoint_m(60.0, u9p7_T),
	FPM_InitFixedPoint_m(80.0, u9p7_T) }, {{FPM_InitFixedPoint_m(0.0, u12p4_T),FPM_InitFixedPoint_m(0.5, u12p4_T),
	FPM_InitFixedPoint_m(1.0, u12p4_T),FPM_InitFixedPoint_m(5.0, u12p4_T),
	FPM_InitFixedPoint_m(10.0, u12p4_T),FPM_InitFixedPoint_m(20.0, u12p4_T),
	FPM_InitFixedPoint_m(30.0, u12p4_T),FPM_InitFixedPoint_m(45.0, u12p4_T),
	FPM_InitFixedPoint_m(60.0, u12p4_T),FPM_InitFixedPoint_m(90.0, u12p4_T),
	FPM_InitFixedPoint_m(120.0, u12p4_T),
	FPM_InitFixedPoint_m(180.0, u12p4_T),
	FPM_InitFixedPoint_m(270.0, u12p4_T),
	FPM_InitFixedPoint_m(360.0, u12p4_T),
	FPM_InitFixedPoint_m(450.0, u12p4_T),
	FPM_InitFixedPoint_m(540.0, u12p4_T)},
	{FPM_InitFixedPoint_m(0.0, u12p4_T),FPM_InitFixedPoint_m(0.5, u12p4_T),
	FPM_InitFixedPoint_m(1.0, u12p4_T),FPM_InitFixedPoint_m(5.0, u12p4_T),
	FPM_InitFixedPoint_m(10.0, u12p4_T),FPM_InitFixedPoint_m(20.0, u12p4_T),
	FPM_InitFixedPoint_m(30.0, u12p4_T),FPM_InitFixedPoint_m(45.0, u12p4_T),
	FPM_InitFixedPoint_m(60.0, u12p4_T),FPM_InitFixedPoint_m(90.0, u12p4_T),
	FPM_InitFixedPoint_m(120.0, u12p4_T),
	FPM_InitFixedPoint_m(180.0, u12p4_T),
	FPM_InitFixedPoint_m(270.0, u12p4_T),
	FPM_InitFixedPoint_m(360.0, u12p4_T),
	FPM_InitFixedPoint_m(450.0, u12p4_T),
	FPM_InitFixedPoint_m(540.0, u12p4_T)},
	{FPM_InitFixedPoint_m(0.0, u12p4_T),FPM_InitFixedPoint_m(0.5, u12p4_T),
	FPM_InitFixedPoint_m(1.0, u12p4_T),FPM_InitFixedPoint_m(5.0, u12p4_T),
	FPM_InitFixedPoint_m(10.0, u12p4_T),FPM_InitFixedPoint_m(20.0, u12p4_T),
	FPM_InitFixedPoint_m(30.0, u12p4_T),FPM_InitFixedPoint_m(45.0, u12p4_T),
	FPM_InitFixedPoint_m(60.0, u12p4_T),FPM_InitFixedPoint_m(90.0, u12p4_T),
	FPM_InitFixedPoint_m(120.0, u12p4_T),
	FPM_InitFixedPoint_m(180.0, u12p4_T),
	FPM_InitFixedPoint_m(270.0, u12p4_T),
	FPM_InitFixedPoint_m(360.0, u12p4_T),
	FPM_InitFixedPoint_m(450.0, u12p4_T),
	FPM_InitFixedPoint_m(540.0, u12p4_T)},
	{FPM_InitFixedPoint_m(0.0, u12p4_T),FPM_InitFixedPoint_m(0.5, u12p4_T),
	FPM_InitFixedPoint_m(1.0, u12p4_T),FPM_InitFixedPoint_m(5.0, u12p4_T),
	FPM_InitFixedPoint_m(10.0, u12p4_T),FPM_InitFixedPoint_m(20.0, u12p4_T),
	FPM_InitFixedPoint_m(30.0, u12p4_T),FPM_InitFixedPoint_m(45.0, u12p4_T),
	FPM_InitFixedPoint_m(60.0, u12p4_T),FPM_InitFixedPoint_m(90.0, u12p4_T),
	FPM_InitFixedPoint_m(120.0, u12p4_T),
	FPM_InitFixedPoint_m(180.0, u12p4_T),
	FPM_InitFixedPoint_m(270.0, u12p4_T),
	FPM_InitFixedPoint_m(360.0, u12p4_T),
	FPM_InitFixedPoint_m(450.0, u12p4_T),
	FPM_InitFixedPoint_m(540.0, u12p4_T)},
	{FPM_InitFixedPoint_m(0.0, u12p4_T),FPM_InitFixedPoint_m(0.5, u12p4_T),
	FPM_InitFixedPoint_m(1.0, u12p4_T),FPM_InitFixedPoint_m(5.0, u12p4_T),
	FPM_InitFixedPoint_m(10.0, u12p4_T),FPM_InitFixedPoint_m(20.0, u12p4_T),
	FPM_InitFixedPoint_m(30.0, u12p4_T),FPM_InitFixedPoint_m(45.0, u12p4_T),
	FPM_InitFixedPoint_m(60.0, u12p4_T),FPM_InitFixedPoint_m(90.0, u12p4_T),
	FPM_InitFixedPoint_m(120.0, u12p4_T),
	FPM_InitFixedPoint_m(180.0, u12p4_T),
	FPM_InitFixedPoint_m(270.0, u12p4_T),
	FPM_InitFixedPoint_m(360.0, u12p4_T),
	FPM_InitFixedPoint_m(450.0, u12p4_T),
	FPM_InitFixedPoint_m(540.0, u12p4_T)},
	{FPM_InitFixedPoint_m(0.0, u12p4_T),FPM_InitFixedPoint_m(0.5, u12p4_T),
	FPM_InitFixedPoint_m(1.0, u12p4_T),FPM_InitFixedPoint_m(5.0, u12p4_T),
	FPM_InitFixedPoint_m(10.0, u12p4_T),FPM_InitFixedPoint_m(20.0, u12p4_T),
	FPM_InitFixedPoint_m(30.0, u12p4_T),FPM_InitFixedPoint_m(45.0, u12p4_T),
	FPM_InitFixedPoint_m(60.0, u12p4_T),FPM_InitFixedPoint_m(90.0, u12p4_T),
	FPM_InitFixedPoint_m(120.0, u12p4_T),
	FPM_InitFixedPoint_m(180.0, u12p4_T),
	FPM_InitFixedPoint_m(270.0, u12p4_T),
	FPM_InitFixedPoint_m(360.0, u12p4_T),
	FPM_InitFixedPoint_m(450.0, u12p4_T),
	FPM_InitFixedPoint_m(540.0, u12p4_T)},
	{FPM_InitFixedPoint_m(0.0, u12p4_T),FPM_InitFixedPoint_m(0.5, u12p4_T),
	FPM_InitFixedPoint_m(1.0, u12p4_T),FPM_InitFixedPoint_m(5.0, u12p4_T),
	FPM_InitFixedPoint_m(10.0, u12p4_T),FPM_InitFixedPoint_m(20.0, u12p4_T),
	FPM_InitFixedPoint_m(30.0, u12p4_T),FPM_InitFixedPoint_m(45.0, u12p4_T),
	FPM_InitFixedPoint_m(60.0, u12p4_T),FPM_InitFixedPoint_m(90.0, u12p4_T),
	FPM_InitFixedPoint_m(120.0, u12p4_T),
	FPM_InitFixedPoint_m(180.0, u12p4_T),
	FPM_InitFixedPoint_m(270.0, u12p4_T),
	FPM_InitFixedPoint_m(360.0, u12p4_T),
	FPM_InitFixedPoint_m(450.0, u12p4_T),
	FPM_InitFixedPoint_m(540.0, u12p4_T)},
	{FPM_InitFixedPoint_m(0.0, u12p4_T),FPM_InitFixedPoint_m(0.5, u12p4_T),
	FPM_InitFixedPoint_m(1.0, u12p4_T),FPM_InitFixedPoint_m(5.0, u12p4_T),
	FPM_InitFixedPoint_m(10.0, u12p4_T),FPM_InitFixedPoint_m(20.0, u12p4_T),
	FPM_InitFixedPoint_m(30.0, u12p4_T),FPM_InitFixedPoint_m(45.0, u12p4_T),
	FPM_InitFixedPoint_m(60.0, u12p4_T),FPM_InitFixedPoint_m(90.0, u12p4_T),
	FPM_InitFixedPoint_m(120.0, u12p4_T),
	FPM_InitFixedPoint_m(180.0, u12p4_T),
	FPM_InitFixedPoint_m(270.0, u12p4_T),
	FPM_InitFixedPoint_m(360.0, u12p4_T),
	FPM_InitFixedPoint_m(450.0, u12p4_T),
	FPM_InitFixedPoint_m(540.0, u12p4_T)},
	{FPM_InitFixedPoint_m(0.0, u12p4_T),FPM_InitFixedPoint_m(0.5, u12p4_T),
	FPM_InitFixedPoint_m(1.0, u12p4_T),FPM_InitFixedPoint_m(5.0, u12p4_T),
	FPM_InitFixedPoint_m(10.0, u12p4_T),FPM_InitFixedPoint_m(20.0, u12p4_T),
	FPM_InitFixedPoint_m(30.0, u12p4_T),FPM_InitFixedPoint_m(45.0, u12p4_T),
	FPM_InitFixedPoint_m(60.0, u12p4_T),FPM_InitFixedPoint_m(90.0, u12p4_T),
	FPM_InitFixedPoint_m(120.0, u12p4_T),
	FPM_InitFixedPoint_m(180.0, u12p4_T),
	FPM_InitFixedPoint_m(270.0, u12p4_T),
	FPM_InitFixedPoint_m(360.0, u12p4_T),
	FPM_InitFixedPoint_m(450.0, u12p4_T),
	FPM_InitFixedPoint_m(540.0, u12p4_T)}}, {{FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T)},
	 {FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T)},
	{FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T)},
	{FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T)},
	{FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T)},
	{FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T)},
	{FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T)},
	{FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T)},
	{FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T)}}, {{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.5, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(2.0, u8p8_T),
	FPM_InitFixedPoint_m(3.0, u8p8_T),FPM_InitFixedPoint_m(4.0, u8p8_T),
	FPM_InitFixedPoint_m(5.0, u8p8_T),FPM_InitFixedPoint_m(10.0, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.5, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(2.0, u8p8_T),
	FPM_InitFixedPoint_m(3.0, u8p8_T),FPM_InitFixedPoint_m(4.0, u8p8_T),
	FPM_InitFixedPoint_m(5.0, u8p8_T),FPM_InitFixedPoint_m(10.0, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.5, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(2.0, u8p8_T),
	FPM_InitFixedPoint_m(3.0, u8p8_T),FPM_InitFixedPoint_m(4.0, u8p8_T),
	FPM_InitFixedPoint_m(5.0, u8p8_T),FPM_InitFixedPoint_m(10.0, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.5, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(2.0, u8p8_T),
	FPM_InitFixedPoint_m(3.0, u8p8_T),FPM_InitFixedPoint_m(4.0, u8p8_T),
	FPM_InitFixedPoint_m(5.0, u8p8_T),FPM_InitFixedPoint_m(10.0, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.5, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(2.0, u8p8_T),
	FPM_InitFixedPoint_m(3.0, u8p8_T),FPM_InitFixedPoint_m(4.0, u8p8_T),
	FPM_InitFixedPoint_m(5.0, u8p8_T),FPM_InitFixedPoint_m(10.0, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.5, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(2.0, u8p8_T),
	FPM_InitFixedPoint_m(3.0, u8p8_T),FPM_InitFixedPoint_m(4.0, u8p8_T),
	FPM_InitFixedPoint_m(5.0, u8p8_T),FPM_InitFixedPoint_m(10.0, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.5, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(2.0, u8p8_T),
	FPM_InitFixedPoint_m(3.0, u8p8_T),FPM_InitFixedPoint_m(4.0, u8p8_T),
	FPM_InitFixedPoint_m(5.0, u8p8_T),FPM_InitFixedPoint_m(10.0, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.5, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(2.0, u8p8_T),
	FPM_InitFixedPoint_m(3.0, u8p8_T),FPM_InitFixedPoint_m(4.0, u8p8_T),
	FPM_InitFixedPoint_m(5.0, u8p8_T),FPM_InitFixedPoint_m(10.0, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.5, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(2.0, u8p8_T),
	FPM_InitFixedPoint_m(3.0, u8p8_T),FPM_InitFixedPoint_m(4.0, u8p8_T),
	FPM_InitFixedPoint_m(5.0, u8p8_T),FPM_InitFixedPoint_m(10.0, u8p8_T)}}, {{FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T)},
	{FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T)},
	{FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T)},
	{FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T)},
	{FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T)},
	{FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T)},
	{FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T)},
	{FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T)},
	{FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T)}}, {{FPM_InitFixedPoint_m(0.0, u7p9_T),FPM_InitFixedPoint_m(40.0, u7p9_T),
	FPM_InitFixedPoint_m(60.0, u7p9_T),FPM_InitFixedPoint_m(80.0, u7p9_T)},
	{FPM_InitFixedPoint_m(0.0, u7p9_T),FPM_InitFixedPoint_m(40.0, u7p9_T),
	FPM_InitFixedPoint_m(60.0, u7p9_T),FPM_InitFixedPoint_m(80.0, u7p9_T)},
	{FPM_InitFixedPoint_m(0.0, u7p9_T),FPM_InitFixedPoint_m(40.0, u7p9_T),
	FPM_InitFixedPoint_m(60.0, u7p9_T),FPM_InitFixedPoint_m(80.0, u7p9_T)},
	{FPM_InitFixedPoint_m(0.0, u7p9_T),FPM_InitFixedPoint_m(40.0, u7p9_T),
	FPM_InitFixedPoint_m(60.0, u7p9_T),FPM_InitFixedPoint_m(80.0, u7p9_T)},
	{FPM_InitFixedPoint_m(0.0, u7p9_T),FPM_InitFixedPoint_m(40.0, u7p9_T),
	FPM_InitFixedPoint_m(60.0, u7p9_T),FPM_InitFixedPoint_m(80.0, u7p9_T)},
	{FPM_InitFixedPoint_m(0.0, u7p9_T),FPM_InitFixedPoint_m(40.0, u7p9_T),
	FPM_InitFixedPoint_m(60.0, u7p9_T),FPM_InitFixedPoint_m(80.0, u7p9_T)},
	{FPM_InitFixedPoint_m(0.0, u7p9_T),FPM_InitFixedPoint_m(40.0, u7p9_T),
	FPM_InitFixedPoint_m(60.0, u7p9_T),FPM_InitFixedPoint_m(80.0, u7p9_T)},
	{FPM_InitFixedPoint_m(0.0, u7p9_T),FPM_InitFixedPoint_m(40.0, u7p9_T),
	FPM_InitFixedPoint_m(60.0, u7p9_T),FPM_InitFixedPoint_m(80.0, u7p9_T)},
	{FPM_InitFixedPoint_m(0.0, u7p9_T),FPM_InitFixedPoint_m(40.0, u7p9_T),
	FPM_InitFixedPoint_m(60.0, u7p9_T),FPM_InitFixedPoint_m(80.0, u7p9_T)}}, {{FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T)},
	{FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T)},
	{FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T)},
	{FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T)},
	{FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T)},
	{FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T)},
	{FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T)},
	{FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T)},
	{FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T)}}, FALSE, {FPM_InitFixedPoint_m(10.0, u8p8_T),FPM_InitFixedPoint_m(40.0, u8p8_T),
	FPM_InitFixedPoint_m(70.0, u8p8_T),FPM_InitFixedPoint_m(100.0, u8p8_T),
	FPM_InitFixedPoint_m(130.0, u8p8_T),FPM_InitFixedPoint_m(180.0, u8p8_T)}, {FPM_InitFixedPoint_m(12.0, u4p12_T),
	FPM_InitFixedPoint_m(11.0, u4p12_T),FPM_InitFixedPoint_m(9.0, u4p12_T),
	FPM_InitFixedPoint_m(7.0, u4p12_T),FPM_InitFixedPoint_m(5.0, u4p12_T),
	FPM_InitFixedPoint_m(3.0, u4p12_T)}, 0.0f };

#pragma DATA_SECTION(k_TunSet0Per1_Cnt_Str, ".TunCal0Per1");
CONST(TUNING_P_Str, CAL_CONST)k_TunSet0Per1_Cnt_Str = { 1.0f, {{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.0234375, s4p11_T),
	FPM_InitFixedPoint_m(0.03515625, s4p11_T),
	FPM_InitFixedPoint_m(0.05078125, s4p11_T),
	FPM_InitFixedPoint_m(0.0703125, s4p11_T),
	FPM_InitFixedPoint_m(0.09375, s4p11_T),
	FPM_InitFixedPoint_m(0.12109375, s4p11_T),
	FPM_InitFixedPoint_m(0.15234375, s4p11_T),
	FPM_InitFixedPoint_m(0.18359375, s4p11_T),
	FPM_InitFixedPoint_m(0.21875, s4p11_T),
	FPM_InitFixedPoint_m(0.26171875, s4p11_T),
	FPM_InitFixedPoint_m(0.30078125, s4p11_T),
	FPM_InitFixedPoint_m(0.34765625, s4p11_T),
	FPM_InitFixedPoint_m(0.3984375, s4p11_T),
	FPM_InitFixedPoint_m(0.44921875, s4p11_T),
	FPM_InitFixedPoint_m(0.5078125, s4p11_T),
	FPM_InitFixedPoint_m(0.56640625, s4p11_T),
	FPM_InitFixedPoint_m(0.62890625, s4p11_T),
	FPM_InitFixedPoint_m(0.69140625, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.03125, s4p11_T),
	FPM_InitFixedPoint_m(0.05078125, s4p11_T),
	FPM_InitFixedPoint_m(0.07421875, s4p11_T),
	FPM_InitFixedPoint_m(0.10546875, s4p11_T),
	FPM_InitFixedPoint_m(0.140625, s4p11_T),
	FPM_InitFixedPoint_m(0.18359375, s4p11_T),
	FPM_InitFixedPoint_m(0.23046875, s4p11_T),
	FPM_InitFixedPoint_m(0.28125, s4p11_T),
	FPM_InitFixedPoint_m(0.33984375, s4p11_T),
	FPM_InitFixedPoint_m(0.40234375, s4p11_T),
	FPM_InitFixedPoint_m(0.47265625, s4p11_T),
	FPM_InitFixedPoint_m(0.546875, s4p11_T),
	FPM_InitFixedPoint_m(0.625, s4p11_T),
	FPM_InitFixedPoint_m(0.7109375, s4p11_T),
	FPM_InitFixedPoint_m(0.80078125, s4p11_T),
	FPM_InitFixedPoint_m(0.89453125, s4p11_T),
	FPM_InitFixedPoint_m(0.99609375, s4p11_T),
	FPM_InitFixedPoint_m(1.10546875, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.015625, s4p11_T),
	FPM_InitFixedPoint_m(0.0390625, s4p11_T),
	FPM_InitFixedPoint_m(0.06640625, s4p11_T),
	FPM_InitFixedPoint_m(0.09765625, s4p11_T),
	FPM_InitFixedPoint_m(0.1328125, s4p11_T),
	FPM_InitFixedPoint_m(0.17578125, s4p11_T),
	FPM_InitFixedPoint_m(0.21875, s4p11_T),
	FPM_InitFixedPoint_m(0.26953125, s4p11_T),
	FPM_InitFixedPoint_m(0.328125, s4p11_T),
	FPM_InitFixedPoint_m(0.38671875, s4p11_T),
	FPM_InitFixedPoint_m(0.453125, s4p11_T),
	FPM_InitFixedPoint_m(0.5234375, s4p11_T),
	FPM_InitFixedPoint_m(0.59765625, s4p11_T),
	FPM_InitFixedPoint_m(0.6796875, s4p11_T),
	FPM_InitFixedPoint_m(0.76171875, s4p11_T),
	FPM_InitFixedPoint_m(0.8515625, s4p11_T),
	FPM_InitFixedPoint_m(0.94921875, s4p11_T),
	FPM_InitFixedPoint_m(1.046875, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.015625, s4p11_T),
	FPM_InitFixedPoint_m(0.03515625, s4p11_T),
	FPM_InitFixedPoint_m(0.0625, s4p11_T),
	FPM_InitFixedPoint_m(0.0859375, s4p11_T),
	FPM_InitFixedPoint_m(0.1171875, s4p11_T),
	FPM_InitFixedPoint_m(0.15234375, s4p11_T),
	FPM_InitFixedPoint_m(0.1875, s4p11_T),
	FPM_InitFixedPoint_m(0.23046875, s4p11_T),
	FPM_InitFixedPoint_m(0.2734375, s4p11_T),
	FPM_InitFixedPoint_m(0.3203125, s4p11_T),
	FPM_InitFixedPoint_m(0.37109375, s4p11_T),
	FPM_InitFixedPoint_m(0.42578125, s4p11_T),
	FPM_InitFixedPoint_m(0.48046875, s4p11_T),
	FPM_InitFixedPoint_m(0.54296875, s4p11_T),
	FPM_InitFixedPoint_m(0.60546875, s4p11_T),
	FPM_InitFixedPoint_m(0.671875, s4p11_T),
	FPM_InitFixedPoint_m(0.7421875, s4p11_T),
	FPM_InitFixedPoint_m(0.81640625, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.015625, s4p11_T),
	FPM_InitFixedPoint_m(0.03515625, s4p11_T),
	FPM_InitFixedPoint_m(0.05859375, s4p11_T),
	FPM_InitFixedPoint_m(0.0859375, s4p11_T),
	FPM_InitFixedPoint_m(0.11328125, s4p11_T),
	FPM_InitFixedPoint_m(0.14453125, s4p11_T),
	FPM_InitFixedPoint_m(0.17578125, s4p11_T),
	FPM_InitFixedPoint_m(0.21484375, s4p11_T),
	FPM_InitFixedPoint_m(0.25390625, s4p11_T),
	FPM_InitFixedPoint_m(0.29296875, s4p11_T),
	FPM_InitFixedPoint_m(0.33984375, s4p11_T),
	FPM_InitFixedPoint_m(0.38671875, s4p11_T),
	FPM_InitFixedPoint_m(0.4375, s4p11_T),
	FPM_InitFixedPoint_m(0.48828125, s4p11_T),
	FPM_InitFixedPoint_m(0.546875, s4p11_T),
	FPM_InitFixedPoint_m(0.60546875, s4p11_T),
	FPM_InitFixedPoint_m(0.66796875, s4p11_T),
	FPM_InitFixedPoint_m(0.73046875, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.01, s4p11_T),
	FPM_InitFixedPoint_m(0.02, s4p11_T),FPM_InitFixedPoint_m(0.035, s4p11_T),
	FPM_InitFixedPoint_m(0.06, s4p11_T),FPM_InitFixedPoint_m(0.08, s4p11_T),
	FPM_InitFixedPoint_m(0.12, s4p11_T),FPM_InitFixedPoint_m(0.16, s4p11_T),
	FPM_InitFixedPoint_m(0.2, s4p11_T),FPM_InitFixedPoint_m(0.24, s4p11_T),
	FPM_InitFixedPoint_m(0.29, s4p11_T),FPM_InitFixedPoint_m(0.35, s4p11_T),
	FPM_InitFixedPoint_m(0.39, s4p11_T),FPM_InitFixedPoint_m(0.46, s4p11_T),
	FPM_InitFixedPoint_m(0.51171875, s4p11_T),
	FPM_InitFixedPoint_m(0.5625, s4p11_T),
	FPM_InitFixedPoint_m(0.62109375, s4p11_T),
	FPM_InitFixedPoint_m(0.6796875, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.01, s4p11_T),
	FPM_InitFixedPoint_m(0.02, s4p11_T),FPM_InitFixedPoint_m(0.035, s4p11_T),
	FPM_InitFixedPoint_m(0.06, s4p11_T),FPM_InitFixedPoint_m(0.08, s4p11_T),
	FPM_InitFixedPoint_m(0.1, s4p11_T),FPM_InitFixedPoint_m(0.14, s4p11_T),
	FPM_InitFixedPoint_m(0.18, s4p11_T),FPM_InitFixedPoint_m(0.21, s4p11_T),
	FPM_InitFixedPoint_m(0.26, s4p11_T),FPM_InitFixedPoint_m(0.3, s4p11_T),
	FPM_InitFixedPoint_m(0.34, s4p11_T),
	FPM_InitFixedPoint_m(0.3984375, s4p11_T),
	FPM_InitFixedPoint_m(0.4375, s4p11_T),
	FPM_InitFixedPoint_m(0.48046875, s4p11_T),
	FPM_InitFixedPoint_m(0.52734375, s4p11_T),
	FPM_InitFixedPoint_m(0.57421875, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.01, s4p11_T),FPM_InitFixedPoint_m(0.03, s4p11_T),
	FPM_InitFixedPoint_m(0.05, s4p11_T),FPM_InitFixedPoint_m(0.07, s4p11_T),
	FPM_InitFixedPoint_m(0.095, s4p11_T),FPM_InitFixedPoint_m(0.13, s4p11_T),
	FPM_InitFixedPoint_m(0.16, s4p11_T),FPM_InitFixedPoint_m(0.2, s4p11_T),
	FPM_InitFixedPoint_m(0.24, s4p11_T),FPM_InitFixedPoint_m(0.28, s4p11_T),
	FPM_InitFixedPoint_m(0.32, s4p11_T),
	FPM_InitFixedPoint_m(0.3671875, s4p11_T),
	FPM_InitFixedPoint_m(0.40625, s4p11_T),
	FPM_InitFixedPoint_m(0.4453125, s4p11_T),
	FPM_InitFixedPoint_m(0.48828125, s4p11_T),
	FPM_InitFixedPoint_m(0.53125, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.01, s4p11_T),FPM_InitFixedPoint_m(0.015, s4p11_T),
	FPM_InitFixedPoint_m(0.03, s4p11_T),FPM_InitFixedPoint_m(0.05, s4p11_T),
	FPM_InitFixedPoint_m(0.07, s4p11_T),FPM_InitFixedPoint_m(0.1, s4p11_T),
	FPM_InitFixedPoint_m(0.135, s4p11_T),FPM_InitFixedPoint_m(0.16, s4p11_T),
	FPM_InitFixedPoint_m(0.2, s4p11_T),FPM_InitFixedPoint_m(0.23, s4p11_T),
	FPM_InitFixedPoint_m(0.26, s4p11_T),FPM_InitFixedPoint_m(0.31, s4p11_T),
	FPM_InitFixedPoint_m(0.35, s4p11_T),FPM_InitFixedPoint_m(0.38, s4p11_T),
	FPM_InitFixedPoint_m(0.43, s4p11_T),
	FPM_InitFixedPoint_m(0.47265625, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.01, s4p11_T),FPM_InitFixedPoint_m(0.015, s4p11_T),
	FPM_InitFixedPoint_m(0.03, s4p11_T),FPM_InitFixedPoint_m(0.05, s4p11_T),
	FPM_InitFixedPoint_m(0.07, s4p11_T),FPM_InitFixedPoint_m(0.1, s4p11_T),
	FPM_InitFixedPoint_m(0.135, s4p11_T),FPM_InitFixedPoint_m(0.16, s4p11_T),
	FPM_InitFixedPoint_m(0.2, s4p11_T),FPM_InitFixedPoint_m(0.23, s4p11_T),
	FPM_InitFixedPoint_m(0.26, s4p11_T),FPM_InitFixedPoint_m(0.31, s4p11_T),
	FPM_InitFixedPoint_m(0.35, s4p11_T),FPM_InitFixedPoint_m(0.38, s4p11_T),
	FPM_InitFixedPoint_m(0.43, s4p11_T),
	FPM_InitFixedPoint_m(0.47265625, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.01, s4p11_T),FPM_InitFixedPoint_m(0.015, s4p11_T),
	FPM_InitFixedPoint_m(0.03, s4p11_T),FPM_InitFixedPoint_m(0.05, s4p11_T),
	FPM_InitFixedPoint_m(0.07, s4p11_T),FPM_InitFixedPoint_m(0.1, s4p11_T),
	FPM_InitFixedPoint_m(0.135, s4p11_T),FPM_InitFixedPoint_m(0.16, s4p11_T),
	FPM_InitFixedPoint_m(0.2, s4p11_T),FPM_InitFixedPoint_m(0.23, s4p11_T),
	FPM_InitFixedPoint_m(0.26, s4p11_T),FPM_InitFixedPoint_m(0.31, s4p11_T),
	FPM_InitFixedPoint_m(0.35, s4p11_T),FPM_InitFixedPoint_m(0.38, s4p11_T),
	FPM_InitFixedPoint_m(0.43, s4p11_T),
	FPM_InitFixedPoint_m(0.47265625, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.01, s4p11_T),FPM_InitFixedPoint_m(0.015, s4p11_T),
	FPM_InitFixedPoint_m(0.03, s4p11_T),FPM_InitFixedPoint_m(0.05, s4p11_T),
	FPM_InitFixedPoint_m(0.07, s4p11_T),FPM_InitFixedPoint_m(0.1, s4p11_T),
	FPM_InitFixedPoint_m(0.135, s4p11_T),FPM_InitFixedPoint_m(0.16, s4p11_T),
	FPM_InitFixedPoint_m(0.2, s4p11_T),FPM_InitFixedPoint_m(0.23, s4p11_T),
	FPM_InitFixedPoint_m(0.26, s4p11_T),FPM_InitFixedPoint_m(0.31, s4p11_T),
	FPM_InitFixedPoint_m(0.35, s4p11_T),FPM_InitFixedPoint_m(0.38, s4p11_T),
	FPM_InitFixedPoint_m(0.43, s4p11_T),
	FPM_InitFixedPoint_m(0.47265625, s4p11_T)}}, {{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.0234375, s4p11_T),
	FPM_InitFixedPoint_m(0.03515625, s4p11_T),
	FPM_InitFixedPoint_m(0.05078125, s4p11_T),
	FPM_InitFixedPoint_m(0.0703125, s4p11_T),
	FPM_InitFixedPoint_m(0.09375, s4p11_T),
	FPM_InitFixedPoint_m(0.12109375, s4p11_T),
	FPM_InitFixedPoint_m(0.15234375, s4p11_T),
	FPM_InitFixedPoint_m(0.18359375, s4p11_T),
	FPM_InitFixedPoint_m(0.21875, s4p11_T),
	FPM_InitFixedPoint_m(0.26171875, s4p11_T),
	FPM_InitFixedPoint_m(0.30078125, s4p11_T),
	FPM_InitFixedPoint_m(0.34765625, s4p11_T),
	FPM_InitFixedPoint_m(0.3984375, s4p11_T),
	FPM_InitFixedPoint_m(0.44921875, s4p11_T),
	FPM_InitFixedPoint_m(0.5078125, s4p11_T),
	FPM_InitFixedPoint_m(0.56640625, s4p11_T),
	FPM_InitFixedPoint_m(0.62890625, s4p11_T),
	FPM_InitFixedPoint_m(0.69140625, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.03125, s4p11_T),
	FPM_InitFixedPoint_m(0.05078125, s4p11_T),
	FPM_InitFixedPoint_m(0.07421875, s4p11_T),
	FPM_InitFixedPoint_m(0.10546875, s4p11_T),
	FPM_InitFixedPoint_m(0.140625, s4p11_T),
	FPM_InitFixedPoint_m(0.18359375, s4p11_T),
	FPM_InitFixedPoint_m(0.23046875, s4p11_T),
	FPM_InitFixedPoint_m(0.28125, s4p11_T),
	FPM_InitFixedPoint_m(0.33984375, s4p11_T),
	FPM_InitFixedPoint_m(0.40234375, s4p11_T),
	FPM_InitFixedPoint_m(0.47265625, s4p11_T),
	FPM_InitFixedPoint_m(0.546875, s4p11_T),
	FPM_InitFixedPoint_m(0.625, s4p11_T),
	FPM_InitFixedPoint_m(0.7109375, s4p11_T),
	FPM_InitFixedPoint_m(0.80078125, s4p11_T),
	FPM_InitFixedPoint_m(0.89453125, s4p11_T),
	FPM_InitFixedPoint_m(0.99609375, s4p11_T),
	FPM_InitFixedPoint_m(1.10546875, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.015625, s4p11_T),
	FPM_InitFixedPoint_m(0.0390625, s4p11_T),
	FPM_InitFixedPoint_m(0.06640625, s4p11_T),
	FPM_InitFixedPoint_m(0.09765625, s4p11_T),
	FPM_InitFixedPoint_m(0.1328125, s4p11_T),
	FPM_InitFixedPoint_m(0.17578125, s4p11_T),
	FPM_InitFixedPoint_m(0.21875, s4p11_T),
	FPM_InitFixedPoint_m(0.26953125, s4p11_T),
	FPM_InitFixedPoint_m(0.328125, s4p11_T),
	FPM_InitFixedPoint_m(0.38671875, s4p11_T),
	FPM_InitFixedPoint_m(0.453125, s4p11_T),
	FPM_InitFixedPoint_m(0.5234375, s4p11_T),
	FPM_InitFixedPoint_m(0.59765625, s4p11_T),
	FPM_InitFixedPoint_m(0.6796875, s4p11_T),
	FPM_InitFixedPoint_m(0.76171875, s4p11_T),
	FPM_InitFixedPoint_m(0.8515625, s4p11_T),
	FPM_InitFixedPoint_m(0.94921875, s4p11_T),
	FPM_InitFixedPoint_m(1.046875, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.015625, s4p11_T),
	FPM_InitFixedPoint_m(0.03515625, s4p11_T),
	FPM_InitFixedPoint_m(0.0625, s4p11_T),
	FPM_InitFixedPoint_m(0.0859375, s4p11_T),
	FPM_InitFixedPoint_m(0.1171875, s4p11_T),
	FPM_InitFixedPoint_m(0.15234375, s4p11_T),
	FPM_InitFixedPoint_m(0.1875, s4p11_T),
	FPM_InitFixedPoint_m(0.23046875, s4p11_T),
	FPM_InitFixedPoint_m(0.2734375, s4p11_T),
	FPM_InitFixedPoint_m(0.3203125, s4p11_T),
	FPM_InitFixedPoint_m(0.37109375, s4p11_T),
	FPM_InitFixedPoint_m(0.42578125, s4p11_T),
	FPM_InitFixedPoint_m(0.48046875, s4p11_T),
	FPM_InitFixedPoint_m(0.54296875, s4p11_T),
	FPM_InitFixedPoint_m(0.60546875, s4p11_T),
	FPM_InitFixedPoint_m(0.671875, s4p11_T),
	FPM_InitFixedPoint_m(0.7421875, s4p11_T),
	FPM_InitFixedPoint_m(0.81640625, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.015625, s4p11_T),
	FPM_InitFixedPoint_m(0.03515625, s4p11_T),
	FPM_InitFixedPoint_m(0.05859375, s4p11_T),
	FPM_InitFixedPoint_m(0.0859375, s4p11_T),
	FPM_InitFixedPoint_m(0.11328125, s4p11_T),
	FPM_InitFixedPoint_m(0.14453125, s4p11_T),
	FPM_InitFixedPoint_m(0.17578125, s4p11_T),
	FPM_InitFixedPoint_m(0.21484375, s4p11_T),
	FPM_InitFixedPoint_m(0.25390625, s4p11_T),
	FPM_InitFixedPoint_m(0.29296875, s4p11_T),
	FPM_InitFixedPoint_m(0.33984375, s4p11_T),
	FPM_InitFixedPoint_m(0.38671875, s4p11_T),
	FPM_InitFixedPoint_m(0.4375, s4p11_T),
	FPM_InitFixedPoint_m(0.48828125, s4p11_T),
	FPM_InitFixedPoint_m(0.546875, s4p11_T),
	FPM_InitFixedPoint_m(0.60546875, s4p11_T),
	FPM_InitFixedPoint_m(0.66796875, s4p11_T),
	FPM_InitFixedPoint_m(0.73046875, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.01, s4p11_T),
	FPM_InitFixedPoint_m(0.02, s4p11_T),FPM_InitFixedPoint_m(0.035, s4p11_T),
	FPM_InitFixedPoint_m(0.06, s4p11_T),FPM_InitFixedPoint_m(0.08, s4p11_T),
	FPM_InitFixedPoint_m(0.12, s4p11_T),FPM_InitFixedPoint_m(0.16, s4p11_T),
	FPM_InitFixedPoint_m(0.2, s4p11_T),FPM_InitFixedPoint_m(0.24, s4p11_T),
	FPM_InitFixedPoint_m(0.29, s4p11_T),FPM_InitFixedPoint_m(0.35, s4p11_T),
	FPM_InitFixedPoint_m(0.39, s4p11_T),FPM_InitFixedPoint_m(0.46, s4p11_T),
	FPM_InitFixedPoint_m(0.51171875, s4p11_T),
	FPM_InitFixedPoint_m(0.5625, s4p11_T),
	FPM_InitFixedPoint_m(0.62109375, s4p11_T),
	FPM_InitFixedPoint_m(0.6796875, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.01, s4p11_T),
	FPM_InitFixedPoint_m(0.02, s4p11_T),FPM_InitFixedPoint_m(0.035, s4p11_T),
	FPM_InitFixedPoint_m(0.06, s4p11_T),FPM_InitFixedPoint_m(0.08, s4p11_T),
	FPM_InitFixedPoint_m(0.1, s4p11_T),FPM_InitFixedPoint_m(0.14, s4p11_T),
	FPM_InitFixedPoint_m(0.18, s4p11_T),FPM_InitFixedPoint_m(0.21, s4p11_T),
	FPM_InitFixedPoint_m(0.26, s4p11_T),FPM_InitFixedPoint_m(0.3, s4p11_T),
	FPM_InitFixedPoint_m(0.34, s4p11_T),
	FPM_InitFixedPoint_m(0.3984375, s4p11_T),
	FPM_InitFixedPoint_m(0.4375, s4p11_T),
	FPM_InitFixedPoint_m(0.48046875, s4p11_T),
	FPM_InitFixedPoint_m(0.52734375, s4p11_T),
	FPM_InitFixedPoint_m(0.57421875, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.01, s4p11_T),FPM_InitFixedPoint_m(0.03, s4p11_T),
	FPM_InitFixedPoint_m(0.05, s4p11_T),FPM_InitFixedPoint_m(0.07, s4p11_T),
	FPM_InitFixedPoint_m(0.095, s4p11_T),FPM_InitFixedPoint_m(0.13, s4p11_T),
	FPM_InitFixedPoint_m(0.16, s4p11_T),FPM_InitFixedPoint_m(0.2, s4p11_T),
	FPM_InitFixedPoint_m(0.24, s4p11_T),FPM_InitFixedPoint_m(0.28, s4p11_T),
	FPM_InitFixedPoint_m(0.32, s4p11_T),
	FPM_InitFixedPoint_m(0.3671875, s4p11_T),
	FPM_InitFixedPoint_m(0.40625, s4p11_T),
	FPM_InitFixedPoint_m(0.4453125, s4p11_T),
	FPM_InitFixedPoint_m(0.48828125, s4p11_T),
	FPM_InitFixedPoint_m(0.53125, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.01, s4p11_T),FPM_InitFixedPoint_m(0.015, s4p11_T),
	FPM_InitFixedPoint_m(0.03, s4p11_T),FPM_InitFixedPoint_m(0.05, s4p11_T),
	FPM_InitFixedPoint_m(0.07, s4p11_T),FPM_InitFixedPoint_m(0.1, s4p11_T),
	FPM_InitFixedPoint_m(0.135, s4p11_T),FPM_InitFixedPoint_m(0.16, s4p11_T),
	FPM_InitFixedPoint_m(0.2, s4p11_T),FPM_InitFixedPoint_m(0.23, s4p11_T),
	FPM_InitFixedPoint_m(0.26, s4p11_T),FPM_InitFixedPoint_m(0.31, s4p11_T),
	FPM_InitFixedPoint_m(0.35, s4p11_T),FPM_InitFixedPoint_m(0.38, s4p11_T),
	FPM_InitFixedPoint_m(0.43, s4p11_T),
	FPM_InitFixedPoint_m(0.47265625, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.01, s4p11_T),FPM_InitFixedPoint_m(0.015, s4p11_T),
	FPM_InitFixedPoint_m(0.03, s4p11_T),FPM_InitFixedPoint_m(0.05, s4p11_T),
	FPM_InitFixedPoint_m(0.07, s4p11_T),FPM_InitFixedPoint_m(0.1, s4p11_T),
	FPM_InitFixedPoint_m(0.135, s4p11_T),FPM_InitFixedPoint_m(0.16, s4p11_T),
	FPM_InitFixedPoint_m(0.2, s4p11_T),FPM_InitFixedPoint_m(0.23, s4p11_T),
	FPM_InitFixedPoint_m(0.26, s4p11_T),FPM_InitFixedPoint_m(0.31, s4p11_T),
	FPM_InitFixedPoint_m(0.35, s4p11_T),FPM_InitFixedPoint_m(0.38, s4p11_T),
	FPM_InitFixedPoint_m(0.43, s4p11_T),
	FPM_InitFixedPoint_m(0.47265625, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.01, s4p11_T),FPM_InitFixedPoint_m(0.015, s4p11_T),
	FPM_InitFixedPoint_m(0.03, s4p11_T),FPM_InitFixedPoint_m(0.05, s4p11_T),
	FPM_InitFixedPoint_m(0.07, s4p11_T),FPM_InitFixedPoint_m(0.1, s4p11_T),
	FPM_InitFixedPoint_m(0.135, s4p11_T),FPM_InitFixedPoint_m(0.16, s4p11_T),
	FPM_InitFixedPoint_m(0.2, s4p11_T),FPM_InitFixedPoint_m(0.23, s4p11_T),
	FPM_InitFixedPoint_m(0.26, s4p11_T),FPM_InitFixedPoint_m(0.31, s4p11_T),
	FPM_InitFixedPoint_m(0.35, s4p11_T),FPM_InitFixedPoint_m(0.38, s4p11_T),
	FPM_InitFixedPoint_m(0.43, s4p11_T),
	FPM_InitFixedPoint_m(0.47265625, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.01, s4p11_T),FPM_InitFixedPoint_m(0.015, s4p11_T),
	FPM_InitFixedPoint_m(0.03, s4p11_T),FPM_InitFixedPoint_m(0.05, s4p11_T),
	FPM_InitFixedPoint_m(0.07, s4p11_T),FPM_InitFixedPoint_m(0.1, s4p11_T),
	FPM_InitFixedPoint_m(0.135, s4p11_T),FPM_InitFixedPoint_m(0.16, s4p11_T),
	FPM_InitFixedPoint_m(0.2, s4p11_T),FPM_InitFixedPoint_m(0.23, s4p11_T),
	FPM_InitFixedPoint_m(0.26, s4p11_T),FPM_InitFixedPoint_m(0.31, s4p11_T),
	FPM_InitFixedPoint_m(0.35, s4p11_T),FPM_InitFixedPoint_m(0.38, s4p11_T),
	FPM_InitFixedPoint_m(0.43, s4p11_T),
	FPM_InitFixedPoint_m(0.47265625, s4p11_T)}}, {{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.0234375, u8p8_T),
	FPM_InitFixedPoint_m(0.03515625, u8p8_T),
	FPM_InitFixedPoint_m(0.05078125, u8p8_T),
	FPM_InitFixedPoint_m(0.0703125, u8p8_T),
	FPM_InitFixedPoint_m(0.09375, u8p8_T),
	FPM_InitFixedPoint_m(0.12109375, u8p8_T),
	FPM_InitFixedPoint_m(0.15234375, u8p8_T),
	FPM_InitFixedPoint_m(0.18359375, u8p8_T),
	FPM_InitFixedPoint_m(0.21875, u8p8_T),
	FPM_InitFixedPoint_m(0.26171875, u8p8_T),
	FPM_InitFixedPoint_m(0.30078125, u8p8_T),
	FPM_InitFixedPoint_m(0.34765625, u8p8_T),
	FPM_InitFixedPoint_m(0.3984375, u8p8_T),
	FPM_InitFixedPoint_m(0.44921875, u8p8_T),
	FPM_InitFixedPoint_m(0.5078125, u8p8_T),
	FPM_InitFixedPoint_m(0.56640625, u8p8_T),
	FPM_InitFixedPoint_m(0.62890625, u8p8_T),
	FPM_InitFixedPoint_m(0.69140625, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.03125, u8p8_T),
	FPM_InitFixedPoint_m(0.05078125, u8p8_T),
	FPM_InitFixedPoint_m(0.07421875, u8p8_T),
	FPM_InitFixedPoint_m(0.10546875, u8p8_T),
	FPM_InitFixedPoint_m(0.140625, u8p8_T),
	FPM_InitFixedPoint_m(0.18359375, u8p8_T),
	FPM_InitFixedPoint_m(0.23046875, u8p8_T),
	FPM_InitFixedPoint_m(0.28125, u8p8_T),
	FPM_InitFixedPoint_m(0.33984375, u8p8_T),
	FPM_InitFixedPoint_m(0.40234375, u8p8_T),
	FPM_InitFixedPoint_m(0.47265625, u8p8_T),
	FPM_InitFixedPoint_m(0.546875, u8p8_T),
	FPM_InitFixedPoint_m(0.625, u8p8_T),
	FPM_InitFixedPoint_m(0.7109375, u8p8_T),
	FPM_InitFixedPoint_m(0.80078125, u8p8_T),
	FPM_InitFixedPoint_m(0.89453125, u8p8_T),
	FPM_InitFixedPoint_m(0.99609375, u8p8_T),
	FPM_InitFixedPoint_m(1.10546875, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.015625, u8p8_T),
	FPM_InitFixedPoint_m(0.0390625, u8p8_T),
	FPM_InitFixedPoint_m(0.06640625, u8p8_T),
	FPM_InitFixedPoint_m(0.09765625, u8p8_T),
	FPM_InitFixedPoint_m(0.1328125, u8p8_T),
	FPM_InitFixedPoint_m(0.17578125, u8p8_T),
	FPM_InitFixedPoint_m(0.21875, u8p8_T),
	FPM_InitFixedPoint_m(0.26953125, u8p8_T),
	FPM_InitFixedPoint_m(0.328125, u8p8_T),
	FPM_InitFixedPoint_m(0.38671875, u8p8_T),
	FPM_InitFixedPoint_m(0.453125, u8p8_T),
	FPM_InitFixedPoint_m(0.5234375, u8p8_T),
	FPM_InitFixedPoint_m(0.59765625, u8p8_T),
	FPM_InitFixedPoint_m(0.6796875, u8p8_T),
	FPM_InitFixedPoint_m(0.76171875, u8p8_T),
	FPM_InitFixedPoint_m(0.8515625, u8p8_T),
	FPM_InitFixedPoint_m(0.94921875, u8p8_T),
	FPM_InitFixedPoint_m(1.046875, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.015625, u8p8_T),
	FPM_InitFixedPoint_m(0.03515625, u8p8_T),
	FPM_InitFixedPoint_m(0.0625, u8p8_T),
	FPM_InitFixedPoint_m(0.0859375, u8p8_T),
	FPM_InitFixedPoint_m(0.1171875, u8p8_T),
	FPM_InitFixedPoint_m(0.15234375, u8p8_T),
	FPM_InitFixedPoint_m(0.1875, u8p8_T),
	FPM_InitFixedPoint_m(0.23046875, u8p8_T),
	FPM_InitFixedPoint_m(0.2734375, u8p8_T),
	FPM_InitFixedPoint_m(0.3203125, u8p8_T),
	FPM_InitFixedPoint_m(0.37109375, u8p8_T),
	FPM_InitFixedPoint_m(0.42578125, u8p8_T),
	FPM_InitFixedPoint_m(0.48046875, u8p8_T),
	FPM_InitFixedPoint_m(0.54296875, u8p8_T),
	FPM_InitFixedPoint_m(0.60546875, u8p8_T),
	FPM_InitFixedPoint_m(0.671875, u8p8_T),
	FPM_InitFixedPoint_m(0.7421875, u8p8_T),
	FPM_InitFixedPoint_m(0.81640625, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.015625, u8p8_T),
	FPM_InitFixedPoint_m(0.03515625, u8p8_T),
	FPM_InitFixedPoint_m(0.05859375, u8p8_T),
	FPM_InitFixedPoint_m(0.0859375, u8p8_T),
	FPM_InitFixedPoint_m(0.11328125, u8p8_T),
	FPM_InitFixedPoint_m(0.14453125, u8p8_T),
	FPM_InitFixedPoint_m(0.17578125, u8p8_T),
	FPM_InitFixedPoint_m(0.21484375, u8p8_T),
	FPM_InitFixedPoint_m(0.25390625, u8p8_T),
	FPM_InitFixedPoint_m(0.29296875, u8p8_T),
	FPM_InitFixedPoint_m(0.33984375, u8p8_T),
	FPM_InitFixedPoint_m(0.38671875, u8p8_T),
	FPM_InitFixedPoint_m(0.4375, u8p8_T),
	FPM_InitFixedPoint_m(0.48828125, u8p8_T),
	FPM_InitFixedPoint_m(0.546875, u8p8_T),
	FPM_InitFixedPoint_m(0.60546875, u8p8_T),
	FPM_InitFixedPoint_m(0.66796875, u8p8_T),
	FPM_InitFixedPoint_m(0.73046875, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.01, u8p8_T),
	FPM_InitFixedPoint_m(0.02, u8p8_T),FPM_InitFixedPoint_m(0.035, u8p8_T),
	FPM_InitFixedPoint_m(0.06, u8p8_T),FPM_InitFixedPoint_m(0.08, u8p8_T),
	FPM_InitFixedPoint_m(0.12, u8p8_T),FPM_InitFixedPoint_m(0.16, u8p8_T),
	FPM_InitFixedPoint_m(0.2, u8p8_T),FPM_InitFixedPoint_m(0.24, u8p8_T),
	FPM_InitFixedPoint_m(0.29, u8p8_T),FPM_InitFixedPoint_m(0.35, u8p8_T),
	FPM_InitFixedPoint_m(0.39, u8p8_T),FPM_InitFixedPoint_m(0.46, u8p8_T),
	FPM_InitFixedPoint_m(0.51171875, u8p8_T),
	FPM_InitFixedPoint_m(0.5625, u8p8_T),
	FPM_InitFixedPoint_m(0.62109375, u8p8_T),
	FPM_InitFixedPoint_m(0.6796875, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.01, u8p8_T),
	FPM_InitFixedPoint_m(0.02, u8p8_T),FPM_InitFixedPoint_m(0.035, u8p8_T),
	FPM_InitFixedPoint_m(0.06, u8p8_T),FPM_InitFixedPoint_m(0.08, u8p8_T),
	FPM_InitFixedPoint_m(0.1, u8p8_T),FPM_InitFixedPoint_m(0.14, u8p8_T),
	FPM_InitFixedPoint_m(0.18, u8p8_T),FPM_InitFixedPoint_m(0.21, u8p8_T),
	FPM_InitFixedPoint_m(0.26, u8p8_T),FPM_InitFixedPoint_m(0.3, u8p8_T),
	FPM_InitFixedPoint_m(0.34, u8p8_T),
	FPM_InitFixedPoint_m(0.3984375, u8p8_T),
	FPM_InitFixedPoint_m(0.4375, u8p8_T),
	FPM_InitFixedPoint_m(0.48046875, u8p8_T),
	FPM_InitFixedPoint_m(0.52734375, u8p8_T),
	FPM_InitFixedPoint_m(0.57421875, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.01, u8p8_T),FPM_InitFixedPoint_m(0.03, u8p8_T),
	FPM_InitFixedPoint_m(0.05, u8p8_T),FPM_InitFixedPoint_m(0.07, u8p8_T),
	FPM_InitFixedPoint_m(0.095, u8p8_T),FPM_InitFixedPoint_m(0.13, u8p8_T),
	FPM_InitFixedPoint_m(0.16, u8p8_T),FPM_InitFixedPoint_m(0.2, u8p8_T),
	FPM_InitFixedPoint_m(0.24, u8p8_T),FPM_InitFixedPoint_m(0.28, u8p8_T),
	FPM_InitFixedPoint_m(0.32, u8p8_T),
	FPM_InitFixedPoint_m(0.3671875, u8p8_T),
	FPM_InitFixedPoint_m(0.40625, u8p8_T),
	FPM_InitFixedPoint_m(0.4453125, u8p8_T),
	FPM_InitFixedPoint_m(0.48828125, u8p8_T),
	FPM_InitFixedPoint_m(0.53125, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.01, u8p8_T),FPM_InitFixedPoint_m(0.015, u8p8_T),
	FPM_InitFixedPoint_m(0.03, u8p8_T),FPM_InitFixedPoint_m(0.05, u8p8_T),
	FPM_InitFixedPoint_m(0.07, u8p8_T),FPM_InitFixedPoint_m(0.1, u8p8_T),
	FPM_InitFixedPoint_m(0.135, u8p8_T),FPM_InitFixedPoint_m(0.16, u8p8_T),
	FPM_InitFixedPoint_m(0.2, u8p8_T),FPM_InitFixedPoint_m(0.23, u8p8_T),
	FPM_InitFixedPoint_m(0.26, u8p8_T),FPM_InitFixedPoint_m(0.31, u8p8_T),
	FPM_InitFixedPoint_m(0.35, u8p8_T),FPM_InitFixedPoint_m(0.38, u8p8_T),
	FPM_InitFixedPoint_m(0.43, u8p8_T),
	FPM_InitFixedPoint_m(0.47265625, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.01, u8p8_T),FPM_InitFixedPoint_m(0.015, u8p8_T),
	FPM_InitFixedPoint_m(0.03, u8p8_T),FPM_InitFixedPoint_m(0.05, u8p8_T),
	FPM_InitFixedPoint_m(0.07, u8p8_T),FPM_InitFixedPoint_m(0.1, u8p8_T),
	FPM_InitFixedPoint_m(0.135, u8p8_T),FPM_InitFixedPoint_m(0.16, u8p8_T),
	FPM_InitFixedPoint_m(0.2, u8p8_T),FPM_InitFixedPoint_m(0.23, u8p8_T),
	FPM_InitFixedPoint_m(0.26, u8p8_T),FPM_InitFixedPoint_m(0.31, u8p8_T),
	FPM_InitFixedPoint_m(0.35, u8p8_T),FPM_InitFixedPoint_m(0.38, u8p8_T),
	FPM_InitFixedPoint_m(0.43, u8p8_T),
	FPM_InitFixedPoint_m(0.47265625, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.01, u8p8_T),FPM_InitFixedPoint_m(0.015, u8p8_T),
	FPM_InitFixedPoint_m(0.03, u8p8_T),FPM_InitFixedPoint_m(0.05, u8p8_T),
	FPM_InitFixedPoint_m(0.07, u8p8_T),FPM_InitFixedPoint_m(0.1, u8p8_T),
	FPM_InitFixedPoint_m(0.135, u8p8_T),FPM_InitFixedPoint_m(0.16, u8p8_T),
	FPM_InitFixedPoint_m(0.2, u8p8_T),FPM_InitFixedPoint_m(0.23, u8p8_T),
	FPM_InitFixedPoint_m(0.26, u8p8_T),FPM_InitFixedPoint_m(0.31, u8p8_T),
	FPM_InitFixedPoint_m(0.35, u8p8_T),FPM_InitFixedPoint_m(0.38, u8p8_T),
	FPM_InitFixedPoint_m(0.43, u8p8_T),
	FPM_InitFixedPoint_m(0.47265625, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.01, u8p8_T),FPM_InitFixedPoint_m(0.015, u8p8_T),
	FPM_InitFixedPoint_m(0.03, u8p8_T),FPM_InitFixedPoint_m(0.05, u8p8_T),
	FPM_InitFixedPoint_m(0.07, u8p8_T),FPM_InitFixedPoint_m(0.1, u8p8_T),
	FPM_InitFixedPoint_m(0.135, u8p8_T),FPM_InitFixedPoint_m(0.16, u8p8_T),
	FPM_InitFixedPoint_m(0.2, u8p8_T),FPM_InitFixedPoint_m(0.23, u8p8_T),
	FPM_InitFixedPoint_m(0.26, u8p8_T),FPM_InitFixedPoint_m(0.31, u8p8_T),
	FPM_InitFixedPoint_m(0.35, u8p8_T),FPM_InitFixedPoint_m(0.38, u8p8_T),
	FPM_InitFixedPoint_m(0.43, u8p8_T),
	FPM_InitFixedPoint_m(0.47265625, u8p8_T)}}, {{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.0234375, u8p8_T),
	FPM_InitFixedPoint_m(0.03515625, u8p8_T),
	FPM_InitFixedPoint_m(0.05078125, u8p8_T),
	FPM_InitFixedPoint_m(0.0703125, u8p8_T),
	FPM_InitFixedPoint_m(0.09375, u8p8_T),
	FPM_InitFixedPoint_m(0.12109375, u8p8_T),
	FPM_InitFixedPoint_m(0.15234375, u8p8_T),
	FPM_InitFixedPoint_m(0.18359375, u8p8_T),
	FPM_InitFixedPoint_m(0.21875, u8p8_T),
	FPM_InitFixedPoint_m(0.26171875, u8p8_T),
	FPM_InitFixedPoint_m(0.30078125, u8p8_T),
	FPM_InitFixedPoint_m(0.34765625, u8p8_T),
	FPM_InitFixedPoint_m(0.3984375, u8p8_T),
	FPM_InitFixedPoint_m(0.44921875, u8p8_T),
	FPM_InitFixedPoint_m(0.5078125, u8p8_T),
	FPM_InitFixedPoint_m(0.56640625, u8p8_T),
	FPM_InitFixedPoint_m(0.62890625, u8p8_T),
	FPM_InitFixedPoint_m(0.69140625, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.03125, u8p8_T),
	FPM_InitFixedPoint_m(0.05078125, u8p8_T),
	FPM_InitFixedPoint_m(0.07421875, u8p8_T),
	FPM_InitFixedPoint_m(0.10546875, u8p8_T),
	FPM_InitFixedPoint_m(0.140625, u8p8_T),
	FPM_InitFixedPoint_m(0.18359375, u8p8_T),
	FPM_InitFixedPoint_m(0.23046875, u8p8_T),
	FPM_InitFixedPoint_m(0.28125, u8p8_T),
	FPM_InitFixedPoint_m(0.33984375, u8p8_T),
	FPM_InitFixedPoint_m(0.40234375, u8p8_T),
	FPM_InitFixedPoint_m(0.47265625, u8p8_T),
	FPM_InitFixedPoint_m(0.546875, u8p8_T),
	FPM_InitFixedPoint_m(0.625, u8p8_T),
	FPM_InitFixedPoint_m(0.7109375, u8p8_T),
	FPM_InitFixedPoint_m(0.80078125, u8p8_T),
	FPM_InitFixedPoint_m(0.89453125, u8p8_T),
	FPM_InitFixedPoint_m(0.99609375, u8p8_T),
	FPM_InitFixedPoint_m(1.10546875, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.015625, u8p8_T),
	FPM_InitFixedPoint_m(0.0390625, u8p8_T),
	FPM_InitFixedPoint_m(0.06640625, u8p8_T),
	FPM_InitFixedPoint_m(0.09765625, u8p8_T),
	FPM_InitFixedPoint_m(0.1328125, u8p8_T),
	FPM_InitFixedPoint_m(0.17578125, u8p8_T),
	FPM_InitFixedPoint_m(0.21875, u8p8_T),
	FPM_InitFixedPoint_m(0.26953125, u8p8_T),
	FPM_InitFixedPoint_m(0.328125, u8p8_T),
	FPM_InitFixedPoint_m(0.38671875, u8p8_T),
	FPM_InitFixedPoint_m(0.453125, u8p8_T),
	FPM_InitFixedPoint_m(0.5234375, u8p8_T),
	FPM_InitFixedPoint_m(0.59765625, u8p8_T),
	FPM_InitFixedPoint_m(0.6796875, u8p8_T),
	FPM_InitFixedPoint_m(0.76171875, u8p8_T),
	FPM_InitFixedPoint_m(0.8515625, u8p8_T),
	FPM_InitFixedPoint_m(0.94921875, u8p8_T),
	FPM_InitFixedPoint_m(1.046875, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.015625, u8p8_T),
	FPM_InitFixedPoint_m(0.03515625, u8p8_T),
	FPM_InitFixedPoint_m(0.0625, u8p8_T),
	FPM_InitFixedPoint_m(0.0859375, u8p8_T),
	FPM_InitFixedPoint_m(0.1171875, u8p8_T),
	FPM_InitFixedPoint_m(0.15234375, u8p8_T),
	FPM_InitFixedPoint_m(0.1875, u8p8_T),
	FPM_InitFixedPoint_m(0.23046875, u8p8_T),
	FPM_InitFixedPoint_m(0.2734375, u8p8_T),
	FPM_InitFixedPoint_m(0.3203125, u8p8_T),
	FPM_InitFixedPoint_m(0.37109375, u8p8_T),
	FPM_InitFixedPoint_m(0.42578125, u8p8_T),
	FPM_InitFixedPoint_m(0.48046875, u8p8_T),
	FPM_InitFixedPoint_m(0.54296875, u8p8_T),
	FPM_InitFixedPoint_m(0.60546875, u8p8_T),
	FPM_InitFixedPoint_m(0.671875, u8p8_T),
	FPM_InitFixedPoint_m(0.7421875, u8p8_T),
	FPM_InitFixedPoint_m(0.81640625, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.015625, u8p8_T),
	FPM_InitFixedPoint_m(0.03515625, u8p8_T),
	FPM_InitFixedPoint_m(0.05859375, u8p8_T),
	FPM_InitFixedPoint_m(0.0859375, u8p8_T),
	FPM_InitFixedPoint_m(0.11328125, u8p8_T),
	FPM_InitFixedPoint_m(0.14453125, u8p8_T),
	FPM_InitFixedPoint_m(0.17578125, u8p8_T),
	FPM_InitFixedPoint_m(0.21484375, u8p8_T),
	FPM_InitFixedPoint_m(0.25390625, u8p8_T),
	FPM_InitFixedPoint_m(0.29296875, u8p8_T),
	FPM_InitFixedPoint_m(0.33984375, u8p8_T),
	FPM_InitFixedPoint_m(0.38671875, u8p8_T),
	FPM_InitFixedPoint_m(0.4375, u8p8_T),
	FPM_InitFixedPoint_m(0.48828125, u8p8_T),
	FPM_InitFixedPoint_m(0.546875, u8p8_T),
	FPM_InitFixedPoint_m(0.60546875, u8p8_T),
	FPM_InitFixedPoint_m(0.66796875, u8p8_T),
	FPM_InitFixedPoint_m(0.73046875, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.01, u8p8_T),
	FPM_InitFixedPoint_m(0.02, u8p8_T),FPM_InitFixedPoint_m(0.035, u8p8_T),
	FPM_InitFixedPoint_m(0.06, u8p8_T),FPM_InitFixedPoint_m(0.08, u8p8_T),
	FPM_InitFixedPoint_m(0.12, u8p8_T),FPM_InitFixedPoint_m(0.16, u8p8_T),
	FPM_InitFixedPoint_m(0.2, u8p8_T),FPM_InitFixedPoint_m(0.24, u8p8_T),
	FPM_InitFixedPoint_m(0.29, u8p8_T),FPM_InitFixedPoint_m(0.35, u8p8_T),
	FPM_InitFixedPoint_m(0.39, u8p8_T),FPM_InitFixedPoint_m(0.46, u8p8_T),
	FPM_InitFixedPoint_m(0.51171875, u8p8_T),
	FPM_InitFixedPoint_m(0.5625, u8p8_T),
	FPM_InitFixedPoint_m(0.62109375, u8p8_T),
	FPM_InitFixedPoint_m(0.6796875, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.01, u8p8_T),
	FPM_InitFixedPoint_m(0.02, u8p8_T),FPM_InitFixedPoint_m(0.035, u8p8_T),
	FPM_InitFixedPoint_m(0.06, u8p8_T),FPM_InitFixedPoint_m(0.08, u8p8_T),
	FPM_InitFixedPoint_m(0.1, u8p8_T),FPM_InitFixedPoint_m(0.14, u8p8_T),
	FPM_InitFixedPoint_m(0.18, u8p8_T),FPM_InitFixedPoint_m(0.21, u8p8_T),
	FPM_InitFixedPoint_m(0.26, u8p8_T),FPM_InitFixedPoint_m(0.3, u8p8_T),
	FPM_InitFixedPoint_m(0.34, u8p8_T),
	FPM_InitFixedPoint_m(0.3984375, u8p8_T),
	FPM_InitFixedPoint_m(0.4375, u8p8_T),
	FPM_InitFixedPoint_m(0.48046875, u8p8_T),
	FPM_InitFixedPoint_m(0.52734375, u8p8_T),
	FPM_InitFixedPoint_m(0.57421875, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.01, u8p8_T),FPM_InitFixedPoint_m(0.03, u8p8_T),
	FPM_InitFixedPoint_m(0.05, u8p8_T),FPM_InitFixedPoint_m(0.07, u8p8_T),
	FPM_InitFixedPoint_m(0.095, u8p8_T),FPM_InitFixedPoint_m(0.13, u8p8_T),
	FPM_InitFixedPoint_m(0.16, u8p8_T),FPM_InitFixedPoint_m(0.2, u8p8_T),
	FPM_InitFixedPoint_m(0.24, u8p8_T),FPM_InitFixedPoint_m(0.28, u8p8_T),
	FPM_InitFixedPoint_m(0.32, u8p8_T),
	FPM_InitFixedPoint_m(0.3671875, u8p8_T),
	FPM_InitFixedPoint_m(0.40625, u8p8_T),
	FPM_InitFixedPoint_m(0.4453125, u8p8_T),
	FPM_InitFixedPoint_m(0.48828125, u8p8_T),
	FPM_InitFixedPoint_m(0.53125, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.01, u8p8_T),FPM_InitFixedPoint_m(0.015, u8p8_T),
	FPM_InitFixedPoint_m(0.03, u8p8_T),FPM_InitFixedPoint_m(0.05, u8p8_T),
	FPM_InitFixedPoint_m(0.07, u8p8_T),FPM_InitFixedPoint_m(0.1, u8p8_T),
	FPM_InitFixedPoint_m(0.135, u8p8_T),FPM_InitFixedPoint_m(0.16, u8p8_T),
	FPM_InitFixedPoint_m(0.2, u8p8_T),FPM_InitFixedPoint_m(0.23, u8p8_T),
	FPM_InitFixedPoint_m(0.26, u8p8_T),FPM_InitFixedPoint_m(0.31, u8p8_T),
	FPM_InitFixedPoint_m(0.35, u8p8_T),FPM_InitFixedPoint_m(0.38, u8p8_T),
	FPM_InitFixedPoint_m(0.43, u8p8_T),
	FPM_InitFixedPoint_m(0.47265625, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.01, u8p8_T),FPM_InitFixedPoint_m(0.015, u8p8_T),
	FPM_InitFixedPoint_m(0.03, u8p8_T),FPM_InitFixedPoint_m(0.05, u8p8_T),
	FPM_InitFixedPoint_m(0.07, u8p8_T),FPM_InitFixedPoint_m(0.1, u8p8_T),
	FPM_InitFixedPoint_m(0.135, u8p8_T),FPM_InitFixedPoint_m(0.16, u8p8_T),
	FPM_InitFixedPoint_m(0.2, u8p8_T),FPM_InitFixedPoint_m(0.23, u8p8_T),
	FPM_InitFixedPoint_m(0.26, u8p8_T),FPM_InitFixedPoint_m(0.31, u8p8_T),
	FPM_InitFixedPoint_m(0.35, u8p8_T),FPM_InitFixedPoint_m(0.38, u8p8_T),
	FPM_InitFixedPoint_m(0.43, u8p8_T),
	FPM_InitFixedPoint_m(0.47265625, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.01, u8p8_T),FPM_InitFixedPoint_m(0.015, u8p8_T),
	FPM_InitFixedPoint_m(0.03, u8p8_T),FPM_InitFixedPoint_m(0.05, u8p8_T),
	FPM_InitFixedPoint_m(0.07, u8p8_T),FPM_InitFixedPoint_m(0.1, u8p8_T),
	FPM_InitFixedPoint_m(0.135, u8p8_T),FPM_InitFixedPoint_m(0.16, u8p8_T),
	FPM_InitFixedPoint_m(0.2, u8p8_T),FPM_InitFixedPoint_m(0.23, u8p8_T),
	FPM_InitFixedPoint_m(0.26, u8p8_T),FPM_InitFixedPoint_m(0.31, u8p8_T),
	FPM_InitFixedPoint_m(0.35, u8p8_T),FPM_InitFixedPoint_m(0.38, u8p8_T),
	FPM_InitFixedPoint_m(0.43, u8p8_T),
	FPM_InitFixedPoint_m(0.47265625, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.01, u8p8_T),FPM_InitFixedPoint_m(0.015, u8p8_T),
	FPM_InitFixedPoint_m(0.03, u8p8_T),FPM_InitFixedPoint_m(0.05, u8p8_T),
	FPM_InitFixedPoint_m(0.07, u8p8_T),FPM_InitFixedPoint_m(0.1, u8p8_T),
	FPM_InitFixedPoint_m(0.135, u8p8_T),FPM_InitFixedPoint_m(0.16, u8p8_T),
	FPM_InitFixedPoint_m(0.2, u8p8_T),FPM_InitFixedPoint_m(0.23, u8p8_T),
	FPM_InitFixedPoint_m(0.26, u8p8_T),FPM_InitFixedPoint_m(0.31, u8p8_T),
	FPM_InitFixedPoint_m(0.35, u8p8_T),FPM_InitFixedPoint_m(0.38, u8p8_T),
	FPM_InitFixedPoint_m(0.43, u8p8_T),
	FPM_InitFixedPoint_m(0.47265625, u8p8_T)}}, {{FPM_InitFixedPoint_m(0.0, u2p14_T),FPM_InitFixedPoint_m(0.0, u2p14_T),
	FPM_InitFixedPoint_m(0.0, u2p14_T),FPM_InitFixedPoint_m(0.0, u2p14_T),
	FPM_InitFixedPoint_m(0.0, u2p14_T)},{FPM_InitFixedPoint_m(0.0, u2p14_T),
	FPM_InitFixedPoint_m(0.0, u2p14_T),FPM_InitFixedPoint_m(0.0, u2p14_T),
	FPM_InitFixedPoint_m(0.0, u2p14_T),FPM_InitFixedPoint_m(0.0, u2p14_T)},
	{FPM_InitFixedPoint_m(0.0, u2p14_T),FPM_InitFixedPoint_m(0.0, u2p14_T),
	FPM_InitFixedPoint_m(0.0, u2p14_T),FPM_InitFixedPoint_m(0.0, u2p14_T),
	FPM_InitFixedPoint_m(0.0, u2p14_T)},{FPM_InitFixedPoint_m(0.0, u2p14_T),
	FPM_InitFixedPoint_m(0.0, u2p14_T),FPM_InitFixedPoint_m(0.0, u2p14_T),
	FPM_InitFixedPoint_m(0.0, u2p14_T),FPM_InitFixedPoint_m(0.0, u2p14_T)},
	{FPM_InitFixedPoint_m(0.0, u2p14_T),FPM_InitFixedPoint_m(0.0, u2p14_T),
	FPM_InitFixedPoint_m(0.0, u2p14_T),FPM_InitFixedPoint_m(0.0, u2p14_T),
	FPM_InitFixedPoint_m(0.0, u2p14_T)},{FPM_InitFixedPoint_m(0.5, u2p14_T),
	FPM_InitFixedPoint_m(0.5, u2p14_T),FPM_InitFixedPoint_m(0.5, u2p14_T),
	FPM_InitFixedPoint_m(0.5, u2p14_T),FPM_InitFixedPoint_m(0.5, u2p14_T)},
	{FPM_InitFixedPoint_m(0.5, u2p14_T),FPM_InitFixedPoint_m(0.5, u2p14_T),
	FPM_InitFixedPoint_m(0.5, u2p14_T),FPM_InitFixedPoint_m(0.5, u2p14_T),
	FPM_InitFixedPoint_m(0.5, u2p14_T)},{FPM_InitFixedPoint_m(0.9, u2p14_T),
	FPM_InitFixedPoint_m(0.9, u2p14_T),FPM_InitFixedPoint_m(0.9, u2p14_T),
	FPM_InitFixedPoint_m(0.9, u2p14_T),FPM_InitFixedPoint_m(0.9, u2p14_T)},
	{FPM_InitFixedPoint_m(0.9, u2p14_T),FPM_InitFixedPoint_m(0.9, u2p14_T),
	FPM_InitFixedPoint_m(0.9, u2p14_T),FPM_InitFixedPoint_m(0.9, u2p14_T),
	FPM_InitFixedPoint_m(0.9, u2p14_T)},{FPM_InitFixedPoint_m(0.9, u2p14_T),
	FPM_InitFixedPoint_m(0.9, u2p14_T),FPM_InitFixedPoint_m(0.9, u2p14_T),
	FPM_InitFixedPoint_m(0.9, u2p14_T),FPM_InitFixedPoint_m(0.9, u2p14_T)},
	{FPM_InitFixedPoint_m(1.0, u2p14_T),FPM_InitFixedPoint_m(1.0, u2p14_T),
	FPM_InitFixedPoint_m(1.0, u2p14_T),FPM_InitFixedPoint_m(1.0, u2p14_T),
	FPM_InitFixedPoint_m(1.0, u2p14_T)},{FPM_InitFixedPoint_m(1.0, u2p14_T),
	FPM_InitFixedPoint_m(1.0, u2p14_T),FPM_InitFixedPoint_m(1.0, u2p14_T),
	FPM_InitFixedPoint_m(1.0, u2p14_T),FPM_InitFixedPoint_m(1.0, u2p14_T)}}, {{FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T)},{FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T)},
	{FPM_InitFixedPoint_m(0.25, u5p11_T),FPM_InitFixedPoint_m(0.25, u5p11_T),
	FPM_InitFixedPoint_m(0.25, u5p11_T),FPM_InitFixedPoint_m(0.25, u5p11_T),
	FPM_InitFixedPoint_m(0.25, u5p11_T)},
	{FPM_InitFixedPoint_m(0.25, u5p11_T),FPM_InitFixedPoint_m(0.25, u5p11_T),
	FPM_InitFixedPoint_m(0.25, u5p11_T),FPM_InitFixedPoint_m(0.25, u5p11_T),
	FPM_InitFixedPoint_m(0.25, u5p11_T)},{FPM_InitFixedPoint_m(0.5, u5p11_T),
	FPM_InitFixedPoint_m(0.5, u5p11_T),FPM_InitFixedPoint_m(0.5, u5p11_T),
	FPM_InitFixedPoint_m(0.5, u5p11_T),FPM_InitFixedPoint_m(0.5, u5p11_T)},
	{FPM_InitFixedPoint_m(0.5, u5p11_T),FPM_InitFixedPoint_m(0.5, u5p11_T),
	FPM_InitFixedPoint_m(0.5, u5p11_T),FPM_InitFixedPoint_m(0.5, u5p11_T),
	FPM_InitFixedPoint_m(0.5, u5p11_T)},{FPM_InitFixedPoint_m(0.75, u5p11_T),
	FPM_InitFixedPoint_m(0.75, u5p11_T),FPM_InitFixedPoint_m(0.75, u5p11_T),
	FPM_InitFixedPoint_m(0.75, u5p11_T),FPM_InitFixedPoint_m(0.75, u5p11_T)},
	{FPM_InitFixedPoint_m(0.75, u5p11_T),FPM_InitFixedPoint_m(0.75, u5p11_T),
	FPM_InitFixedPoint_m(0.75, u5p11_T),FPM_InitFixedPoint_m(0.75, u5p11_T),
	FPM_InitFixedPoint_m(0.75, u5p11_T)},{FPM_InitFixedPoint_m(1.1, u5p11_T),
	FPM_InitFixedPoint_m(1.1, u5p11_T),FPM_InitFixedPoint_m(1.1, u5p11_T),
	FPM_InitFixedPoint_m(1.1, u5p11_T),FPM_InitFixedPoint_m(1.1, u5p11_T)},
	{FPM_InitFixedPoint_m(1.1, u5p11_T),FPM_InitFixedPoint_m(1.1, u5p11_T),
	FPM_InitFixedPoint_m(1.1, u5p11_T),FPM_InitFixedPoint_m(1.1, u5p11_T),
	FPM_InitFixedPoint_m(1.1, u5p11_T)},{FPM_InitFixedPoint_m(1.1, u5p11_T),
	FPM_InitFixedPoint_m(1.1, u5p11_T),FPM_InitFixedPoint_m(1.1, u5p11_T),
	FPM_InitFixedPoint_m(1.1, u5p11_T),FPM_InitFixedPoint_m(1.1, u5p11_T)},
	{FPM_InitFixedPoint_m(1.1, u5p11_T),FPM_InitFixedPoint_m(1.1, u5p11_T),
	FPM_InitFixedPoint_m(1.1, u5p11_T),FPM_InitFixedPoint_m(1.1, u5p11_T),
	FPM_InitFixedPoint_m(1.1, u5p11_T)}}, {FPM_InitFixedPoint_m(0.0, u9p7_T), FPM_InitFixedPoint_m(5.0, u9p7_T),
	 FPM_InitFixedPoint_m(30.0, u9p7_T), FPM_InitFixedPoint_m(60.0, u9p7_T),
	 FPM_InitFixedPoint_m(80.0, u9p7_T), FPM_InitFixedPoint_m(100.0, u9p7_T),
	 FPM_InitFixedPoint_m(120.0, u9p7_T),
	 FPM_InitFixedPoint_m(150.0, u9p7_T)}, 0.0f, {FPM_InitFixedPoint_m(8.8, u4p12_T), FPM_InitFixedPoint_m(8.8, u4p12_T),
	 FPM_InitFixedPoint_m(8.8, u4p12_T), FPM_InitFixedPoint_m(8.8, u4p12_T),
	 FPM_InitFixedPoint_m(8.8, u4p12_T), FPM_InitFixedPoint_m(8.8, u4p12_T),
	 FPM_InitFixedPoint_m(8.8, u4p12_T), FPM_InitFixedPoint_m(8.8, u4p12_T),
	 FPM_InitFixedPoint_m(8.8, u4p12_T), FPM_InitFixedPoint_m(8.8, u4p12_T),
	 FPM_InitFixedPoint_m(8.8, u4p12_T), FPM_InitFixedPoint_m(8.8, u4p12_T)}, {FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T)}, {FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T)}, {FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T)}, {FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T)}, {{FPM_InitFixedPoint_m(2.086427077, u12p4_T),
	FPM_InitFixedPoint_m(10.16797672, u12p4_T),
	FPM_InitFixedPoint_m(21.4030946, u12p4_T),
	FPM_InitFixedPoint_m(34.63743345, u12p4_T),
	FPM_InitFixedPoint_m(54.51215389, u12p4_T),
	FPM_InitFixedPoint_m(78.73446942, u12p4_T),
	FPM_InitFixedPoint_m(103.9123004, u12p4_T),
	FPM_InitFixedPoint_m(126.9879974, u12p4_T),
	FPM_InitFixedPoint_m(150.0636944, u12p4_T),
	FPM_InitFixedPoint_m(173.1871673, u12p4_T),
	FPM_InitFixedPoint_m(219.2907856, u12p4_T),
	FPM_InitFixedPoint_m(277.0516919, u12p4_T),
	FPM_InitFixedPoint_m(369.4022558, u12p4_T)},
	{FPM_InitFixedPoint_m(2.086427077, u12p4_T),
	FPM_InitFixedPoint_m(10.16797672, u12p4_T),
	FPM_InitFixedPoint_m(21.4030946, u12p4_T),
	FPM_InitFixedPoint_m(34.63743345, u12p4_T),
	FPM_InitFixedPoint_m(54.51215389, u12p4_T),
	FPM_InitFixedPoint_m(78.73446942, u12p4_T),
	FPM_InitFixedPoint_m(103.9123004, u12p4_T),
	FPM_InitFixedPoint_m(126.9879974, u12p4_T),
	FPM_InitFixedPoint_m(150.0636944, u12p4_T),
	FPM_InitFixedPoint_m(173.1871673, u12p4_T),
	FPM_InitFixedPoint_m(219.2907856, u12p4_T),
	FPM_InitFixedPoint_m(277.0516919, u12p4_T),
	FPM_InitFixedPoint_m(369.4022558, u12p4_T)},
	{FPM_InitFixedPoint_m(2.086427077, u12p4_T),
	FPM_InitFixedPoint_m(10.16797672, u12p4_T),
	FPM_InitFixedPoint_m(21.4030946, u12p4_T),
	FPM_InitFixedPoint_m(34.63743345, u12p4_T),
	FPM_InitFixedPoint_m(54.51215389, u12p4_T),
	FPM_InitFixedPoint_m(78.73446942, u12p4_T),
	FPM_InitFixedPoint_m(103.9123004, u12p4_T),
	FPM_InitFixedPoint_m(126.9879974, u12p4_T),
	FPM_InitFixedPoint_m(150.0636944, u12p4_T),
	FPM_InitFixedPoint_m(173.1871673, u12p4_T),
	FPM_InitFixedPoint_m(219.2907856, u12p4_T),
	FPM_InitFixedPoint_m(277.0516919, u12p4_T),
	FPM_InitFixedPoint_m(369.4022558, u12p4_T)},
	{FPM_InitFixedPoint_m(2.086427077, u12p4_T),
	FPM_InitFixedPoint_m(10.16797672, u12p4_T),
	FPM_InitFixedPoint_m(21.4030946, u12p4_T),
	FPM_InitFixedPoint_m(34.63743345, u12p4_T),
	FPM_InitFixedPoint_m(54.51215389, u12p4_T),
	FPM_InitFixedPoint_m(78.73446942, u12p4_T),
	FPM_InitFixedPoint_m(103.9123004, u12p4_T),
	FPM_InitFixedPoint_m(126.9879974, u12p4_T),
	FPM_InitFixedPoint_m(150.0636944, u12p4_T),
	FPM_InitFixedPoint_m(173.1871673, u12p4_T),
	FPM_InitFixedPoint_m(219.2907856, u12p4_T),
	FPM_InitFixedPoint_m(277.0516919, u12p4_T),
	FPM_InitFixedPoint_m(369.4022558, u12p4_T)},
	{FPM_InitFixedPoint_m(2.086427077, u12p4_T),
	FPM_InitFixedPoint_m(10.16797672, u12p4_T),
	FPM_InitFixedPoint_m(21.4030946, u12p4_T),
	FPM_InitFixedPoint_m(34.63743345, u12p4_T),
	FPM_InitFixedPoint_m(54.51215389, u12p4_T),
	FPM_InitFixedPoint_m(78.73446942, u12p4_T),
	FPM_InitFixedPoint_m(103.9123004, u12p4_T),
	FPM_InitFixedPoint_m(126.9879974, u12p4_T),
	FPM_InitFixedPoint_m(150.0636944, u12p4_T),
	FPM_InitFixedPoint_m(173.1871673, u12p4_T),
	FPM_InitFixedPoint_m(219.2907856, u12p4_T),
	FPM_InitFixedPoint_m(277.0516919, u12p4_T),
	FPM_InitFixedPoint_m(369.4022558, u12p4_T)},
	{FPM_InitFixedPoint_m(2.086427077, u12p4_T),
	FPM_InitFixedPoint_m(10.16797672, u12p4_T),
	FPM_InitFixedPoint_m(21.4030946, u12p4_T),
	FPM_InitFixedPoint_m(34.63743345, u12p4_T),
	FPM_InitFixedPoint_m(54.51215389, u12p4_T),
	FPM_InitFixedPoint_m(78.73446942, u12p4_T),
	FPM_InitFixedPoint_m(103.9123004, u12p4_T),
	FPM_InitFixedPoint_m(126.9879974, u12p4_T),
	FPM_InitFixedPoint_m(150.0636944, u12p4_T),
	FPM_InitFixedPoint_m(173.1871673, u12p4_T),
	FPM_InitFixedPoint_m(219.2907856, u12p4_T),
	FPM_InitFixedPoint_m(277.0516919, u12p4_T),
	FPM_InitFixedPoint_m(369.4022558, u12p4_T)},
	{FPM_InitFixedPoint_m(2.086427077, u12p4_T),
	FPM_InitFixedPoint_m(10.16797672, u12p4_T),
	FPM_InitFixedPoint_m(21.4030946, u12p4_T),
	FPM_InitFixedPoint_m(34.63743345, u12p4_T),
	FPM_InitFixedPoint_m(54.51215389, u12p4_T),
	FPM_InitFixedPoint_m(78.73446942, u12p4_T),
	FPM_InitFixedPoint_m(103.9123004, u12p4_T),
	FPM_InitFixedPoint_m(126.9879974, u12p4_T),
	FPM_InitFixedPoint_m(150.0636944, u12p4_T),
	FPM_InitFixedPoint_m(173.1871673, u12p4_T),
	FPM_InitFixedPoint_m(219.2907856, u12p4_T),
	FPM_InitFixedPoint_m(277.0516919, u12p4_T),
	FPM_InitFixedPoint_m(369.4022558, u12p4_T)},
	{FPM_InitFixedPoint_m(2.086427077, u12p4_T),
	FPM_InitFixedPoint_m(10.16797672, u12p4_T),
	FPM_InitFixedPoint_m(21.4030946, u12p4_T),
	FPM_InitFixedPoint_m(34.63743345, u12p4_T),
	FPM_InitFixedPoint_m(54.51215389, u12p4_T),
	FPM_InitFixedPoint_m(78.73446942, u12p4_T),
	FPM_InitFixedPoint_m(103.9123004, u12p4_T),
	FPM_InitFixedPoint_m(126.9879974, u12p4_T),
	FPM_InitFixedPoint_m(150.0636944, u12p4_T),
	FPM_InitFixedPoint_m(173.1871673, u12p4_T),
	FPM_InitFixedPoint_m(219.2907856, u12p4_T),
	FPM_InitFixedPoint_m(277.0516919, u12p4_T),
	FPM_InitFixedPoint_m(369.4022558, u12p4_T)},
	{FPM_InitFixedPoint_m(2.086427077, u12p4_T),
	FPM_InitFixedPoint_m(10.16797672, u12p4_T),
	FPM_InitFixedPoint_m(21.4030946, u12p4_T),
	FPM_InitFixedPoint_m(34.63743345, u12p4_T),
	FPM_InitFixedPoint_m(54.51215389, u12p4_T),
	FPM_InitFixedPoint_m(78.73446942, u12p4_T),
	FPM_InitFixedPoint_m(103.9123004, u12p4_T),
	FPM_InitFixedPoint_m(126.9879974, u12p4_T),
	FPM_InitFixedPoint_m(150.0636944, u12p4_T),
	FPM_InitFixedPoint_m(173.1871673, u12p4_T),
	FPM_InitFixedPoint_m(219.2907856, u12p4_T),
	FPM_InitFixedPoint_m(277.0516919, u12p4_T),
	FPM_InitFixedPoint_m(369.4022558, u12p4_T)},
	{FPM_InitFixedPoint_m(2.086427077, u12p4_T),
	FPM_InitFixedPoint_m(10.16797672, u12p4_T),
	FPM_InitFixedPoint_m(21.4030946, u12p4_T),
	FPM_InitFixedPoint_m(34.63743345, u12p4_T),
	FPM_InitFixedPoint_m(54.51215389, u12p4_T),
	FPM_InitFixedPoint_m(78.73446942, u12p4_T),
	FPM_InitFixedPoint_m(103.9123004, u12p4_T),
	FPM_InitFixedPoint_m(126.9879974, u12p4_T),
	FPM_InitFixedPoint_m(150.0636944, u12p4_T),
	FPM_InitFixedPoint_m(173.1871673, u12p4_T),
	FPM_InitFixedPoint_m(219.2907856, u12p4_T),
	FPM_InitFixedPoint_m(277.0516919, u12p4_T),
	FPM_InitFixedPoint_m(369.4022558, u12p4_T)},
	{FPM_InitFixedPoint_m(2.086427077, u12p4_T),
	FPM_InitFixedPoint_m(10.16797672, u12p4_T),
	FPM_InitFixedPoint_m(21.4030946, u12p4_T),
	FPM_InitFixedPoint_m(34.63743345, u12p4_T),
	FPM_InitFixedPoint_m(54.51215389, u12p4_T),
	FPM_InitFixedPoint_m(78.73446942, u12p4_T),
	FPM_InitFixedPoint_m(103.9123004, u12p4_T),
	FPM_InitFixedPoint_m(126.9879974, u12p4_T),
	FPM_InitFixedPoint_m(150.0636944, u12p4_T),
	FPM_InitFixedPoint_m(173.1871673, u12p4_T),
	FPM_InitFixedPoint_m(219.2907856, u12p4_T),
	FPM_InitFixedPoint_m(277.0516919, u12p4_T),
	FPM_InitFixedPoint_m(369.4022558, u12p4_T)},
	{FPM_InitFixedPoint_m(2.086427077, u12p4_T),
	FPM_InitFixedPoint_m(10.16797672, u12p4_T),
	FPM_InitFixedPoint_m(21.4030946, u12p4_T),
	FPM_InitFixedPoint_m(34.63743345, u12p4_T),
	FPM_InitFixedPoint_m(54.51215389, u12p4_T),
	FPM_InitFixedPoint_m(78.73446942, u12p4_T),
	FPM_InitFixedPoint_m(103.9123004, u12p4_T),
	FPM_InitFixedPoint_m(126.9879974, u12p4_T),
	FPM_InitFixedPoint_m(150.0636944, u12p4_T),
	FPM_InitFixedPoint_m(173.1871673, u12p4_T),
	FPM_InitFixedPoint_m(219.2907856, u12p4_T),
	FPM_InitFixedPoint_m(277.0516919, u12p4_T),
	FPM_InitFixedPoint_m(369.4022558, u12p4_T)}}, {{FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T)},{FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T)},
	{FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T)},{FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T)},
	{FPM_InitFixedPoint_m(4.73E-06, u5p11_T),
	FPM_InitFixedPoint_m(0.000112305, u5p11_T),
	FPM_InitFixedPoint_m(0.000497601, u5p11_T),
	FPM_InitFixedPoint_m(0.001303225, u5p11_T),
	FPM_InitFixedPoint_m(0.003227861, u5p11_T),
	FPM_InitFixedPoint_m(0.006733764, u5p11_T),
	FPM_InitFixedPoint_m(0.011729028, u5p11_T),
	FPM_InitFixedPoint_m(0.017516747, u5p11_T),
	FPM_InitFixedPoint_m(0.024461291, u5p11_T),
	FPM_InitFixedPoint_m(0.032580633, u5p11_T),
	FPM_InitFixedPoint_m(0.052235875, u5p11_T),
	FPM_InitFixedPoint_m(0.083377663, u5p11_T),
	FPM_InitFixedPoint_m(0.148226957, u5p11_T)},
	{FPM_InitFixedPoint_m(0.000486471, u5p11_T),
	FPM_InitFixedPoint_m(0.002683176, u5p11_T),
	FPM_InitFixedPoint_m(0.006562175, u5p11_T),
	FPM_InitFixedPoint_m(0.0123626, u5p11_T),
	FPM_InitFixedPoint_m(0.023575163, u5p11_T),
	FPM_InitFixedPoint_m(0.041301363, u5p11_T),
	FPM_InitFixedPoint_m(0.064455533, u5p11_T),
	FPM_InitFixedPoint_m(0.089909836, u5p11_T),
	FPM_InitFixedPoint_m(0.119413028, u5p11_T),
	FPM_InitFixedPoint_m(0.153038774, u5p11_T),
	FPM_InitFixedPoint_m(0.232215934, u5p11_T),
	FPM_InitFixedPoint_m(0.354221553, u5p11_T),
	FPM_InitFixedPoint_m(0.601993991, u5p11_T)},
	{FPM_InitFixedPoint_m(0.00237325, u5p11_T),
	FPM_InitFixedPoint_m(0.012012076, u5p11_T),
	FPM_InitFixedPoint_m(0.02659086, u5p11_T),
	FPM_InitFixedPoint_m(0.045522684, u5p11_T),
	FPM_InitFixedPoint_m(0.077527555, u5p11_T),
	FPM_InitFixedPoint_m(0.122334762, u5p11_T),
	FPM_InitFixedPoint_m(0.175664812, u5p11_T),
	FPM_InitFixedPoint_m(0.230589844, u5p11_T),
	FPM_InitFixedPoint_m(0.291299003, u5p11_T),
	FPM_InitFixedPoint_m(0.357935954, u5p11_T),
	FPM_InitFixedPoint_m(0.508131234, u5p11_T),
	FPM_InitFixedPoint_m(0.728886973, u5p11_T),
	FPM_InitFixedPoint_m(1.157132994, u5p11_T)},
	{FPM_InitFixedPoint_m(0.004734678, u5p11_T),
	FPM_InitFixedPoint_m(0.02374339, u5p11_T),
	FPM_InitFixedPoint_m(0.051937718, u5p11_T),
	FPM_InitFixedPoint_m(0.087787305, u5p11_T),
	FPM_InitFixedPoint_m(0.146985458, u5p11_T),
	FPM_InitFixedPoint_m(0.227835113, u5p11_T),
	FPM_InitFixedPoint_m(0.322007055, u5p11_T),
	FPM_InitFixedPoint_m(0.417387822, u5p11_T),
	FPM_InitFixedPoint_m(0.521444778, u5p11_T),
	FPM_InitFixedPoint_m(0.634420325, u5p11_T),
	FPM_InitFixedPoint_m(0.885672782, u5p11_T),
	FPM_InitFixedPoint_m(1.249329789, u5p11_T),
	FPM_InitFixedPoint_m(1.943698596, u5p11_T)},
	{FPM_InitFixedPoint_m(0.004734678, u5p11_T),
	FPM_InitFixedPoint_m(0.02374339, u5p11_T),
	FPM_InitFixedPoint_m(0.051937718, u5p11_T),
	FPM_InitFixedPoint_m(0.087787305, u5p11_T),
	FPM_InitFixedPoint_m(0.146985458, u5p11_T),
	FPM_InitFixedPoint_m(0.227835113, u5p11_T),
	FPM_InitFixedPoint_m(0.322007055, u5p11_T),
	FPM_InitFixedPoint_m(0.417387822, u5p11_T),
	FPM_InitFixedPoint_m(0.521444778, u5p11_T),
	FPM_InitFixedPoint_m(0.634420325, u5p11_T),
	FPM_InitFixedPoint_m(0.885672782, u5p11_T),
	FPM_InitFixedPoint_m(1.249329789, u5p11_T),
	FPM_InitFixedPoint_m(1.943698596, u5p11_T)},
	{FPM_InitFixedPoint_m(0.004734678, u5p11_T),
	FPM_InitFixedPoint_m(0.02374339, u5p11_T),
	FPM_InitFixedPoint_m(0.051937718, u5p11_T),
	FPM_InitFixedPoint_m(0.087787305, u5p11_T),
	FPM_InitFixedPoint_m(0.146985458, u5p11_T),
	FPM_InitFixedPoint_m(0.227835113, u5p11_T),
	FPM_InitFixedPoint_m(0.322007055, u5p11_T),
	FPM_InitFixedPoint_m(0.417387822, u5p11_T),
	FPM_InitFixedPoint_m(0.521444778, u5p11_T),
	FPM_InitFixedPoint_m(0.634420325, u5p11_T),
	FPM_InitFixedPoint_m(0.885672782, u5p11_T),
	FPM_InitFixedPoint_m(1.249329789, u5p11_T),
	FPM_InitFixedPoint_m(1.943698596, u5p11_T)},
	{FPM_InitFixedPoint_m(0.004734678, u5p11_T),
	FPM_InitFixedPoint_m(0.02374339, u5p11_T),
	FPM_InitFixedPoint_m(0.051937718, u5p11_T),
	FPM_InitFixedPoint_m(0.087787305, u5p11_T),
	FPM_InitFixedPoint_m(0.146985458, u5p11_T),
	FPM_InitFixedPoint_m(0.227835113, u5p11_T),
	FPM_InitFixedPoint_m(0.322007055, u5p11_T),
	FPM_InitFixedPoint_m(0.417387822, u5p11_T),
	FPM_InitFixedPoint_m(0.521444778, u5p11_T),
	FPM_InitFixedPoint_m(0.634420325, u5p11_T),
	FPM_InitFixedPoint_m(0.885672782, u5p11_T),
	FPM_InitFixedPoint_m(1.249329789, u5p11_T),
	FPM_InitFixedPoint_m(1.943698596, u5p11_T)},
	{FPM_InitFixedPoint_m(0.004734678, u5p11_T),
	FPM_InitFixedPoint_m(0.02374339, u5p11_T),
	FPM_InitFixedPoint_m(0.051937718, u5p11_T),
	FPM_InitFixedPoint_m(0.087787305, u5p11_T),
	FPM_InitFixedPoint_m(0.146985458, u5p11_T),
	FPM_InitFixedPoint_m(0.227835113, u5p11_T),
	FPM_InitFixedPoint_m(0.322007055, u5p11_T),
	FPM_InitFixedPoint_m(0.417387822, u5p11_T),
	FPM_InitFixedPoint_m(0.521444778, u5p11_T),
	FPM_InitFixedPoint_m(0.634420325, u5p11_T),
	FPM_InitFixedPoint_m(0.885672782, u5p11_T),
	FPM_InitFixedPoint_m(1.249329789, u5p11_T),
	FPM_InitFixedPoint_m(1.943698596, u5p11_T)}}, { FPM_InitFixedPoint_m(1.0, u2p14_T),FPM_InitFixedPoint_m(1.0, u2p14_T),
	FPM_InitFixedPoint_m(1.0, u2p14_T),FPM_InitFixedPoint_m(1.0, u2p14_T),
	FPM_InitFixedPoint_m(1.0, u2p14_T) }, { FPM_InitFixedPoint_m(0.005, um1p17_T),
	 FPM_InitFixedPoint_m(0.005, um1p17_T),
	 FPM_InitFixedPoint_m(0.005, um1p17_T),
	 FPM_InitFixedPoint_m(0.005, um1p17_T),
	 FPM_InitFixedPoint_m(0.005, um1p17_T),
	 FPM_InitFixedPoint_m(0.005, um1p17_T),
	 FPM_InitFixedPoint_m(0.005, um1p17_T),
	 FPM_InitFixedPoint_m(0.005, um1p17_T),
	 FPM_InitFixedPoint_m(0.005, um1p17_T),
	 FPM_InitFixedPoint_m(0.005, um1p17_T) }, { FPM_InitFixedPoint_m(1.0, u8p8_T), FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(0.3, u8p8_T), FPM_InitFixedPoint_m(0.2, u8p8_T),
	 FPM_InitFixedPoint_m(0.1, u8p8_T), FPM_InitFixedPoint_m(0.0, u8p8_T),
	 FPM_InitFixedPoint_m(0.0, u8p8_T), FPM_InitFixedPoint_m(0.0, u8p8_T),
	 FPM_InitFixedPoint_m(0.0, u8p8_T), FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.0, u8p8_T), FPM_InitFixedPoint_m(0.0, u8p8_T) }, { FPM_InitFixedPoint_m(1.0, u2p14_T),FPM_InitFixedPoint_m(1.0, u2p14_T),
	FPM_InitFixedPoint_m(1.0, u2p14_T),FPM_InitFixedPoint_m(1.0, u2p14_T),
	FPM_InitFixedPoint_m(1.0, u2p14_T) }, { FPM_InitFixedPoint_m(0.05078125, u8p8_T),
	 FPM_InitFixedPoint_m(0.10546875, u8p8_T),
	 FPM_InitFixedPoint_m(0.15625, u8p8_T),
	 FPM_InitFixedPoint_m(0.20703125, u8p8_T),
	 FPM_InitFixedPoint_m(0.2578125, u8p8_T) }, {{FPM_InitFixedPoint_m(15.0, u12p4_T),
	 FPM_InitFixedPoint_m(15.0, u12p4_T),
	 FPM_InitFixedPoint_m(15.0, u12p4_T),FPM_InitFixedPoint_m(15.0, u12p4_T),
	FPM_InitFixedPoint_m(15.0, u12p4_T), FPM_InitFixedPoint_m(15.0, u12p4_T),
	 FPM_InitFixedPoint_m(15.0, u12p4_T),
	 FPM_InitFixedPoint_m(15.0, u12p4_T),FPM_InitFixedPoint_m(15.0, u12p4_T),
	FPM_InitFixedPoint_m(15.0, u12p4_T),FPM_InitFixedPoint_m(15.0, u12p4_T),
	 FPM_InitFixedPoint_m(15.0, u12p4_T)},
	{FPM_InitFixedPoint_m(15.0, u12p4_T),
	 FPM_InitFixedPoint_m(15.0, u12p4_T),FPM_InitFixedPoint_m(15.0, u12p4_T),
	FPM_InitFixedPoint_m(15.0, u12p4_T), FPM_InitFixedPoint_m(15.0, u12p4_T),
	 FPM_InitFixedPoint_m(15.0, u12p4_T),FPM_InitFixedPoint_m(15.0, u12p4_T),
	 FPM_InitFixedPoint_m(15.0, u12p4_T),
	 FPM_InitFixedPoint_m(15.0, u12p4_T),
	 FPM_InitFixedPoint_m(15.0, u12p4_T),
	 FPM_InitFixedPoint_m(15.0, u12p4_T),
	 FPM_InitFixedPoint_m(15.0, u12p4_T)}}, FPM_InitFixedPoint_m(0.0, u9p7_T), 20583U, 3991U, FPM_InitFixedPoint_m(30.0, u9p7_T), FPM_InitFixedPoint_m(3.0, u12p4_T), FPM_InitFixedPoint_m(0.0195, u4p12_T), { FPM_InitFixedPoint_m(0.0, u9p7_T), FPM_InitFixedPoint_m(5.0, u9p7_T),
	 FPM_InitFixedPoint_m(10.0, u9p7_T), FPM_InitFixedPoint_m(20.0, u9p7_T) }, { FPM_InitFixedPoint_m(0.0, u9p7_T), FPM_InitFixedPoint_m(5.0, u9p7_T),
	 FPM_InitFixedPoint_m(10.0, u9p7_T), FPM_InitFixedPoint_m(20.0, u9p7_T) }, { FPM_InitFixedPoint_m(25.0, u12p4_T),
	 FPM_InitFixedPoint_m(50.0, u12p4_T) }, { FPM_InitFixedPoint_m(60.0, u12p4_T),
	 FPM_InitFixedPoint_m(15.0, u12p4_T) }, { FPM_InitFixedPoint_m(0.0, u8p8_T), FPM_InitFixedPoint_m(1.0, u8p8_T) }, {{FPM_InitFixedPoint_m(90.0, u12p4_T),
	 FPM_InitFixedPoint_m(60.0, u12p4_T),
	 FPM_InitFixedPoint_m(30.0, u12p4_T),
	 FPM_InitFixedPoint_m(0.0, u12p4_T)},
	{FPM_InitFixedPoint_m(90.0, u12p4_T),
	 FPM_InitFixedPoint_m(60.0, u12p4_T),
	 FPM_InitFixedPoint_m(30.0, u12p4_T),
	 FPM_InitFixedPoint_m(0.0, u12p4_T)},
	{FPM_InitFixedPoint_m(90.0, u12p4_T),
	 FPM_InitFixedPoint_m(60.0, u12p4_T),
	 FPM_InitFixedPoint_m(30.0, u12p4_T),
	 FPM_InitFixedPoint_m(0.0, u12p4_T)},
	{FPM_InitFixedPoint_m(90.0, u12p4_T),
	 FPM_InitFixedPoint_m(60.0, u12p4_T),
	 FPM_InitFixedPoint_m(30.0, u12p4_T),
	 FPM_InitFixedPoint_m(0.0, u12p4_T)}}, {{FPM_InitFixedPoint_m(1.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.66, u1p15_T),
	 FPM_InitFixedPoint_m(0.33, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T)},{FPM_InitFixedPoint_m(1.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.66, u1p15_T),
	 FPM_InitFixedPoint_m(0.33, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T)},{FPM_InitFixedPoint_m(1.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.66, u1p15_T),
	 FPM_InitFixedPoint_m(0.33, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T)},{FPM_InitFixedPoint_m(1.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.66, u1p15_T),
	 FPM_InitFixedPoint_m(0.33, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T)}}, {{FPM_InitFixedPoint_m(0.0, u0p16_T),
	 FPM_InitFixedPoint_m(0.004, u0p16_T)},
	{FPM_InitFixedPoint_m(0.0, u0p16_T),
	 FPM_InitFixedPoint_m(0.004, u0p16_T)},
	{FPM_InitFixedPoint_m(0.0, u0p16_T),
	 FPM_InitFixedPoint_m(0.004, u0p16_T)},
	{FPM_InitFixedPoint_m(0.0, u0p16_T),
	 FPM_InitFixedPoint_m(0.004, u0p16_T)}}, {{FPM_InitFixedPoint_m(0.0, u0p16_T),
	 FPM_InitFixedPoint_m(0.001953125, u0p16_T)},
	{FPM_InitFixedPoint_m(0.0, u0p16_T),
	 FPM_InitFixedPoint_m(0.001953125, u0p16_T)},
	{FPM_InitFixedPoint_m(0.0, u0p16_T),
	 FPM_InitFixedPoint_m(0.001953125, u0p16_T)},
	{FPM_InitFixedPoint_m(0.0, u0p16_T),
	 FPM_InitFixedPoint_m(0.001953125, u0p16_T)}}, {{FPM_InitFixedPoint_m(20.0, u12p4_T),
	FPM_InitFixedPoint_m(0.0, u12p4_T)},{FPM_InitFixedPoint_m(20.0, u12p4_T),
	FPM_InitFixedPoint_m(0.0, u12p4_T)},{FPM_InitFixedPoint_m(20.0, u12p4_T),
	FPM_InitFixedPoint_m(0.0, u12p4_T)},{FPM_InitFixedPoint_m(20.0, u12p4_T),
	FPM_InitFixedPoint_m(0.0, u12p4_T)}}, {FPM_InitFixedPoint_m(8.0, u7p9_T), FPM_InitFixedPoint_m(8.0, u7p9_T),
	 FPM_InitFixedPoint_m(8.0, u7p9_T), FPM_InitFixedPoint_m(8.0, u7p9_T),
	 FPM_InitFixedPoint_m(8.0, u7p9_T), FPM_InitFixedPoint_m(8.0, u7p9_T),
	 FPM_InitFixedPoint_m(8.0, u7p9_T), FPM_InitFixedPoint_m(8.0, u7p9_T),
	 FPM_InitFixedPoint_m(8.0, u7p9_T), FPM_InitFixedPoint_m(8.0, u7p9_T),
	 FPM_InitFixedPoint_m(8.0, u7p9_T), FPM_InitFixedPoint_m(8.0, u7p9_T)}, {{FPM_InitFixedPoint_m(0.25, u3p13_T),
	FPM_InitFixedPoint_m(0.25, u3p13_T),FPM_InitFixedPoint_m(0.25, u3p13_T),
	FPM_InitFixedPoint_m(0.25, u3p13_T),FPM_InitFixedPoint_m(0.25, u3p13_T),
	FPM_InitFixedPoint_m(0.25, u3p13_T),FPM_InitFixedPoint_m(0.25, u3p13_T),
	FPM_InitFixedPoint_m(0.25, u3p13_T),FPM_InitFixedPoint_m(0.25, u3p13_T),
	FPM_InitFixedPoint_m(0.25, u3p13_T),FPM_InitFixedPoint_m(0.25, u3p13_T),
	FPM_InitFixedPoint_m(0.25, u3p13_T),FPM_InitFixedPoint_m(0.25, u3p13_T)},
	{FPM_InitFixedPoint_m(0.2, u3p13_T),FPM_InitFixedPoint_m(0.2, u3p13_T),
	FPM_InitFixedPoint_m(0.2, u3p13_T),FPM_InitFixedPoint_m(0.2, u3p13_T),
	FPM_InitFixedPoint_m(0.2, u3p13_T),FPM_InitFixedPoint_m(0.2, u3p13_T),
	FPM_InitFixedPoint_m(0.2, u3p13_T),FPM_InitFixedPoint_m(0.2, u3p13_T),
	FPM_InitFixedPoint_m(0.2, u3p13_T),FPM_InitFixedPoint_m(0.2, u3p13_T),
	FPM_InitFixedPoint_m(0.2, u3p13_T),FPM_InitFixedPoint_m(0.2, u3p13_T),
	FPM_InitFixedPoint_m(0.2, u3p13_T)},{FPM_InitFixedPoint_m(0.13, u3p13_T),
	FPM_InitFixedPoint_m(0.13, u3p13_T),FPM_InitFixedPoint_m(0.13, u3p13_T),
	FPM_InitFixedPoint_m(0.13, u3p13_T),FPM_InitFixedPoint_m(0.13, u3p13_T),
	FPM_InitFixedPoint_m(0.13, u3p13_T),FPM_InitFixedPoint_m(0.13, u3p13_T),
	FPM_InitFixedPoint_m(0.13, u3p13_T),FPM_InitFixedPoint_m(0.13, u3p13_T),
	FPM_InitFixedPoint_m(0.13, u3p13_T),FPM_InitFixedPoint_m(0.13, u3p13_T),
	FPM_InitFixedPoint_m(0.13, u3p13_T),FPM_InitFixedPoint_m(0.13, u3p13_T)},
	{FPM_InitFixedPoint_m(0.08, u3p13_T),FPM_InitFixedPoint_m(0.08, u3p13_T),
	FPM_InitFixedPoint_m(0.08, u3p13_T),FPM_InitFixedPoint_m(0.08, u3p13_T),
	FPM_InitFixedPoint_m(0.08, u3p13_T),FPM_InitFixedPoint_m(0.08, u3p13_T),
	FPM_InitFixedPoint_m(0.08, u3p13_T),FPM_InitFixedPoint_m(0.08, u3p13_T),
	FPM_InitFixedPoint_m(0.08, u3p13_T),FPM_InitFixedPoint_m(0.08, u3p13_T),
	FPM_InitFixedPoint_m(0.08, u3p13_T),FPM_InitFixedPoint_m(0.08, u3p13_T),
	FPM_InitFixedPoint_m(0.08, u3p13_T)},
	{FPM_InitFixedPoint_m(0.04, u3p13_T),FPM_InitFixedPoint_m(0.04, u3p13_T),
	FPM_InitFixedPoint_m(0.04, u3p13_T),FPM_InitFixedPoint_m(0.04, u3p13_T),
	FPM_InitFixedPoint_m(0.04, u3p13_T),FPM_InitFixedPoint_m(0.04, u3p13_T),
	FPM_InitFixedPoint_m(0.04, u3p13_T),FPM_InitFixedPoint_m(0.04, u3p13_T),
	FPM_InitFixedPoint_m(0.04, u3p13_T),FPM_InitFixedPoint_m(0.04, u3p13_T),
	FPM_InitFixedPoint_m(0.04, u3p13_T),FPM_InitFixedPoint_m(0.04, u3p13_T),
	FPM_InitFixedPoint_m(0.04, u3p13_T)},
	{FPM_InitFixedPoint_m(0.01, u3p13_T),FPM_InitFixedPoint_m(0.01, u3p13_T),
	FPM_InitFixedPoint_m(0.01, u3p13_T),FPM_InitFixedPoint_m(0.01, u3p13_T),
	FPM_InitFixedPoint_m(0.01, u3p13_T),FPM_InitFixedPoint_m(0.01, u3p13_T),
	FPM_InitFixedPoint_m(0.01, u3p13_T),FPM_InitFixedPoint_m(0.01, u3p13_T),
	FPM_InitFixedPoint_m(0.01, u3p13_T),FPM_InitFixedPoint_m(0.01, u3p13_T),
	FPM_InitFixedPoint_m(0.01, u3p13_T),FPM_InitFixedPoint_m(0.01, u3p13_T),
	FPM_InitFixedPoint_m(0.01, u3p13_T)},{FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T)},
	{FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T)},{FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T)},
	{FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T)},{FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T)},
	{FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T)}}, {{FPM_InitFixedPoint_m(0.25, u3p13_T),
	FPM_InitFixedPoint_m(0.25, u3p13_T),FPM_InitFixedPoint_m(0.25, u3p13_T),
	FPM_InitFixedPoint_m(0.25, u3p13_T),FPM_InitFixedPoint_m(0.25, u3p13_T),
	FPM_InitFixedPoint_m(0.25, u3p13_T),FPM_InitFixedPoint_m(0.25, u3p13_T),
	FPM_InitFixedPoint_m(0.25, u3p13_T),FPM_InitFixedPoint_m(0.25, u3p13_T),
	FPM_InitFixedPoint_m(0.25, u3p13_T),FPM_InitFixedPoint_m(0.25, u3p13_T),
	FPM_InitFixedPoint_m(0.25, u3p13_T),FPM_InitFixedPoint_m(0.25, u3p13_T)},
	{FPM_InitFixedPoint_m(0.2, u3p13_T),FPM_InitFixedPoint_m(0.2, u3p13_T),
	FPM_InitFixedPoint_m(0.2, u3p13_T),FPM_InitFixedPoint_m(0.2, u3p13_T),
	FPM_InitFixedPoint_m(0.2, u3p13_T),FPM_InitFixedPoint_m(0.2, u3p13_T),
	FPM_InitFixedPoint_m(0.2, u3p13_T),FPM_InitFixedPoint_m(0.2, u3p13_T),
	FPM_InitFixedPoint_m(0.2, u3p13_T),FPM_InitFixedPoint_m(0.2, u3p13_T),
	FPM_InitFixedPoint_m(0.2, u3p13_T),FPM_InitFixedPoint_m(0.2, u3p13_T),
	FPM_InitFixedPoint_m(0.2, u3p13_T)},{FPM_InitFixedPoint_m(0.13, u3p13_T),
	FPM_InitFixedPoint_m(0.13, u3p13_T),FPM_InitFixedPoint_m(0.13, u3p13_T),
	FPM_InitFixedPoint_m(0.13, u3p13_T),FPM_InitFixedPoint_m(0.13, u3p13_T),
	FPM_InitFixedPoint_m(0.13, u3p13_T),FPM_InitFixedPoint_m(0.13, u3p13_T),
	FPM_InitFixedPoint_m(0.13, u3p13_T),FPM_InitFixedPoint_m(0.13, u3p13_T),
	FPM_InitFixedPoint_m(0.13, u3p13_T),FPM_InitFixedPoint_m(0.13, u3p13_T),
	FPM_InitFixedPoint_m(0.13, u3p13_T),FPM_InitFixedPoint_m(0.13, u3p13_T)},
	{FPM_InitFixedPoint_m(0.08, u3p13_T),FPM_InitFixedPoint_m(0.08, u3p13_T),
	FPM_InitFixedPoint_m(0.08, u3p13_T),FPM_InitFixedPoint_m(0.08, u3p13_T),
	FPM_InitFixedPoint_m(0.08, u3p13_T),FPM_InitFixedPoint_m(0.08, u3p13_T),
	FPM_InitFixedPoint_m(0.08, u3p13_T),FPM_InitFixedPoint_m(0.08, u3p13_T),
	FPM_InitFixedPoint_m(0.08, u3p13_T),FPM_InitFixedPoint_m(0.08, u3p13_T),
	FPM_InitFixedPoint_m(0.08, u3p13_T),FPM_InitFixedPoint_m(0.08, u3p13_T),
	FPM_InitFixedPoint_m(0.08, u3p13_T)},
	{FPM_InitFixedPoint_m(0.04, u3p13_T),FPM_InitFixedPoint_m(0.04, u3p13_T),
	FPM_InitFixedPoint_m(0.04, u3p13_T),FPM_InitFixedPoint_m(0.04, u3p13_T),
	FPM_InitFixedPoint_m(0.04, u3p13_T),FPM_InitFixedPoint_m(0.04, u3p13_T),
	FPM_InitFixedPoint_m(0.04, u3p13_T),FPM_InitFixedPoint_m(0.04, u3p13_T),
	FPM_InitFixedPoint_m(0.04, u3p13_T),FPM_InitFixedPoint_m(0.04, u3p13_T),
	FPM_InitFixedPoint_m(0.04, u3p13_T),FPM_InitFixedPoint_m(0.04, u3p13_T),
	FPM_InitFixedPoint_m(0.04, u3p13_T)},
	{FPM_InitFixedPoint_m(0.01, u3p13_T),FPM_InitFixedPoint_m(0.01, u3p13_T),
	FPM_InitFixedPoint_m(0.01, u3p13_T),FPM_InitFixedPoint_m(0.01, u3p13_T),
	FPM_InitFixedPoint_m(0.01, u3p13_T),FPM_InitFixedPoint_m(0.01, u3p13_T),
	FPM_InitFixedPoint_m(0.01, u3p13_T),FPM_InitFixedPoint_m(0.01, u3p13_T),
	FPM_InitFixedPoint_m(0.01, u3p13_T),FPM_InitFixedPoint_m(0.01, u3p13_T),
	FPM_InitFixedPoint_m(0.01, u3p13_T),FPM_InitFixedPoint_m(0.01, u3p13_T),
	FPM_InitFixedPoint_m(0.01, u3p13_T)},{FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T)},
	{FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T)},{FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T)},
	{FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T)},{FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T)},
	{FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T)}}, {{FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T)},{FPM_InitFixedPoint_m(0.25, u5p11_T),
	FPM_InitFixedPoint_m(0.25, u5p11_T),FPM_InitFixedPoint_m(0.25, u5p11_T),
	FPM_InitFixedPoint_m(0.25, u5p11_T),FPM_InitFixedPoint_m(0.25, u5p11_T),
	FPM_InitFixedPoint_m(0.25, u5p11_T),FPM_InitFixedPoint_m(0.25, u5p11_T),
	FPM_InitFixedPoint_m(0.25, u5p11_T),FPM_InitFixedPoint_m(0.25, u5p11_T),
	FPM_InitFixedPoint_m(0.25, u5p11_T),FPM_InitFixedPoint_m(0.25, u5p11_T),
	FPM_InitFixedPoint_m(0.25, u5p11_T),FPM_InitFixedPoint_m(0.25, u5p11_T)},
	{FPM_InitFixedPoint_m(0.5, u5p11_T),FPM_InitFixedPoint_m(0.5, u5p11_T),
	FPM_InitFixedPoint_m(0.5, u5p11_T),FPM_InitFixedPoint_m(0.5, u5p11_T),
	FPM_InitFixedPoint_m(0.5, u5p11_T),FPM_InitFixedPoint_m(0.5, u5p11_T),
	FPM_InitFixedPoint_m(0.5, u5p11_T),FPM_InitFixedPoint_m(0.5, u5p11_T),
	FPM_InitFixedPoint_m(0.5, u5p11_T),FPM_InitFixedPoint_m(0.5, u5p11_T),
	FPM_InitFixedPoint_m(0.5, u5p11_T),FPM_InitFixedPoint_m(0.5, u5p11_T),
	FPM_InitFixedPoint_m(0.5, u5p11_T)},{FPM_InitFixedPoint_m(0.75, u5p11_T),
	FPM_InitFixedPoint_m(0.75, u5p11_T),FPM_InitFixedPoint_m(0.75, u5p11_T),
	FPM_InitFixedPoint_m(0.75, u5p11_T),FPM_InitFixedPoint_m(0.75, u5p11_T),
	FPM_InitFixedPoint_m(0.75, u5p11_T),FPM_InitFixedPoint_m(0.75, u5p11_T),
	FPM_InitFixedPoint_m(0.75, u5p11_T),FPM_InitFixedPoint_m(0.75, u5p11_T),
	FPM_InitFixedPoint_m(0.75, u5p11_T),FPM_InitFixedPoint_m(0.75, u5p11_T),
	FPM_InitFixedPoint_m(0.75, u5p11_T),FPM_InitFixedPoint_m(0.75, u5p11_T)},
	{FPM_InitFixedPoint_m(1.0, u5p11_T),FPM_InitFixedPoint_m(1.0, u5p11_T),
	FPM_InitFixedPoint_m(1.0, u5p11_T),FPM_InitFixedPoint_m(1.0, u5p11_T),
	FPM_InitFixedPoint_m(1.0, u5p11_T),FPM_InitFixedPoint_m(1.0, u5p11_T),
	FPM_InitFixedPoint_m(1.0, u5p11_T),FPM_InitFixedPoint_m(1.0, u5p11_T),
	FPM_InitFixedPoint_m(1.0, u5p11_T),FPM_InitFixedPoint_m(1.0, u5p11_T),
	FPM_InitFixedPoint_m(1.0, u5p11_T),FPM_InitFixedPoint_m(1.0, u5p11_T),
	FPM_InitFixedPoint_m(1.0, u5p11_T)},{FPM_InitFixedPoint_m(1.25, u5p11_T),
	FPM_InitFixedPoint_m(1.25, u5p11_T),FPM_InitFixedPoint_m(1.25, u5p11_T),
	FPM_InitFixedPoint_m(1.25, u5p11_T),FPM_InitFixedPoint_m(1.25, u5p11_T),
	FPM_InitFixedPoint_m(1.25, u5p11_T),FPM_InitFixedPoint_m(1.25, u5p11_T),
	FPM_InitFixedPoint_m(1.25, u5p11_T),FPM_InitFixedPoint_m(1.25, u5p11_T),
	FPM_InitFixedPoint_m(1.25, u5p11_T),FPM_InitFixedPoint_m(1.25, u5p11_T),
	FPM_InitFixedPoint_m(1.25, u5p11_T),FPM_InitFixedPoint_m(1.25, u5p11_T)},
	{FPM_InitFixedPoint_m(1.5, u5p11_T),FPM_InitFixedPoint_m(1.5, u5p11_T),
	FPM_InitFixedPoint_m(1.5, u5p11_T),FPM_InitFixedPoint_m(1.5, u5p11_T),
	FPM_InitFixedPoint_m(1.5, u5p11_T),FPM_InitFixedPoint_m(1.5, u5p11_T),
	FPM_InitFixedPoint_m(1.5, u5p11_T),FPM_InitFixedPoint_m(1.5, u5p11_T),
	FPM_InitFixedPoint_m(1.5, u5p11_T),FPM_InitFixedPoint_m(1.5, u5p11_T),
	FPM_InitFixedPoint_m(1.5, u5p11_T),FPM_InitFixedPoint_m(1.5, u5p11_T),
	FPM_InitFixedPoint_m(1.5, u5p11_T)},{FPM_InitFixedPoint_m(2.0, u5p11_T),
	FPM_InitFixedPoint_m(2.0, u5p11_T),FPM_InitFixedPoint_m(2.0, u5p11_T),
	FPM_InitFixedPoint_m(2.0, u5p11_T),FPM_InitFixedPoint_m(2.0, u5p11_T),
	FPM_InitFixedPoint_m(2.0, u5p11_T),FPM_InitFixedPoint_m(2.0, u5p11_T),
	FPM_InitFixedPoint_m(2.0, u5p11_T),FPM_InitFixedPoint_m(2.0, u5p11_T),
	FPM_InitFixedPoint_m(2.0, u5p11_T),FPM_InitFixedPoint_m(2.0, u5p11_T),
	FPM_InitFixedPoint_m(2.0, u5p11_T),FPM_InitFixedPoint_m(2.0, u5p11_T)},
	{FPM_InitFixedPoint_m(4.0, u5p11_T),FPM_InitFixedPoint_m(4.0, u5p11_T),
	FPM_InitFixedPoint_m(4.0, u5p11_T),FPM_InitFixedPoint_m(4.0, u5p11_T),
	FPM_InitFixedPoint_m(4.0, u5p11_T),FPM_InitFixedPoint_m(4.0, u5p11_T),
	FPM_InitFixedPoint_m(4.0, u5p11_T),FPM_InitFixedPoint_m(4.0, u5p11_T),
	FPM_InitFixedPoint_m(4.0, u5p11_T),FPM_InitFixedPoint_m(4.0, u5p11_T),
	FPM_InitFixedPoint_m(4.0, u5p11_T),FPM_InitFixedPoint_m(4.0, u5p11_T),
	FPM_InitFixedPoint_m(4.0, u5p11_T)},{FPM_InitFixedPoint_m(6.0, u5p11_T),
	FPM_InitFixedPoint_m(6.0, u5p11_T),FPM_InitFixedPoint_m(6.0, u5p11_T),
	FPM_InitFixedPoint_m(6.0, u5p11_T),FPM_InitFixedPoint_m(6.0, u5p11_T),
	FPM_InitFixedPoint_m(6.0, u5p11_T),FPM_InitFixedPoint_m(6.0, u5p11_T),
	FPM_InitFixedPoint_m(6.0, u5p11_T),FPM_InitFixedPoint_m(6.0, u5p11_T),
	FPM_InitFixedPoint_m(6.0, u5p11_T),FPM_InitFixedPoint_m(6.0, u5p11_T),
	FPM_InitFixedPoint_m(6.0, u5p11_T),FPM_InitFixedPoint_m(6.0, u5p11_T)},
	{FPM_InitFixedPoint_m(7.5, u5p11_T),FPM_InitFixedPoint_m(7.5, u5p11_T),
	FPM_InitFixedPoint_m(7.5, u5p11_T),FPM_InitFixedPoint_m(7.5, u5p11_T),
	FPM_InitFixedPoint_m(7.5, u5p11_T),FPM_InitFixedPoint_m(7.5, u5p11_T),
	FPM_InitFixedPoint_m(7.5, u5p11_T),FPM_InitFixedPoint_m(7.5, u5p11_T),
	FPM_InitFixedPoint_m(7.5, u5p11_T),FPM_InitFixedPoint_m(7.5, u5p11_T),
	FPM_InitFixedPoint_m(7.5, u5p11_T),FPM_InitFixedPoint_m(7.5, u5p11_T),
	FPM_InitFixedPoint_m(7.5, u5p11_T)},{FPM_InitFixedPoint_m(8.0, u5p11_T),
	FPM_InitFixedPoint_m(8.0, u5p11_T),FPM_InitFixedPoint_m(8.0, u5p11_T),
	FPM_InitFixedPoint_m(8.0, u5p11_T),FPM_InitFixedPoint_m(8.0, u5p11_T),
	FPM_InitFixedPoint_m(8.0, u5p11_T),FPM_InitFixedPoint_m(8.0, u5p11_T),
	FPM_InitFixedPoint_m(8.0, u5p11_T),FPM_InitFixedPoint_m(8.0, u5p11_T),
	FPM_InitFixedPoint_m(8.0, u5p11_T),FPM_InitFixedPoint_m(8.0, u5p11_T),
	FPM_InitFixedPoint_m(8.0, u5p11_T),FPM_InitFixedPoint_m(8.0, u5p11_T)}}, {{FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T)},{FPM_InitFixedPoint_m(0.25, u5p11_T),
	FPM_InitFixedPoint_m(0.25, u5p11_T),FPM_InitFixedPoint_m(0.25, u5p11_T),
	FPM_InitFixedPoint_m(0.25, u5p11_T),FPM_InitFixedPoint_m(0.25, u5p11_T),
	FPM_InitFixedPoint_m(0.25, u5p11_T),FPM_InitFixedPoint_m(0.25, u5p11_T),
	FPM_InitFixedPoint_m(0.25, u5p11_T),FPM_InitFixedPoint_m(0.25, u5p11_T),
	FPM_InitFixedPoint_m(0.25, u5p11_T),FPM_InitFixedPoint_m(0.25, u5p11_T),
	FPM_InitFixedPoint_m(0.25, u5p11_T),FPM_InitFixedPoint_m(0.25, u5p11_T)},
	{FPM_InitFixedPoint_m(0.5, u5p11_T),FPM_InitFixedPoint_m(0.5, u5p11_T),
	FPM_InitFixedPoint_m(0.5, u5p11_T),FPM_InitFixedPoint_m(0.5, u5p11_T),
	FPM_InitFixedPoint_m(0.5, u5p11_T),FPM_InitFixedPoint_m(0.5, u5p11_T),
	FPM_InitFixedPoint_m(0.5, u5p11_T),FPM_InitFixedPoint_m(0.5, u5p11_T),
	FPM_InitFixedPoint_m(0.5, u5p11_T),FPM_InitFixedPoint_m(0.5, u5p11_T),
	FPM_InitFixedPoint_m(0.5, u5p11_T),FPM_InitFixedPoint_m(0.5, u5p11_T),
	FPM_InitFixedPoint_m(0.5, u5p11_T)},{FPM_InitFixedPoint_m(0.75, u5p11_T),
	FPM_InitFixedPoint_m(0.75, u5p11_T),FPM_InitFixedPoint_m(0.75, u5p11_T),
	FPM_InitFixedPoint_m(0.75, u5p11_T),FPM_InitFixedPoint_m(0.75, u5p11_T),
	FPM_InitFixedPoint_m(0.75, u5p11_T),FPM_InitFixedPoint_m(0.75, u5p11_T),
	FPM_InitFixedPoint_m(0.75, u5p11_T),FPM_InitFixedPoint_m(0.75, u5p11_T),
	FPM_InitFixedPoint_m(0.75, u5p11_T),FPM_InitFixedPoint_m(0.75, u5p11_T),
	FPM_InitFixedPoint_m(0.75, u5p11_T),FPM_InitFixedPoint_m(0.75, u5p11_T)},
	{FPM_InitFixedPoint_m(1.0, u5p11_T),FPM_InitFixedPoint_m(1.0, u5p11_T),
	FPM_InitFixedPoint_m(1.0, u5p11_T),FPM_InitFixedPoint_m(1.0, u5p11_T),
	FPM_InitFixedPoint_m(1.0, u5p11_T),FPM_InitFixedPoint_m(1.0, u5p11_T),
	FPM_InitFixedPoint_m(1.0, u5p11_T),FPM_InitFixedPoint_m(1.0, u5p11_T),
	FPM_InitFixedPoint_m(1.0, u5p11_T),FPM_InitFixedPoint_m(1.0, u5p11_T),
	FPM_InitFixedPoint_m(1.0, u5p11_T),FPM_InitFixedPoint_m(1.0, u5p11_T),
	FPM_InitFixedPoint_m(1.0, u5p11_T)},{FPM_InitFixedPoint_m(1.25, u5p11_T),
	FPM_InitFixedPoint_m(1.25, u5p11_T),FPM_InitFixedPoint_m(1.25, u5p11_T),
	FPM_InitFixedPoint_m(1.25, u5p11_T),FPM_InitFixedPoint_m(1.25, u5p11_T),
	FPM_InitFixedPoint_m(1.25, u5p11_T),FPM_InitFixedPoint_m(1.25, u5p11_T),
	FPM_InitFixedPoint_m(1.25, u5p11_T),FPM_InitFixedPoint_m(1.25, u5p11_T),
	FPM_InitFixedPoint_m(1.25, u5p11_T),FPM_InitFixedPoint_m(1.25, u5p11_T),
	FPM_InitFixedPoint_m(1.25, u5p11_T),FPM_InitFixedPoint_m(1.25, u5p11_T)},
	{FPM_InitFixedPoint_m(1.5, u5p11_T),FPM_InitFixedPoint_m(1.5, u5p11_T),
	FPM_InitFixedPoint_m(1.5, u5p11_T),FPM_InitFixedPoint_m(1.5, u5p11_T),
	FPM_InitFixedPoint_m(1.5, u5p11_T),FPM_InitFixedPoint_m(1.5, u5p11_T),
	FPM_InitFixedPoint_m(1.5, u5p11_T),FPM_InitFixedPoint_m(1.5, u5p11_T),
	FPM_InitFixedPoint_m(1.5, u5p11_T),FPM_InitFixedPoint_m(1.5, u5p11_T),
	FPM_InitFixedPoint_m(1.5, u5p11_T),FPM_InitFixedPoint_m(1.5, u5p11_T),
	FPM_InitFixedPoint_m(1.5, u5p11_T)},{FPM_InitFixedPoint_m(2.0, u5p11_T),
	FPM_InitFixedPoint_m(2.0, u5p11_T),FPM_InitFixedPoint_m(2.0, u5p11_T),
	FPM_InitFixedPoint_m(2.0, u5p11_T),FPM_InitFixedPoint_m(2.0, u5p11_T),
	FPM_InitFixedPoint_m(2.0, u5p11_T),FPM_InitFixedPoint_m(2.0, u5p11_T),
	FPM_InitFixedPoint_m(2.0, u5p11_T),FPM_InitFixedPoint_m(2.0, u5p11_T),
	FPM_InitFixedPoint_m(2.0, u5p11_T),FPM_InitFixedPoint_m(2.0, u5p11_T),
	FPM_InitFixedPoint_m(2.0, u5p11_T),FPM_InitFixedPoint_m(2.0, u5p11_T)},
	{FPM_InitFixedPoint_m(4.0, u5p11_T),FPM_InitFixedPoint_m(4.0, u5p11_T),
	FPM_InitFixedPoint_m(4.0, u5p11_T),FPM_InitFixedPoint_m(4.0, u5p11_T),
	FPM_InitFixedPoint_m(4.0, u5p11_T),FPM_InitFixedPoint_m(4.0, u5p11_T),
	FPM_InitFixedPoint_m(4.0, u5p11_T),FPM_InitFixedPoint_m(4.0, u5p11_T),
	FPM_InitFixedPoint_m(4.0, u5p11_T),FPM_InitFixedPoint_m(4.0, u5p11_T),
	FPM_InitFixedPoint_m(4.0, u5p11_T),FPM_InitFixedPoint_m(4.0, u5p11_T),
	FPM_InitFixedPoint_m(4.0, u5p11_T)},{FPM_InitFixedPoint_m(6.0, u5p11_T),
	FPM_InitFixedPoint_m(6.0, u5p11_T),FPM_InitFixedPoint_m(6.0, u5p11_T),
	FPM_InitFixedPoint_m(6.0, u5p11_T),FPM_InitFixedPoint_m(6.0, u5p11_T),
	FPM_InitFixedPoint_m(6.0, u5p11_T),FPM_InitFixedPoint_m(6.0, u5p11_T),
	FPM_InitFixedPoint_m(6.0, u5p11_T),FPM_InitFixedPoint_m(6.0, u5p11_T),
	FPM_InitFixedPoint_m(6.0, u5p11_T),FPM_InitFixedPoint_m(6.0, u5p11_T),
	FPM_InitFixedPoint_m(6.0, u5p11_T),FPM_InitFixedPoint_m(6.0, u5p11_T)},
	{FPM_InitFixedPoint_m(7.5, u5p11_T),FPM_InitFixedPoint_m(7.5, u5p11_T),
	FPM_InitFixedPoint_m(7.5, u5p11_T),FPM_InitFixedPoint_m(7.5, u5p11_T),
	FPM_InitFixedPoint_m(7.5, u5p11_T),FPM_InitFixedPoint_m(7.5, u5p11_T),
	FPM_InitFixedPoint_m(7.5, u5p11_T),FPM_InitFixedPoint_m(7.5, u5p11_T),
	FPM_InitFixedPoint_m(7.5, u5p11_T),FPM_InitFixedPoint_m(7.5, u5p11_T),
	FPM_InitFixedPoint_m(7.5, u5p11_T),FPM_InitFixedPoint_m(7.5, u5p11_T),
	FPM_InitFixedPoint_m(7.5, u5p11_T)},{FPM_InitFixedPoint_m(8.0, u5p11_T),
	FPM_InitFixedPoint_m(8.0, u5p11_T),FPM_InitFixedPoint_m(8.0, u5p11_T),
	FPM_InitFixedPoint_m(8.0, u5p11_T),FPM_InitFixedPoint_m(8.0, u5p11_T),
	FPM_InitFixedPoint_m(8.0, u5p11_T),FPM_InitFixedPoint_m(8.0, u5p11_T),
	FPM_InitFixedPoint_m(8.0, u5p11_T),FPM_InitFixedPoint_m(8.0, u5p11_T),
	FPM_InitFixedPoint_m(8.0, u5p11_T),FPM_InitFixedPoint_m(8.0, u5p11_T),
	FPM_InitFixedPoint_m(8.0, u5p11_T),FPM_InitFixedPoint_m(8.0, u5p11_T)}}, {{FPM_InitFixedPoint_m(0.0, u4p12_T),
	 FPM_InitFixedPoint_m(0.25, u4p12_T), FPM_InitFixedPoint_m(0.5, u4p12_T),
	 FPM_InitFixedPoint_m(0.75, u4p12_T),
	 FPM_InitFixedPoint_m(1.1, u4p12_T)},
	 {FPM_InitFixedPoint_m(0.0, u4p12_T),
	 FPM_InitFixedPoint_m(0.25, u4p12_T), FPM_InitFixedPoint_m(0.5, u4p12_T),
	 FPM_InitFixedPoint_m(0.75, u4p12_T),
	 FPM_InitFixedPoint_m(1.1, u4p12_T)},
	 {FPM_InitFixedPoint_m(0.0, u4p12_T),
	 FPM_InitFixedPoint_m(0.25, u4p12_T), FPM_InitFixedPoint_m(0.5, u4p12_T),
	 FPM_InitFixedPoint_m(0.75, u4p12_T),
	 FPM_InitFixedPoint_m(1.1, u4p12_T)},
	 {FPM_InitFixedPoint_m(0.0, u4p12_T),
	 FPM_InitFixedPoint_m(0.25, u4p12_T), FPM_InitFixedPoint_m(0.5, u4p12_T),
	 FPM_InitFixedPoint_m(0.75, u4p12_T),
	 FPM_InitFixedPoint_m(1.1, u4p12_T)},
	 {FPM_InitFixedPoint_m(0.0, u4p12_T),
	 FPM_InitFixedPoint_m(0.25, u4p12_T), FPM_InitFixedPoint_m(0.5, u4p12_T),
	 FPM_InitFixedPoint_m(0.75, u4p12_T),
	 FPM_InitFixedPoint_m(1.1, u4p12_T)},
	 {FPM_InitFixedPoint_m(0.0, u4p12_T),
	 FPM_InitFixedPoint_m(0.25, u4p12_T), FPM_InitFixedPoint_m(0.5, u4p12_T),
	 FPM_InitFixedPoint_m(0.75, u4p12_T),
	 FPM_InitFixedPoint_m(1.1, u4p12_T)},
	 {FPM_InitFixedPoint_m(0.0, u4p12_T),
	 FPM_InitFixedPoint_m(0.25, u4p12_T), FPM_InitFixedPoint_m(0.5, u4p12_T),
	 FPM_InitFixedPoint_m(0.75, u4p12_T),
	 FPM_InitFixedPoint_m(1.1, u4p12_T)},
	 {FPM_InitFixedPoint_m(0.0, u4p12_T),
	 FPM_InitFixedPoint_m(0.25, u4p12_T), FPM_InitFixedPoint_m(0.5, u4p12_T),
	 FPM_InitFixedPoint_m(0.75, u4p12_T),
	 FPM_InitFixedPoint_m(1.1, u4p12_T)},
	 {FPM_InitFixedPoint_m(0.0, u4p12_T),
	 FPM_InitFixedPoint_m(0.25, u4p12_T), FPM_InitFixedPoint_m(0.5, u4p12_T),
	 FPM_InitFixedPoint_m(0.75, u4p12_T),
	 FPM_InitFixedPoint_m(1.1, u4p12_T)},
	 {FPM_InitFixedPoint_m(0.0, u4p12_T),
	 FPM_InitFixedPoint_m(0.25, u4p12_T), FPM_InitFixedPoint_m(0.5, u4p12_T),
	 FPM_InitFixedPoint_m(0.75, u4p12_T),
	 FPM_InitFixedPoint_m(1.1, u4p12_T)},
	 {FPM_InitFixedPoint_m(0.0, u4p12_T),
	 FPM_InitFixedPoint_m(0.25, u4p12_T), FPM_InitFixedPoint_m(0.5, u4p12_T),
	 FPM_InitFixedPoint_m(0.75, u4p12_T),
	 FPM_InitFixedPoint_m(1.1, u4p12_T)},
	 {FPM_InitFixedPoint_m(0.0, u4p12_T),
	 FPM_InitFixedPoint_m(0.25, u4p12_T), FPM_InitFixedPoint_m(0.5, u4p12_T),
	 FPM_InitFixedPoint_m(0.75, u4p12_T),
	 FPM_InitFixedPoint_m(1.1, u4p12_T)}}, {{FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T)},
	 {FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T)},
	 {FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T)},
	 {FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T)},
	 {FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T)},
	 {FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T)},
	 {FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T)},
	 {FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T)},
	 {FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T)},
	 {FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T)},
	 {FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T)},
	 {FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T)}}, { FPM_InitFixedPoint_m(0.0, u4p12_T),
	 FPM_InitFixedPoint_m(0.0, u4p12_T), FPM_InitFixedPoint_m(0.0, u4p12_T),
	 FPM_InitFixedPoint_m(0.0, u4p12_T), FPM_InitFixedPoint_m(0.0, u4p12_T),
	 FPM_InitFixedPoint_m(0.0, u4p12_T), FPM_InitFixedPoint_m(0.0, u4p12_T),
	 FPM_InitFixedPoint_m(0.0, u4p12_T), FPM_InitFixedPoint_m(0.0, u4p12_T),
	 FPM_InitFixedPoint_m(0.0, u4p12_T), FPM_InitFixedPoint_m(0.0, u4p12_T),
	 FPM_InitFixedPoint_m(0.0, u4p12_T) }, { FPM_InitFixedPoint_m(0.0, u9p7_T), FPM_InitFixedPoint_m(0.0, u9p7_T),
	 FPM_InitFixedPoint_m(0.0, u9p7_T), FPM_InitFixedPoint_m(0.0, u9p7_T),
	 FPM_InitFixedPoint_m(0.0, u9p7_T), FPM_InitFixedPoint_m(0.0, u9p7_T),
	 FPM_InitFixedPoint_m(0.0, u9p7_T), FPM_InitFixedPoint_m(0.0, u9p7_T),
	 FPM_InitFixedPoint_m(0.0, u9p7_T), FPM_InitFixedPoint_m(0.0, u9p7_T),
	 FPM_InitFixedPoint_m(0.0, u9p7_T), FPM_InitFixedPoint_m(0.0, u9p7_T) }, { FPM_InitFixedPoint_m(0.0, u8p8_T), FPM_InitFixedPoint_m(0.2, u8p8_T),
	 FPM_InitFixedPoint_m(0.4, u8p8_T), FPM_InitFixedPoint_m(0.6, u8p8_T),
	 FPM_InitFixedPoint_m(0.8, u8p8_T), FPM_InitFixedPoint_m(1.0, u8p8_T) }, { FPM_InitFixedPoint_m(0.0, u2p14_T),
	 FPM_InitFixedPoint_m(0.0, u2p14_T), FPM_InitFixedPoint_m(0.0, u2p14_T),
	 FPM_InitFixedPoint_m(0.0, u2p14_T), FPM_InitFixedPoint_m(0.0, u2p14_T),
	 FPM_InitFixedPoint_m(0.0, u2p14_T) }, {{FPM_InitFixedPoint_m(0.0, u9p7_T),FPM_InitFixedPoint_m(0.0, u9p7_T),
	FPM_InitFixedPoint_m(0.0, u9p7_T),FPM_InitFixedPoint_m(0.0, u9p7_T),
	FPM_InitFixedPoint_m(0.0, u9p7_T),FPM_InitFixedPoint_m(0.0, u9p7_T),
	FPM_InitFixedPoint_m(0.0, u9p7_T),FPM_InitFixedPoint_m(0.0, u9p7_T),
	FPM_InitFixedPoint_m(0.0, u9p7_T),FPM_InitFixedPoint_m(0.0, u9p7_T),
	FPM_InitFixedPoint_m(0.0, u9p7_T),FPM_InitFixedPoint_m(0.0, u9p7_T)},
	{FPM_InitFixedPoint_m(0.0, u9p7_T),FPM_InitFixedPoint_m(0.0, u9p7_T),
	FPM_InitFixedPoint_m(0.0, u9p7_T),FPM_InitFixedPoint_m(0.0, u9p7_T),
	FPM_InitFixedPoint_m(0.0, u9p7_T),FPM_InitFixedPoint_m(0.0, u9p7_T),
	FPM_InitFixedPoint_m(0.0, u9p7_T),FPM_InitFixedPoint_m(0.0, u9p7_T),
	FPM_InitFixedPoint_m(0.0, u9p7_T),FPM_InitFixedPoint_m(0.0, u9p7_T),
	FPM_InitFixedPoint_m(0.0, u9p7_T),FPM_InitFixedPoint_m(0.0, u9p7_T)}}, { FPM_InitFixedPoint_m(15.0, u9p7_T),
	 FPM_InitFixedPoint_m(15.0, u9p7_T), FPM_InitFixedPoint_m(15.0, u9p7_T),
	 FPM_InitFixedPoint_m(15.0, u9p7_T), FPM_InitFixedPoint_m(15.0, u9p7_T),
	 FPM_InitFixedPoint_m(15.0, u9p7_T), FPM_InitFixedPoint_m(15.0, u9p7_T),
	 FPM_InitFixedPoint_m(15.0, u9p7_T), FPM_InitFixedPoint_m(15.0, u9p7_T),
	 FPM_InitFixedPoint_m(15.0, u9p7_T), FPM_InitFixedPoint_m(15.0, u9p7_T),
	 FPM_InitFixedPoint_m(15.0, u9p7_T) }, { FPM_InitFixedPoint_m(0.0, u9p7_T), FPM_InitFixedPoint_m(1.0, u9p7_T),
	 FPM_InitFixedPoint_m(2.0, u9p7_T), FPM_InitFixedPoint_m(3.0, u9p7_T),
	 FPM_InitFixedPoint_m(4.0, u9p7_T) }, { FPM_InitFixedPoint_m(1.0, u2p14_T),
	 FPM_InitFixedPoint_m(1.0, u2p14_T), FPM_InitFixedPoint_m(1.0, u2p14_T),
	 FPM_InitFixedPoint_m(1.0, u2p14_T), FPM_InitFixedPoint_m(1.0, u2p14_T) }, { FPM_InitFixedPoint_m(0.0, u8p8_T), FPM_InitFixedPoint_m(0.1, u8p8_T),
	 FPM_InitFixedPoint_m(0.2, u8p8_T), FPM_InitFixedPoint_m(0.4, u8p8_T),
	 FPM_InitFixedPoint_m(0.6, u8p8_T), FPM_InitFixedPoint_m(0.8, u8p8_T),
	 FPM_InitFixedPoint_m(0.9, u8p8_T), FPM_InitFixedPoint_m(1.0, u8p8_T) }, { FPM_InitFixedPoint_m(0.0, u9p7_T),FPM_InitFixedPoint_m(0.0, u9p7_T),
	FPM_InitFixedPoint_m(0.0, u9p7_T),FPM_InitFixedPoint_m(0.0, u9p7_T),
	FPM_InitFixedPoint_m(0.0, u9p7_T),FPM_InitFixedPoint_m(0.0, u9p7_T),
	FPM_InitFixedPoint_m(0.0, u9p7_T),FPM_InitFixedPoint_m(0.0, u9p7_T) }, { FPM_InitFixedPoint_m(0.0, u9p7_T),FPM_InitFixedPoint_m(3.0, u9p7_T),
	FPM_InitFixedPoint_m(7.0, u9p7_T),FPM_InitFixedPoint_m(12.0, u9p7_T),
	FPM_InitFixedPoint_m(20.0, u9p7_T),FPM_InitFixedPoint_m(30.0, u9p7_T),
	FPM_InitFixedPoint_m(45.0, u9p7_T),FPM_InitFixedPoint_m(60.0, u9p7_T),
	FPM_InitFixedPoint_m(80.0, u9p7_T) }, {{FPM_InitFixedPoint_m(0.0, u12p4_T),FPM_InitFixedPoint_m(0.5, u12p4_T),
	FPM_InitFixedPoint_m(1.0, u12p4_T),FPM_InitFixedPoint_m(5.0, u12p4_T),
	FPM_InitFixedPoint_m(10.0, u12p4_T),FPM_InitFixedPoint_m(20.0, u12p4_T),
	FPM_InitFixedPoint_m(30.0, u12p4_T),FPM_InitFixedPoint_m(45.0, u12p4_T),
	FPM_InitFixedPoint_m(60.0, u12p4_T),FPM_InitFixedPoint_m(90.0, u12p4_T),
	FPM_InitFixedPoint_m(120.0, u12p4_T),
	FPM_InitFixedPoint_m(180.0, u12p4_T),
	FPM_InitFixedPoint_m(270.0, u12p4_T),
	FPM_InitFixedPoint_m(360.0, u12p4_T),
	FPM_InitFixedPoint_m(450.0, u12p4_T),
	FPM_InitFixedPoint_m(540.0, u12p4_T)},
	{FPM_InitFixedPoint_m(0.0, u12p4_T),FPM_InitFixedPoint_m(0.5, u12p4_T),
	FPM_InitFixedPoint_m(1.0, u12p4_T),FPM_InitFixedPoint_m(5.0, u12p4_T),
	FPM_InitFixedPoint_m(10.0, u12p4_T),FPM_InitFixedPoint_m(20.0, u12p4_T),
	FPM_InitFixedPoint_m(30.0, u12p4_T),FPM_InitFixedPoint_m(45.0, u12p4_T),
	FPM_InitFixedPoint_m(60.0, u12p4_T),FPM_InitFixedPoint_m(90.0, u12p4_T),
	FPM_InitFixedPoint_m(120.0, u12p4_T),
	FPM_InitFixedPoint_m(180.0, u12p4_T),
	FPM_InitFixedPoint_m(270.0, u12p4_T),
	FPM_InitFixedPoint_m(360.0, u12p4_T),
	FPM_InitFixedPoint_m(450.0, u12p4_T),
	FPM_InitFixedPoint_m(540.0, u12p4_T)},
	{FPM_InitFixedPoint_m(0.0, u12p4_T),FPM_InitFixedPoint_m(0.5, u12p4_T),
	FPM_InitFixedPoint_m(1.0, u12p4_T),FPM_InitFixedPoint_m(5.0, u12p4_T),
	FPM_InitFixedPoint_m(10.0, u12p4_T),FPM_InitFixedPoint_m(20.0, u12p4_T),
	FPM_InitFixedPoint_m(30.0, u12p4_T),FPM_InitFixedPoint_m(45.0, u12p4_T),
	FPM_InitFixedPoint_m(60.0, u12p4_T),FPM_InitFixedPoint_m(90.0, u12p4_T),
	FPM_InitFixedPoint_m(120.0, u12p4_T),
	FPM_InitFixedPoint_m(180.0, u12p4_T),
	FPM_InitFixedPoint_m(270.0, u12p4_T),
	FPM_InitFixedPoint_m(360.0, u12p4_T),
	FPM_InitFixedPoint_m(450.0, u12p4_T),
	FPM_InitFixedPoint_m(540.0, u12p4_T)},
	{FPM_InitFixedPoint_m(0.0, u12p4_T),FPM_InitFixedPoint_m(0.5, u12p4_T),
	FPM_InitFixedPoint_m(1.0, u12p4_T),FPM_InitFixedPoint_m(5.0, u12p4_T),
	FPM_InitFixedPoint_m(10.0, u12p4_T),FPM_InitFixedPoint_m(20.0, u12p4_T),
	FPM_InitFixedPoint_m(30.0, u12p4_T),FPM_InitFixedPoint_m(45.0, u12p4_T),
	FPM_InitFixedPoint_m(60.0, u12p4_T),FPM_InitFixedPoint_m(90.0, u12p4_T),
	FPM_InitFixedPoint_m(120.0, u12p4_T),
	FPM_InitFixedPoint_m(180.0, u12p4_T),
	FPM_InitFixedPoint_m(270.0, u12p4_T),
	FPM_InitFixedPoint_m(360.0, u12p4_T),
	FPM_InitFixedPoint_m(450.0, u12p4_T),
	FPM_InitFixedPoint_m(540.0, u12p4_T)},
	{FPM_InitFixedPoint_m(0.0, u12p4_T),FPM_InitFixedPoint_m(0.5, u12p4_T),
	FPM_InitFixedPoint_m(1.0, u12p4_T),FPM_InitFixedPoint_m(5.0, u12p4_T),
	FPM_InitFixedPoint_m(10.0, u12p4_T),FPM_InitFixedPoint_m(20.0, u12p4_T),
	FPM_InitFixedPoint_m(30.0, u12p4_T),FPM_InitFixedPoint_m(45.0, u12p4_T),
	FPM_InitFixedPoint_m(60.0, u12p4_T),FPM_InitFixedPoint_m(90.0, u12p4_T),
	FPM_InitFixedPoint_m(120.0, u12p4_T),
	FPM_InitFixedPoint_m(180.0, u12p4_T),
	FPM_InitFixedPoint_m(270.0, u12p4_T),
	FPM_InitFixedPoint_m(360.0, u12p4_T),
	FPM_InitFixedPoint_m(450.0, u12p4_T),
	FPM_InitFixedPoint_m(540.0, u12p4_T)},
	{FPM_InitFixedPoint_m(0.0, u12p4_T),FPM_InitFixedPoint_m(0.5, u12p4_T),
	FPM_InitFixedPoint_m(1.0, u12p4_T),FPM_InitFixedPoint_m(5.0, u12p4_T),
	FPM_InitFixedPoint_m(10.0, u12p4_T),FPM_InitFixedPoint_m(20.0, u12p4_T),
	FPM_InitFixedPoint_m(30.0, u12p4_T),FPM_InitFixedPoint_m(45.0, u12p4_T),
	FPM_InitFixedPoint_m(60.0, u12p4_T),FPM_InitFixedPoint_m(90.0, u12p4_T),
	FPM_InitFixedPoint_m(120.0, u12p4_T),
	FPM_InitFixedPoint_m(180.0, u12p4_T),
	FPM_InitFixedPoint_m(270.0, u12p4_T),
	FPM_InitFixedPoint_m(360.0, u12p4_T),
	FPM_InitFixedPoint_m(450.0, u12p4_T),
	FPM_InitFixedPoint_m(540.0, u12p4_T)},
	{FPM_InitFixedPoint_m(0.0, u12p4_T),FPM_InitFixedPoint_m(0.5, u12p4_T),
	FPM_InitFixedPoint_m(1.0, u12p4_T),FPM_InitFixedPoint_m(5.0, u12p4_T),
	FPM_InitFixedPoint_m(10.0, u12p4_T),FPM_InitFixedPoint_m(20.0, u12p4_T),
	FPM_InitFixedPoint_m(30.0, u12p4_T),FPM_InitFixedPoint_m(45.0, u12p4_T),
	FPM_InitFixedPoint_m(60.0, u12p4_T),FPM_InitFixedPoint_m(90.0, u12p4_T),
	FPM_InitFixedPoint_m(120.0, u12p4_T),
	FPM_InitFixedPoint_m(180.0, u12p4_T),
	FPM_InitFixedPoint_m(270.0, u12p4_T),
	FPM_InitFixedPoint_m(360.0, u12p4_T),
	FPM_InitFixedPoint_m(450.0, u12p4_T),
	FPM_InitFixedPoint_m(540.0, u12p4_T)},
	{FPM_InitFixedPoint_m(0.0, u12p4_T),FPM_InitFixedPoint_m(0.5, u12p4_T),
	FPM_InitFixedPoint_m(1.0, u12p4_T),FPM_InitFixedPoint_m(5.0, u12p4_T),
	FPM_InitFixedPoint_m(10.0, u12p4_T),FPM_InitFixedPoint_m(20.0, u12p4_T),
	FPM_InitFixedPoint_m(30.0, u12p4_T),FPM_InitFixedPoint_m(45.0, u12p4_T),
	FPM_InitFixedPoint_m(60.0, u12p4_T),FPM_InitFixedPoint_m(90.0, u12p4_T),
	FPM_InitFixedPoint_m(120.0, u12p4_T),
	FPM_InitFixedPoint_m(180.0, u12p4_T),
	FPM_InitFixedPoint_m(270.0, u12p4_T),
	FPM_InitFixedPoint_m(360.0, u12p4_T),
	FPM_InitFixedPoint_m(450.0, u12p4_T),
	FPM_InitFixedPoint_m(540.0, u12p4_T)},
	{FPM_InitFixedPoint_m(0.0, u12p4_T),FPM_InitFixedPoint_m(0.5, u12p4_T),
	FPM_InitFixedPoint_m(1.0, u12p4_T),FPM_InitFixedPoint_m(5.0, u12p4_T),
	FPM_InitFixedPoint_m(10.0, u12p4_T),FPM_InitFixedPoint_m(20.0, u12p4_T),
	FPM_InitFixedPoint_m(30.0, u12p4_T),FPM_InitFixedPoint_m(45.0, u12p4_T),
	FPM_InitFixedPoint_m(60.0, u12p4_T),FPM_InitFixedPoint_m(90.0, u12p4_T),
	FPM_InitFixedPoint_m(120.0, u12p4_T),
	FPM_InitFixedPoint_m(180.0, u12p4_T),
	FPM_InitFixedPoint_m(270.0, u12p4_T),
	FPM_InitFixedPoint_m(360.0, u12p4_T),
	FPM_InitFixedPoint_m(450.0, u12p4_T),
	FPM_InitFixedPoint_m(540.0, u12p4_T)}}, {{FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T)},
	 {FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T)},
	{FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T)},
	{FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T)},
	{FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T)},
	{FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T)},
	{FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T)},
	{FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T)},
	{FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T)}}, {{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.5, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(2.0, u8p8_T),
	FPM_InitFixedPoint_m(3.0, u8p8_T),FPM_InitFixedPoint_m(4.0, u8p8_T),
	FPM_InitFixedPoint_m(5.0, u8p8_T),FPM_InitFixedPoint_m(10.0, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.5, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(2.0, u8p8_T),
	FPM_InitFixedPoint_m(3.0, u8p8_T),FPM_InitFixedPoint_m(4.0, u8p8_T),
	FPM_InitFixedPoint_m(5.0, u8p8_T),FPM_InitFixedPoint_m(10.0, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.5, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(2.0, u8p8_T),
	FPM_InitFixedPoint_m(3.0, u8p8_T),FPM_InitFixedPoint_m(4.0, u8p8_T),
	FPM_InitFixedPoint_m(5.0, u8p8_T),FPM_InitFixedPoint_m(10.0, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.5, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(2.0, u8p8_T),
	FPM_InitFixedPoint_m(3.0, u8p8_T),FPM_InitFixedPoint_m(4.0, u8p8_T),
	FPM_InitFixedPoint_m(5.0, u8p8_T),FPM_InitFixedPoint_m(10.0, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.5, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(2.0, u8p8_T),
	FPM_InitFixedPoint_m(3.0, u8p8_T),FPM_InitFixedPoint_m(4.0, u8p8_T),
	FPM_InitFixedPoint_m(5.0, u8p8_T),FPM_InitFixedPoint_m(10.0, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.5, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(2.0, u8p8_T),
	FPM_InitFixedPoint_m(3.0, u8p8_T),FPM_InitFixedPoint_m(4.0, u8p8_T),
	FPM_InitFixedPoint_m(5.0, u8p8_T),FPM_InitFixedPoint_m(10.0, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.5, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(2.0, u8p8_T),
	FPM_InitFixedPoint_m(3.0, u8p8_T),FPM_InitFixedPoint_m(4.0, u8p8_T),
	FPM_InitFixedPoint_m(5.0, u8p8_T),FPM_InitFixedPoint_m(10.0, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.5, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(2.0, u8p8_T),
	FPM_InitFixedPoint_m(3.0, u8p8_T),FPM_InitFixedPoint_m(4.0, u8p8_T),
	FPM_InitFixedPoint_m(5.0, u8p8_T),FPM_InitFixedPoint_m(10.0, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.5, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(2.0, u8p8_T),
	FPM_InitFixedPoint_m(3.0, u8p8_T),FPM_InitFixedPoint_m(4.0, u8p8_T),
	FPM_InitFixedPoint_m(5.0, u8p8_T),FPM_InitFixedPoint_m(10.0, u8p8_T)}}, {{FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T)},
	{FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T)},
	{FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T)},
	{FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T)},
	{FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T)},
	{FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T)},
	{FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T)},
	{FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T)},
	{FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T)}}, {{FPM_InitFixedPoint_m(0.0, u7p9_T),FPM_InitFixedPoint_m(40.0, u7p9_T),
	FPM_InitFixedPoint_m(60.0, u7p9_T),FPM_InitFixedPoint_m(80.0, u7p9_T)},
	{FPM_InitFixedPoint_m(0.0, u7p9_T),FPM_InitFixedPoint_m(40.0, u7p9_T),
	FPM_InitFixedPoint_m(60.0, u7p9_T),FPM_InitFixedPoint_m(80.0, u7p9_T)},
	{FPM_InitFixedPoint_m(0.0, u7p9_T),FPM_InitFixedPoint_m(40.0, u7p9_T),
	FPM_InitFixedPoint_m(60.0, u7p9_T),FPM_InitFixedPoint_m(80.0, u7p9_T)},
	{FPM_InitFixedPoint_m(0.0, u7p9_T),FPM_InitFixedPoint_m(40.0, u7p9_T),
	FPM_InitFixedPoint_m(60.0, u7p9_T),FPM_InitFixedPoint_m(80.0, u7p9_T)},
	{FPM_InitFixedPoint_m(0.0, u7p9_T),FPM_InitFixedPoint_m(40.0, u7p9_T),
	FPM_InitFixedPoint_m(60.0, u7p9_T),FPM_InitFixedPoint_m(80.0, u7p9_T)},
	{FPM_InitFixedPoint_m(0.0, u7p9_T),FPM_InitFixedPoint_m(40.0, u7p9_T),
	FPM_InitFixedPoint_m(60.0, u7p9_T),FPM_InitFixedPoint_m(80.0, u7p9_T)},
	{FPM_InitFixedPoint_m(0.0, u7p9_T),FPM_InitFixedPoint_m(40.0, u7p9_T),
	FPM_InitFixedPoint_m(60.0, u7p9_T),FPM_InitFixedPoint_m(80.0, u7p9_T)},
	{FPM_InitFixedPoint_m(0.0, u7p9_T),FPM_InitFixedPoint_m(40.0, u7p9_T),
	FPM_InitFixedPoint_m(60.0, u7p9_T),FPM_InitFixedPoint_m(80.0, u7p9_T)},
	{FPM_InitFixedPoint_m(0.0, u7p9_T),FPM_InitFixedPoint_m(40.0, u7p9_T),
	FPM_InitFixedPoint_m(60.0, u7p9_T),FPM_InitFixedPoint_m(80.0, u7p9_T)}}, {{FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T)},
	{FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T)},
	{FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T)},
	{FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T)},
	{FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T)},
	{FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T)},
	{FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T)},
	{FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T)},
	{FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T)}}, FALSE, {FPM_InitFixedPoint_m(10.0, u8p8_T),FPM_InitFixedPoint_m(40.0, u8p8_T),
	FPM_InitFixedPoint_m(70.0, u8p8_T),FPM_InitFixedPoint_m(100.0, u8p8_T),
	FPM_InitFixedPoint_m(130.0, u8p8_T),FPM_InitFixedPoint_m(180.0, u8p8_T)}, {FPM_InitFixedPoint_m(12.0, u4p12_T),
	FPM_InitFixedPoint_m(11.0, u4p12_T),FPM_InitFixedPoint_m(9.0, u4p12_T),
	FPM_InitFixedPoint_m(7.0, u4p12_T),FPM_InitFixedPoint_m(5.0, u4p12_T),
	FPM_InitFixedPoint_m(3.0, u4p12_T)}, 0.0f };

#pragma DATA_SECTION(k_TunSet0Per2_Cnt_Str, ".TunCal0Per2");
CONST(TUNING_P_Str, CAL_CONST)k_TunSet0Per2_Cnt_Str = { 1.0f, {{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.0234375, s4p11_T),
	FPM_InitFixedPoint_m(0.03515625, s4p11_T),
	FPM_InitFixedPoint_m(0.05078125, s4p11_T),
	FPM_InitFixedPoint_m(0.0703125, s4p11_T),
	FPM_InitFixedPoint_m(0.09375, s4p11_T),
	FPM_InitFixedPoint_m(0.12109375, s4p11_T),
	FPM_InitFixedPoint_m(0.15234375, s4p11_T),
	FPM_InitFixedPoint_m(0.18359375, s4p11_T),
	FPM_InitFixedPoint_m(0.21875, s4p11_T),
	FPM_InitFixedPoint_m(0.26171875, s4p11_T),
	FPM_InitFixedPoint_m(0.30078125, s4p11_T),
	FPM_InitFixedPoint_m(0.34765625, s4p11_T),
	FPM_InitFixedPoint_m(0.3984375, s4p11_T),
	FPM_InitFixedPoint_m(0.44921875, s4p11_T),
	FPM_InitFixedPoint_m(0.5078125, s4p11_T),
	FPM_InitFixedPoint_m(0.56640625, s4p11_T),
	FPM_InitFixedPoint_m(0.62890625, s4p11_T),
	FPM_InitFixedPoint_m(0.69140625, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.03125, s4p11_T),
	FPM_InitFixedPoint_m(0.05078125, s4p11_T),
	FPM_InitFixedPoint_m(0.07421875, s4p11_T),
	FPM_InitFixedPoint_m(0.10546875, s4p11_T),
	FPM_InitFixedPoint_m(0.140625, s4p11_T),
	FPM_InitFixedPoint_m(0.18359375, s4p11_T),
	FPM_InitFixedPoint_m(0.23046875, s4p11_T),
	FPM_InitFixedPoint_m(0.28125, s4p11_T),
	FPM_InitFixedPoint_m(0.33984375, s4p11_T),
	FPM_InitFixedPoint_m(0.40234375, s4p11_T),
	FPM_InitFixedPoint_m(0.47265625, s4p11_T),
	FPM_InitFixedPoint_m(0.546875, s4p11_T),
	FPM_InitFixedPoint_m(0.625, s4p11_T),
	FPM_InitFixedPoint_m(0.7109375, s4p11_T),
	FPM_InitFixedPoint_m(0.80078125, s4p11_T),
	FPM_InitFixedPoint_m(0.89453125, s4p11_T),
	FPM_InitFixedPoint_m(0.99609375, s4p11_T),
	FPM_InitFixedPoint_m(1.10546875, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.015625, s4p11_T),
	FPM_InitFixedPoint_m(0.0390625, s4p11_T),
	FPM_InitFixedPoint_m(0.06640625, s4p11_T),
	FPM_InitFixedPoint_m(0.09765625, s4p11_T),
	FPM_InitFixedPoint_m(0.1328125, s4p11_T),
	FPM_InitFixedPoint_m(0.17578125, s4p11_T),
	FPM_InitFixedPoint_m(0.21875, s4p11_T),
	FPM_InitFixedPoint_m(0.26953125, s4p11_T),
	FPM_InitFixedPoint_m(0.328125, s4p11_T),
	FPM_InitFixedPoint_m(0.38671875, s4p11_T),
	FPM_InitFixedPoint_m(0.453125, s4p11_T),
	FPM_InitFixedPoint_m(0.5234375, s4p11_T),
	FPM_InitFixedPoint_m(0.59765625, s4p11_T),
	FPM_InitFixedPoint_m(0.6796875, s4p11_T),
	FPM_InitFixedPoint_m(0.76171875, s4p11_T),
	FPM_InitFixedPoint_m(0.8515625, s4p11_T),
	FPM_InitFixedPoint_m(0.94921875, s4p11_T),
	FPM_InitFixedPoint_m(1.046875, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.015625, s4p11_T),
	FPM_InitFixedPoint_m(0.03515625, s4p11_T),
	FPM_InitFixedPoint_m(0.0625, s4p11_T),
	FPM_InitFixedPoint_m(0.0859375, s4p11_T),
	FPM_InitFixedPoint_m(0.1171875, s4p11_T),
	FPM_InitFixedPoint_m(0.15234375, s4p11_T),
	FPM_InitFixedPoint_m(0.1875, s4p11_T),
	FPM_InitFixedPoint_m(0.23046875, s4p11_T),
	FPM_InitFixedPoint_m(0.2734375, s4p11_T),
	FPM_InitFixedPoint_m(0.3203125, s4p11_T),
	FPM_InitFixedPoint_m(0.37109375, s4p11_T),
	FPM_InitFixedPoint_m(0.42578125, s4p11_T),
	FPM_InitFixedPoint_m(0.48046875, s4p11_T),
	FPM_InitFixedPoint_m(0.54296875, s4p11_T),
	FPM_InitFixedPoint_m(0.60546875, s4p11_T),
	FPM_InitFixedPoint_m(0.671875, s4p11_T),
	FPM_InitFixedPoint_m(0.7421875, s4p11_T),
	FPM_InitFixedPoint_m(0.81640625, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.015625, s4p11_T),
	FPM_InitFixedPoint_m(0.03515625, s4p11_T),
	FPM_InitFixedPoint_m(0.05859375, s4p11_T),
	FPM_InitFixedPoint_m(0.0859375, s4p11_T),
	FPM_InitFixedPoint_m(0.11328125, s4p11_T),
	FPM_InitFixedPoint_m(0.14453125, s4p11_T),
	FPM_InitFixedPoint_m(0.17578125, s4p11_T),
	FPM_InitFixedPoint_m(0.21484375, s4p11_T),
	FPM_InitFixedPoint_m(0.25390625, s4p11_T),
	FPM_InitFixedPoint_m(0.29296875, s4p11_T),
	FPM_InitFixedPoint_m(0.33984375, s4p11_T),
	FPM_InitFixedPoint_m(0.38671875, s4p11_T),
	FPM_InitFixedPoint_m(0.4375, s4p11_T),
	FPM_InitFixedPoint_m(0.48828125, s4p11_T),
	FPM_InitFixedPoint_m(0.546875, s4p11_T),
	FPM_InitFixedPoint_m(0.60546875, s4p11_T),
	FPM_InitFixedPoint_m(0.66796875, s4p11_T),
	FPM_InitFixedPoint_m(0.73046875, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.01, s4p11_T),
	FPM_InitFixedPoint_m(0.02, s4p11_T),FPM_InitFixedPoint_m(0.035, s4p11_T),
	FPM_InitFixedPoint_m(0.06, s4p11_T),FPM_InitFixedPoint_m(0.08, s4p11_T),
	FPM_InitFixedPoint_m(0.12, s4p11_T),FPM_InitFixedPoint_m(0.16, s4p11_T),
	FPM_InitFixedPoint_m(0.2, s4p11_T),FPM_InitFixedPoint_m(0.24, s4p11_T),
	FPM_InitFixedPoint_m(0.29, s4p11_T),FPM_InitFixedPoint_m(0.35, s4p11_T),
	FPM_InitFixedPoint_m(0.39, s4p11_T),FPM_InitFixedPoint_m(0.46, s4p11_T),
	FPM_InitFixedPoint_m(0.51171875, s4p11_T),
	FPM_InitFixedPoint_m(0.5625, s4p11_T),
	FPM_InitFixedPoint_m(0.62109375, s4p11_T),
	FPM_InitFixedPoint_m(0.6796875, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.01, s4p11_T),
	FPM_InitFixedPoint_m(0.02, s4p11_T),FPM_InitFixedPoint_m(0.035, s4p11_T),
	FPM_InitFixedPoint_m(0.06, s4p11_T),FPM_InitFixedPoint_m(0.08, s4p11_T),
	FPM_InitFixedPoint_m(0.1, s4p11_T),FPM_InitFixedPoint_m(0.14, s4p11_T),
	FPM_InitFixedPoint_m(0.18, s4p11_T),FPM_InitFixedPoint_m(0.21, s4p11_T),
	FPM_InitFixedPoint_m(0.26, s4p11_T),FPM_InitFixedPoint_m(0.3, s4p11_T),
	FPM_InitFixedPoint_m(0.34, s4p11_T),
	FPM_InitFixedPoint_m(0.3984375, s4p11_T),
	FPM_InitFixedPoint_m(0.4375, s4p11_T),
	FPM_InitFixedPoint_m(0.48046875, s4p11_T),
	FPM_InitFixedPoint_m(0.52734375, s4p11_T),
	FPM_InitFixedPoint_m(0.57421875, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.01, s4p11_T),FPM_InitFixedPoint_m(0.03, s4p11_T),
	FPM_InitFixedPoint_m(0.05, s4p11_T),FPM_InitFixedPoint_m(0.07, s4p11_T),
	FPM_InitFixedPoint_m(0.095, s4p11_T),FPM_InitFixedPoint_m(0.13, s4p11_T),
	FPM_InitFixedPoint_m(0.16, s4p11_T),FPM_InitFixedPoint_m(0.2, s4p11_T),
	FPM_InitFixedPoint_m(0.24, s4p11_T),FPM_InitFixedPoint_m(0.28, s4p11_T),
	FPM_InitFixedPoint_m(0.32, s4p11_T),
	FPM_InitFixedPoint_m(0.3671875, s4p11_T),
	FPM_InitFixedPoint_m(0.40625, s4p11_T),
	FPM_InitFixedPoint_m(0.4453125, s4p11_T),
	FPM_InitFixedPoint_m(0.48828125, s4p11_T),
	FPM_InitFixedPoint_m(0.53125, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.01, s4p11_T),FPM_InitFixedPoint_m(0.015, s4p11_T),
	FPM_InitFixedPoint_m(0.03, s4p11_T),FPM_InitFixedPoint_m(0.05, s4p11_T),
	FPM_InitFixedPoint_m(0.07, s4p11_T),FPM_InitFixedPoint_m(0.1, s4p11_T),
	FPM_InitFixedPoint_m(0.135, s4p11_T),FPM_InitFixedPoint_m(0.16, s4p11_T),
	FPM_InitFixedPoint_m(0.2, s4p11_T),FPM_InitFixedPoint_m(0.23, s4p11_T),
	FPM_InitFixedPoint_m(0.26, s4p11_T),FPM_InitFixedPoint_m(0.31, s4p11_T),
	FPM_InitFixedPoint_m(0.35, s4p11_T),FPM_InitFixedPoint_m(0.38, s4p11_T),
	FPM_InitFixedPoint_m(0.43, s4p11_T),
	FPM_InitFixedPoint_m(0.47265625, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.01, s4p11_T),FPM_InitFixedPoint_m(0.015, s4p11_T),
	FPM_InitFixedPoint_m(0.03, s4p11_T),FPM_InitFixedPoint_m(0.05, s4p11_T),
	FPM_InitFixedPoint_m(0.07, s4p11_T),FPM_InitFixedPoint_m(0.1, s4p11_T),
	FPM_InitFixedPoint_m(0.135, s4p11_T),FPM_InitFixedPoint_m(0.16, s4p11_T),
	FPM_InitFixedPoint_m(0.2, s4p11_T),FPM_InitFixedPoint_m(0.23, s4p11_T),
	FPM_InitFixedPoint_m(0.26, s4p11_T),FPM_InitFixedPoint_m(0.31, s4p11_T),
	FPM_InitFixedPoint_m(0.35, s4p11_T),FPM_InitFixedPoint_m(0.38, s4p11_T),
	FPM_InitFixedPoint_m(0.43, s4p11_T),
	FPM_InitFixedPoint_m(0.47265625, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.01, s4p11_T),FPM_InitFixedPoint_m(0.015, s4p11_T),
	FPM_InitFixedPoint_m(0.03, s4p11_T),FPM_InitFixedPoint_m(0.05, s4p11_T),
	FPM_InitFixedPoint_m(0.07, s4p11_T),FPM_InitFixedPoint_m(0.1, s4p11_T),
	FPM_InitFixedPoint_m(0.135, s4p11_T),FPM_InitFixedPoint_m(0.16, s4p11_T),
	FPM_InitFixedPoint_m(0.2, s4p11_T),FPM_InitFixedPoint_m(0.23, s4p11_T),
	FPM_InitFixedPoint_m(0.26, s4p11_T),FPM_InitFixedPoint_m(0.31, s4p11_T),
	FPM_InitFixedPoint_m(0.35, s4p11_T),FPM_InitFixedPoint_m(0.38, s4p11_T),
	FPM_InitFixedPoint_m(0.43, s4p11_T),
	FPM_InitFixedPoint_m(0.47265625, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.01, s4p11_T),FPM_InitFixedPoint_m(0.015, s4p11_T),
	FPM_InitFixedPoint_m(0.03, s4p11_T),FPM_InitFixedPoint_m(0.05, s4p11_T),
	FPM_InitFixedPoint_m(0.07, s4p11_T),FPM_InitFixedPoint_m(0.1, s4p11_T),
	FPM_InitFixedPoint_m(0.135, s4p11_T),FPM_InitFixedPoint_m(0.16, s4p11_T),
	FPM_InitFixedPoint_m(0.2, s4p11_T),FPM_InitFixedPoint_m(0.23, s4p11_T),
	FPM_InitFixedPoint_m(0.26, s4p11_T),FPM_InitFixedPoint_m(0.31, s4p11_T),
	FPM_InitFixedPoint_m(0.35, s4p11_T),FPM_InitFixedPoint_m(0.38, s4p11_T),
	FPM_InitFixedPoint_m(0.43, s4p11_T),
	FPM_InitFixedPoint_m(0.47265625, s4p11_T)}}, {{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.0234375, s4p11_T),
	FPM_InitFixedPoint_m(0.03515625, s4p11_T),
	FPM_InitFixedPoint_m(0.05078125, s4p11_T),
	FPM_InitFixedPoint_m(0.0703125, s4p11_T),
	FPM_InitFixedPoint_m(0.09375, s4p11_T),
	FPM_InitFixedPoint_m(0.12109375, s4p11_T),
	FPM_InitFixedPoint_m(0.15234375, s4p11_T),
	FPM_InitFixedPoint_m(0.18359375, s4p11_T),
	FPM_InitFixedPoint_m(0.21875, s4p11_T),
	FPM_InitFixedPoint_m(0.26171875, s4p11_T),
	FPM_InitFixedPoint_m(0.30078125, s4p11_T),
	FPM_InitFixedPoint_m(0.34765625, s4p11_T),
	FPM_InitFixedPoint_m(0.3984375, s4p11_T),
	FPM_InitFixedPoint_m(0.44921875, s4p11_T),
	FPM_InitFixedPoint_m(0.5078125, s4p11_T),
	FPM_InitFixedPoint_m(0.56640625, s4p11_T),
	FPM_InitFixedPoint_m(0.62890625, s4p11_T),
	FPM_InitFixedPoint_m(0.69140625, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.03125, s4p11_T),
	FPM_InitFixedPoint_m(0.05078125, s4p11_T),
	FPM_InitFixedPoint_m(0.07421875, s4p11_T),
	FPM_InitFixedPoint_m(0.10546875, s4p11_T),
	FPM_InitFixedPoint_m(0.140625, s4p11_T),
	FPM_InitFixedPoint_m(0.18359375, s4p11_T),
	FPM_InitFixedPoint_m(0.23046875, s4p11_T),
	FPM_InitFixedPoint_m(0.28125, s4p11_T),
	FPM_InitFixedPoint_m(0.33984375, s4p11_T),
	FPM_InitFixedPoint_m(0.40234375, s4p11_T),
	FPM_InitFixedPoint_m(0.47265625, s4p11_T),
	FPM_InitFixedPoint_m(0.546875, s4p11_T),
	FPM_InitFixedPoint_m(0.625, s4p11_T),
	FPM_InitFixedPoint_m(0.7109375, s4p11_T),
	FPM_InitFixedPoint_m(0.80078125, s4p11_T),
	FPM_InitFixedPoint_m(0.89453125, s4p11_T),
	FPM_InitFixedPoint_m(0.99609375, s4p11_T),
	FPM_InitFixedPoint_m(1.10546875, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.015625, s4p11_T),
	FPM_InitFixedPoint_m(0.0390625, s4p11_T),
	FPM_InitFixedPoint_m(0.06640625, s4p11_T),
	FPM_InitFixedPoint_m(0.09765625, s4p11_T),
	FPM_InitFixedPoint_m(0.1328125, s4p11_T),
	FPM_InitFixedPoint_m(0.17578125, s4p11_T),
	FPM_InitFixedPoint_m(0.21875, s4p11_T),
	FPM_InitFixedPoint_m(0.26953125, s4p11_T),
	FPM_InitFixedPoint_m(0.328125, s4p11_T),
	FPM_InitFixedPoint_m(0.38671875, s4p11_T),
	FPM_InitFixedPoint_m(0.453125, s4p11_T),
	FPM_InitFixedPoint_m(0.5234375, s4p11_T),
	FPM_InitFixedPoint_m(0.59765625, s4p11_T),
	FPM_InitFixedPoint_m(0.6796875, s4p11_T),
	FPM_InitFixedPoint_m(0.76171875, s4p11_T),
	FPM_InitFixedPoint_m(0.8515625, s4p11_T),
	FPM_InitFixedPoint_m(0.94921875, s4p11_T),
	FPM_InitFixedPoint_m(1.046875, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.015625, s4p11_T),
	FPM_InitFixedPoint_m(0.03515625, s4p11_T),
	FPM_InitFixedPoint_m(0.0625, s4p11_T),
	FPM_InitFixedPoint_m(0.0859375, s4p11_T),
	FPM_InitFixedPoint_m(0.1171875, s4p11_T),
	FPM_InitFixedPoint_m(0.15234375, s4p11_T),
	FPM_InitFixedPoint_m(0.1875, s4p11_T),
	FPM_InitFixedPoint_m(0.23046875, s4p11_T),
	FPM_InitFixedPoint_m(0.2734375, s4p11_T),
	FPM_InitFixedPoint_m(0.3203125, s4p11_T),
	FPM_InitFixedPoint_m(0.37109375, s4p11_T),
	FPM_InitFixedPoint_m(0.42578125, s4p11_T),
	FPM_InitFixedPoint_m(0.48046875, s4p11_T),
	FPM_InitFixedPoint_m(0.54296875, s4p11_T),
	FPM_InitFixedPoint_m(0.60546875, s4p11_T),
	FPM_InitFixedPoint_m(0.671875, s4p11_T),
	FPM_InitFixedPoint_m(0.7421875, s4p11_T),
	FPM_InitFixedPoint_m(0.81640625, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.015625, s4p11_T),
	FPM_InitFixedPoint_m(0.03515625, s4p11_T),
	FPM_InitFixedPoint_m(0.05859375, s4p11_T),
	FPM_InitFixedPoint_m(0.0859375, s4p11_T),
	FPM_InitFixedPoint_m(0.11328125, s4p11_T),
	FPM_InitFixedPoint_m(0.14453125, s4p11_T),
	FPM_InitFixedPoint_m(0.17578125, s4p11_T),
	FPM_InitFixedPoint_m(0.21484375, s4p11_T),
	FPM_InitFixedPoint_m(0.25390625, s4p11_T),
	FPM_InitFixedPoint_m(0.29296875, s4p11_T),
	FPM_InitFixedPoint_m(0.33984375, s4p11_T),
	FPM_InitFixedPoint_m(0.38671875, s4p11_T),
	FPM_InitFixedPoint_m(0.4375, s4p11_T),
	FPM_InitFixedPoint_m(0.48828125, s4p11_T),
	FPM_InitFixedPoint_m(0.546875, s4p11_T),
	FPM_InitFixedPoint_m(0.60546875, s4p11_T),
	FPM_InitFixedPoint_m(0.66796875, s4p11_T),
	FPM_InitFixedPoint_m(0.73046875, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.01, s4p11_T),
	FPM_InitFixedPoint_m(0.02, s4p11_T),FPM_InitFixedPoint_m(0.035, s4p11_T),
	FPM_InitFixedPoint_m(0.06, s4p11_T),FPM_InitFixedPoint_m(0.08, s4p11_T),
	FPM_InitFixedPoint_m(0.12, s4p11_T),FPM_InitFixedPoint_m(0.16, s4p11_T),
	FPM_InitFixedPoint_m(0.2, s4p11_T),FPM_InitFixedPoint_m(0.24, s4p11_T),
	FPM_InitFixedPoint_m(0.29, s4p11_T),FPM_InitFixedPoint_m(0.35, s4p11_T),
	FPM_InitFixedPoint_m(0.39, s4p11_T),FPM_InitFixedPoint_m(0.46, s4p11_T),
	FPM_InitFixedPoint_m(0.51171875, s4p11_T),
	FPM_InitFixedPoint_m(0.5625, s4p11_T),
	FPM_InitFixedPoint_m(0.62109375, s4p11_T),
	FPM_InitFixedPoint_m(0.6796875, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.01, s4p11_T),
	FPM_InitFixedPoint_m(0.02, s4p11_T),FPM_InitFixedPoint_m(0.035, s4p11_T),
	FPM_InitFixedPoint_m(0.06, s4p11_T),FPM_InitFixedPoint_m(0.08, s4p11_T),
	FPM_InitFixedPoint_m(0.1, s4p11_T),FPM_InitFixedPoint_m(0.14, s4p11_T),
	FPM_InitFixedPoint_m(0.18, s4p11_T),FPM_InitFixedPoint_m(0.21, s4p11_T),
	FPM_InitFixedPoint_m(0.26, s4p11_T),FPM_InitFixedPoint_m(0.3, s4p11_T),
	FPM_InitFixedPoint_m(0.34, s4p11_T),
	FPM_InitFixedPoint_m(0.3984375, s4p11_T),
	FPM_InitFixedPoint_m(0.4375, s4p11_T),
	FPM_InitFixedPoint_m(0.48046875, s4p11_T),
	FPM_InitFixedPoint_m(0.52734375, s4p11_T),
	FPM_InitFixedPoint_m(0.57421875, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.01, s4p11_T),FPM_InitFixedPoint_m(0.03, s4p11_T),
	FPM_InitFixedPoint_m(0.05, s4p11_T),FPM_InitFixedPoint_m(0.07, s4p11_T),
	FPM_InitFixedPoint_m(0.095, s4p11_T),FPM_InitFixedPoint_m(0.13, s4p11_T),
	FPM_InitFixedPoint_m(0.16, s4p11_T),FPM_InitFixedPoint_m(0.2, s4p11_T),
	FPM_InitFixedPoint_m(0.24, s4p11_T),FPM_InitFixedPoint_m(0.28, s4p11_T),
	FPM_InitFixedPoint_m(0.32, s4p11_T),
	FPM_InitFixedPoint_m(0.3671875, s4p11_T),
	FPM_InitFixedPoint_m(0.40625, s4p11_T),
	FPM_InitFixedPoint_m(0.4453125, s4p11_T),
	FPM_InitFixedPoint_m(0.48828125, s4p11_T),
	FPM_InitFixedPoint_m(0.53125, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.01, s4p11_T),FPM_InitFixedPoint_m(0.015, s4p11_T),
	FPM_InitFixedPoint_m(0.03, s4p11_T),FPM_InitFixedPoint_m(0.05, s4p11_T),
	FPM_InitFixedPoint_m(0.07, s4p11_T),FPM_InitFixedPoint_m(0.1, s4p11_T),
	FPM_InitFixedPoint_m(0.135, s4p11_T),FPM_InitFixedPoint_m(0.16, s4p11_T),
	FPM_InitFixedPoint_m(0.2, s4p11_T),FPM_InitFixedPoint_m(0.23, s4p11_T),
	FPM_InitFixedPoint_m(0.26, s4p11_T),FPM_InitFixedPoint_m(0.31, s4p11_T),
	FPM_InitFixedPoint_m(0.35, s4p11_T),FPM_InitFixedPoint_m(0.38, s4p11_T),
	FPM_InitFixedPoint_m(0.43, s4p11_T),
	FPM_InitFixedPoint_m(0.47265625, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.01, s4p11_T),FPM_InitFixedPoint_m(0.015, s4p11_T),
	FPM_InitFixedPoint_m(0.03, s4p11_T),FPM_InitFixedPoint_m(0.05, s4p11_T),
	FPM_InitFixedPoint_m(0.07, s4p11_T),FPM_InitFixedPoint_m(0.1, s4p11_T),
	FPM_InitFixedPoint_m(0.135, s4p11_T),FPM_InitFixedPoint_m(0.16, s4p11_T),
	FPM_InitFixedPoint_m(0.2, s4p11_T),FPM_InitFixedPoint_m(0.23, s4p11_T),
	FPM_InitFixedPoint_m(0.26, s4p11_T),FPM_InitFixedPoint_m(0.31, s4p11_T),
	FPM_InitFixedPoint_m(0.35, s4p11_T),FPM_InitFixedPoint_m(0.38, s4p11_T),
	FPM_InitFixedPoint_m(0.43, s4p11_T),
	FPM_InitFixedPoint_m(0.47265625, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.01, s4p11_T),FPM_InitFixedPoint_m(0.015, s4p11_T),
	FPM_InitFixedPoint_m(0.03, s4p11_T),FPM_InitFixedPoint_m(0.05, s4p11_T),
	FPM_InitFixedPoint_m(0.07, s4p11_T),FPM_InitFixedPoint_m(0.1, s4p11_T),
	FPM_InitFixedPoint_m(0.135, s4p11_T),FPM_InitFixedPoint_m(0.16, s4p11_T),
	FPM_InitFixedPoint_m(0.2, s4p11_T),FPM_InitFixedPoint_m(0.23, s4p11_T),
	FPM_InitFixedPoint_m(0.26, s4p11_T),FPM_InitFixedPoint_m(0.31, s4p11_T),
	FPM_InitFixedPoint_m(0.35, s4p11_T),FPM_InitFixedPoint_m(0.38, s4p11_T),
	FPM_InitFixedPoint_m(0.43, s4p11_T),
	FPM_InitFixedPoint_m(0.47265625, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.01, s4p11_T),FPM_InitFixedPoint_m(0.015, s4p11_T),
	FPM_InitFixedPoint_m(0.03, s4p11_T),FPM_InitFixedPoint_m(0.05, s4p11_T),
	FPM_InitFixedPoint_m(0.07, s4p11_T),FPM_InitFixedPoint_m(0.1, s4p11_T),
	FPM_InitFixedPoint_m(0.135, s4p11_T),FPM_InitFixedPoint_m(0.16, s4p11_T),
	FPM_InitFixedPoint_m(0.2, s4p11_T),FPM_InitFixedPoint_m(0.23, s4p11_T),
	FPM_InitFixedPoint_m(0.26, s4p11_T),FPM_InitFixedPoint_m(0.31, s4p11_T),
	FPM_InitFixedPoint_m(0.35, s4p11_T),FPM_InitFixedPoint_m(0.38, s4p11_T),
	FPM_InitFixedPoint_m(0.43, s4p11_T),
	FPM_InitFixedPoint_m(0.47265625, s4p11_T)}}, {{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.0234375, u8p8_T),
	FPM_InitFixedPoint_m(0.03515625, u8p8_T),
	FPM_InitFixedPoint_m(0.05078125, u8p8_T),
	FPM_InitFixedPoint_m(0.0703125, u8p8_T),
	FPM_InitFixedPoint_m(0.09375, u8p8_T),
	FPM_InitFixedPoint_m(0.12109375, u8p8_T),
	FPM_InitFixedPoint_m(0.15234375, u8p8_T),
	FPM_InitFixedPoint_m(0.18359375, u8p8_T),
	FPM_InitFixedPoint_m(0.21875, u8p8_T),
	FPM_InitFixedPoint_m(0.26171875, u8p8_T),
	FPM_InitFixedPoint_m(0.30078125, u8p8_T),
	FPM_InitFixedPoint_m(0.34765625, u8p8_T),
	FPM_InitFixedPoint_m(0.3984375, u8p8_T),
	FPM_InitFixedPoint_m(0.44921875, u8p8_T),
	FPM_InitFixedPoint_m(0.5078125, u8p8_T),
	FPM_InitFixedPoint_m(0.56640625, u8p8_T),
	FPM_InitFixedPoint_m(0.62890625, u8p8_T),
	FPM_InitFixedPoint_m(0.69140625, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.03125, u8p8_T),
	FPM_InitFixedPoint_m(0.05078125, u8p8_T),
	FPM_InitFixedPoint_m(0.07421875, u8p8_T),
	FPM_InitFixedPoint_m(0.10546875, u8p8_T),
	FPM_InitFixedPoint_m(0.140625, u8p8_T),
	FPM_InitFixedPoint_m(0.18359375, u8p8_T),
	FPM_InitFixedPoint_m(0.23046875, u8p8_T),
	FPM_InitFixedPoint_m(0.28125, u8p8_T),
	FPM_InitFixedPoint_m(0.33984375, u8p8_T),
	FPM_InitFixedPoint_m(0.40234375, u8p8_T),
	FPM_InitFixedPoint_m(0.47265625, u8p8_T),
	FPM_InitFixedPoint_m(0.546875, u8p8_T),
	FPM_InitFixedPoint_m(0.625, u8p8_T),
	FPM_InitFixedPoint_m(0.7109375, u8p8_T),
	FPM_InitFixedPoint_m(0.80078125, u8p8_T),
	FPM_InitFixedPoint_m(0.89453125, u8p8_T),
	FPM_InitFixedPoint_m(0.99609375, u8p8_T),
	FPM_InitFixedPoint_m(1.10546875, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.015625, u8p8_T),
	FPM_InitFixedPoint_m(0.0390625, u8p8_T),
	FPM_InitFixedPoint_m(0.06640625, u8p8_T),
	FPM_InitFixedPoint_m(0.09765625, u8p8_T),
	FPM_InitFixedPoint_m(0.1328125, u8p8_T),
	FPM_InitFixedPoint_m(0.17578125, u8p8_T),
	FPM_InitFixedPoint_m(0.21875, u8p8_T),
	FPM_InitFixedPoint_m(0.26953125, u8p8_T),
	FPM_InitFixedPoint_m(0.328125, u8p8_T),
	FPM_InitFixedPoint_m(0.38671875, u8p8_T),
	FPM_InitFixedPoint_m(0.453125, u8p8_T),
	FPM_InitFixedPoint_m(0.5234375, u8p8_T),
	FPM_InitFixedPoint_m(0.59765625, u8p8_T),
	FPM_InitFixedPoint_m(0.6796875, u8p8_T),
	FPM_InitFixedPoint_m(0.76171875, u8p8_T),
	FPM_InitFixedPoint_m(0.8515625, u8p8_T),
	FPM_InitFixedPoint_m(0.94921875, u8p8_T),
	FPM_InitFixedPoint_m(1.046875, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.015625, u8p8_T),
	FPM_InitFixedPoint_m(0.03515625, u8p8_T),
	FPM_InitFixedPoint_m(0.0625, u8p8_T),
	FPM_InitFixedPoint_m(0.0859375, u8p8_T),
	FPM_InitFixedPoint_m(0.1171875, u8p8_T),
	FPM_InitFixedPoint_m(0.15234375, u8p8_T),
	FPM_InitFixedPoint_m(0.1875, u8p8_T),
	FPM_InitFixedPoint_m(0.23046875, u8p8_T),
	FPM_InitFixedPoint_m(0.2734375, u8p8_T),
	FPM_InitFixedPoint_m(0.3203125, u8p8_T),
	FPM_InitFixedPoint_m(0.37109375, u8p8_T),
	FPM_InitFixedPoint_m(0.42578125, u8p8_T),
	FPM_InitFixedPoint_m(0.48046875, u8p8_T),
	FPM_InitFixedPoint_m(0.54296875, u8p8_T),
	FPM_InitFixedPoint_m(0.60546875, u8p8_T),
	FPM_InitFixedPoint_m(0.671875, u8p8_T),
	FPM_InitFixedPoint_m(0.7421875, u8p8_T),
	FPM_InitFixedPoint_m(0.81640625, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.015625, u8p8_T),
	FPM_InitFixedPoint_m(0.03515625, u8p8_T),
	FPM_InitFixedPoint_m(0.05859375, u8p8_T),
	FPM_InitFixedPoint_m(0.0859375, u8p8_T),
	FPM_InitFixedPoint_m(0.11328125, u8p8_T),
	FPM_InitFixedPoint_m(0.14453125, u8p8_T),
	FPM_InitFixedPoint_m(0.17578125, u8p8_T),
	FPM_InitFixedPoint_m(0.21484375, u8p8_T),
	FPM_InitFixedPoint_m(0.25390625, u8p8_T),
	FPM_InitFixedPoint_m(0.29296875, u8p8_T),
	FPM_InitFixedPoint_m(0.33984375, u8p8_T),
	FPM_InitFixedPoint_m(0.38671875, u8p8_T),
	FPM_InitFixedPoint_m(0.4375, u8p8_T),
	FPM_InitFixedPoint_m(0.48828125, u8p8_T),
	FPM_InitFixedPoint_m(0.546875, u8p8_T),
	FPM_InitFixedPoint_m(0.60546875, u8p8_T),
	FPM_InitFixedPoint_m(0.66796875, u8p8_T),
	FPM_InitFixedPoint_m(0.73046875, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.01, u8p8_T),
	FPM_InitFixedPoint_m(0.02, u8p8_T),FPM_InitFixedPoint_m(0.035, u8p8_T),
	FPM_InitFixedPoint_m(0.06, u8p8_T),FPM_InitFixedPoint_m(0.08, u8p8_T),
	FPM_InitFixedPoint_m(0.12, u8p8_T),FPM_InitFixedPoint_m(0.16, u8p8_T),
	FPM_InitFixedPoint_m(0.2, u8p8_T),FPM_InitFixedPoint_m(0.24, u8p8_T),
	FPM_InitFixedPoint_m(0.29, u8p8_T),FPM_InitFixedPoint_m(0.35, u8p8_T),
	FPM_InitFixedPoint_m(0.39, u8p8_T),FPM_InitFixedPoint_m(0.46, u8p8_T),
	FPM_InitFixedPoint_m(0.51171875, u8p8_T),
	FPM_InitFixedPoint_m(0.5625, u8p8_T),
	FPM_InitFixedPoint_m(0.62109375, u8p8_T),
	FPM_InitFixedPoint_m(0.6796875, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.01, u8p8_T),
	FPM_InitFixedPoint_m(0.02, u8p8_T),FPM_InitFixedPoint_m(0.035, u8p8_T),
	FPM_InitFixedPoint_m(0.06, u8p8_T),FPM_InitFixedPoint_m(0.08, u8p8_T),
	FPM_InitFixedPoint_m(0.1, u8p8_T),FPM_InitFixedPoint_m(0.14, u8p8_T),
	FPM_InitFixedPoint_m(0.18, u8p8_T),FPM_InitFixedPoint_m(0.21, u8p8_T),
	FPM_InitFixedPoint_m(0.26, u8p8_T),FPM_InitFixedPoint_m(0.3, u8p8_T),
	FPM_InitFixedPoint_m(0.34, u8p8_T),
	FPM_InitFixedPoint_m(0.3984375, u8p8_T),
	FPM_InitFixedPoint_m(0.4375, u8p8_T),
	FPM_InitFixedPoint_m(0.48046875, u8p8_T),
	FPM_InitFixedPoint_m(0.52734375, u8p8_T),
	FPM_InitFixedPoint_m(0.57421875, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.01, u8p8_T),FPM_InitFixedPoint_m(0.03, u8p8_T),
	FPM_InitFixedPoint_m(0.05, u8p8_T),FPM_InitFixedPoint_m(0.07, u8p8_T),
	FPM_InitFixedPoint_m(0.095, u8p8_T),FPM_InitFixedPoint_m(0.13, u8p8_T),
	FPM_InitFixedPoint_m(0.16, u8p8_T),FPM_InitFixedPoint_m(0.2, u8p8_T),
	FPM_InitFixedPoint_m(0.24, u8p8_T),FPM_InitFixedPoint_m(0.28, u8p8_T),
	FPM_InitFixedPoint_m(0.32, u8p8_T),
	FPM_InitFixedPoint_m(0.3671875, u8p8_T),
	FPM_InitFixedPoint_m(0.40625, u8p8_T),
	FPM_InitFixedPoint_m(0.4453125, u8p8_T),
	FPM_InitFixedPoint_m(0.48828125, u8p8_T),
	FPM_InitFixedPoint_m(0.53125, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.01, u8p8_T),FPM_InitFixedPoint_m(0.015, u8p8_T),
	FPM_InitFixedPoint_m(0.03, u8p8_T),FPM_InitFixedPoint_m(0.05, u8p8_T),
	FPM_InitFixedPoint_m(0.07, u8p8_T),FPM_InitFixedPoint_m(0.1, u8p8_T),
	FPM_InitFixedPoint_m(0.135, u8p8_T),FPM_InitFixedPoint_m(0.16, u8p8_T),
	FPM_InitFixedPoint_m(0.2, u8p8_T),FPM_InitFixedPoint_m(0.23, u8p8_T),
	FPM_InitFixedPoint_m(0.26, u8p8_T),FPM_InitFixedPoint_m(0.31, u8p8_T),
	FPM_InitFixedPoint_m(0.35, u8p8_T),FPM_InitFixedPoint_m(0.38, u8p8_T),
	FPM_InitFixedPoint_m(0.43, u8p8_T),
	FPM_InitFixedPoint_m(0.47265625, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.01, u8p8_T),FPM_InitFixedPoint_m(0.015, u8p8_T),
	FPM_InitFixedPoint_m(0.03, u8p8_T),FPM_InitFixedPoint_m(0.05, u8p8_T),
	FPM_InitFixedPoint_m(0.07, u8p8_T),FPM_InitFixedPoint_m(0.1, u8p8_T),
	FPM_InitFixedPoint_m(0.135, u8p8_T),FPM_InitFixedPoint_m(0.16, u8p8_T),
	FPM_InitFixedPoint_m(0.2, u8p8_T),FPM_InitFixedPoint_m(0.23, u8p8_T),
	FPM_InitFixedPoint_m(0.26, u8p8_T),FPM_InitFixedPoint_m(0.31, u8p8_T),
	FPM_InitFixedPoint_m(0.35, u8p8_T),FPM_InitFixedPoint_m(0.38, u8p8_T),
	FPM_InitFixedPoint_m(0.43, u8p8_T),
	FPM_InitFixedPoint_m(0.47265625, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.01, u8p8_T),FPM_InitFixedPoint_m(0.015, u8p8_T),
	FPM_InitFixedPoint_m(0.03, u8p8_T),FPM_InitFixedPoint_m(0.05, u8p8_T),
	FPM_InitFixedPoint_m(0.07, u8p8_T),FPM_InitFixedPoint_m(0.1, u8p8_T),
	FPM_InitFixedPoint_m(0.135, u8p8_T),FPM_InitFixedPoint_m(0.16, u8p8_T),
	FPM_InitFixedPoint_m(0.2, u8p8_T),FPM_InitFixedPoint_m(0.23, u8p8_T),
	FPM_InitFixedPoint_m(0.26, u8p8_T),FPM_InitFixedPoint_m(0.31, u8p8_T),
	FPM_InitFixedPoint_m(0.35, u8p8_T),FPM_InitFixedPoint_m(0.38, u8p8_T),
	FPM_InitFixedPoint_m(0.43, u8p8_T),
	FPM_InitFixedPoint_m(0.47265625, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.01, u8p8_T),FPM_InitFixedPoint_m(0.015, u8p8_T),
	FPM_InitFixedPoint_m(0.03, u8p8_T),FPM_InitFixedPoint_m(0.05, u8p8_T),
	FPM_InitFixedPoint_m(0.07, u8p8_T),FPM_InitFixedPoint_m(0.1, u8p8_T),
	FPM_InitFixedPoint_m(0.135, u8p8_T),FPM_InitFixedPoint_m(0.16, u8p8_T),
	FPM_InitFixedPoint_m(0.2, u8p8_T),FPM_InitFixedPoint_m(0.23, u8p8_T),
	FPM_InitFixedPoint_m(0.26, u8p8_T),FPM_InitFixedPoint_m(0.31, u8p8_T),
	FPM_InitFixedPoint_m(0.35, u8p8_T),FPM_InitFixedPoint_m(0.38, u8p8_T),
	FPM_InitFixedPoint_m(0.43, u8p8_T),
	FPM_InitFixedPoint_m(0.47265625, u8p8_T)}}, {{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.0234375, u8p8_T),
	FPM_InitFixedPoint_m(0.03515625, u8p8_T),
	FPM_InitFixedPoint_m(0.05078125, u8p8_T),
	FPM_InitFixedPoint_m(0.0703125, u8p8_T),
	FPM_InitFixedPoint_m(0.09375, u8p8_T),
	FPM_InitFixedPoint_m(0.12109375, u8p8_T),
	FPM_InitFixedPoint_m(0.15234375, u8p8_T),
	FPM_InitFixedPoint_m(0.18359375, u8p8_T),
	FPM_InitFixedPoint_m(0.21875, u8p8_T),
	FPM_InitFixedPoint_m(0.26171875, u8p8_T),
	FPM_InitFixedPoint_m(0.30078125, u8p8_T),
	FPM_InitFixedPoint_m(0.34765625, u8p8_T),
	FPM_InitFixedPoint_m(0.3984375, u8p8_T),
	FPM_InitFixedPoint_m(0.44921875, u8p8_T),
	FPM_InitFixedPoint_m(0.5078125, u8p8_T),
	FPM_InitFixedPoint_m(0.56640625, u8p8_T),
	FPM_InitFixedPoint_m(0.62890625, u8p8_T),
	FPM_InitFixedPoint_m(0.69140625, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.03125, u8p8_T),
	FPM_InitFixedPoint_m(0.05078125, u8p8_T),
	FPM_InitFixedPoint_m(0.07421875, u8p8_T),
	FPM_InitFixedPoint_m(0.10546875, u8p8_T),
	FPM_InitFixedPoint_m(0.140625, u8p8_T),
	FPM_InitFixedPoint_m(0.18359375, u8p8_T),
	FPM_InitFixedPoint_m(0.23046875, u8p8_T),
	FPM_InitFixedPoint_m(0.28125, u8p8_T),
	FPM_InitFixedPoint_m(0.33984375, u8p8_T),
	FPM_InitFixedPoint_m(0.40234375, u8p8_T),
	FPM_InitFixedPoint_m(0.47265625, u8p8_T),
	FPM_InitFixedPoint_m(0.546875, u8p8_T),
	FPM_InitFixedPoint_m(0.625, u8p8_T),
	FPM_InitFixedPoint_m(0.7109375, u8p8_T),
	FPM_InitFixedPoint_m(0.80078125, u8p8_T),
	FPM_InitFixedPoint_m(0.89453125, u8p8_T),
	FPM_InitFixedPoint_m(0.99609375, u8p8_T),
	FPM_InitFixedPoint_m(1.10546875, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.015625, u8p8_T),
	FPM_InitFixedPoint_m(0.0390625, u8p8_T),
	FPM_InitFixedPoint_m(0.06640625, u8p8_T),
	FPM_InitFixedPoint_m(0.09765625, u8p8_T),
	FPM_InitFixedPoint_m(0.1328125, u8p8_T),
	FPM_InitFixedPoint_m(0.17578125, u8p8_T),
	FPM_InitFixedPoint_m(0.21875, u8p8_T),
	FPM_InitFixedPoint_m(0.26953125, u8p8_T),
	FPM_InitFixedPoint_m(0.328125, u8p8_T),
	FPM_InitFixedPoint_m(0.38671875, u8p8_T),
	FPM_InitFixedPoint_m(0.453125, u8p8_T),
	FPM_InitFixedPoint_m(0.5234375, u8p8_T),
	FPM_InitFixedPoint_m(0.59765625, u8p8_T),
	FPM_InitFixedPoint_m(0.6796875, u8p8_T),
	FPM_InitFixedPoint_m(0.76171875, u8p8_T),
	FPM_InitFixedPoint_m(0.8515625, u8p8_T),
	FPM_InitFixedPoint_m(0.94921875, u8p8_T),
	FPM_InitFixedPoint_m(1.046875, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.015625, u8p8_T),
	FPM_InitFixedPoint_m(0.03515625, u8p8_T),
	FPM_InitFixedPoint_m(0.0625, u8p8_T),
	FPM_InitFixedPoint_m(0.0859375, u8p8_T),
	FPM_InitFixedPoint_m(0.1171875, u8p8_T),
	FPM_InitFixedPoint_m(0.15234375, u8p8_T),
	FPM_InitFixedPoint_m(0.1875, u8p8_T),
	FPM_InitFixedPoint_m(0.23046875, u8p8_T),
	FPM_InitFixedPoint_m(0.2734375, u8p8_T),
	FPM_InitFixedPoint_m(0.3203125, u8p8_T),
	FPM_InitFixedPoint_m(0.37109375, u8p8_T),
	FPM_InitFixedPoint_m(0.42578125, u8p8_T),
	FPM_InitFixedPoint_m(0.48046875, u8p8_T),
	FPM_InitFixedPoint_m(0.54296875, u8p8_T),
	FPM_InitFixedPoint_m(0.60546875, u8p8_T),
	FPM_InitFixedPoint_m(0.671875, u8p8_T),
	FPM_InitFixedPoint_m(0.7421875, u8p8_T),
	FPM_InitFixedPoint_m(0.81640625, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.015625, u8p8_T),
	FPM_InitFixedPoint_m(0.03515625, u8p8_T),
	FPM_InitFixedPoint_m(0.05859375, u8p8_T),
	FPM_InitFixedPoint_m(0.0859375, u8p8_T),
	FPM_InitFixedPoint_m(0.11328125, u8p8_T),
	FPM_InitFixedPoint_m(0.14453125, u8p8_T),
	FPM_InitFixedPoint_m(0.17578125, u8p8_T),
	FPM_InitFixedPoint_m(0.21484375, u8p8_T),
	FPM_InitFixedPoint_m(0.25390625, u8p8_T),
	FPM_InitFixedPoint_m(0.29296875, u8p8_T),
	FPM_InitFixedPoint_m(0.33984375, u8p8_T),
	FPM_InitFixedPoint_m(0.38671875, u8p8_T),
	FPM_InitFixedPoint_m(0.4375, u8p8_T),
	FPM_InitFixedPoint_m(0.48828125, u8p8_T),
	FPM_InitFixedPoint_m(0.546875, u8p8_T),
	FPM_InitFixedPoint_m(0.60546875, u8p8_T),
	FPM_InitFixedPoint_m(0.66796875, u8p8_T),
	FPM_InitFixedPoint_m(0.73046875, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.01, u8p8_T),
	FPM_InitFixedPoint_m(0.02, u8p8_T),FPM_InitFixedPoint_m(0.035, u8p8_T),
	FPM_InitFixedPoint_m(0.06, u8p8_T),FPM_InitFixedPoint_m(0.08, u8p8_T),
	FPM_InitFixedPoint_m(0.12, u8p8_T),FPM_InitFixedPoint_m(0.16, u8p8_T),
	FPM_InitFixedPoint_m(0.2, u8p8_T),FPM_InitFixedPoint_m(0.24, u8p8_T),
	FPM_InitFixedPoint_m(0.29, u8p8_T),FPM_InitFixedPoint_m(0.35, u8p8_T),
	FPM_InitFixedPoint_m(0.39, u8p8_T),FPM_InitFixedPoint_m(0.46, u8p8_T),
	FPM_InitFixedPoint_m(0.51171875, u8p8_T),
	FPM_InitFixedPoint_m(0.5625, u8p8_T),
	FPM_InitFixedPoint_m(0.62109375, u8p8_T),
	FPM_InitFixedPoint_m(0.6796875, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.01, u8p8_T),
	FPM_InitFixedPoint_m(0.02, u8p8_T),FPM_InitFixedPoint_m(0.035, u8p8_T),
	FPM_InitFixedPoint_m(0.06, u8p8_T),FPM_InitFixedPoint_m(0.08, u8p8_T),
	FPM_InitFixedPoint_m(0.1, u8p8_T),FPM_InitFixedPoint_m(0.14, u8p8_T),
	FPM_InitFixedPoint_m(0.18, u8p8_T),FPM_InitFixedPoint_m(0.21, u8p8_T),
	FPM_InitFixedPoint_m(0.26, u8p8_T),FPM_InitFixedPoint_m(0.3, u8p8_T),
	FPM_InitFixedPoint_m(0.34, u8p8_T),
	FPM_InitFixedPoint_m(0.3984375, u8p8_T),
	FPM_InitFixedPoint_m(0.4375, u8p8_T),
	FPM_InitFixedPoint_m(0.48046875, u8p8_T),
	FPM_InitFixedPoint_m(0.52734375, u8p8_T),
	FPM_InitFixedPoint_m(0.57421875, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.01, u8p8_T),FPM_InitFixedPoint_m(0.03, u8p8_T),
	FPM_InitFixedPoint_m(0.05, u8p8_T),FPM_InitFixedPoint_m(0.07, u8p8_T),
	FPM_InitFixedPoint_m(0.095, u8p8_T),FPM_InitFixedPoint_m(0.13, u8p8_T),
	FPM_InitFixedPoint_m(0.16, u8p8_T),FPM_InitFixedPoint_m(0.2, u8p8_T),
	FPM_InitFixedPoint_m(0.24, u8p8_T),FPM_InitFixedPoint_m(0.28, u8p8_T),
	FPM_InitFixedPoint_m(0.32, u8p8_T),
	FPM_InitFixedPoint_m(0.3671875, u8p8_T),
	FPM_InitFixedPoint_m(0.40625, u8p8_T),
	FPM_InitFixedPoint_m(0.4453125, u8p8_T),
	FPM_InitFixedPoint_m(0.48828125, u8p8_T),
	FPM_InitFixedPoint_m(0.53125, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.01, u8p8_T),FPM_InitFixedPoint_m(0.015, u8p8_T),
	FPM_InitFixedPoint_m(0.03, u8p8_T),FPM_InitFixedPoint_m(0.05, u8p8_T),
	FPM_InitFixedPoint_m(0.07, u8p8_T),FPM_InitFixedPoint_m(0.1, u8p8_T),
	FPM_InitFixedPoint_m(0.135, u8p8_T),FPM_InitFixedPoint_m(0.16, u8p8_T),
	FPM_InitFixedPoint_m(0.2, u8p8_T),FPM_InitFixedPoint_m(0.23, u8p8_T),
	FPM_InitFixedPoint_m(0.26, u8p8_T),FPM_InitFixedPoint_m(0.31, u8p8_T),
	FPM_InitFixedPoint_m(0.35, u8p8_T),FPM_InitFixedPoint_m(0.38, u8p8_T),
	FPM_InitFixedPoint_m(0.43, u8p8_T),
	FPM_InitFixedPoint_m(0.47265625, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.01, u8p8_T),FPM_InitFixedPoint_m(0.015, u8p8_T),
	FPM_InitFixedPoint_m(0.03, u8p8_T),FPM_InitFixedPoint_m(0.05, u8p8_T),
	FPM_InitFixedPoint_m(0.07, u8p8_T),FPM_InitFixedPoint_m(0.1, u8p8_T),
	FPM_InitFixedPoint_m(0.135, u8p8_T),FPM_InitFixedPoint_m(0.16, u8p8_T),
	FPM_InitFixedPoint_m(0.2, u8p8_T),FPM_InitFixedPoint_m(0.23, u8p8_T),
	FPM_InitFixedPoint_m(0.26, u8p8_T),FPM_InitFixedPoint_m(0.31, u8p8_T),
	FPM_InitFixedPoint_m(0.35, u8p8_T),FPM_InitFixedPoint_m(0.38, u8p8_T),
	FPM_InitFixedPoint_m(0.43, u8p8_T),
	FPM_InitFixedPoint_m(0.47265625, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.01, u8p8_T),FPM_InitFixedPoint_m(0.015, u8p8_T),
	FPM_InitFixedPoint_m(0.03, u8p8_T),FPM_InitFixedPoint_m(0.05, u8p8_T),
	FPM_InitFixedPoint_m(0.07, u8p8_T),FPM_InitFixedPoint_m(0.1, u8p8_T),
	FPM_InitFixedPoint_m(0.135, u8p8_T),FPM_InitFixedPoint_m(0.16, u8p8_T),
	FPM_InitFixedPoint_m(0.2, u8p8_T),FPM_InitFixedPoint_m(0.23, u8p8_T),
	FPM_InitFixedPoint_m(0.26, u8p8_T),FPM_InitFixedPoint_m(0.31, u8p8_T),
	FPM_InitFixedPoint_m(0.35, u8p8_T),FPM_InitFixedPoint_m(0.38, u8p8_T),
	FPM_InitFixedPoint_m(0.43, u8p8_T),
	FPM_InitFixedPoint_m(0.47265625, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.01, u8p8_T),FPM_InitFixedPoint_m(0.015, u8p8_T),
	FPM_InitFixedPoint_m(0.03, u8p8_T),FPM_InitFixedPoint_m(0.05, u8p8_T),
	FPM_InitFixedPoint_m(0.07, u8p8_T),FPM_InitFixedPoint_m(0.1, u8p8_T),
	FPM_InitFixedPoint_m(0.135, u8p8_T),FPM_InitFixedPoint_m(0.16, u8p8_T),
	FPM_InitFixedPoint_m(0.2, u8p8_T),FPM_InitFixedPoint_m(0.23, u8p8_T),
	FPM_InitFixedPoint_m(0.26, u8p8_T),FPM_InitFixedPoint_m(0.31, u8p8_T),
	FPM_InitFixedPoint_m(0.35, u8p8_T),FPM_InitFixedPoint_m(0.38, u8p8_T),
	FPM_InitFixedPoint_m(0.43, u8p8_T),
	FPM_InitFixedPoint_m(0.47265625, u8p8_T)}}, {{FPM_InitFixedPoint_m(0.0, u2p14_T),FPM_InitFixedPoint_m(0.0, u2p14_T),
	FPM_InitFixedPoint_m(0.0, u2p14_T),FPM_InitFixedPoint_m(0.0, u2p14_T),
	FPM_InitFixedPoint_m(0.0, u2p14_T)},{FPM_InitFixedPoint_m(0.0, u2p14_T),
	FPM_InitFixedPoint_m(0.0, u2p14_T),FPM_InitFixedPoint_m(0.0, u2p14_T),
	FPM_InitFixedPoint_m(0.0, u2p14_T),FPM_InitFixedPoint_m(0.0, u2p14_T)},
	{FPM_InitFixedPoint_m(0.0, u2p14_T),FPM_InitFixedPoint_m(0.0, u2p14_T),
	FPM_InitFixedPoint_m(0.0, u2p14_T),FPM_InitFixedPoint_m(0.0, u2p14_T),
	FPM_InitFixedPoint_m(0.0, u2p14_T)},{FPM_InitFixedPoint_m(0.0, u2p14_T),
	FPM_InitFixedPoint_m(0.0, u2p14_T),FPM_InitFixedPoint_m(0.0, u2p14_T),
	FPM_InitFixedPoint_m(0.0, u2p14_T),FPM_InitFixedPoint_m(0.0, u2p14_T)},
	{FPM_InitFixedPoint_m(0.0, u2p14_T),FPM_InitFixedPoint_m(0.0, u2p14_T),
	FPM_InitFixedPoint_m(0.0, u2p14_T),FPM_InitFixedPoint_m(0.0, u2p14_T),
	FPM_InitFixedPoint_m(0.0, u2p14_T)},{FPM_InitFixedPoint_m(0.5, u2p14_T),
	FPM_InitFixedPoint_m(0.5, u2p14_T),FPM_InitFixedPoint_m(0.5, u2p14_T),
	FPM_InitFixedPoint_m(0.5, u2p14_T),FPM_InitFixedPoint_m(0.5, u2p14_T)},
	{FPM_InitFixedPoint_m(0.5, u2p14_T),FPM_InitFixedPoint_m(0.5, u2p14_T),
	FPM_InitFixedPoint_m(0.5, u2p14_T),FPM_InitFixedPoint_m(0.5, u2p14_T),
	FPM_InitFixedPoint_m(0.5, u2p14_T)},{FPM_InitFixedPoint_m(0.9, u2p14_T),
	FPM_InitFixedPoint_m(0.9, u2p14_T),FPM_InitFixedPoint_m(0.9, u2p14_T),
	FPM_InitFixedPoint_m(0.9, u2p14_T),FPM_InitFixedPoint_m(0.9, u2p14_T)},
	{FPM_InitFixedPoint_m(0.9, u2p14_T),FPM_InitFixedPoint_m(0.9, u2p14_T),
	FPM_InitFixedPoint_m(0.9, u2p14_T),FPM_InitFixedPoint_m(0.9, u2p14_T),
	FPM_InitFixedPoint_m(0.9, u2p14_T)},{FPM_InitFixedPoint_m(0.9, u2p14_T),
	FPM_InitFixedPoint_m(0.9, u2p14_T),FPM_InitFixedPoint_m(0.9, u2p14_T),
	FPM_InitFixedPoint_m(0.9, u2p14_T),FPM_InitFixedPoint_m(0.9, u2p14_T)},
	{FPM_InitFixedPoint_m(1.0, u2p14_T),FPM_InitFixedPoint_m(1.0, u2p14_T),
	FPM_InitFixedPoint_m(1.0, u2p14_T),FPM_InitFixedPoint_m(1.0, u2p14_T),
	FPM_InitFixedPoint_m(1.0, u2p14_T)},{FPM_InitFixedPoint_m(1.0, u2p14_T),
	FPM_InitFixedPoint_m(1.0, u2p14_T),FPM_InitFixedPoint_m(1.0, u2p14_T),
	FPM_InitFixedPoint_m(1.0, u2p14_T),FPM_InitFixedPoint_m(1.0, u2p14_T)}}, {{FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T)},{FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T)},
	{FPM_InitFixedPoint_m(0.25, u5p11_T),FPM_InitFixedPoint_m(0.25, u5p11_T),
	FPM_InitFixedPoint_m(0.25, u5p11_T),FPM_InitFixedPoint_m(0.25, u5p11_T),
	FPM_InitFixedPoint_m(0.25, u5p11_T)},
	{FPM_InitFixedPoint_m(0.25, u5p11_T),FPM_InitFixedPoint_m(0.25, u5p11_T),
	FPM_InitFixedPoint_m(0.25, u5p11_T),FPM_InitFixedPoint_m(0.25, u5p11_T),
	FPM_InitFixedPoint_m(0.25, u5p11_T)},{FPM_InitFixedPoint_m(0.5, u5p11_T),
	FPM_InitFixedPoint_m(0.5, u5p11_T),FPM_InitFixedPoint_m(0.5, u5p11_T),
	FPM_InitFixedPoint_m(0.5, u5p11_T),FPM_InitFixedPoint_m(0.5, u5p11_T)},
	{FPM_InitFixedPoint_m(0.5, u5p11_T),FPM_InitFixedPoint_m(0.5, u5p11_T),
	FPM_InitFixedPoint_m(0.5, u5p11_T),FPM_InitFixedPoint_m(0.5, u5p11_T),
	FPM_InitFixedPoint_m(0.5, u5p11_T)},{FPM_InitFixedPoint_m(0.75, u5p11_T),
	FPM_InitFixedPoint_m(0.75, u5p11_T),FPM_InitFixedPoint_m(0.75, u5p11_T),
	FPM_InitFixedPoint_m(0.75, u5p11_T),FPM_InitFixedPoint_m(0.75, u5p11_T)},
	{FPM_InitFixedPoint_m(0.75, u5p11_T),FPM_InitFixedPoint_m(0.75, u5p11_T),
	FPM_InitFixedPoint_m(0.75, u5p11_T),FPM_InitFixedPoint_m(0.75, u5p11_T),
	FPM_InitFixedPoint_m(0.75, u5p11_T)},{FPM_InitFixedPoint_m(1.1, u5p11_T),
	FPM_InitFixedPoint_m(1.1, u5p11_T),FPM_InitFixedPoint_m(1.1, u5p11_T),
	FPM_InitFixedPoint_m(1.1, u5p11_T),FPM_InitFixedPoint_m(1.1, u5p11_T)},
	{FPM_InitFixedPoint_m(1.1, u5p11_T),FPM_InitFixedPoint_m(1.1, u5p11_T),
	FPM_InitFixedPoint_m(1.1, u5p11_T),FPM_InitFixedPoint_m(1.1, u5p11_T),
	FPM_InitFixedPoint_m(1.1, u5p11_T)},{FPM_InitFixedPoint_m(1.1, u5p11_T),
	FPM_InitFixedPoint_m(1.1, u5p11_T),FPM_InitFixedPoint_m(1.1, u5p11_T),
	FPM_InitFixedPoint_m(1.1, u5p11_T),FPM_InitFixedPoint_m(1.1, u5p11_T)},
	{FPM_InitFixedPoint_m(1.1, u5p11_T),FPM_InitFixedPoint_m(1.1, u5p11_T),
	FPM_InitFixedPoint_m(1.1, u5p11_T),FPM_InitFixedPoint_m(1.1, u5p11_T),
	FPM_InitFixedPoint_m(1.1, u5p11_T)}}, {FPM_InitFixedPoint_m(0.0, u9p7_T), FPM_InitFixedPoint_m(5.0, u9p7_T),
	 FPM_InitFixedPoint_m(30.0, u9p7_T), FPM_InitFixedPoint_m(60.0, u9p7_T),
	 FPM_InitFixedPoint_m(80.0, u9p7_T), FPM_InitFixedPoint_m(100.0, u9p7_T),
	 FPM_InitFixedPoint_m(120.0, u9p7_T),
	 FPM_InitFixedPoint_m(150.0, u9p7_T)}, 0.0f, {FPM_InitFixedPoint_m(8.8, u4p12_T), FPM_InitFixedPoint_m(8.8, u4p12_T),
	 FPM_InitFixedPoint_m(8.8, u4p12_T), FPM_InitFixedPoint_m(8.8, u4p12_T),
	 FPM_InitFixedPoint_m(8.8, u4p12_T), FPM_InitFixedPoint_m(8.8, u4p12_T),
	 FPM_InitFixedPoint_m(8.8, u4p12_T), FPM_InitFixedPoint_m(8.8, u4p12_T),
	 FPM_InitFixedPoint_m(8.8, u4p12_T), FPM_InitFixedPoint_m(8.8, u4p12_T),
	 FPM_InitFixedPoint_m(8.8, u4p12_T), FPM_InitFixedPoint_m(8.8, u4p12_T)}, {FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T)}, {FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T)}, {FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T)}, {FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T)}, {{FPM_InitFixedPoint_m(2.086427077, u12p4_T),
	FPM_InitFixedPoint_m(10.16797672, u12p4_T),
	FPM_InitFixedPoint_m(21.4030946, u12p4_T),
	FPM_InitFixedPoint_m(34.63743345, u12p4_T),
	FPM_InitFixedPoint_m(54.51215389, u12p4_T),
	FPM_InitFixedPoint_m(78.73446942, u12p4_T),
	FPM_InitFixedPoint_m(103.9123004, u12p4_T),
	FPM_InitFixedPoint_m(126.9879974, u12p4_T),
	FPM_InitFixedPoint_m(150.0636944, u12p4_T),
	FPM_InitFixedPoint_m(173.1871673, u12p4_T),
	FPM_InitFixedPoint_m(219.2907856, u12p4_T),
	FPM_InitFixedPoint_m(277.0516919, u12p4_T),
	FPM_InitFixedPoint_m(369.4022558, u12p4_T)},
	{FPM_InitFixedPoint_m(2.086427077, u12p4_T),
	FPM_InitFixedPoint_m(10.16797672, u12p4_T),
	FPM_InitFixedPoint_m(21.4030946, u12p4_T),
	FPM_InitFixedPoint_m(34.63743345, u12p4_T),
	FPM_InitFixedPoint_m(54.51215389, u12p4_T),
	FPM_InitFixedPoint_m(78.73446942, u12p4_T),
	FPM_InitFixedPoint_m(103.9123004, u12p4_T),
	FPM_InitFixedPoint_m(126.9879974, u12p4_T),
	FPM_InitFixedPoint_m(150.0636944, u12p4_T),
	FPM_InitFixedPoint_m(173.1871673, u12p4_T),
	FPM_InitFixedPoint_m(219.2907856, u12p4_T),
	FPM_InitFixedPoint_m(277.0516919, u12p4_T),
	FPM_InitFixedPoint_m(369.4022558, u12p4_T)},
	{FPM_InitFixedPoint_m(2.086427077, u12p4_T),
	FPM_InitFixedPoint_m(10.16797672, u12p4_T),
	FPM_InitFixedPoint_m(21.4030946, u12p4_T),
	FPM_InitFixedPoint_m(34.63743345, u12p4_T),
	FPM_InitFixedPoint_m(54.51215389, u12p4_T),
	FPM_InitFixedPoint_m(78.73446942, u12p4_T),
	FPM_InitFixedPoint_m(103.9123004, u12p4_T),
	FPM_InitFixedPoint_m(126.9879974, u12p4_T),
	FPM_InitFixedPoint_m(150.0636944, u12p4_T),
	FPM_InitFixedPoint_m(173.1871673, u12p4_T),
	FPM_InitFixedPoint_m(219.2907856, u12p4_T),
	FPM_InitFixedPoint_m(277.0516919, u12p4_T),
	FPM_InitFixedPoint_m(369.4022558, u12p4_T)},
	{FPM_InitFixedPoint_m(2.086427077, u12p4_T),
	FPM_InitFixedPoint_m(10.16797672, u12p4_T),
	FPM_InitFixedPoint_m(21.4030946, u12p4_T),
	FPM_InitFixedPoint_m(34.63743345, u12p4_T),
	FPM_InitFixedPoint_m(54.51215389, u12p4_T),
	FPM_InitFixedPoint_m(78.73446942, u12p4_T),
	FPM_InitFixedPoint_m(103.9123004, u12p4_T),
	FPM_InitFixedPoint_m(126.9879974, u12p4_T),
	FPM_InitFixedPoint_m(150.0636944, u12p4_T),
	FPM_InitFixedPoint_m(173.1871673, u12p4_T),
	FPM_InitFixedPoint_m(219.2907856, u12p4_T),
	FPM_InitFixedPoint_m(277.0516919, u12p4_T),
	FPM_InitFixedPoint_m(369.4022558, u12p4_T)},
	{FPM_InitFixedPoint_m(2.086427077, u12p4_T),
	FPM_InitFixedPoint_m(10.16797672, u12p4_T),
	FPM_InitFixedPoint_m(21.4030946, u12p4_T),
	FPM_InitFixedPoint_m(34.63743345, u12p4_T),
	FPM_InitFixedPoint_m(54.51215389, u12p4_T),
	FPM_InitFixedPoint_m(78.73446942, u12p4_T),
	FPM_InitFixedPoint_m(103.9123004, u12p4_T),
	FPM_InitFixedPoint_m(126.9879974, u12p4_T),
	FPM_InitFixedPoint_m(150.0636944, u12p4_T),
	FPM_InitFixedPoint_m(173.1871673, u12p4_T),
	FPM_InitFixedPoint_m(219.2907856, u12p4_T),
	FPM_InitFixedPoint_m(277.0516919, u12p4_T),
	FPM_InitFixedPoint_m(369.4022558, u12p4_T)},
	{FPM_InitFixedPoint_m(2.086427077, u12p4_T),
	FPM_InitFixedPoint_m(10.16797672, u12p4_T),
	FPM_InitFixedPoint_m(21.4030946, u12p4_T),
	FPM_InitFixedPoint_m(34.63743345, u12p4_T),
	FPM_InitFixedPoint_m(54.51215389, u12p4_T),
	FPM_InitFixedPoint_m(78.73446942, u12p4_T),
	FPM_InitFixedPoint_m(103.9123004, u12p4_T),
	FPM_InitFixedPoint_m(126.9879974, u12p4_T),
	FPM_InitFixedPoint_m(150.0636944, u12p4_T),
	FPM_InitFixedPoint_m(173.1871673, u12p4_T),
	FPM_InitFixedPoint_m(219.2907856, u12p4_T),
	FPM_InitFixedPoint_m(277.0516919, u12p4_T),
	FPM_InitFixedPoint_m(369.4022558, u12p4_T)},
	{FPM_InitFixedPoint_m(2.086427077, u12p4_T),
	FPM_InitFixedPoint_m(10.16797672, u12p4_T),
	FPM_InitFixedPoint_m(21.4030946, u12p4_T),
	FPM_InitFixedPoint_m(34.63743345, u12p4_T),
	FPM_InitFixedPoint_m(54.51215389, u12p4_T),
	FPM_InitFixedPoint_m(78.73446942, u12p4_T),
	FPM_InitFixedPoint_m(103.9123004, u12p4_T),
	FPM_InitFixedPoint_m(126.9879974, u12p4_T),
	FPM_InitFixedPoint_m(150.0636944, u12p4_T),
	FPM_InitFixedPoint_m(173.1871673, u12p4_T),
	FPM_InitFixedPoint_m(219.2907856, u12p4_T),
	FPM_InitFixedPoint_m(277.0516919, u12p4_T),
	FPM_InitFixedPoint_m(369.4022558, u12p4_T)},
	{FPM_InitFixedPoint_m(2.086427077, u12p4_T),
	FPM_InitFixedPoint_m(10.16797672, u12p4_T),
	FPM_InitFixedPoint_m(21.4030946, u12p4_T),
	FPM_InitFixedPoint_m(34.63743345, u12p4_T),
	FPM_InitFixedPoint_m(54.51215389, u12p4_T),
	FPM_InitFixedPoint_m(78.73446942, u12p4_T),
	FPM_InitFixedPoint_m(103.9123004, u12p4_T),
	FPM_InitFixedPoint_m(126.9879974, u12p4_T),
	FPM_InitFixedPoint_m(150.0636944, u12p4_T),
	FPM_InitFixedPoint_m(173.1871673, u12p4_T),
	FPM_InitFixedPoint_m(219.2907856, u12p4_T),
	FPM_InitFixedPoint_m(277.0516919, u12p4_T),
	FPM_InitFixedPoint_m(369.4022558, u12p4_T)},
	{FPM_InitFixedPoint_m(2.086427077, u12p4_T),
	FPM_InitFixedPoint_m(10.16797672, u12p4_T),
	FPM_InitFixedPoint_m(21.4030946, u12p4_T),
	FPM_InitFixedPoint_m(34.63743345, u12p4_T),
	FPM_InitFixedPoint_m(54.51215389, u12p4_T),
	FPM_InitFixedPoint_m(78.73446942, u12p4_T),
	FPM_InitFixedPoint_m(103.9123004, u12p4_T),
	FPM_InitFixedPoint_m(126.9879974, u12p4_T),
	FPM_InitFixedPoint_m(150.0636944, u12p4_T),
	FPM_InitFixedPoint_m(173.1871673, u12p4_T),
	FPM_InitFixedPoint_m(219.2907856, u12p4_T),
	FPM_InitFixedPoint_m(277.0516919, u12p4_T),
	FPM_InitFixedPoint_m(369.4022558, u12p4_T)},
	{FPM_InitFixedPoint_m(2.086427077, u12p4_T),
	FPM_InitFixedPoint_m(10.16797672, u12p4_T),
	FPM_InitFixedPoint_m(21.4030946, u12p4_T),
	FPM_InitFixedPoint_m(34.63743345, u12p4_T),
	FPM_InitFixedPoint_m(54.51215389, u12p4_T),
	FPM_InitFixedPoint_m(78.73446942, u12p4_T),
	FPM_InitFixedPoint_m(103.9123004, u12p4_T),
	FPM_InitFixedPoint_m(126.9879974, u12p4_T),
	FPM_InitFixedPoint_m(150.0636944, u12p4_T),
	FPM_InitFixedPoint_m(173.1871673, u12p4_T),
	FPM_InitFixedPoint_m(219.2907856, u12p4_T),
	FPM_InitFixedPoint_m(277.0516919, u12p4_T),
	FPM_InitFixedPoint_m(369.4022558, u12p4_T)},
	{FPM_InitFixedPoint_m(2.086427077, u12p4_T),
	FPM_InitFixedPoint_m(10.16797672, u12p4_T),
	FPM_InitFixedPoint_m(21.4030946, u12p4_T),
	FPM_InitFixedPoint_m(34.63743345, u12p4_T),
	FPM_InitFixedPoint_m(54.51215389, u12p4_T),
	FPM_InitFixedPoint_m(78.73446942, u12p4_T),
	FPM_InitFixedPoint_m(103.9123004, u12p4_T),
	FPM_InitFixedPoint_m(126.9879974, u12p4_T),
	FPM_InitFixedPoint_m(150.0636944, u12p4_T),
	FPM_InitFixedPoint_m(173.1871673, u12p4_T),
	FPM_InitFixedPoint_m(219.2907856, u12p4_T),
	FPM_InitFixedPoint_m(277.0516919, u12p4_T),
	FPM_InitFixedPoint_m(369.4022558, u12p4_T)},
	{FPM_InitFixedPoint_m(2.086427077, u12p4_T),
	FPM_InitFixedPoint_m(10.16797672, u12p4_T),
	FPM_InitFixedPoint_m(21.4030946, u12p4_T),
	FPM_InitFixedPoint_m(34.63743345, u12p4_T),
	FPM_InitFixedPoint_m(54.51215389, u12p4_T),
	FPM_InitFixedPoint_m(78.73446942, u12p4_T),
	FPM_InitFixedPoint_m(103.9123004, u12p4_T),
	FPM_InitFixedPoint_m(126.9879974, u12p4_T),
	FPM_InitFixedPoint_m(150.0636944, u12p4_T),
	FPM_InitFixedPoint_m(173.1871673, u12p4_T),
	FPM_InitFixedPoint_m(219.2907856, u12p4_T),
	FPM_InitFixedPoint_m(277.0516919, u12p4_T),
	FPM_InitFixedPoint_m(369.4022558, u12p4_T)}}, {{FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T)},{FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T)},
	{FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T)},{FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T)},
	{FPM_InitFixedPoint_m(4.73E-06, u5p11_T),
	FPM_InitFixedPoint_m(0.000112305, u5p11_T),
	FPM_InitFixedPoint_m(0.000497601, u5p11_T),
	FPM_InitFixedPoint_m(0.001303225, u5p11_T),
	FPM_InitFixedPoint_m(0.003227861, u5p11_T),
	FPM_InitFixedPoint_m(0.006733764, u5p11_T),
	FPM_InitFixedPoint_m(0.011729028, u5p11_T),
	FPM_InitFixedPoint_m(0.017516747, u5p11_T),
	FPM_InitFixedPoint_m(0.024461291, u5p11_T),
	FPM_InitFixedPoint_m(0.032580633, u5p11_T),
	FPM_InitFixedPoint_m(0.052235875, u5p11_T),
	FPM_InitFixedPoint_m(0.083377663, u5p11_T),
	FPM_InitFixedPoint_m(0.148226957, u5p11_T)},
	{FPM_InitFixedPoint_m(0.000486471, u5p11_T),
	FPM_InitFixedPoint_m(0.002683176, u5p11_T),
	FPM_InitFixedPoint_m(0.006562175, u5p11_T),
	FPM_InitFixedPoint_m(0.0123626, u5p11_T),
	FPM_InitFixedPoint_m(0.023575163, u5p11_T),
	FPM_InitFixedPoint_m(0.041301363, u5p11_T),
	FPM_InitFixedPoint_m(0.064455533, u5p11_T),
	FPM_InitFixedPoint_m(0.089909836, u5p11_T),
	FPM_InitFixedPoint_m(0.119413028, u5p11_T),
	FPM_InitFixedPoint_m(0.153038774, u5p11_T),
	FPM_InitFixedPoint_m(0.232215934, u5p11_T),
	FPM_InitFixedPoint_m(0.354221553, u5p11_T),
	FPM_InitFixedPoint_m(0.601993991, u5p11_T)},
	{FPM_InitFixedPoint_m(0.00237325, u5p11_T),
	FPM_InitFixedPoint_m(0.012012076, u5p11_T),
	FPM_InitFixedPoint_m(0.02659086, u5p11_T),
	FPM_InitFixedPoint_m(0.045522684, u5p11_T),
	FPM_InitFixedPoint_m(0.077527555, u5p11_T),
	FPM_InitFixedPoint_m(0.122334762, u5p11_T),
	FPM_InitFixedPoint_m(0.175664812, u5p11_T),
	FPM_InitFixedPoint_m(0.230589844, u5p11_T),
	FPM_InitFixedPoint_m(0.291299003, u5p11_T),
	FPM_InitFixedPoint_m(0.357935954, u5p11_T),
	FPM_InitFixedPoint_m(0.508131234, u5p11_T),
	FPM_InitFixedPoint_m(0.728886973, u5p11_T),
	FPM_InitFixedPoint_m(1.157132994, u5p11_T)},
	{FPM_InitFixedPoint_m(0.004734678, u5p11_T),
	FPM_InitFixedPoint_m(0.02374339, u5p11_T),
	FPM_InitFixedPoint_m(0.051937718, u5p11_T),
	FPM_InitFixedPoint_m(0.087787305, u5p11_T),
	FPM_InitFixedPoint_m(0.146985458, u5p11_T),
	FPM_InitFixedPoint_m(0.227835113, u5p11_T),
	FPM_InitFixedPoint_m(0.322007055, u5p11_T),
	FPM_InitFixedPoint_m(0.417387822, u5p11_T),
	FPM_InitFixedPoint_m(0.521444778, u5p11_T),
	FPM_InitFixedPoint_m(0.634420325, u5p11_T),
	FPM_InitFixedPoint_m(0.885672782, u5p11_T),
	FPM_InitFixedPoint_m(1.249329789, u5p11_T),
	FPM_InitFixedPoint_m(1.943698596, u5p11_T)},
	{FPM_InitFixedPoint_m(0.004734678, u5p11_T),
	FPM_InitFixedPoint_m(0.02374339, u5p11_T),
	FPM_InitFixedPoint_m(0.051937718, u5p11_T),
	FPM_InitFixedPoint_m(0.087787305, u5p11_T),
	FPM_InitFixedPoint_m(0.146985458, u5p11_T),
	FPM_InitFixedPoint_m(0.227835113, u5p11_T),
	FPM_InitFixedPoint_m(0.322007055, u5p11_T),
	FPM_InitFixedPoint_m(0.417387822, u5p11_T),
	FPM_InitFixedPoint_m(0.521444778, u5p11_T),
	FPM_InitFixedPoint_m(0.634420325, u5p11_T),
	FPM_InitFixedPoint_m(0.885672782, u5p11_T),
	FPM_InitFixedPoint_m(1.249329789, u5p11_T),
	FPM_InitFixedPoint_m(1.943698596, u5p11_T)},
	{FPM_InitFixedPoint_m(0.004734678, u5p11_T),
	FPM_InitFixedPoint_m(0.02374339, u5p11_T),
	FPM_InitFixedPoint_m(0.051937718, u5p11_T),
	FPM_InitFixedPoint_m(0.087787305, u5p11_T),
	FPM_InitFixedPoint_m(0.146985458, u5p11_T),
	FPM_InitFixedPoint_m(0.227835113, u5p11_T),
	FPM_InitFixedPoint_m(0.322007055, u5p11_T),
	FPM_InitFixedPoint_m(0.417387822, u5p11_T),
	FPM_InitFixedPoint_m(0.521444778, u5p11_T),
	FPM_InitFixedPoint_m(0.634420325, u5p11_T),
	FPM_InitFixedPoint_m(0.885672782, u5p11_T),
	FPM_InitFixedPoint_m(1.249329789, u5p11_T),
	FPM_InitFixedPoint_m(1.943698596, u5p11_T)},
	{FPM_InitFixedPoint_m(0.004734678, u5p11_T),
	FPM_InitFixedPoint_m(0.02374339, u5p11_T),
	FPM_InitFixedPoint_m(0.051937718, u5p11_T),
	FPM_InitFixedPoint_m(0.087787305, u5p11_T),
	FPM_InitFixedPoint_m(0.146985458, u5p11_T),
	FPM_InitFixedPoint_m(0.227835113, u5p11_T),
	FPM_InitFixedPoint_m(0.322007055, u5p11_T),
	FPM_InitFixedPoint_m(0.417387822, u5p11_T),
	FPM_InitFixedPoint_m(0.521444778, u5p11_T),
	FPM_InitFixedPoint_m(0.634420325, u5p11_T),
	FPM_InitFixedPoint_m(0.885672782, u5p11_T),
	FPM_InitFixedPoint_m(1.249329789, u5p11_T),
	FPM_InitFixedPoint_m(1.943698596, u5p11_T)},
	{FPM_InitFixedPoint_m(0.004734678, u5p11_T),
	FPM_InitFixedPoint_m(0.02374339, u5p11_T),
	FPM_InitFixedPoint_m(0.051937718, u5p11_T),
	FPM_InitFixedPoint_m(0.087787305, u5p11_T),
	FPM_InitFixedPoint_m(0.146985458, u5p11_T),
	FPM_InitFixedPoint_m(0.227835113, u5p11_T),
	FPM_InitFixedPoint_m(0.322007055, u5p11_T),
	FPM_InitFixedPoint_m(0.417387822, u5p11_T),
	FPM_InitFixedPoint_m(0.521444778, u5p11_T),
	FPM_InitFixedPoint_m(0.634420325, u5p11_T),
	FPM_InitFixedPoint_m(0.885672782, u5p11_T),
	FPM_InitFixedPoint_m(1.249329789, u5p11_T),
	FPM_InitFixedPoint_m(1.943698596, u5p11_T)}}, { FPM_InitFixedPoint_m(1.0, u2p14_T),FPM_InitFixedPoint_m(1.0, u2p14_T),
	FPM_InitFixedPoint_m(1.0, u2p14_T),FPM_InitFixedPoint_m(1.0, u2p14_T),
	FPM_InitFixedPoint_m(1.0, u2p14_T) }, { FPM_InitFixedPoint_m(0.005, um1p17_T),
	 FPM_InitFixedPoint_m(0.005, um1p17_T),
	 FPM_InitFixedPoint_m(0.005, um1p17_T),
	 FPM_InitFixedPoint_m(0.005, um1p17_T),
	 FPM_InitFixedPoint_m(0.005, um1p17_T),
	 FPM_InitFixedPoint_m(0.005, um1p17_T),
	 FPM_InitFixedPoint_m(0.005, um1p17_T),
	 FPM_InitFixedPoint_m(0.005, um1p17_T),
	 FPM_InitFixedPoint_m(0.005, um1p17_T),
	 FPM_InitFixedPoint_m(0.005, um1p17_T) }, { FPM_InitFixedPoint_m(1.0, u8p8_T), FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(0.3, u8p8_T), FPM_InitFixedPoint_m(0.2, u8p8_T),
	 FPM_InitFixedPoint_m(0.1, u8p8_T), FPM_InitFixedPoint_m(0.0, u8p8_T),
	 FPM_InitFixedPoint_m(0.0, u8p8_T), FPM_InitFixedPoint_m(0.0, u8p8_T),
	 FPM_InitFixedPoint_m(0.0, u8p8_T), FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.0, u8p8_T), FPM_InitFixedPoint_m(0.0, u8p8_T) }, { FPM_InitFixedPoint_m(1.0, u2p14_T),FPM_InitFixedPoint_m(1.0, u2p14_T),
	FPM_InitFixedPoint_m(1.0, u2p14_T),FPM_InitFixedPoint_m(1.0, u2p14_T),
	FPM_InitFixedPoint_m(1.0, u2p14_T) }, { FPM_InitFixedPoint_m(0.05078125, u8p8_T),
	 FPM_InitFixedPoint_m(0.10546875, u8p8_T),
	 FPM_InitFixedPoint_m(0.15625, u8p8_T),
	 FPM_InitFixedPoint_m(0.20703125, u8p8_T),
	 FPM_InitFixedPoint_m(0.2578125, u8p8_T) }, {{FPM_InitFixedPoint_m(15.0, u12p4_T),
	 FPM_InitFixedPoint_m(15.0, u12p4_T),
	 FPM_InitFixedPoint_m(15.0, u12p4_T),FPM_InitFixedPoint_m(15.0, u12p4_T),
	FPM_InitFixedPoint_m(15.0, u12p4_T), FPM_InitFixedPoint_m(15.0, u12p4_T),
	 FPM_InitFixedPoint_m(15.0, u12p4_T),
	 FPM_InitFixedPoint_m(15.0, u12p4_T),FPM_InitFixedPoint_m(15.0, u12p4_T),
	FPM_InitFixedPoint_m(15.0, u12p4_T),FPM_InitFixedPoint_m(15.0, u12p4_T),
	 FPM_InitFixedPoint_m(15.0, u12p4_T)},
	{FPM_InitFixedPoint_m(15.0, u12p4_T),
	 FPM_InitFixedPoint_m(15.0, u12p4_T),FPM_InitFixedPoint_m(15.0, u12p4_T),
	FPM_InitFixedPoint_m(15.0, u12p4_T), FPM_InitFixedPoint_m(15.0, u12p4_T),
	 FPM_InitFixedPoint_m(15.0, u12p4_T),FPM_InitFixedPoint_m(15.0, u12p4_T),
	 FPM_InitFixedPoint_m(15.0, u12p4_T),
	 FPM_InitFixedPoint_m(15.0, u12p4_T),
	 FPM_InitFixedPoint_m(15.0, u12p4_T),
	 FPM_InitFixedPoint_m(15.0, u12p4_T),
	 FPM_InitFixedPoint_m(15.0, u12p4_T)}}, FPM_InitFixedPoint_m(0.0, u9p7_T), 20583U, 3991U, FPM_InitFixedPoint_m(30.0, u9p7_T), FPM_InitFixedPoint_m(3.0, u12p4_T), FPM_InitFixedPoint_m(0.0195, u4p12_T), { FPM_InitFixedPoint_m(0.0, u9p7_T), FPM_InitFixedPoint_m(5.0, u9p7_T),
	 FPM_InitFixedPoint_m(10.0, u9p7_T), FPM_InitFixedPoint_m(20.0, u9p7_T) }, { FPM_InitFixedPoint_m(0.0, u9p7_T), FPM_InitFixedPoint_m(5.0, u9p7_T),
	 FPM_InitFixedPoint_m(10.0, u9p7_T), FPM_InitFixedPoint_m(20.0, u9p7_T) }, { FPM_InitFixedPoint_m(25.0, u12p4_T),
	 FPM_InitFixedPoint_m(50.0, u12p4_T) }, { FPM_InitFixedPoint_m(60.0, u12p4_T),
	 FPM_InitFixedPoint_m(15.0, u12p4_T) }, { FPM_InitFixedPoint_m(0.0, u8p8_T), FPM_InitFixedPoint_m(1.0, u8p8_T) }, {{FPM_InitFixedPoint_m(90.0, u12p4_T),
	 FPM_InitFixedPoint_m(60.0, u12p4_T),
	 FPM_InitFixedPoint_m(30.0, u12p4_T),
	 FPM_InitFixedPoint_m(0.0, u12p4_T)},
	{FPM_InitFixedPoint_m(90.0, u12p4_T),
	 FPM_InitFixedPoint_m(60.0, u12p4_T),
	 FPM_InitFixedPoint_m(30.0, u12p4_T),
	 FPM_InitFixedPoint_m(0.0, u12p4_T)},
	{FPM_InitFixedPoint_m(90.0, u12p4_T),
	 FPM_InitFixedPoint_m(60.0, u12p4_T),
	 FPM_InitFixedPoint_m(30.0, u12p4_T),
	 FPM_InitFixedPoint_m(0.0, u12p4_T)},
	{FPM_InitFixedPoint_m(90.0, u12p4_T),
	 FPM_InitFixedPoint_m(60.0, u12p4_T),
	 FPM_InitFixedPoint_m(30.0, u12p4_T),
	 FPM_InitFixedPoint_m(0.0, u12p4_T)}}, {{FPM_InitFixedPoint_m(1.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.66, u1p15_T),
	 FPM_InitFixedPoint_m(0.33, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T)},{FPM_InitFixedPoint_m(1.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.66, u1p15_T),
	 FPM_InitFixedPoint_m(0.33, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T)},{FPM_InitFixedPoint_m(1.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.66, u1p15_T),
	 FPM_InitFixedPoint_m(0.33, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T)},{FPM_InitFixedPoint_m(1.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.66, u1p15_T),
	 FPM_InitFixedPoint_m(0.33, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T)}}, {{FPM_InitFixedPoint_m(0.0, u0p16_T),
	 FPM_InitFixedPoint_m(0.004, u0p16_T)},
	{FPM_InitFixedPoint_m(0.0, u0p16_T),
	 FPM_InitFixedPoint_m(0.004, u0p16_T)},
	{FPM_InitFixedPoint_m(0.0, u0p16_T),
	 FPM_InitFixedPoint_m(0.004, u0p16_T)},
	{FPM_InitFixedPoint_m(0.0, u0p16_T),
	 FPM_InitFixedPoint_m(0.004, u0p16_T)}}, {{FPM_InitFixedPoint_m(0.0, u0p16_T),
	 FPM_InitFixedPoint_m(0.001953125, u0p16_T)},
	{FPM_InitFixedPoint_m(0.0, u0p16_T),
	 FPM_InitFixedPoint_m(0.001953125, u0p16_T)},
	{FPM_InitFixedPoint_m(0.0, u0p16_T),
	 FPM_InitFixedPoint_m(0.001953125, u0p16_T)},
	{FPM_InitFixedPoint_m(0.0, u0p16_T),
	 FPM_InitFixedPoint_m(0.001953125, u0p16_T)}}, {{FPM_InitFixedPoint_m(20.0, u12p4_T),
	FPM_InitFixedPoint_m(0.0, u12p4_T)},{FPM_InitFixedPoint_m(20.0, u12p4_T),
	FPM_InitFixedPoint_m(0.0, u12p4_T)},{FPM_InitFixedPoint_m(20.0, u12p4_T),
	FPM_InitFixedPoint_m(0.0, u12p4_T)},{FPM_InitFixedPoint_m(20.0, u12p4_T),
	FPM_InitFixedPoint_m(0.0, u12p4_T)}}, {FPM_InitFixedPoint_m(8.0, u7p9_T), FPM_InitFixedPoint_m(8.0, u7p9_T),
	 FPM_InitFixedPoint_m(8.0, u7p9_T), FPM_InitFixedPoint_m(8.0, u7p9_T),
	 FPM_InitFixedPoint_m(8.0, u7p9_T), FPM_InitFixedPoint_m(8.0, u7p9_T),
	 FPM_InitFixedPoint_m(8.0, u7p9_T), FPM_InitFixedPoint_m(8.0, u7p9_T),
	 FPM_InitFixedPoint_m(8.0, u7p9_T), FPM_InitFixedPoint_m(8.0, u7p9_T),
	 FPM_InitFixedPoint_m(8.0, u7p9_T), FPM_InitFixedPoint_m(8.0, u7p9_T)}, {{FPM_InitFixedPoint_m(0.25, u3p13_T),
	FPM_InitFixedPoint_m(0.25, u3p13_T),FPM_InitFixedPoint_m(0.25, u3p13_T),
	FPM_InitFixedPoint_m(0.25, u3p13_T),FPM_InitFixedPoint_m(0.25, u3p13_T),
	FPM_InitFixedPoint_m(0.25, u3p13_T),FPM_InitFixedPoint_m(0.25, u3p13_T),
	FPM_InitFixedPoint_m(0.25, u3p13_T),FPM_InitFixedPoint_m(0.25, u3p13_T),
	FPM_InitFixedPoint_m(0.25, u3p13_T),FPM_InitFixedPoint_m(0.25, u3p13_T),
	FPM_InitFixedPoint_m(0.25, u3p13_T),FPM_InitFixedPoint_m(0.25, u3p13_T)},
	{FPM_InitFixedPoint_m(0.2, u3p13_T),FPM_InitFixedPoint_m(0.2, u3p13_T),
	FPM_InitFixedPoint_m(0.2, u3p13_T),FPM_InitFixedPoint_m(0.2, u3p13_T),
	FPM_InitFixedPoint_m(0.2, u3p13_T),FPM_InitFixedPoint_m(0.2, u3p13_T),
	FPM_InitFixedPoint_m(0.2, u3p13_T),FPM_InitFixedPoint_m(0.2, u3p13_T),
	FPM_InitFixedPoint_m(0.2, u3p13_T),FPM_InitFixedPoint_m(0.2, u3p13_T),
	FPM_InitFixedPoint_m(0.2, u3p13_T),FPM_InitFixedPoint_m(0.2, u3p13_T),
	FPM_InitFixedPoint_m(0.2, u3p13_T)},{FPM_InitFixedPoint_m(0.13, u3p13_T),
	FPM_InitFixedPoint_m(0.13, u3p13_T),FPM_InitFixedPoint_m(0.13, u3p13_T),
	FPM_InitFixedPoint_m(0.13, u3p13_T),FPM_InitFixedPoint_m(0.13, u3p13_T),
	FPM_InitFixedPoint_m(0.13, u3p13_T),FPM_InitFixedPoint_m(0.13, u3p13_T),
	FPM_InitFixedPoint_m(0.13, u3p13_T),FPM_InitFixedPoint_m(0.13, u3p13_T),
	FPM_InitFixedPoint_m(0.13, u3p13_T),FPM_InitFixedPoint_m(0.13, u3p13_T),
	FPM_InitFixedPoint_m(0.13, u3p13_T),FPM_InitFixedPoint_m(0.13, u3p13_T)},
	{FPM_InitFixedPoint_m(0.08, u3p13_T),FPM_InitFixedPoint_m(0.08, u3p13_T),
	FPM_InitFixedPoint_m(0.08, u3p13_T),FPM_InitFixedPoint_m(0.08, u3p13_T),
	FPM_InitFixedPoint_m(0.08, u3p13_T),FPM_InitFixedPoint_m(0.08, u3p13_T),
	FPM_InitFixedPoint_m(0.08, u3p13_T),FPM_InitFixedPoint_m(0.08, u3p13_T),
	FPM_InitFixedPoint_m(0.08, u3p13_T),FPM_InitFixedPoint_m(0.08, u3p13_T),
	FPM_InitFixedPoint_m(0.08, u3p13_T),FPM_InitFixedPoint_m(0.08, u3p13_T),
	FPM_InitFixedPoint_m(0.08, u3p13_T)},
	{FPM_InitFixedPoint_m(0.04, u3p13_T),FPM_InitFixedPoint_m(0.04, u3p13_T),
	FPM_InitFixedPoint_m(0.04, u3p13_T),FPM_InitFixedPoint_m(0.04, u3p13_T),
	FPM_InitFixedPoint_m(0.04, u3p13_T),FPM_InitFixedPoint_m(0.04, u3p13_T),
	FPM_InitFixedPoint_m(0.04, u3p13_T),FPM_InitFixedPoint_m(0.04, u3p13_T),
	FPM_InitFixedPoint_m(0.04, u3p13_T),FPM_InitFixedPoint_m(0.04, u3p13_T),
	FPM_InitFixedPoint_m(0.04, u3p13_T),FPM_InitFixedPoint_m(0.04, u3p13_T),
	FPM_InitFixedPoint_m(0.04, u3p13_T)},
	{FPM_InitFixedPoint_m(0.01, u3p13_T),FPM_InitFixedPoint_m(0.01, u3p13_T),
	FPM_InitFixedPoint_m(0.01, u3p13_T),FPM_InitFixedPoint_m(0.01, u3p13_T),
	FPM_InitFixedPoint_m(0.01, u3p13_T),FPM_InitFixedPoint_m(0.01, u3p13_T),
	FPM_InitFixedPoint_m(0.01, u3p13_T),FPM_InitFixedPoint_m(0.01, u3p13_T),
	FPM_InitFixedPoint_m(0.01, u3p13_T),FPM_InitFixedPoint_m(0.01, u3p13_T),
	FPM_InitFixedPoint_m(0.01, u3p13_T),FPM_InitFixedPoint_m(0.01, u3p13_T),
	FPM_InitFixedPoint_m(0.01, u3p13_T)},{FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T)},
	{FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T)},{FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T)},
	{FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T)},{FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T)},
	{FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T)}}, {{FPM_InitFixedPoint_m(0.25, u3p13_T),
	FPM_InitFixedPoint_m(0.25, u3p13_T),FPM_InitFixedPoint_m(0.25, u3p13_T),
	FPM_InitFixedPoint_m(0.25, u3p13_T),FPM_InitFixedPoint_m(0.25, u3p13_T),
	FPM_InitFixedPoint_m(0.25, u3p13_T),FPM_InitFixedPoint_m(0.25, u3p13_T),
	FPM_InitFixedPoint_m(0.25, u3p13_T),FPM_InitFixedPoint_m(0.25, u3p13_T),
	FPM_InitFixedPoint_m(0.25, u3p13_T),FPM_InitFixedPoint_m(0.25, u3p13_T),
	FPM_InitFixedPoint_m(0.25, u3p13_T),FPM_InitFixedPoint_m(0.25, u3p13_T)},
	{FPM_InitFixedPoint_m(0.2, u3p13_T),FPM_InitFixedPoint_m(0.2, u3p13_T),
	FPM_InitFixedPoint_m(0.2, u3p13_T),FPM_InitFixedPoint_m(0.2, u3p13_T),
	FPM_InitFixedPoint_m(0.2, u3p13_T),FPM_InitFixedPoint_m(0.2, u3p13_T),
	FPM_InitFixedPoint_m(0.2, u3p13_T),FPM_InitFixedPoint_m(0.2, u3p13_T),
	FPM_InitFixedPoint_m(0.2, u3p13_T),FPM_InitFixedPoint_m(0.2, u3p13_T),
	FPM_InitFixedPoint_m(0.2, u3p13_T),FPM_InitFixedPoint_m(0.2, u3p13_T),
	FPM_InitFixedPoint_m(0.2, u3p13_T)},{FPM_InitFixedPoint_m(0.13, u3p13_T),
	FPM_InitFixedPoint_m(0.13, u3p13_T),FPM_InitFixedPoint_m(0.13, u3p13_T),
	FPM_InitFixedPoint_m(0.13, u3p13_T),FPM_InitFixedPoint_m(0.13, u3p13_T),
	FPM_InitFixedPoint_m(0.13, u3p13_T),FPM_InitFixedPoint_m(0.13, u3p13_T),
	FPM_InitFixedPoint_m(0.13, u3p13_T),FPM_InitFixedPoint_m(0.13, u3p13_T),
	FPM_InitFixedPoint_m(0.13, u3p13_T),FPM_InitFixedPoint_m(0.13, u3p13_T),
	FPM_InitFixedPoint_m(0.13, u3p13_T),FPM_InitFixedPoint_m(0.13, u3p13_T)},
	{FPM_InitFixedPoint_m(0.08, u3p13_T),FPM_InitFixedPoint_m(0.08, u3p13_T),
	FPM_InitFixedPoint_m(0.08, u3p13_T),FPM_InitFixedPoint_m(0.08, u3p13_T),
	FPM_InitFixedPoint_m(0.08, u3p13_T),FPM_InitFixedPoint_m(0.08, u3p13_T),
	FPM_InitFixedPoint_m(0.08, u3p13_T),FPM_InitFixedPoint_m(0.08, u3p13_T),
	FPM_InitFixedPoint_m(0.08, u3p13_T),FPM_InitFixedPoint_m(0.08, u3p13_T),
	FPM_InitFixedPoint_m(0.08, u3p13_T),FPM_InitFixedPoint_m(0.08, u3p13_T),
	FPM_InitFixedPoint_m(0.08, u3p13_T)},
	{FPM_InitFixedPoint_m(0.04, u3p13_T),FPM_InitFixedPoint_m(0.04, u3p13_T),
	FPM_InitFixedPoint_m(0.04, u3p13_T),FPM_InitFixedPoint_m(0.04, u3p13_T),
	FPM_InitFixedPoint_m(0.04, u3p13_T),FPM_InitFixedPoint_m(0.04, u3p13_T),
	FPM_InitFixedPoint_m(0.04, u3p13_T),FPM_InitFixedPoint_m(0.04, u3p13_T),
	FPM_InitFixedPoint_m(0.04, u3p13_T),FPM_InitFixedPoint_m(0.04, u3p13_T),
	FPM_InitFixedPoint_m(0.04, u3p13_T),FPM_InitFixedPoint_m(0.04, u3p13_T),
	FPM_InitFixedPoint_m(0.04, u3p13_T)},
	{FPM_InitFixedPoint_m(0.01, u3p13_T),FPM_InitFixedPoint_m(0.01, u3p13_T),
	FPM_InitFixedPoint_m(0.01, u3p13_T),FPM_InitFixedPoint_m(0.01, u3p13_T),
	FPM_InitFixedPoint_m(0.01, u3p13_T),FPM_InitFixedPoint_m(0.01, u3p13_T),
	FPM_InitFixedPoint_m(0.01, u3p13_T),FPM_InitFixedPoint_m(0.01, u3p13_T),
	FPM_InitFixedPoint_m(0.01, u3p13_T),FPM_InitFixedPoint_m(0.01, u3p13_T),
	FPM_InitFixedPoint_m(0.01, u3p13_T),FPM_InitFixedPoint_m(0.01, u3p13_T),
	FPM_InitFixedPoint_m(0.01, u3p13_T)},{FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T)},
	{FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T)},{FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T)},
	{FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T)},{FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T)},
	{FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T)}}, {{FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T)},{FPM_InitFixedPoint_m(0.25, u5p11_T),
	FPM_InitFixedPoint_m(0.25, u5p11_T),FPM_InitFixedPoint_m(0.25, u5p11_T),
	FPM_InitFixedPoint_m(0.25, u5p11_T),FPM_InitFixedPoint_m(0.25, u5p11_T),
	FPM_InitFixedPoint_m(0.25, u5p11_T),FPM_InitFixedPoint_m(0.25, u5p11_T),
	FPM_InitFixedPoint_m(0.25, u5p11_T),FPM_InitFixedPoint_m(0.25, u5p11_T),
	FPM_InitFixedPoint_m(0.25, u5p11_T),FPM_InitFixedPoint_m(0.25, u5p11_T),
	FPM_InitFixedPoint_m(0.25, u5p11_T),FPM_InitFixedPoint_m(0.25, u5p11_T)},
	{FPM_InitFixedPoint_m(0.5, u5p11_T),FPM_InitFixedPoint_m(0.5, u5p11_T),
	FPM_InitFixedPoint_m(0.5, u5p11_T),FPM_InitFixedPoint_m(0.5, u5p11_T),
	FPM_InitFixedPoint_m(0.5, u5p11_T),FPM_InitFixedPoint_m(0.5, u5p11_T),
	FPM_InitFixedPoint_m(0.5, u5p11_T),FPM_InitFixedPoint_m(0.5, u5p11_T),
	FPM_InitFixedPoint_m(0.5, u5p11_T),FPM_InitFixedPoint_m(0.5, u5p11_T),
	FPM_InitFixedPoint_m(0.5, u5p11_T),FPM_InitFixedPoint_m(0.5, u5p11_T),
	FPM_InitFixedPoint_m(0.5, u5p11_T)},{FPM_InitFixedPoint_m(0.75, u5p11_T),
	FPM_InitFixedPoint_m(0.75, u5p11_T),FPM_InitFixedPoint_m(0.75, u5p11_T),
	FPM_InitFixedPoint_m(0.75, u5p11_T),FPM_InitFixedPoint_m(0.75, u5p11_T),
	FPM_InitFixedPoint_m(0.75, u5p11_T),FPM_InitFixedPoint_m(0.75, u5p11_T),
	FPM_InitFixedPoint_m(0.75, u5p11_T),FPM_InitFixedPoint_m(0.75, u5p11_T),
	FPM_InitFixedPoint_m(0.75, u5p11_T),FPM_InitFixedPoint_m(0.75, u5p11_T),
	FPM_InitFixedPoint_m(0.75, u5p11_T),FPM_InitFixedPoint_m(0.75, u5p11_T)},
	{FPM_InitFixedPoint_m(1.0, u5p11_T),FPM_InitFixedPoint_m(1.0, u5p11_T),
	FPM_InitFixedPoint_m(1.0, u5p11_T),FPM_InitFixedPoint_m(1.0, u5p11_T),
	FPM_InitFixedPoint_m(1.0, u5p11_T),FPM_InitFixedPoint_m(1.0, u5p11_T),
	FPM_InitFixedPoint_m(1.0, u5p11_T),FPM_InitFixedPoint_m(1.0, u5p11_T),
	FPM_InitFixedPoint_m(1.0, u5p11_T),FPM_InitFixedPoint_m(1.0, u5p11_T),
	FPM_InitFixedPoint_m(1.0, u5p11_T),FPM_InitFixedPoint_m(1.0, u5p11_T),
	FPM_InitFixedPoint_m(1.0, u5p11_T)},{FPM_InitFixedPoint_m(1.25, u5p11_T),
	FPM_InitFixedPoint_m(1.25, u5p11_T),FPM_InitFixedPoint_m(1.25, u5p11_T),
	FPM_InitFixedPoint_m(1.25, u5p11_T),FPM_InitFixedPoint_m(1.25, u5p11_T),
	FPM_InitFixedPoint_m(1.25, u5p11_T),FPM_InitFixedPoint_m(1.25, u5p11_T),
	FPM_InitFixedPoint_m(1.25, u5p11_T),FPM_InitFixedPoint_m(1.25, u5p11_T),
	FPM_InitFixedPoint_m(1.25, u5p11_T),FPM_InitFixedPoint_m(1.25, u5p11_T),
	FPM_InitFixedPoint_m(1.25, u5p11_T),FPM_InitFixedPoint_m(1.25, u5p11_T)},
	{FPM_InitFixedPoint_m(1.5, u5p11_T),FPM_InitFixedPoint_m(1.5, u5p11_T),
	FPM_InitFixedPoint_m(1.5, u5p11_T),FPM_InitFixedPoint_m(1.5, u5p11_T),
	FPM_InitFixedPoint_m(1.5, u5p11_T),FPM_InitFixedPoint_m(1.5, u5p11_T),
	FPM_InitFixedPoint_m(1.5, u5p11_T),FPM_InitFixedPoint_m(1.5, u5p11_T),
	FPM_InitFixedPoint_m(1.5, u5p11_T),FPM_InitFixedPoint_m(1.5, u5p11_T),
	FPM_InitFixedPoint_m(1.5, u5p11_T),FPM_InitFixedPoint_m(1.5, u5p11_T),
	FPM_InitFixedPoint_m(1.5, u5p11_T)},{FPM_InitFixedPoint_m(2.0, u5p11_T),
	FPM_InitFixedPoint_m(2.0, u5p11_T),FPM_InitFixedPoint_m(2.0, u5p11_T),
	FPM_InitFixedPoint_m(2.0, u5p11_T),FPM_InitFixedPoint_m(2.0, u5p11_T),
	FPM_InitFixedPoint_m(2.0, u5p11_T),FPM_InitFixedPoint_m(2.0, u5p11_T),
	FPM_InitFixedPoint_m(2.0, u5p11_T),FPM_InitFixedPoint_m(2.0, u5p11_T),
	FPM_InitFixedPoint_m(2.0, u5p11_T),FPM_InitFixedPoint_m(2.0, u5p11_T),
	FPM_InitFixedPoint_m(2.0, u5p11_T),FPM_InitFixedPoint_m(2.0, u5p11_T)},
	{FPM_InitFixedPoint_m(4.0, u5p11_T),FPM_InitFixedPoint_m(4.0, u5p11_T),
	FPM_InitFixedPoint_m(4.0, u5p11_T),FPM_InitFixedPoint_m(4.0, u5p11_T),
	FPM_InitFixedPoint_m(4.0, u5p11_T),FPM_InitFixedPoint_m(4.0, u5p11_T),
	FPM_InitFixedPoint_m(4.0, u5p11_T),FPM_InitFixedPoint_m(4.0, u5p11_T),
	FPM_InitFixedPoint_m(4.0, u5p11_T),FPM_InitFixedPoint_m(4.0, u5p11_T),
	FPM_InitFixedPoint_m(4.0, u5p11_T),FPM_InitFixedPoint_m(4.0, u5p11_T),
	FPM_InitFixedPoint_m(4.0, u5p11_T)},{FPM_InitFixedPoint_m(6.0, u5p11_T),
	FPM_InitFixedPoint_m(6.0, u5p11_T),FPM_InitFixedPoint_m(6.0, u5p11_T),
	FPM_InitFixedPoint_m(6.0, u5p11_T),FPM_InitFixedPoint_m(6.0, u5p11_T),
	FPM_InitFixedPoint_m(6.0, u5p11_T),FPM_InitFixedPoint_m(6.0, u5p11_T),
	FPM_InitFixedPoint_m(6.0, u5p11_T),FPM_InitFixedPoint_m(6.0, u5p11_T),
	FPM_InitFixedPoint_m(6.0, u5p11_T),FPM_InitFixedPoint_m(6.0, u5p11_T),
	FPM_InitFixedPoint_m(6.0, u5p11_T),FPM_InitFixedPoint_m(6.0, u5p11_T)},
	{FPM_InitFixedPoint_m(7.5, u5p11_T),FPM_InitFixedPoint_m(7.5, u5p11_T),
	FPM_InitFixedPoint_m(7.5, u5p11_T),FPM_InitFixedPoint_m(7.5, u5p11_T),
	FPM_InitFixedPoint_m(7.5, u5p11_T),FPM_InitFixedPoint_m(7.5, u5p11_T),
	FPM_InitFixedPoint_m(7.5, u5p11_T),FPM_InitFixedPoint_m(7.5, u5p11_T),
	FPM_InitFixedPoint_m(7.5, u5p11_T),FPM_InitFixedPoint_m(7.5, u5p11_T),
	FPM_InitFixedPoint_m(7.5, u5p11_T),FPM_InitFixedPoint_m(7.5, u5p11_T),
	FPM_InitFixedPoint_m(7.5, u5p11_T)},{FPM_InitFixedPoint_m(8.0, u5p11_T),
	FPM_InitFixedPoint_m(8.0, u5p11_T),FPM_InitFixedPoint_m(8.0, u5p11_T),
	FPM_InitFixedPoint_m(8.0, u5p11_T),FPM_InitFixedPoint_m(8.0, u5p11_T),
	FPM_InitFixedPoint_m(8.0, u5p11_T),FPM_InitFixedPoint_m(8.0, u5p11_T),
	FPM_InitFixedPoint_m(8.0, u5p11_T),FPM_InitFixedPoint_m(8.0, u5p11_T),
	FPM_InitFixedPoint_m(8.0, u5p11_T),FPM_InitFixedPoint_m(8.0, u5p11_T),
	FPM_InitFixedPoint_m(8.0, u5p11_T),FPM_InitFixedPoint_m(8.0, u5p11_T)}}, {{FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T)},{FPM_InitFixedPoint_m(0.25, u5p11_T),
	FPM_InitFixedPoint_m(0.25, u5p11_T),FPM_InitFixedPoint_m(0.25, u5p11_T),
	FPM_InitFixedPoint_m(0.25, u5p11_T),FPM_InitFixedPoint_m(0.25, u5p11_T),
	FPM_InitFixedPoint_m(0.25, u5p11_T),FPM_InitFixedPoint_m(0.25, u5p11_T),
	FPM_InitFixedPoint_m(0.25, u5p11_T),FPM_InitFixedPoint_m(0.25, u5p11_T),
	FPM_InitFixedPoint_m(0.25, u5p11_T),FPM_InitFixedPoint_m(0.25, u5p11_T),
	FPM_InitFixedPoint_m(0.25, u5p11_T),FPM_InitFixedPoint_m(0.25, u5p11_T)},
	{FPM_InitFixedPoint_m(0.5, u5p11_T),FPM_InitFixedPoint_m(0.5, u5p11_T),
	FPM_InitFixedPoint_m(0.5, u5p11_T),FPM_InitFixedPoint_m(0.5, u5p11_T),
	FPM_InitFixedPoint_m(0.5, u5p11_T),FPM_InitFixedPoint_m(0.5, u5p11_T),
	FPM_InitFixedPoint_m(0.5, u5p11_T),FPM_InitFixedPoint_m(0.5, u5p11_T),
	FPM_InitFixedPoint_m(0.5, u5p11_T),FPM_InitFixedPoint_m(0.5, u5p11_T),
	FPM_InitFixedPoint_m(0.5, u5p11_T),FPM_InitFixedPoint_m(0.5, u5p11_T),
	FPM_InitFixedPoint_m(0.5, u5p11_T)},{FPM_InitFixedPoint_m(0.75, u5p11_T),
	FPM_InitFixedPoint_m(0.75, u5p11_T),FPM_InitFixedPoint_m(0.75, u5p11_T),
	FPM_InitFixedPoint_m(0.75, u5p11_T),FPM_InitFixedPoint_m(0.75, u5p11_T),
	FPM_InitFixedPoint_m(0.75, u5p11_T),FPM_InitFixedPoint_m(0.75, u5p11_T),
	FPM_InitFixedPoint_m(0.75, u5p11_T),FPM_InitFixedPoint_m(0.75, u5p11_T),
	FPM_InitFixedPoint_m(0.75, u5p11_T),FPM_InitFixedPoint_m(0.75, u5p11_T),
	FPM_InitFixedPoint_m(0.75, u5p11_T),FPM_InitFixedPoint_m(0.75, u5p11_T)},
	{FPM_InitFixedPoint_m(1.0, u5p11_T),FPM_InitFixedPoint_m(1.0, u5p11_T),
	FPM_InitFixedPoint_m(1.0, u5p11_T),FPM_InitFixedPoint_m(1.0, u5p11_T),
	FPM_InitFixedPoint_m(1.0, u5p11_T),FPM_InitFixedPoint_m(1.0, u5p11_T),
	FPM_InitFixedPoint_m(1.0, u5p11_T),FPM_InitFixedPoint_m(1.0, u5p11_T),
	FPM_InitFixedPoint_m(1.0, u5p11_T),FPM_InitFixedPoint_m(1.0, u5p11_T),
	FPM_InitFixedPoint_m(1.0, u5p11_T),FPM_InitFixedPoint_m(1.0, u5p11_T),
	FPM_InitFixedPoint_m(1.0, u5p11_T)},{FPM_InitFixedPoint_m(1.25, u5p11_T),
	FPM_InitFixedPoint_m(1.25, u5p11_T),FPM_InitFixedPoint_m(1.25, u5p11_T),
	FPM_InitFixedPoint_m(1.25, u5p11_T),FPM_InitFixedPoint_m(1.25, u5p11_T),
	FPM_InitFixedPoint_m(1.25, u5p11_T),FPM_InitFixedPoint_m(1.25, u5p11_T),
	FPM_InitFixedPoint_m(1.25, u5p11_T),FPM_InitFixedPoint_m(1.25, u5p11_T),
	FPM_InitFixedPoint_m(1.25, u5p11_T),FPM_InitFixedPoint_m(1.25, u5p11_T),
	FPM_InitFixedPoint_m(1.25, u5p11_T),FPM_InitFixedPoint_m(1.25, u5p11_T)},
	{FPM_InitFixedPoint_m(1.5, u5p11_T),FPM_InitFixedPoint_m(1.5, u5p11_T),
	FPM_InitFixedPoint_m(1.5, u5p11_T),FPM_InitFixedPoint_m(1.5, u5p11_T),
	FPM_InitFixedPoint_m(1.5, u5p11_T),FPM_InitFixedPoint_m(1.5, u5p11_T),
	FPM_InitFixedPoint_m(1.5, u5p11_T),FPM_InitFixedPoint_m(1.5, u5p11_T),
	FPM_InitFixedPoint_m(1.5, u5p11_T),FPM_InitFixedPoint_m(1.5, u5p11_T),
	FPM_InitFixedPoint_m(1.5, u5p11_T),FPM_InitFixedPoint_m(1.5, u5p11_T),
	FPM_InitFixedPoint_m(1.5, u5p11_T)},{FPM_InitFixedPoint_m(2.0, u5p11_T),
	FPM_InitFixedPoint_m(2.0, u5p11_T),FPM_InitFixedPoint_m(2.0, u5p11_T),
	FPM_InitFixedPoint_m(2.0, u5p11_T),FPM_InitFixedPoint_m(2.0, u5p11_T),
	FPM_InitFixedPoint_m(2.0, u5p11_T),FPM_InitFixedPoint_m(2.0, u5p11_T),
	FPM_InitFixedPoint_m(2.0, u5p11_T),FPM_InitFixedPoint_m(2.0, u5p11_T),
	FPM_InitFixedPoint_m(2.0, u5p11_T),FPM_InitFixedPoint_m(2.0, u5p11_T),
	FPM_InitFixedPoint_m(2.0, u5p11_T),FPM_InitFixedPoint_m(2.0, u5p11_T)},
	{FPM_InitFixedPoint_m(4.0, u5p11_T),FPM_InitFixedPoint_m(4.0, u5p11_T),
	FPM_InitFixedPoint_m(4.0, u5p11_T),FPM_InitFixedPoint_m(4.0, u5p11_T),
	FPM_InitFixedPoint_m(4.0, u5p11_T),FPM_InitFixedPoint_m(4.0, u5p11_T),
	FPM_InitFixedPoint_m(4.0, u5p11_T),FPM_InitFixedPoint_m(4.0, u5p11_T),
	FPM_InitFixedPoint_m(4.0, u5p11_T),FPM_InitFixedPoint_m(4.0, u5p11_T),
	FPM_InitFixedPoint_m(4.0, u5p11_T),FPM_InitFixedPoint_m(4.0, u5p11_T),
	FPM_InitFixedPoint_m(4.0, u5p11_T)},{FPM_InitFixedPoint_m(6.0, u5p11_T),
	FPM_InitFixedPoint_m(6.0, u5p11_T),FPM_InitFixedPoint_m(6.0, u5p11_T),
	FPM_InitFixedPoint_m(6.0, u5p11_T),FPM_InitFixedPoint_m(6.0, u5p11_T),
	FPM_InitFixedPoint_m(6.0, u5p11_T),FPM_InitFixedPoint_m(6.0, u5p11_T),
	FPM_InitFixedPoint_m(6.0, u5p11_T),FPM_InitFixedPoint_m(6.0, u5p11_T),
	FPM_InitFixedPoint_m(6.0, u5p11_T),FPM_InitFixedPoint_m(6.0, u5p11_T),
	FPM_InitFixedPoint_m(6.0, u5p11_T),FPM_InitFixedPoint_m(6.0, u5p11_T)},
	{FPM_InitFixedPoint_m(7.5, u5p11_T),FPM_InitFixedPoint_m(7.5, u5p11_T),
	FPM_InitFixedPoint_m(7.5, u5p11_T),FPM_InitFixedPoint_m(7.5, u5p11_T),
	FPM_InitFixedPoint_m(7.5, u5p11_T),FPM_InitFixedPoint_m(7.5, u5p11_T),
	FPM_InitFixedPoint_m(7.5, u5p11_T),FPM_InitFixedPoint_m(7.5, u5p11_T),
	FPM_InitFixedPoint_m(7.5, u5p11_T),FPM_InitFixedPoint_m(7.5, u5p11_T),
	FPM_InitFixedPoint_m(7.5, u5p11_T),FPM_InitFixedPoint_m(7.5, u5p11_T),
	FPM_InitFixedPoint_m(7.5, u5p11_T)},{FPM_InitFixedPoint_m(8.0, u5p11_T),
	FPM_InitFixedPoint_m(8.0, u5p11_T),FPM_InitFixedPoint_m(8.0, u5p11_T),
	FPM_InitFixedPoint_m(8.0, u5p11_T),FPM_InitFixedPoint_m(8.0, u5p11_T),
	FPM_InitFixedPoint_m(8.0, u5p11_T),FPM_InitFixedPoint_m(8.0, u5p11_T),
	FPM_InitFixedPoint_m(8.0, u5p11_T),FPM_InitFixedPoint_m(8.0, u5p11_T),
	FPM_InitFixedPoint_m(8.0, u5p11_T),FPM_InitFixedPoint_m(8.0, u5p11_T),
	FPM_InitFixedPoint_m(8.0, u5p11_T),FPM_InitFixedPoint_m(8.0, u5p11_T)}}, {{FPM_InitFixedPoint_m(0.0, u4p12_T),
	 FPM_InitFixedPoint_m(0.25, u4p12_T), FPM_InitFixedPoint_m(0.5, u4p12_T),
	 FPM_InitFixedPoint_m(0.75, u4p12_T),
	 FPM_InitFixedPoint_m(1.1, u4p12_T)},
	 {FPM_InitFixedPoint_m(0.0, u4p12_T),
	 FPM_InitFixedPoint_m(0.25, u4p12_T), FPM_InitFixedPoint_m(0.5, u4p12_T),
	 FPM_InitFixedPoint_m(0.75, u4p12_T),
	 FPM_InitFixedPoint_m(1.1, u4p12_T)},
	 {FPM_InitFixedPoint_m(0.0, u4p12_T),
	 FPM_InitFixedPoint_m(0.25, u4p12_T), FPM_InitFixedPoint_m(0.5, u4p12_T),
	 FPM_InitFixedPoint_m(0.75, u4p12_T),
	 FPM_InitFixedPoint_m(1.1, u4p12_T)},
	 {FPM_InitFixedPoint_m(0.0, u4p12_T),
	 FPM_InitFixedPoint_m(0.25, u4p12_T), FPM_InitFixedPoint_m(0.5, u4p12_T),
	 FPM_InitFixedPoint_m(0.75, u4p12_T),
	 FPM_InitFixedPoint_m(1.1, u4p12_T)},
	 {FPM_InitFixedPoint_m(0.0, u4p12_T),
	 FPM_InitFixedPoint_m(0.25, u4p12_T), FPM_InitFixedPoint_m(0.5, u4p12_T),
	 FPM_InitFixedPoint_m(0.75, u4p12_T),
	 FPM_InitFixedPoint_m(1.1, u4p12_T)},
	 {FPM_InitFixedPoint_m(0.0, u4p12_T),
	 FPM_InitFixedPoint_m(0.25, u4p12_T), FPM_InitFixedPoint_m(0.5, u4p12_T),
	 FPM_InitFixedPoint_m(0.75, u4p12_T),
	 FPM_InitFixedPoint_m(1.1, u4p12_T)},
	 {FPM_InitFixedPoint_m(0.0, u4p12_T),
	 FPM_InitFixedPoint_m(0.25, u4p12_T), FPM_InitFixedPoint_m(0.5, u4p12_T),
	 FPM_InitFixedPoint_m(0.75, u4p12_T),
	 FPM_InitFixedPoint_m(1.1, u4p12_T)},
	 {FPM_InitFixedPoint_m(0.0, u4p12_T),
	 FPM_InitFixedPoint_m(0.25, u4p12_T), FPM_InitFixedPoint_m(0.5, u4p12_T),
	 FPM_InitFixedPoint_m(0.75, u4p12_T),
	 FPM_InitFixedPoint_m(1.1, u4p12_T)},
	 {FPM_InitFixedPoint_m(0.0, u4p12_T),
	 FPM_InitFixedPoint_m(0.25, u4p12_T), FPM_InitFixedPoint_m(0.5, u4p12_T),
	 FPM_InitFixedPoint_m(0.75, u4p12_T),
	 FPM_InitFixedPoint_m(1.1, u4p12_T)},
	 {FPM_InitFixedPoint_m(0.0, u4p12_T),
	 FPM_InitFixedPoint_m(0.25, u4p12_T), FPM_InitFixedPoint_m(0.5, u4p12_T),
	 FPM_InitFixedPoint_m(0.75, u4p12_T),
	 FPM_InitFixedPoint_m(1.1, u4p12_T)},
	 {FPM_InitFixedPoint_m(0.0, u4p12_T),
	 FPM_InitFixedPoint_m(0.25, u4p12_T), FPM_InitFixedPoint_m(0.5, u4p12_T),
	 FPM_InitFixedPoint_m(0.75, u4p12_T),
	 FPM_InitFixedPoint_m(1.1, u4p12_T)},
	 {FPM_InitFixedPoint_m(0.0, u4p12_T),
	 FPM_InitFixedPoint_m(0.25, u4p12_T), FPM_InitFixedPoint_m(0.5, u4p12_T),
	 FPM_InitFixedPoint_m(0.75, u4p12_T),
	 FPM_InitFixedPoint_m(1.1, u4p12_T)}}, {{FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T)},
	 {FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T)},
	 {FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T)},
	 {FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T)},
	 {FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T)},
	 {FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T)},
	 {FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T)},
	 {FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T)},
	 {FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T)},
	 {FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T)},
	 {FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T)},
	 {FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T)}}, { FPM_InitFixedPoint_m(0.0, u4p12_T),
	 FPM_InitFixedPoint_m(0.0, u4p12_T), FPM_InitFixedPoint_m(0.0, u4p12_T),
	 FPM_InitFixedPoint_m(0.0, u4p12_T), FPM_InitFixedPoint_m(0.0, u4p12_T),
	 FPM_InitFixedPoint_m(0.0, u4p12_T), FPM_InitFixedPoint_m(0.0, u4p12_T),
	 FPM_InitFixedPoint_m(0.0, u4p12_T), FPM_InitFixedPoint_m(0.0, u4p12_T),
	 FPM_InitFixedPoint_m(0.0, u4p12_T), FPM_InitFixedPoint_m(0.0, u4p12_T),
	 FPM_InitFixedPoint_m(0.0, u4p12_T) }, { FPM_InitFixedPoint_m(0.0, u9p7_T), FPM_InitFixedPoint_m(0.0, u9p7_T),
	 FPM_InitFixedPoint_m(0.0, u9p7_T), FPM_InitFixedPoint_m(0.0, u9p7_T),
	 FPM_InitFixedPoint_m(0.0, u9p7_T), FPM_InitFixedPoint_m(0.0, u9p7_T),
	 FPM_InitFixedPoint_m(0.0, u9p7_T), FPM_InitFixedPoint_m(0.0, u9p7_T),
	 FPM_InitFixedPoint_m(0.0, u9p7_T), FPM_InitFixedPoint_m(0.0, u9p7_T),
	 FPM_InitFixedPoint_m(0.0, u9p7_T), FPM_InitFixedPoint_m(0.0, u9p7_T) }, { FPM_InitFixedPoint_m(0.0, u8p8_T), FPM_InitFixedPoint_m(0.2, u8p8_T),
	 FPM_InitFixedPoint_m(0.4, u8p8_T), FPM_InitFixedPoint_m(0.6, u8p8_T),
	 FPM_InitFixedPoint_m(0.8, u8p8_T), FPM_InitFixedPoint_m(1.0, u8p8_T) }, { FPM_InitFixedPoint_m(0.0, u2p14_T),
	 FPM_InitFixedPoint_m(0.0, u2p14_T), FPM_InitFixedPoint_m(0.0, u2p14_T),
	 FPM_InitFixedPoint_m(0.0, u2p14_T), FPM_InitFixedPoint_m(0.0, u2p14_T),
	 FPM_InitFixedPoint_m(0.0, u2p14_T) }, {{FPM_InitFixedPoint_m(0.0, u9p7_T),FPM_InitFixedPoint_m(0.0, u9p7_T),
	FPM_InitFixedPoint_m(0.0, u9p7_T),FPM_InitFixedPoint_m(0.0, u9p7_T),
	FPM_InitFixedPoint_m(0.0, u9p7_T),FPM_InitFixedPoint_m(0.0, u9p7_T),
	FPM_InitFixedPoint_m(0.0, u9p7_T),FPM_InitFixedPoint_m(0.0, u9p7_T),
	FPM_InitFixedPoint_m(0.0, u9p7_T),FPM_InitFixedPoint_m(0.0, u9p7_T),
	FPM_InitFixedPoint_m(0.0, u9p7_T),FPM_InitFixedPoint_m(0.0, u9p7_T)},
	{FPM_InitFixedPoint_m(0.0, u9p7_T),FPM_InitFixedPoint_m(0.0, u9p7_T),
	FPM_InitFixedPoint_m(0.0, u9p7_T),FPM_InitFixedPoint_m(0.0, u9p7_T),
	FPM_InitFixedPoint_m(0.0, u9p7_T),FPM_InitFixedPoint_m(0.0, u9p7_T),
	FPM_InitFixedPoint_m(0.0, u9p7_T),FPM_InitFixedPoint_m(0.0, u9p7_T),
	FPM_InitFixedPoint_m(0.0, u9p7_T),FPM_InitFixedPoint_m(0.0, u9p7_T),
	FPM_InitFixedPoint_m(0.0, u9p7_T),FPM_InitFixedPoint_m(0.0, u9p7_T)}}, { FPM_InitFixedPoint_m(15.0, u9p7_T),
	 FPM_InitFixedPoint_m(15.0, u9p7_T), FPM_InitFixedPoint_m(15.0, u9p7_T),
	 FPM_InitFixedPoint_m(15.0, u9p7_T), FPM_InitFixedPoint_m(15.0, u9p7_T),
	 FPM_InitFixedPoint_m(15.0, u9p7_T), FPM_InitFixedPoint_m(15.0, u9p7_T),
	 FPM_InitFixedPoint_m(15.0, u9p7_T), FPM_InitFixedPoint_m(15.0, u9p7_T),
	 FPM_InitFixedPoint_m(15.0, u9p7_T), FPM_InitFixedPoint_m(15.0, u9p7_T),
	 FPM_InitFixedPoint_m(15.0, u9p7_T) }, { FPM_InitFixedPoint_m(0.0, u9p7_T), FPM_InitFixedPoint_m(1.0, u9p7_T),
	 FPM_InitFixedPoint_m(2.0, u9p7_T), FPM_InitFixedPoint_m(3.0, u9p7_T),
	 FPM_InitFixedPoint_m(4.0, u9p7_T) }, { FPM_InitFixedPoint_m(1.0, u2p14_T),
	 FPM_InitFixedPoint_m(1.0, u2p14_T), FPM_InitFixedPoint_m(1.0, u2p14_T),
	 FPM_InitFixedPoint_m(1.0, u2p14_T), FPM_InitFixedPoint_m(1.0, u2p14_T) }, { FPM_InitFixedPoint_m(0.0, u8p8_T), FPM_InitFixedPoint_m(0.1, u8p8_T),
	 FPM_InitFixedPoint_m(0.2, u8p8_T), FPM_InitFixedPoint_m(0.4, u8p8_T),
	 FPM_InitFixedPoint_m(0.6, u8p8_T), FPM_InitFixedPoint_m(0.8, u8p8_T),
	 FPM_InitFixedPoint_m(0.9, u8p8_T), FPM_InitFixedPoint_m(1.0, u8p8_T) }, { FPM_InitFixedPoint_m(0.0, u9p7_T),FPM_InitFixedPoint_m(0.0, u9p7_T),
	FPM_InitFixedPoint_m(0.0, u9p7_T),FPM_InitFixedPoint_m(0.0, u9p7_T),
	FPM_InitFixedPoint_m(0.0, u9p7_T),FPM_InitFixedPoint_m(0.0, u9p7_T),
	FPM_InitFixedPoint_m(0.0, u9p7_T),FPM_InitFixedPoint_m(0.0, u9p7_T) }, { FPM_InitFixedPoint_m(0.0, u9p7_T),FPM_InitFixedPoint_m(3.0, u9p7_T),
	FPM_InitFixedPoint_m(7.0, u9p7_T),FPM_InitFixedPoint_m(12.0, u9p7_T),
	FPM_InitFixedPoint_m(20.0, u9p7_T),FPM_InitFixedPoint_m(30.0, u9p7_T),
	FPM_InitFixedPoint_m(45.0, u9p7_T),FPM_InitFixedPoint_m(60.0, u9p7_T),
	FPM_InitFixedPoint_m(80.0, u9p7_T) }, {{FPM_InitFixedPoint_m(0.0, u12p4_T),FPM_InitFixedPoint_m(0.5, u12p4_T),
	FPM_InitFixedPoint_m(1.0, u12p4_T),FPM_InitFixedPoint_m(5.0, u12p4_T),
	FPM_InitFixedPoint_m(10.0, u12p4_T),FPM_InitFixedPoint_m(20.0, u12p4_T),
	FPM_InitFixedPoint_m(30.0, u12p4_T),FPM_InitFixedPoint_m(45.0, u12p4_T),
	FPM_InitFixedPoint_m(60.0, u12p4_T),FPM_InitFixedPoint_m(90.0, u12p4_T),
	FPM_InitFixedPoint_m(120.0, u12p4_T),
	FPM_InitFixedPoint_m(180.0, u12p4_T),
	FPM_InitFixedPoint_m(270.0, u12p4_T),
	FPM_InitFixedPoint_m(360.0, u12p4_T),
	FPM_InitFixedPoint_m(450.0, u12p4_T),
	FPM_InitFixedPoint_m(540.0, u12p4_T)},
	{FPM_InitFixedPoint_m(0.0, u12p4_T),FPM_InitFixedPoint_m(0.5, u12p4_T),
	FPM_InitFixedPoint_m(1.0, u12p4_T),FPM_InitFixedPoint_m(5.0, u12p4_T),
	FPM_InitFixedPoint_m(10.0, u12p4_T),FPM_InitFixedPoint_m(20.0, u12p4_T),
	FPM_InitFixedPoint_m(30.0, u12p4_T),FPM_InitFixedPoint_m(45.0, u12p4_T),
	FPM_InitFixedPoint_m(60.0, u12p4_T),FPM_InitFixedPoint_m(90.0, u12p4_T),
	FPM_InitFixedPoint_m(120.0, u12p4_T),
	FPM_InitFixedPoint_m(180.0, u12p4_T),
	FPM_InitFixedPoint_m(270.0, u12p4_T),
	FPM_InitFixedPoint_m(360.0, u12p4_T),
	FPM_InitFixedPoint_m(450.0, u12p4_T),
	FPM_InitFixedPoint_m(540.0, u12p4_T)},
	{FPM_InitFixedPoint_m(0.0, u12p4_T),FPM_InitFixedPoint_m(0.5, u12p4_T),
	FPM_InitFixedPoint_m(1.0, u12p4_T),FPM_InitFixedPoint_m(5.0, u12p4_T),
	FPM_InitFixedPoint_m(10.0, u12p4_T),FPM_InitFixedPoint_m(20.0, u12p4_T),
	FPM_InitFixedPoint_m(30.0, u12p4_T),FPM_InitFixedPoint_m(45.0, u12p4_T),
	FPM_InitFixedPoint_m(60.0, u12p4_T),FPM_InitFixedPoint_m(90.0, u12p4_T),
	FPM_InitFixedPoint_m(120.0, u12p4_T),
	FPM_InitFixedPoint_m(180.0, u12p4_T),
	FPM_InitFixedPoint_m(270.0, u12p4_T),
	FPM_InitFixedPoint_m(360.0, u12p4_T),
	FPM_InitFixedPoint_m(450.0, u12p4_T),
	FPM_InitFixedPoint_m(540.0, u12p4_T)},
	{FPM_InitFixedPoint_m(0.0, u12p4_T),FPM_InitFixedPoint_m(0.5, u12p4_T),
	FPM_InitFixedPoint_m(1.0, u12p4_T),FPM_InitFixedPoint_m(5.0, u12p4_T),
	FPM_InitFixedPoint_m(10.0, u12p4_T),FPM_InitFixedPoint_m(20.0, u12p4_T),
	FPM_InitFixedPoint_m(30.0, u12p4_T),FPM_InitFixedPoint_m(45.0, u12p4_T),
	FPM_InitFixedPoint_m(60.0, u12p4_T),FPM_InitFixedPoint_m(90.0, u12p4_T),
	FPM_InitFixedPoint_m(120.0, u12p4_T),
	FPM_InitFixedPoint_m(180.0, u12p4_T),
	FPM_InitFixedPoint_m(270.0, u12p4_T),
	FPM_InitFixedPoint_m(360.0, u12p4_T),
	FPM_InitFixedPoint_m(450.0, u12p4_T),
	FPM_InitFixedPoint_m(540.0, u12p4_T)},
	{FPM_InitFixedPoint_m(0.0, u12p4_T),FPM_InitFixedPoint_m(0.5, u12p4_T),
	FPM_InitFixedPoint_m(1.0, u12p4_T),FPM_InitFixedPoint_m(5.0, u12p4_T),
	FPM_InitFixedPoint_m(10.0, u12p4_T),FPM_InitFixedPoint_m(20.0, u12p4_T),
	FPM_InitFixedPoint_m(30.0, u12p4_T),FPM_InitFixedPoint_m(45.0, u12p4_T),
	FPM_InitFixedPoint_m(60.0, u12p4_T),FPM_InitFixedPoint_m(90.0, u12p4_T),
	FPM_InitFixedPoint_m(120.0, u12p4_T),
	FPM_InitFixedPoint_m(180.0, u12p4_T),
	FPM_InitFixedPoint_m(270.0, u12p4_T),
	FPM_InitFixedPoint_m(360.0, u12p4_T),
	FPM_InitFixedPoint_m(450.0, u12p4_T),
	FPM_InitFixedPoint_m(540.0, u12p4_T)},
	{FPM_InitFixedPoint_m(0.0, u12p4_T),FPM_InitFixedPoint_m(0.5, u12p4_T),
	FPM_InitFixedPoint_m(1.0, u12p4_T),FPM_InitFixedPoint_m(5.0, u12p4_T),
	FPM_InitFixedPoint_m(10.0, u12p4_T),FPM_InitFixedPoint_m(20.0, u12p4_T),
	FPM_InitFixedPoint_m(30.0, u12p4_T),FPM_InitFixedPoint_m(45.0, u12p4_T),
	FPM_InitFixedPoint_m(60.0, u12p4_T),FPM_InitFixedPoint_m(90.0, u12p4_T),
	FPM_InitFixedPoint_m(120.0, u12p4_T),
	FPM_InitFixedPoint_m(180.0, u12p4_T),
	FPM_InitFixedPoint_m(270.0, u12p4_T),
	FPM_InitFixedPoint_m(360.0, u12p4_T),
	FPM_InitFixedPoint_m(450.0, u12p4_T),
	FPM_InitFixedPoint_m(540.0, u12p4_T)},
	{FPM_InitFixedPoint_m(0.0, u12p4_T),FPM_InitFixedPoint_m(0.5, u12p4_T),
	FPM_InitFixedPoint_m(1.0, u12p4_T),FPM_InitFixedPoint_m(5.0, u12p4_T),
	FPM_InitFixedPoint_m(10.0, u12p4_T),FPM_InitFixedPoint_m(20.0, u12p4_T),
	FPM_InitFixedPoint_m(30.0, u12p4_T),FPM_InitFixedPoint_m(45.0, u12p4_T),
	FPM_InitFixedPoint_m(60.0, u12p4_T),FPM_InitFixedPoint_m(90.0, u12p4_T),
	FPM_InitFixedPoint_m(120.0, u12p4_T),
	FPM_InitFixedPoint_m(180.0, u12p4_T),
	FPM_InitFixedPoint_m(270.0, u12p4_T),
	FPM_InitFixedPoint_m(360.0, u12p4_T),
	FPM_InitFixedPoint_m(450.0, u12p4_T),
	FPM_InitFixedPoint_m(540.0, u12p4_T)},
	{FPM_InitFixedPoint_m(0.0, u12p4_T),FPM_InitFixedPoint_m(0.5, u12p4_T),
	FPM_InitFixedPoint_m(1.0, u12p4_T),FPM_InitFixedPoint_m(5.0, u12p4_T),
	FPM_InitFixedPoint_m(10.0, u12p4_T),FPM_InitFixedPoint_m(20.0, u12p4_T),
	FPM_InitFixedPoint_m(30.0, u12p4_T),FPM_InitFixedPoint_m(45.0, u12p4_T),
	FPM_InitFixedPoint_m(60.0, u12p4_T),FPM_InitFixedPoint_m(90.0, u12p4_T),
	FPM_InitFixedPoint_m(120.0, u12p4_T),
	FPM_InitFixedPoint_m(180.0, u12p4_T),
	FPM_InitFixedPoint_m(270.0, u12p4_T),
	FPM_InitFixedPoint_m(360.0, u12p4_T),
	FPM_InitFixedPoint_m(450.0, u12p4_T),
	FPM_InitFixedPoint_m(540.0, u12p4_T)},
	{FPM_InitFixedPoint_m(0.0, u12p4_T),FPM_InitFixedPoint_m(0.5, u12p4_T),
	FPM_InitFixedPoint_m(1.0, u12p4_T),FPM_InitFixedPoint_m(5.0, u12p4_T),
	FPM_InitFixedPoint_m(10.0, u12p4_T),FPM_InitFixedPoint_m(20.0, u12p4_T),
	FPM_InitFixedPoint_m(30.0, u12p4_T),FPM_InitFixedPoint_m(45.0, u12p4_T),
	FPM_InitFixedPoint_m(60.0, u12p4_T),FPM_InitFixedPoint_m(90.0, u12p4_T),
	FPM_InitFixedPoint_m(120.0, u12p4_T),
	FPM_InitFixedPoint_m(180.0, u12p4_T),
	FPM_InitFixedPoint_m(270.0, u12p4_T),
	FPM_InitFixedPoint_m(360.0, u12p4_T),
	FPM_InitFixedPoint_m(450.0, u12p4_T),
	FPM_InitFixedPoint_m(540.0, u12p4_T)}}, {{FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T)},
	 {FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T)},
	{FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T)},
	{FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T)},
	{FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T)},
	{FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T)},
	{FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T)},
	{FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T)},
	{FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T)}}, {{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.5, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(2.0, u8p8_T),
	FPM_InitFixedPoint_m(3.0, u8p8_T),FPM_InitFixedPoint_m(4.0, u8p8_T),
	FPM_InitFixedPoint_m(5.0, u8p8_T),FPM_InitFixedPoint_m(10.0, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.5, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(2.0, u8p8_T),
	FPM_InitFixedPoint_m(3.0, u8p8_T),FPM_InitFixedPoint_m(4.0, u8p8_T),
	FPM_InitFixedPoint_m(5.0, u8p8_T),FPM_InitFixedPoint_m(10.0, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.5, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(2.0, u8p8_T),
	FPM_InitFixedPoint_m(3.0, u8p8_T),FPM_InitFixedPoint_m(4.0, u8p8_T),
	FPM_InitFixedPoint_m(5.0, u8p8_T),FPM_InitFixedPoint_m(10.0, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.5, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(2.0, u8p8_T),
	FPM_InitFixedPoint_m(3.0, u8p8_T),FPM_InitFixedPoint_m(4.0, u8p8_T),
	FPM_InitFixedPoint_m(5.0, u8p8_T),FPM_InitFixedPoint_m(10.0, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.5, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(2.0, u8p8_T),
	FPM_InitFixedPoint_m(3.0, u8p8_T),FPM_InitFixedPoint_m(4.0, u8p8_T),
	FPM_InitFixedPoint_m(5.0, u8p8_T),FPM_InitFixedPoint_m(10.0, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.5, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(2.0, u8p8_T),
	FPM_InitFixedPoint_m(3.0, u8p8_T),FPM_InitFixedPoint_m(4.0, u8p8_T),
	FPM_InitFixedPoint_m(5.0, u8p8_T),FPM_InitFixedPoint_m(10.0, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.5, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(2.0, u8p8_T),
	FPM_InitFixedPoint_m(3.0, u8p8_T),FPM_InitFixedPoint_m(4.0, u8p8_T),
	FPM_InitFixedPoint_m(5.0, u8p8_T),FPM_InitFixedPoint_m(10.0, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.5, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(2.0, u8p8_T),
	FPM_InitFixedPoint_m(3.0, u8p8_T),FPM_InitFixedPoint_m(4.0, u8p8_T),
	FPM_InitFixedPoint_m(5.0, u8p8_T),FPM_InitFixedPoint_m(10.0, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.5, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(2.0, u8p8_T),
	FPM_InitFixedPoint_m(3.0, u8p8_T),FPM_InitFixedPoint_m(4.0, u8p8_T),
	FPM_InitFixedPoint_m(5.0, u8p8_T),FPM_InitFixedPoint_m(10.0, u8p8_T)}}, {{FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T)},
	{FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T)},
	{FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T)},
	{FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T)},
	{FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T)},
	{FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T)},
	{FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T)},
	{FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T)},
	{FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T)}}, {{FPM_InitFixedPoint_m(0.0, u7p9_T),FPM_InitFixedPoint_m(40.0, u7p9_T),
	FPM_InitFixedPoint_m(60.0, u7p9_T),FPM_InitFixedPoint_m(80.0, u7p9_T)},
	{FPM_InitFixedPoint_m(0.0, u7p9_T),FPM_InitFixedPoint_m(40.0, u7p9_T),
	FPM_InitFixedPoint_m(60.0, u7p9_T),FPM_InitFixedPoint_m(80.0, u7p9_T)},
	{FPM_InitFixedPoint_m(0.0, u7p9_T),FPM_InitFixedPoint_m(40.0, u7p9_T),
	FPM_InitFixedPoint_m(60.0, u7p9_T),FPM_InitFixedPoint_m(80.0, u7p9_T)},
	{FPM_InitFixedPoint_m(0.0, u7p9_T),FPM_InitFixedPoint_m(40.0, u7p9_T),
	FPM_InitFixedPoint_m(60.0, u7p9_T),FPM_InitFixedPoint_m(80.0, u7p9_T)},
	{FPM_InitFixedPoint_m(0.0, u7p9_T),FPM_InitFixedPoint_m(40.0, u7p9_T),
	FPM_InitFixedPoint_m(60.0, u7p9_T),FPM_InitFixedPoint_m(80.0, u7p9_T)},
	{FPM_InitFixedPoint_m(0.0, u7p9_T),FPM_InitFixedPoint_m(40.0, u7p9_T),
	FPM_InitFixedPoint_m(60.0, u7p9_T),FPM_InitFixedPoint_m(80.0, u7p9_T)},
	{FPM_InitFixedPoint_m(0.0, u7p9_T),FPM_InitFixedPoint_m(40.0, u7p9_T),
	FPM_InitFixedPoint_m(60.0, u7p9_T),FPM_InitFixedPoint_m(80.0, u7p9_T)},
	{FPM_InitFixedPoint_m(0.0, u7p9_T),FPM_InitFixedPoint_m(40.0, u7p9_T),
	FPM_InitFixedPoint_m(60.0, u7p9_T),FPM_InitFixedPoint_m(80.0, u7p9_T)},
	{FPM_InitFixedPoint_m(0.0, u7p9_T),FPM_InitFixedPoint_m(40.0, u7p9_T),
	FPM_InitFixedPoint_m(60.0, u7p9_T),FPM_InitFixedPoint_m(80.0, u7p9_T)}}, {{FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T)},
	{FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T)},
	{FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T)},
	{FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T)},
	{FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T)},
	{FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T)},
	{FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T)},
	{FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T)},
	{FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T)}}, FALSE, {FPM_InitFixedPoint_m(10.0, u8p8_T),FPM_InitFixedPoint_m(40.0, u8p8_T),
	FPM_InitFixedPoint_m(70.0, u8p8_T),FPM_InitFixedPoint_m(100.0, u8p8_T),
	FPM_InitFixedPoint_m(130.0, u8p8_T),FPM_InitFixedPoint_m(180.0, u8p8_T)}, {FPM_InitFixedPoint_m(12.0, u4p12_T),
	FPM_InitFixedPoint_m(11.0, u4p12_T),FPM_InitFixedPoint_m(9.0, u4p12_T),
	FPM_InitFixedPoint_m(7.0, u4p12_T),FPM_InitFixedPoint_m(5.0, u4p12_T),
	FPM_InitFixedPoint_m(3.0, u4p12_T)}, 0.0f };

#pragma DATA_SECTION(k_TunSet0Per3_Cnt_Str, ".TunCal0Per3");
CONST(TUNING_P_Str, CAL_CONST)k_TunSet0Per3_Cnt_Str = { 1.0f, {{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.0234375, s4p11_T),
	FPM_InitFixedPoint_m(0.03515625, s4p11_T),
	FPM_InitFixedPoint_m(0.05078125, s4p11_T),
	FPM_InitFixedPoint_m(0.0703125, s4p11_T),
	FPM_InitFixedPoint_m(0.09375, s4p11_T),
	FPM_InitFixedPoint_m(0.12109375, s4p11_T),
	FPM_InitFixedPoint_m(0.15234375, s4p11_T),
	FPM_InitFixedPoint_m(0.18359375, s4p11_T),
	FPM_InitFixedPoint_m(0.21875, s4p11_T),
	FPM_InitFixedPoint_m(0.26171875, s4p11_T),
	FPM_InitFixedPoint_m(0.30078125, s4p11_T),
	FPM_InitFixedPoint_m(0.34765625, s4p11_T),
	FPM_InitFixedPoint_m(0.3984375, s4p11_T),
	FPM_InitFixedPoint_m(0.44921875, s4p11_T),
	FPM_InitFixedPoint_m(0.5078125, s4p11_T),
	FPM_InitFixedPoint_m(0.56640625, s4p11_T),
	FPM_InitFixedPoint_m(0.62890625, s4p11_T),
	FPM_InitFixedPoint_m(0.69140625, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.03125, s4p11_T),
	FPM_InitFixedPoint_m(0.05078125, s4p11_T),
	FPM_InitFixedPoint_m(0.07421875, s4p11_T),
	FPM_InitFixedPoint_m(0.10546875, s4p11_T),
	FPM_InitFixedPoint_m(0.140625, s4p11_T),
	FPM_InitFixedPoint_m(0.18359375, s4p11_T),
	FPM_InitFixedPoint_m(0.23046875, s4p11_T),
	FPM_InitFixedPoint_m(0.28125, s4p11_T),
	FPM_InitFixedPoint_m(0.33984375, s4p11_T),
	FPM_InitFixedPoint_m(0.40234375, s4p11_T),
	FPM_InitFixedPoint_m(0.47265625, s4p11_T),
	FPM_InitFixedPoint_m(0.546875, s4p11_T),
	FPM_InitFixedPoint_m(0.625, s4p11_T),
	FPM_InitFixedPoint_m(0.7109375, s4p11_T),
	FPM_InitFixedPoint_m(0.80078125, s4p11_T),
	FPM_InitFixedPoint_m(0.89453125, s4p11_T),
	FPM_InitFixedPoint_m(0.99609375, s4p11_T),
	FPM_InitFixedPoint_m(1.10546875, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.015625, s4p11_T),
	FPM_InitFixedPoint_m(0.0390625, s4p11_T),
	FPM_InitFixedPoint_m(0.06640625, s4p11_T),
	FPM_InitFixedPoint_m(0.09765625, s4p11_T),
	FPM_InitFixedPoint_m(0.1328125, s4p11_T),
	FPM_InitFixedPoint_m(0.17578125, s4p11_T),
	FPM_InitFixedPoint_m(0.21875, s4p11_T),
	FPM_InitFixedPoint_m(0.26953125, s4p11_T),
	FPM_InitFixedPoint_m(0.328125, s4p11_T),
	FPM_InitFixedPoint_m(0.38671875, s4p11_T),
	FPM_InitFixedPoint_m(0.453125, s4p11_T),
	FPM_InitFixedPoint_m(0.5234375, s4p11_T),
	FPM_InitFixedPoint_m(0.59765625, s4p11_T),
	FPM_InitFixedPoint_m(0.6796875, s4p11_T),
	FPM_InitFixedPoint_m(0.76171875, s4p11_T),
	FPM_InitFixedPoint_m(0.8515625, s4p11_T),
	FPM_InitFixedPoint_m(0.94921875, s4p11_T),
	FPM_InitFixedPoint_m(1.046875, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.015625, s4p11_T),
	FPM_InitFixedPoint_m(0.03515625, s4p11_T),
	FPM_InitFixedPoint_m(0.0625, s4p11_T),
	FPM_InitFixedPoint_m(0.0859375, s4p11_T),
	FPM_InitFixedPoint_m(0.1171875, s4p11_T),
	FPM_InitFixedPoint_m(0.15234375, s4p11_T),
	FPM_InitFixedPoint_m(0.1875, s4p11_T),
	FPM_InitFixedPoint_m(0.23046875, s4p11_T),
	FPM_InitFixedPoint_m(0.2734375, s4p11_T),
	FPM_InitFixedPoint_m(0.3203125, s4p11_T),
	FPM_InitFixedPoint_m(0.37109375, s4p11_T),
	FPM_InitFixedPoint_m(0.42578125, s4p11_T),
	FPM_InitFixedPoint_m(0.48046875, s4p11_T),
	FPM_InitFixedPoint_m(0.54296875, s4p11_T),
	FPM_InitFixedPoint_m(0.60546875, s4p11_T),
	FPM_InitFixedPoint_m(0.671875, s4p11_T),
	FPM_InitFixedPoint_m(0.7421875, s4p11_T),
	FPM_InitFixedPoint_m(0.81640625, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.015625, s4p11_T),
	FPM_InitFixedPoint_m(0.03515625, s4p11_T),
	FPM_InitFixedPoint_m(0.05859375, s4p11_T),
	FPM_InitFixedPoint_m(0.0859375, s4p11_T),
	FPM_InitFixedPoint_m(0.11328125, s4p11_T),
	FPM_InitFixedPoint_m(0.14453125, s4p11_T),
	FPM_InitFixedPoint_m(0.17578125, s4p11_T),
	FPM_InitFixedPoint_m(0.21484375, s4p11_T),
	FPM_InitFixedPoint_m(0.25390625, s4p11_T),
	FPM_InitFixedPoint_m(0.29296875, s4p11_T),
	FPM_InitFixedPoint_m(0.33984375, s4p11_T),
	FPM_InitFixedPoint_m(0.38671875, s4p11_T),
	FPM_InitFixedPoint_m(0.4375, s4p11_T),
	FPM_InitFixedPoint_m(0.48828125, s4p11_T),
	FPM_InitFixedPoint_m(0.546875, s4p11_T),
	FPM_InitFixedPoint_m(0.60546875, s4p11_T),
	FPM_InitFixedPoint_m(0.66796875, s4p11_T),
	FPM_InitFixedPoint_m(0.73046875, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.01, s4p11_T),
	FPM_InitFixedPoint_m(0.02, s4p11_T),FPM_InitFixedPoint_m(0.035, s4p11_T),
	FPM_InitFixedPoint_m(0.06, s4p11_T),FPM_InitFixedPoint_m(0.08, s4p11_T),
	FPM_InitFixedPoint_m(0.12, s4p11_T),FPM_InitFixedPoint_m(0.16, s4p11_T),
	FPM_InitFixedPoint_m(0.2, s4p11_T),FPM_InitFixedPoint_m(0.24, s4p11_T),
	FPM_InitFixedPoint_m(0.29, s4p11_T),FPM_InitFixedPoint_m(0.35, s4p11_T),
	FPM_InitFixedPoint_m(0.39, s4p11_T),FPM_InitFixedPoint_m(0.46, s4p11_T),
	FPM_InitFixedPoint_m(0.51171875, s4p11_T),
	FPM_InitFixedPoint_m(0.5625, s4p11_T),
	FPM_InitFixedPoint_m(0.62109375, s4p11_T),
	FPM_InitFixedPoint_m(0.6796875, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.01, s4p11_T),
	FPM_InitFixedPoint_m(0.02, s4p11_T),FPM_InitFixedPoint_m(0.035, s4p11_T),
	FPM_InitFixedPoint_m(0.06, s4p11_T),FPM_InitFixedPoint_m(0.08, s4p11_T),
	FPM_InitFixedPoint_m(0.1, s4p11_T),FPM_InitFixedPoint_m(0.14, s4p11_T),
	FPM_InitFixedPoint_m(0.18, s4p11_T),FPM_InitFixedPoint_m(0.21, s4p11_T),
	FPM_InitFixedPoint_m(0.26, s4p11_T),FPM_InitFixedPoint_m(0.3, s4p11_T),
	FPM_InitFixedPoint_m(0.34, s4p11_T),
	FPM_InitFixedPoint_m(0.3984375, s4p11_T),
	FPM_InitFixedPoint_m(0.4375, s4p11_T),
	FPM_InitFixedPoint_m(0.48046875, s4p11_T),
	FPM_InitFixedPoint_m(0.52734375, s4p11_T),
	FPM_InitFixedPoint_m(0.57421875, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.01, s4p11_T),FPM_InitFixedPoint_m(0.03, s4p11_T),
	FPM_InitFixedPoint_m(0.05, s4p11_T),FPM_InitFixedPoint_m(0.07, s4p11_T),
	FPM_InitFixedPoint_m(0.095, s4p11_T),FPM_InitFixedPoint_m(0.13, s4p11_T),
	FPM_InitFixedPoint_m(0.16, s4p11_T),FPM_InitFixedPoint_m(0.2, s4p11_T),
	FPM_InitFixedPoint_m(0.24, s4p11_T),FPM_InitFixedPoint_m(0.28, s4p11_T),
	FPM_InitFixedPoint_m(0.32, s4p11_T),
	FPM_InitFixedPoint_m(0.3671875, s4p11_T),
	FPM_InitFixedPoint_m(0.40625, s4p11_T),
	FPM_InitFixedPoint_m(0.4453125, s4p11_T),
	FPM_InitFixedPoint_m(0.48828125, s4p11_T),
	FPM_InitFixedPoint_m(0.53125, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.01, s4p11_T),FPM_InitFixedPoint_m(0.015, s4p11_T),
	FPM_InitFixedPoint_m(0.03, s4p11_T),FPM_InitFixedPoint_m(0.05, s4p11_T),
	FPM_InitFixedPoint_m(0.07, s4p11_T),FPM_InitFixedPoint_m(0.1, s4p11_T),
	FPM_InitFixedPoint_m(0.135, s4p11_T),FPM_InitFixedPoint_m(0.16, s4p11_T),
	FPM_InitFixedPoint_m(0.2, s4p11_T),FPM_InitFixedPoint_m(0.23, s4p11_T),
	FPM_InitFixedPoint_m(0.26, s4p11_T),FPM_InitFixedPoint_m(0.31, s4p11_T),
	FPM_InitFixedPoint_m(0.35, s4p11_T),FPM_InitFixedPoint_m(0.38, s4p11_T),
	FPM_InitFixedPoint_m(0.43, s4p11_T),
	FPM_InitFixedPoint_m(0.47265625, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.01, s4p11_T),FPM_InitFixedPoint_m(0.015, s4p11_T),
	FPM_InitFixedPoint_m(0.03, s4p11_T),FPM_InitFixedPoint_m(0.05, s4p11_T),
	FPM_InitFixedPoint_m(0.07, s4p11_T),FPM_InitFixedPoint_m(0.1, s4p11_T),
	FPM_InitFixedPoint_m(0.135, s4p11_T),FPM_InitFixedPoint_m(0.16, s4p11_T),
	FPM_InitFixedPoint_m(0.2, s4p11_T),FPM_InitFixedPoint_m(0.23, s4p11_T),
	FPM_InitFixedPoint_m(0.26, s4p11_T),FPM_InitFixedPoint_m(0.31, s4p11_T),
	FPM_InitFixedPoint_m(0.35, s4p11_T),FPM_InitFixedPoint_m(0.38, s4p11_T),
	FPM_InitFixedPoint_m(0.43, s4p11_T),
	FPM_InitFixedPoint_m(0.47265625, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.01, s4p11_T),FPM_InitFixedPoint_m(0.015, s4p11_T),
	FPM_InitFixedPoint_m(0.03, s4p11_T),FPM_InitFixedPoint_m(0.05, s4p11_T),
	FPM_InitFixedPoint_m(0.07, s4p11_T),FPM_InitFixedPoint_m(0.1, s4p11_T),
	FPM_InitFixedPoint_m(0.135, s4p11_T),FPM_InitFixedPoint_m(0.16, s4p11_T),
	FPM_InitFixedPoint_m(0.2, s4p11_T),FPM_InitFixedPoint_m(0.23, s4p11_T),
	FPM_InitFixedPoint_m(0.26, s4p11_T),FPM_InitFixedPoint_m(0.31, s4p11_T),
	FPM_InitFixedPoint_m(0.35, s4p11_T),FPM_InitFixedPoint_m(0.38, s4p11_T),
	FPM_InitFixedPoint_m(0.43, s4p11_T),
	FPM_InitFixedPoint_m(0.47265625, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.01, s4p11_T),FPM_InitFixedPoint_m(0.015, s4p11_T),
	FPM_InitFixedPoint_m(0.03, s4p11_T),FPM_InitFixedPoint_m(0.05, s4p11_T),
	FPM_InitFixedPoint_m(0.07, s4p11_T),FPM_InitFixedPoint_m(0.1, s4p11_T),
	FPM_InitFixedPoint_m(0.135, s4p11_T),FPM_InitFixedPoint_m(0.16, s4p11_T),
	FPM_InitFixedPoint_m(0.2, s4p11_T),FPM_InitFixedPoint_m(0.23, s4p11_T),
	FPM_InitFixedPoint_m(0.26, s4p11_T),FPM_InitFixedPoint_m(0.31, s4p11_T),
	FPM_InitFixedPoint_m(0.35, s4p11_T),FPM_InitFixedPoint_m(0.38, s4p11_T),
	FPM_InitFixedPoint_m(0.43, s4p11_T),
	FPM_InitFixedPoint_m(0.47265625, s4p11_T)}}, {{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.0234375, s4p11_T),
	FPM_InitFixedPoint_m(0.03515625, s4p11_T),
	FPM_InitFixedPoint_m(0.05078125, s4p11_T),
	FPM_InitFixedPoint_m(0.0703125, s4p11_T),
	FPM_InitFixedPoint_m(0.09375, s4p11_T),
	FPM_InitFixedPoint_m(0.12109375, s4p11_T),
	FPM_InitFixedPoint_m(0.15234375, s4p11_T),
	FPM_InitFixedPoint_m(0.18359375, s4p11_T),
	FPM_InitFixedPoint_m(0.21875, s4p11_T),
	FPM_InitFixedPoint_m(0.26171875, s4p11_T),
	FPM_InitFixedPoint_m(0.30078125, s4p11_T),
	FPM_InitFixedPoint_m(0.34765625, s4p11_T),
	FPM_InitFixedPoint_m(0.3984375, s4p11_T),
	FPM_InitFixedPoint_m(0.44921875, s4p11_T),
	FPM_InitFixedPoint_m(0.5078125, s4p11_T),
	FPM_InitFixedPoint_m(0.56640625, s4p11_T),
	FPM_InitFixedPoint_m(0.62890625, s4p11_T),
	FPM_InitFixedPoint_m(0.69140625, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.03125, s4p11_T),
	FPM_InitFixedPoint_m(0.05078125, s4p11_T),
	FPM_InitFixedPoint_m(0.07421875, s4p11_T),
	FPM_InitFixedPoint_m(0.10546875, s4p11_T),
	FPM_InitFixedPoint_m(0.140625, s4p11_T),
	FPM_InitFixedPoint_m(0.18359375, s4p11_T),
	FPM_InitFixedPoint_m(0.23046875, s4p11_T),
	FPM_InitFixedPoint_m(0.28125, s4p11_T),
	FPM_InitFixedPoint_m(0.33984375, s4p11_T),
	FPM_InitFixedPoint_m(0.40234375, s4p11_T),
	FPM_InitFixedPoint_m(0.47265625, s4p11_T),
	FPM_InitFixedPoint_m(0.546875, s4p11_T),
	FPM_InitFixedPoint_m(0.625, s4p11_T),
	FPM_InitFixedPoint_m(0.7109375, s4p11_T),
	FPM_InitFixedPoint_m(0.80078125, s4p11_T),
	FPM_InitFixedPoint_m(0.89453125, s4p11_T),
	FPM_InitFixedPoint_m(0.99609375, s4p11_T),
	FPM_InitFixedPoint_m(1.10546875, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.015625, s4p11_T),
	FPM_InitFixedPoint_m(0.0390625, s4p11_T),
	FPM_InitFixedPoint_m(0.06640625, s4p11_T),
	FPM_InitFixedPoint_m(0.09765625, s4p11_T),
	FPM_InitFixedPoint_m(0.1328125, s4p11_T),
	FPM_InitFixedPoint_m(0.17578125, s4p11_T),
	FPM_InitFixedPoint_m(0.21875, s4p11_T),
	FPM_InitFixedPoint_m(0.26953125, s4p11_T),
	FPM_InitFixedPoint_m(0.328125, s4p11_T),
	FPM_InitFixedPoint_m(0.38671875, s4p11_T),
	FPM_InitFixedPoint_m(0.453125, s4p11_T),
	FPM_InitFixedPoint_m(0.5234375, s4p11_T),
	FPM_InitFixedPoint_m(0.59765625, s4p11_T),
	FPM_InitFixedPoint_m(0.6796875, s4p11_T),
	FPM_InitFixedPoint_m(0.76171875, s4p11_T),
	FPM_InitFixedPoint_m(0.8515625, s4p11_T),
	FPM_InitFixedPoint_m(0.94921875, s4p11_T),
	FPM_InitFixedPoint_m(1.046875, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.015625, s4p11_T),
	FPM_InitFixedPoint_m(0.03515625, s4p11_T),
	FPM_InitFixedPoint_m(0.0625, s4p11_T),
	FPM_InitFixedPoint_m(0.0859375, s4p11_T),
	FPM_InitFixedPoint_m(0.1171875, s4p11_T),
	FPM_InitFixedPoint_m(0.15234375, s4p11_T),
	FPM_InitFixedPoint_m(0.1875, s4p11_T),
	FPM_InitFixedPoint_m(0.23046875, s4p11_T),
	FPM_InitFixedPoint_m(0.2734375, s4p11_T),
	FPM_InitFixedPoint_m(0.3203125, s4p11_T),
	FPM_InitFixedPoint_m(0.37109375, s4p11_T),
	FPM_InitFixedPoint_m(0.42578125, s4p11_T),
	FPM_InitFixedPoint_m(0.48046875, s4p11_T),
	FPM_InitFixedPoint_m(0.54296875, s4p11_T),
	FPM_InitFixedPoint_m(0.60546875, s4p11_T),
	FPM_InitFixedPoint_m(0.671875, s4p11_T),
	FPM_InitFixedPoint_m(0.7421875, s4p11_T),
	FPM_InitFixedPoint_m(0.81640625, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.015625, s4p11_T),
	FPM_InitFixedPoint_m(0.03515625, s4p11_T),
	FPM_InitFixedPoint_m(0.05859375, s4p11_T),
	FPM_InitFixedPoint_m(0.0859375, s4p11_T),
	FPM_InitFixedPoint_m(0.11328125, s4p11_T),
	FPM_InitFixedPoint_m(0.14453125, s4p11_T),
	FPM_InitFixedPoint_m(0.17578125, s4p11_T),
	FPM_InitFixedPoint_m(0.21484375, s4p11_T),
	FPM_InitFixedPoint_m(0.25390625, s4p11_T),
	FPM_InitFixedPoint_m(0.29296875, s4p11_T),
	FPM_InitFixedPoint_m(0.33984375, s4p11_T),
	FPM_InitFixedPoint_m(0.38671875, s4p11_T),
	FPM_InitFixedPoint_m(0.4375, s4p11_T),
	FPM_InitFixedPoint_m(0.48828125, s4p11_T),
	FPM_InitFixedPoint_m(0.546875, s4p11_T),
	FPM_InitFixedPoint_m(0.60546875, s4p11_T),
	FPM_InitFixedPoint_m(0.66796875, s4p11_T),
	FPM_InitFixedPoint_m(0.73046875, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.01, s4p11_T),
	FPM_InitFixedPoint_m(0.02, s4p11_T),FPM_InitFixedPoint_m(0.035, s4p11_T),
	FPM_InitFixedPoint_m(0.06, s4p11_T),FPM_InitFixedPoint_m(0.08, s4p11_T),
	FPM_InitFixedPoint_m(0.12, s4p11_T),FPM_InitFixedPoint_m(0.16, s4p11_T),
	FPM_InitFixedPoint_m(0.2, s4p11_T),FPM_InitFixedPoint_m(0.24, s4p11_T),
	FPM_InitFixedPoint_m(0.29, s4p11_T),FPM_InitFixedPoint_m(0.35, s4p11_T),
	FPM_InitFixedPoint_m(0.39, s4p11_T),FPM_InitFixedPoint_m(0.46, s4p11_T),
	FPM_InitFixedPoint_m(0.51171875, s4p11_T),
	FPM_InitFixedPoint_m(0.5625, s4p11_T),
	FPM_InitFixedPoint_m(0.62109375, s4p11_T),
	FPM_InitFixedPoint_m(0.6796875, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.01, s4p11_T),
	FPM_InitFixedPoint_m(0.02, s4p11_T),FPM_InitFixedPoint_m(0.035, s4p11_T),
	FPM_InitFixedPoint_m(0.06, s4p11_T),FPM_InitFixedPoint_m(0.08, s4p11_T),
	FPM_InitFixedPoint_m(0.1, s4p11_T),FPM_InitFixedPoint_m(0.14, s4p11_T),
	FPM_InitFixedPoint_m(0.18, s4p11_T),FPM_InitFixedPoint_m(0.21, s4p11_T),
	FPM_InitFixedPoint_m(0.26, s4p11_T),FPM_InitFixedPoint_m(0.3, s4p11_T),
	FPM_InitFixedPoint_m(0.34, s4p11_T),
	FPM_InitFixedPoint_m(0.3984375, s4p11_T),
	FPM_InitFixedPoint_m(0.4375, s4p11_T),
	FPM_InitFixedPoint_m(0.48046875, s4p11_T),
	FPM_InitFixedPoint_m(0.52734375, s4p11_T),
	FPM_InitFixedPoint_m(0.57421875, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.01, s4p11_T),FPM_InitFixedPoint_m(0.03, s4p11_T),
	FPM_InitFixedPoint_m(0.05, s4p11_T),FPM_InitFixedPoint_m(0.07, s4p11_T),
	FPM_InitFixedPoint_m(0.095, s4p11_T),FPM_InitFixedPoint_m(0.13, s4p11_T),
	FPM_InitFixedPoint_m(0.16, s4p11_T),FPM_InitFixedPoint_m(0.2, s4p11_T),
	FPM_InitFixedPoint_m(0.24, s4p11_T),FPM_InitFixedPoint_m(0.28, s4p11_T),
	FPM_InitFixedPoint_m(0.32, s4p11_T),
	FPM_InitFixedPoint_m(0.3671875, s4p11_T),
	FPM_InitFixedPoint_m(0.40625, s4p11_T),
	FPM_InitFixedPoint_m(0.4453125, s4p11_T),
	FPM_InitFixedPoint_m(0.48828125, s4p11_T),
	FPM_InitFixedPoint_m(0.53125, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.01, s4p11_T),FPM_InitFixedPoint_m(0.015, s4p11_T),
	FPM_InitFixedPoint_m(0.03, s4p11_T),FPM_InitFixedPoint_m(0.05, s4p11_T),
	FPM_InitFixedPoint_m(0.07, s4p11_T),FPM_InitFixedPoint_m(0.1, s4p11_T),
	FPM_InitFixedPoint_m(0.135, s4p11_T),FPM_InitFixedPoint_m(0.16, s4p11_T),
	FPM_InitFixedPoint_m(0.2, s4p11_T),FPM_InitFixedPoint_m(0.23, s4p11_T),
	FPM_InitFixedPoint_m(0.26, s4p11_T),FPM_InitFixedPoint_m(0.31, s4p11_T),
	FPM_InitFixedPoint_m(0.35, s4p11_T),FPM_InitFixedPoint_m(0.38, s4p11_T),
	FPM_InitFixedPoint_m(0.43, s4p11_T),
	FPM_InitFixedPoint_m(0.47265625, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.01, s4p11_T),FPM_InitFixedPoint_m(0.015, s4p11_T),
	FPM_InitFixedPoint_m(0.03, s4p11_T),FPM_InitFixedPoint_m(0.05, s4p11_T),
	FPM_InitFixedPoint_m(0.07, s4p11_T),FPM_InitFixedPoint_m(0.1, s4p11_T),
	FPM_InitFixedPoint_m(0.135, s4p11_T),FPM_InitFixedPoint_m(0.16, s4p11_T),
	FPM_InitFixedPoint_m(0.2, s4p11_T),FPM_InitFixedPoint_m(0.23, s4p11_T),
	FPM_InitFixedPoint_m(0.26, s4p11_T),FPM_InitFixedPoint_m(0.31, s4p11_T),
	FPM_InitFixedPoint_m(0.35, s4p11_T),FPM_InitFixedPoint_m(0.38, s4p11_T),
	FPM_InitFixedPoint_m(0.43, s4p11_T),
	FPM_InitFixedPoint_m(0.47265625, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.01, s4p11_T),FPM_InitFixedPoint_m(0.015, s4p11_T),
	FPM_InitFixedPoint_m(0.03, s4p11_T),FPM_InitFixedPoint_m(0.05, s4p11_T),
	FPM_InitFixedPoint_m(0.07, s4p11_T),FPM_InitFixedPoint_m(0.1, s4p11_T),
	FPM_InitFixedPoint_m(0.135, s4p11_T),FPM_InitFixedPoint_m(0.16, s4p11_T),
	FPM_InitFixedPoint_m(0.2, s4p11_T),FPM_InitFixedPoint_m(0.23, s4p11_T),
	FPM_InitFixedPoint_m(0.26, s4p11_T),FPM_InitFixedPoint_m(0.31, s4p11_T),
	FPM_InitFixedPoint_m(0.35, s4p11_T),FPM_InitFixedPoint_m(0.38, s4p11_T),
	FPM_InitFixedPoint_m(0.43, s4p11_T),
	FPM_InitFixedPoint_m(0.47265625, s4p11_T)},
	{FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.0, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(0.01, s4p11_T),FPM_InitFixedPoint_m(0.015, s4p11_T),
	FPM_InitFixedPoint_m(0.03, s4p11_T),FPM_InitFixedPoint_m(0.05, s4p11_T),
	FPM_InitFixedPoint_m(0.07, s4p11_T),FPM_InitFixedPoint_m(0.1, s4p11_T),
	FPM_InitFixedPoint_m(0.135, s4p11_T),FPM_InitFixedPoint_m(0.16, s4p11_T),
	FPM_InitFixedPoint_m(0.2, s4p11_T),FPM_InitFixedPoint_m(0.23, s4p11_T),
	FPM_InitFixedPoint_m(0.26, s4p11_T),FPM_InitFixedPoint_m(0.31, s4p11_T),
	FPM_InitFixedPoint_m(0.35, s4p11_T),FPM_InitFixedPoint_m(0.38, s4p11_T),
	FPM_InitFixedPoint_m(0.43, s4p11_T),
	FPM_InitFixedPoint_m(0.47265625, s4p11_T)}}, {{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.0234375, u8p8_T),
	FPM_InitFixedPoint_m(0.03515625, u8p8_T),
	FPM_InitFixedPoint_m(0.05078125, u8p8_T),
	FPM_InitFixedPoint_m(0.0703125, u8p8_T),
	FPM_InitFixedPoint_m(0.09375, u8p8_T),
	FPM_InitFixedPoint_m(0.12109375, u8p8_T),
	FPM_InitFixedPoint_m(0.15234375, u8p8_T),
	FPM_InitFixedPoint_m(0.18359375, u8p8_T),
	FPM_InitFixedPoint_m(0.21875, u8p8_T),
	FPM_InitFixedPoint_m(0.26171875, u8p8_T),
	FPM_InitFixedPoint_m(0.30078125, u8p8_T),
	FPM_InitFixedPoint_m(0.34765625, u8p8_T),
	FPM_InitFixedPoint_m(0.3984375, u8p8_T),
	FPM_InitFixedPoint_m(0.44921875, u8p8_T),
	FPM_InitFixedPoint_m(0.5078125, u8p8_T),
	FPM_InitFixedPoint_m(0.56640625, u8p8_T),
	FPM_InitFixedPoint_m(0.62890625, u8p8_T),
	FPM_InitFixedPoint_m(0.69140625, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.03125, u8p8_T),
	FPM_InitFixedPoint_m(0.05078125, u8p8_T),
	FPM_InitFixedPoint_m(0.07421875, u8p8_T),
	FPM_InitFixedPoint_m(0.10546875, u8p8_T),
	FPM_InitFixedPoint_m(0.140625, u8p8_T),
	FPM_InitFixedPoint_m(0.18359375, u8p8_T),
	FPM_InitFixedPoint_m(0.23046875, u8p8_T),
	FPM_InitFixedPoint_m(0.28125, u8p8_T),
	FPM_InitFixedPoint_m(0.33984375, u8p8_T),
	FPM_InitFixedPoint_m(0.40234375, u8p8_T),
	FPM_InitFixedPoint_m(0.47265625, u8p8_T),
	FPM_InitFixedPoint_m(0.546875, u8p8_T),
	FPM_InitFixedPoint_m(0.625, u8p8_T),
	FPM_InitFixedPoint_m(0.7109375, u8p8_T),
	FPM_InitFixedPoint_m(0.80078125, u8p8_T),
	FPM_InitFixedPoint_m(0.89453125, u8p8_T),
	FPM_InitFixedPoint_m(0.99609375, u8p8_T),
	FPM_InitFixedPoint_m(1.10546875, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.015625, u8p8_T),
	FPM_InitFixedPoint_m(0.0390625, u8p8_T),
	FPM_InitFixedPoint_m(0.06640625, u8p8_T),
	FPM_InitFixedPoint_m(0.09765625, u8p8_T),
	FPM_InitFixedPoint_m(0.1328125, u8p8_T),
	FPM_InitFixedPoint_m(0.17578125, u8p8_T),
	FPM_InitFixedPoint_m(0.21875, u8p8_T),
	FPM_InitFixedPoint_m(0.26953125, u8p8_T),
	FPM_InitFixedPoint_m(0.328125, u8p8_T),
	FPM_InitFixedPoint_m(0.38671875, u8p8_T),
	FPM_InitFixedPoint_m(0.453125, u8p8_T),
	FPM_InitFixedPoint_m(0.5234375, u8p8_T),
	FPM_InitFixedPoint_m(0.59765625, u8p8_T),
	FPM_InitFixedPoint_m(0.6796875, u8p8_T),
	FPM_InitFixedPoint_m(0.76171875, u8p8_T),
	FPM_InitFixedPoint_m(0.8515625, u8p8_T),
	FPM_InitFixedPoint_m(0.94921875, u8p8_T),
	FPM_InitFixedPoint_m(1.046875, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.015625, u8p8_T),
	FPM_InitFixedPoint_m(0.03515625, u8p8_T),
	FPM_InitFixedPoint_m(0.0625, u8p8_T),
	FPM_InitFixedPoint_m(0.0859375, u8p8_T),
	FPM_InitFixedPoint_m(0.1171875, u8p8_T),
	FPM_InitFixedPoint_m(0.15234375, u8p8_T),
	FPM_InitFixedPoint_m(0.1875, u8p8_T),
	FPM_InitFixedPoint_m(0.23046875, u8p8_T),
	FPM_InitFixedPoint_m(0.2734375, u8p8_T),
	FPM_InitFixedPoint_m(0.3203125, u8p8_T),
	FPM_InitFixedPoint_m(0.37109375, u8p8_T),
	FPM_InitFixedPoint_m(0.42578125, u8p8_T),
	FPM_InitFixedPoint_m(0.48046875, u8p8_T),
	FPM_InitFixedPoint_m(0.54296875, u8p8_T),
	FPM_InitFixedPoint_m(0.60546875, u8p8_T),
	FPM_InitFixedPoint_m(0.671875, u8p8_T),
	FPM_InitFixedPoint_m(0.7421875, u8p8_T),
	FPM_InitFixedPoint_m(0.81640625, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.015625, u8p8_T),
	FPM_InitFixedPoint_m(0.03515625, u8p8_T),
	FPM_InitFixedPoint_m(0.05859375, u8p8_T),
	FPM_InitFixedPoint_m(0.0859375, u8p8_T),
	FPM_InitFixedPoint_m(0.11328125, u8p8_T),
	FPM_InitFixedPoint_m(0.14453125, u8p8_T),
	FPM_InitFixedPoint_m(0.17578125, u8p8_T),
	FPM_InitFixedPoint_m(0.21484375, u8p8_T),
	FPM_InitFixedPoint_m(0.25390625, u8p8_T),
	FPM_InitFixedPoint_m(0.29296875, u8p8_T),
	FPM_InitFixedPoint_m(0.33984375, u8p8_T),
	FPM_InitFixedPoint_m(0.38671875, u8p8_T),
	FPM_InitFixedPoint_m(0.4375, u8p8_T),
	FPM_InitFixedPoint_m(0.48828125, u8p8_T),
	FPM_InitFixedPoint_m(0.546875, u8p8_T),
	FPM_InitFixedPoint_m(0.60546875, u8p8_T),
	FPM_InitFixedPoint_m(0.66796875, u8p8_T),
	FPM_InitFixedPoint_m(0.73046875, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.01, u8p8_T),
	FPM_InitFixedPoint_m(0.02, u8p8_T),FPM_InitFixedPoint_m(0.035, u8p8_T),
	FPM_InitFixedPoint_m(0.06, u8p8_T),FPM_InitFixedPoint_m(0.08, u8p8_T),
	FPM_InitFixedPoint_m(0.12, u8p8_T),FPM_InitFixedPoint_m(0.16, u8p8_T),
	FPM_InitFixedPoint_m(0.2, u8p8_T),FPM_InitFixedPoint_m(0.24, u8p8_T),
	FPM_InitFixedPoint_m(0.29, u8p8_T),FPM_InitFixedPoint_m(0.35, u8p8_T),
	FPM_InitFixedPoint_m(0.39, u8p8_T),FPM_InitFixedPoint_m(0.46, u8p8_T),
	FPM_InitFixedPoint_m(0.51171875, u8p8_T),
	FPM_InitFixedPoint_m(0.5625, u8p8_T),
	FPM_InitFixedPoint_m(0.62109375, u8p8_T),
	FPM_InitFixedPoint_m(0.6796875, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.01, u8p8_T),
	FPM_InitFixedPoint_m(0.02, u8p8_T),FPM_InitFixedPoint_m(0.035, u8p8_T),
	FPM_InitFixedPoint_m(0.06, u8p8_T),FPM_InitFixedPoint_m(0.08, u8p8_T),
	FPM_InitFixedPoint_m(0.1, u8p8_T),FPM_InitFixedPoint_m(0.14, u8p8_T),
	FPM_InitFixedPoint_m(0.18, u8p8_T),FPM_InitFixedPoint_m(0.21, u8p8_T),
	FPM_InitFixedPoint_m(0.26, u8p8_T),FPM_InitFixedPoint_m(0.3, u8p8_T),
	FPM_InitFixedPoint_m(0.34, u8p8_T),
	FPM_InitFixedPoint_m(0.3984375, u8p8_T),
	FPM_InitFixedPoint_m(0.4375, u8p8_T),
	FPM_InitFixedPoint_m(0.48046875, u8p8_T),
	FPM_InitFixedPoint_m(0.52734375, u8p8_T),
	FPM_InitFixedPoint_m(0.57421875, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.01, u8p8_T),FPM_InitFixedPoint_m(0.03, u8p8_T),
	FPM_InitFixedPoint_m(0.05, u8p8_T),FPM_InitFixedPoint_m(0.07, u8p8_T),
	FPM_InitFixedPoint_m(0.095, u8p8_T),FPM_InitFixedPoint_m(0.13, u8p8_T),
	FPM_InitFixedPoint_m(0.16, u8p8_T),FPM_InitFixedPoint_m(0.2, u8p8_T),
	FPM_InitFixedPoint_m(0.24, u8p8_T),FPM_InitFixedPoint_m(0.28, u8p8_T),
	FPM_InitFixedPoint_m(0.32, u8p8_T),
	FPM_InitFixedPoint_m(0.3671875, u8p8_T),
	FPM_InitFixedPoint_m(0.40625, u8p8_T),
	FPM_InitFixedPoint_m(0.4453125, u8p8_T),
	FPM_InitFixedPoint_m(0.48828125, u8p8_T),
	FPM_InitFixedPoint_m(0.53125, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.01, u8p8_T),FPM_InitFixedPoint_m(0.015, u8p8_T),
	FPM_InitFixedPoint_m(0.03, u8p8_T),FPM_InitFixedPoint_m(0.05, u8p8_T),
	FPM_InitFixedPoint_m(0.07, u8p8_T),FPM_InitFixedPoint_m(0.1, u8p8_T),
	FPM_InitFixedPoint_m(0.135, u8p8_T),FPM_InitFixedPoint_m(0.16, u8p8_T),
	FPM_InitFixedPoint_m(0.2, u8p8_T),FPM_InitFixedPoint_m(0.23, u8p8_T),
	FPM_InitFixedPoint_m(0.26, u8p8_T),FPM_InitFixedPoint_m(0.31, u8p8_T),
	FPM_InitFixedPoint_m(0.35, u8p8_T),FPM_InitFixedPoint_m(0.38, u8p8_T),
	FPM_InitFixedPoint_m(0.43, u8p8_T),
	FPM_InitFixedPoint_m(0.47265625, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.01, u8p8_T),FPM_InitFixedPoint_m(0.015, u8p8_T),
	FPM_InitFixedPoint_m(0.03, u8p8_T),FPM_InitFixedPoint_m(0.05, u8p8_T),
	FPM_InitFixedPoint_m(0.07, u8p8_T),FPM_InitFixedPoint_m(0.1, u8p8_T),
	FPM_InitFixedPoint_m(0.135, u8p8_T),FPM_InitFixedPoint_m(0.16, u8p8_T),
	FPM_InitFixedPoint_m(0.2, u8p8_T),FPM_InitFixedPoint_m(0.23, u8p8_T),
	FPM_InitFixedPoint_m(0.26, u8p8_T),FPM_InitFixedPoint_m(0.31, u8p8_T),
	FPM_InitFixedPoint_m(0.35, u8p8_T),FPM_InitFixedPoint_m(0.38, u8p8_T),
	FPM_InitFixedPoint_m(0.43, u8p8_T),
	FPM_InitFixedPoint_m(0.47265625, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.01, u8p8_T),FPM_InitFixedPoint_m(0.015, u8p8_T),
	FPM_InitFixedPoint_m(0.03, u8p8_T),FPM_InitFixedPoint_m(0.05, u8p8_T),
	FPM_InitFixedPoint_m(0.07, u8p8_T),FPM_InitFixedPoint_m(0.1, u8p8_T),
	FPM_InitFixedPoint_m(0.135, u8p8_T),FPM_InitFixedPoint_m(0.16, u8p8_T),
	FPM_InitFixedPoint_m(0.2, u8p8_T),FPM_InitFixedPoint_m(0.23, u8p8_T),
	FPM_InitFixedPoint_m(0.26, u8p8_T),FPM_InitFixedPoint_m(0.31, u8p8_T),
	FPM_InitFixedPoint_m(0.35, u8p8_T),FPM_InitFixedPoint_m(0.38, u8p8_T),
	FPM_InitFixedPoint_m(0.43, u8p8_T),
	FPM_InitFixedPoint_m(0.47265625, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.01, u8p8_T),FPM_InitFixedPoint_m(0.015, u8p8_T),
	FPM_InitFixedPoint_m(0.03, u8p8_T),FPM_InitFixedPoint_m(0.05, u8p8_T),
	FPM_InitFixedPoint_m(0.07, u8p8_T),FPM_InitFixedPoint_m(0.1, u8p8_T),
	FPM_InitFixedPoint_m(0.135, u8p8_T),FPM_InitFixedPoint_m(0.16, u8p8_T),
	FPM_InitFixedPoint_m(0.2, u8p8_T),FPM_InitFixedPoint_m(0.23, u8p8_T),
	FPM_InitFixedPoint_m(0.26, u8p8_T),FPM_InitFixedPoint_m(0.31, u8p8_T),
	FPM_InitFixedPoint_m(0.35, u8p8_T),FPM_InitFixedPoint_m(0.38, u8p8_T),
	FPM_InitFixedPoint_m(0.43, u8p8_T),
	FPM_InitFixedPoint_m(0.47265625, u8p8_T)}}, {{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.0234375, u8p8_T),
	FPM_InitFixedPoint_m(0.03515625, u8p8_T),
	FPM_InitFixedPoint_m(0.05078125, u8p8_T),
	FPM_InitFixedPoint_m(0.0703125, u8p8_T),
	FPM_InitFixedPoint_m(0.09375, u8p8_T),
	FPM_InitFixedPoint_m(0.12109375, u8p8_T),
	FPM_InitFixedPoint_m(0.15234375, u8p8_T),
	FPM_InitFixedPoint_m(0.18359375, u8p8_T),
	FPM_InitFixedPoint_m(0.21875, u8p8_T),
	FPM_InitFixedPoint_m(0.26171875, u8p8_T),
	FPM_InitFixedPoint_m(0.30078125, u8p8_T),
	FPM_InitFixedPoint_m(0.34765625, u8p8_T),
	FPM_InitFixedPoint_m(0.3984375, u8p8_T),
	FPM_InitFixedPoint_m(0.44921875, u8p8_T),
	FPM_InitFixedPoint_m(0.5078125, u8p8_T),
	FPM_InitFixedPoint_m(0.56640625, u8p8_T),
	FPM_InitFixedPoint_m(0.62890625, u8p8_T),
	FPM_InitFixedPoint_m(0.69140625, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.03125, u8p8_T),
	FPM_InitFixedPoint_m(0.05078125, u8p8_T),
	FPM_InitFixedPoint_m(0.07421875, u8p8_T),
	FPM_InitFixedPoint_m(0.10546875, u8p8_T),
	FPM_InitFixedPoint_m(0.140625, u8p8_T),
	FPM_InitFixedPoint_m(0.18359375, u8p8_T),
	FPM_InitFixedPoint_m(0.23046875, u8p8_T),
	FPM_InitFixedPoint_m(0.28125, u8p8_T),
	FPM_InitFixedPoint_m(0.33984375, u8p8_T),
	FPM_InitFixedPoint_m(0.40234375, u8p8_T),
	FPM_InitFixedPoint_m(0.47265625, u8p8_T),
	FPM_InitFixedPoint_m(0.546875, u8p8_T),
	FPM_InitFixedPoint_m(0.625, u8p8_T),
	FPM_InitFixedPoint_m(0.7109375, u8p8_T),
	FPM_InitFixedPoint_m(0.80078125, u8p8_T),
	FPM_InitFixedPoint_m(0.89453125, u8p8_T),
	FPM_InitFixedPoint_m(0.99609375, u8p8_T),
	FPM_InitFixedPoint_m(1.10546875, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.015625, u8p8_T),
	FPM_InitFixedPoint_m(0.0390625, u8p8_T),
	FPM_InitFixedPoint_m(0.06640625, u8p8_T),
	FPM_InitFixedPoint_m(0.09765625, u8p8_T),
	FPM_InitFixedPoint_m(0.1328125, u8p8_T),
	FPM_InitFixedPoint_m(0.17578125, u8p8_T),
	FPM_InitFixedPoint_m(0.21875, u8p8_T),
	FPM_InitFixedPoint_m(0.26953125, u8p8_T),
	FPM_InitFixedPoint_m(0.328125, u8p8_T),
	FPM_InitFixedPoint_m(0.38671875, u8p8_T),
	FPM_InitFixedPoint_m(0.453125, u8p8_T),
	FPM_InitFixedPoint_m(0.5234375, u8p8_T),
	FPM_InitFixedPoint_m(0.59765625, u8p8_T),
	FPM_InitFixedPoint_m(0.6796875, u8p8_T),
	FPM_InitFixedPoint_m(0.76171875, u8p8_T),
	FPM_InitFixedPoint_m(0.8515625, u8p8_T),
	FPM_InitFixedPoint_m(0.94921875, u8p8_T),
	FPM_InitFixedPoint_m(1.046875, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.015625, u8p8_T),
	FPM_InitFixedPoint_m(0.03515625, u8p8_T),
	FPM_InitFixedPoint_m(0.0625, u8p8_T),
	FPM_InitFixedPoint_m(0.0859375, u8p8_T),
	FPM_InitFixedPoint_m(0.1171875, u8p8_T),
	FPM_InitFixedPoint_m(0.15234375, u8p8_T),
	FPM_InitFixedPoint_m(0.1875, u8p8_T),
	FPM_InitFixedPoint_m(0.23046875, u8p8_T),
	FPM_InitFixedPoint_m(0.2734375, u8p8_T),
	FPM_InitFixedPoint_m(0.3203125, u8p8_T),
	FPM_InitFixedPoint_m(0.37109375, u8p8_T),
	FPM_InitFixedPoint_m(0.42578125, u8p8_T),
	FPM_InitFixedPoint_m(0.48046875, u8p8_T),
	FPM_InitFixedPoint_m(0.54296875, u8p8_T),
	FPM_InitFixedPoint_m(0.60546875, u8p8_T),
	FPM_InitFixedPoint_m(0.671875, u8p8_T),
	FPM_InitFixedPoint_m(0.7421875, u8p8_T),
	FPM_InitFixedPoint_m(0.81640625, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.015625, u8p8_T),
	FPM_InitFixedPoint_m(0.03515625, u8p8_T),
	FPM_InitFixedPoint_m(0.05859375, u8p8_T),
	FPM_InitFixedPoint_m(0.0859375, u8p8_T),
	FPM_InitFixedPoint_m(0.11328125, u8p8_T),
	FPM_InitFixedPoint_m(0.14453125, u8p8_T),
	FPM_InitFixedPoint_m(0.17578125, u8p8_T),
	FPM_InitFixedPoint_m(0.21484375, u8p8_T),
	FPM_InitFixedPoint_m(0.25390625, u8p8_T),
	FPM_InitFixedPoint_m(0.29296875, u8p8_T),
	FPM_InitFixedPoint_m(0.33984375, u8p8_T),
	FPM_InitFixedPoint_m(0.38671875, u8p8_T),
	FPM_InitFixedPoint_m(0.4375, u8p8_T),
	FPM_InitFixedPoint_m(0.48828125, u8p8_T),
	FPM_InitFixedPoint_m(0.546875, u8p8_T),
	FPM_InitFixedPoint_m(0.60546875, u8p8_T),
	FPM_InitFixedPoint_m(0.66796875, u8p8_T),
	FPM_InitFixedPoint_m(0.73046875, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.01, u8p8_T),
	FPM_InitFixedPoint_m(0.02, u8p8_T),FPM_InitFixedPoint_m(0.035, u8p8_T),
	FPM_InitFixedPoint_m(0.06, u8p8_T),FPM_InitFixedPoint_m(0.08, u8p8_T),
	FPM_InitFixedPoint_m(0.12, u8p8_T),FPM_InitFixedPoint_m(0.16, u8p8_T),
	FPM_InitFixedPoint_m(0.2, u8p8_T),FPM_InitFixedPoint_m(0.24, u8p8_T),
	FPM_InitFixedPoint_m(0.29, u8p8_T),FPM_InitFixedPoint_m(0.35, u8p8_T),
	FPM_InitFixedPoint_m(0.39, u8p8_T),FPM_InitFixedPoint_m(0.46, u8p8_T),
	FPM_InitFixedPoint_m(0.51171875, u8p8_T),
	FPM_InitFixedPoint_m(0.5625, u8p8_T),
	FPM_InitFixedPoint_m(0.62109375, u8p8_T),
	FPM_InitFixedPoint_m(0.6796875, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.01, u8p8_T),
	FPM_InitFixedPoint_m(0.02, u8p8_T),FPM_InitFixedPoint_m(0.035, u8p8_T),
	FPM_InitFixedPoint_m(0.06, u8p8_T),FPM_InitFixedPoint_m(0.08, u8p8_T),
	FPM_InitFixedPoint_m(0.1, u8p8_T),FPM_InitFixedPoint_m(0.14, u8p8_T),
	FPM_InitFixedPoint_m(0.18, u8p8_T),FPM_InitFixedPoint_m(0.21, u8p8_T),
	FPM_InitFixedPoint_m(0.26, u8p8_T),FPM_InitFixedPoint_m(0.3, u8p8_T),
	FPM_InitFixedPoint_m(0.34, u8p8_T),
	FPM_InitFixedPoint_m(0.3984375, u8p8_T),
	FPM_InitFixedPoint_m(0.4375, u8p8_T),
	FPM_InitFixedPoint_m(0.48046875, u8p8_T),
	FPM_InitFixedPoint_m(0.52734375, u8p8_T),
	FPM_InitFixedPoint_m(0.57421875, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.01, u8p8_T),FPM_InitFixedPoint_m(0.03, u8p8_T),
	FPM_InitFixedPoint_m(0.05, u8p8_T),FPM_InitFixedPoint_m(0.07, u8p8_T),
	FPM_InitFixedPoint_m(0.095, u8p8_T),FPM_InitFixedPoint_m(0.13, u8p8_T),
	FPM_InitFixedPoint_m(0.16, u8p8_T),FPM_InitFixedPoint_m(0.2, u8p8_T),
	FPM_InitFixedPoint_m(0.24, u8p8_T),FPM_InitFixedPoint_m(0.28, u8p8_T),
	FPM_InitFixedPoint_m(0.32, u8p8_T),
	FPM_InitFixedPoint_m(0.3671875, u8p8_T),
	FPM_InitFixedPoint_m(0.40625, u8p8_T),
	FPM_InitFixedPoint_m(0.4453125, u8p8_T),
	FPM_InitFixedPoint_m(0.48828125, u8p8_T),
	FPM_InitFixedPoint_m(0.53125, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.01, u8p8_T),FPM_InitFixedPoint_m(0.015, u8p8_T),
	FPM_InitFixedPoint_m(0.03, u8p8_T),FPM_InitFixedPoint_m(0.05, u8p8_T),
	FPM_InitFixedPoint_m(0.07, u8p8_T),FPM_InitFixedPoint_m(0.1, u8p8_T),
	FPM_InitFixedPoint_m(0.135, u8p8_T),FPM_InitFixedPoint_m(0.16, u8p8_T),
	FPM_InitFixedPoint_m(0.2, u8p8_T),FPM_InitFixedPoint_m(0.23, u8p8_T),
	FPM_InitFixedPoint_m(0.26, u8p8_T),FPM_InitFixedPoint_m(0.31, u8p8_T),
	FPM_InitFixedPoint_m(0.35, u8p8_T),FPM_InitFixedPoint_m(0.38, u8p8_T),
	FPM_InitFixedPoint_m(0.43, u8p8_T),
	FPM_InitFixedPoint_m(0.47265625, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.01, u8p8_T),FPM_InitFixedPoint_m(0.015, u8p8_T),
	FPM_InitFixedPoint_m(0.03, u8p8_T),FPM_InitFixedPoint_m(0.05, u8p8_T),
	FPM_InitFixedPoint_m(0.07, u8p8_T),FPM_InitFixedPoint_m(0.1, u8p8_T),
	FPM_InitFixedPoint_m(0.135, u8p8_T),FPM_InitFixedPoint_m(0.16, u8p8_T),
	FPM_InitFixedPoint_m(0.2, u8p8_T),FPM_InitFixedPoint_m(0.23, u8p8_T),
	FPM_InitFixedPoint_m(0.26, u8p8_T),FPM_InitFixedPoint_m(0.31, u8p8_T),
	FPM_InitFixedPoint_m(0.35, u8p8_T),FPM_InitFixedPoint_m(0.38, u8p8_T),
	FPM_InitFixedPoint_m(0.43, u8p8_T),
	FPM_InitFixedPoint_m(0.47265625, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.01, u8p8_T),FPM_InitFixedPoint_m(0.015, u8p8_T),
	FPM_InitFixedPoint_m(0.03, u8p8_T),FPM_InitFixedPoint_m(0.05, u8p8_T),
	FPM_InitFixedPoint_m(0.07, u8p8_T),FPM_InitFixedPoint_m(0.1, u8p8_T),
	FPM_InitFixedPoint_m(0.135, u8p8_T),FPM_InitFixedPoint_m(0.16, u8p8_T),
	FPM_InitFixedPoint_m(0.2, u8p8_T),FPM_InitFixedPoint_m(0.23, u8p8_T),
	FPM_InitFixedPoint_m(0.26, u8p8_T),FPM_InitFixedPoint_m(0.31, u8p8_T),
	FPM_InitFixedPoint_m(0.35, u8p8_T),FPM_InitFixedPoint_m(0.38, u8p8_T),
	FPM_InitFixedPoint_m(0.43, u8p8_T),
	FPM_InitFixedPoint_m(0.47265625, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.01, u8p8_T),FPM_InitFixedPoint_m(0.015, u8p8_T),
	FPM_InitFixedPoint_m(0.03, u8p8_T),FPM_InitFixedPoint_m(0.05, u8p8_T),
	FPM_InitFixedPoint_m(0.07, u8p8_T),FPM_InitFixedPoint_m(0.1, u8p8_T),
	FPM_InitFixedPoint_m(0.135, u8p8_T),FPM_InitFixedPoint_m(0.16, u8p8_T),
	FPM_InitFixedPoint_m(0.2, u8p8_T),FPM_InitFixedPoint_m(0.23, u8p8_T),
	FPM_InitFixedPoint_m(0.26, u8p8_T),FPM_InitFixedPoint_m(0.31, u8p8_T),
	FPM_InitFixedPoint_m(0.35, u8p8_T),FPM_InitFixedPoint_m(0.38, u8p8_T),
	FPM_InitFixedPoint_m(0.43, u8p8_T),
	FPM_InitFixedPoint_m(0.47265625, u8p8_T)}}, {{FPM_InitFixedPoint_m(0.0, u2p14_T),FPM_InitFixedPoint_m(0.0, u2p14_T),
	FPM_InitFixedPoint_m(0.0, u2p14_T),FPM_InitFixedPoint_m(0.0, u2p14_T),
	FPM_InitFixedPoint_m(0.0, u2p14_T)},{FPM_InitFixedPoint_m(0.0, u2p14_T),
	FPM_InitFixedPoint_m(0.0, u2p14_T),FPM_InitFixedPoint_m(0.0, u2p14_T),
	FPM_InitFixedPoint_m(0.0, u2p14_T),FPM_InitFixedPoint_m(0.0, u2p14_T)},
	{FPM_InitFixedPoint_m(0.0, u2p14_T),FPM_InitFixedPoint_m(0.0, u2p14_T),
	FPM_InitFixedPoint_m(0.0, u2p14_T),FPM_InitFixedPoint_m(0.0, u2p14_T),
	FPM_InitFixedPoint_m(0.0, u2p14_T)},{FPM_InitFixedPoint_m(0.0, u2p14_T),
	FPM_InitFixedPoint_m(0.0, u2p14_T),FPM_InitFixedPoint_m(0.0, u2p14_T),
	FPM_InitFixedPoint_m(0.0, u2p14_T),FPM_InitFixedPoint_m(0.0, u2p14_T)},
	{FPM_InitFixedPoint_m(0.0, u2p14_T),FPM_InitFixedPoint_m(0.0, u2p14_T),
	FPM_InitFixedPoint_m(0.0, u2p14_T),FPM_InitFixedPoint_m(0.0, u2p14_T),
	FPM_InitFixedPoint_m(0.0, u2p14_T)},{FPM_InitFixedPoint_m(0.5, u2p14_T),
	FPM_InitFixedPoint_m(0.5, u2p14_T),FPM_InitFixedPoint_m(0.5, u2p14_T),
	FPM_InitFixedPoint_m(0.5, u2p14_T),FPM_InitFixedPoint_m(0.5, u2p14_T)},
	{FPM_InitFixedPoint_m(0.5, u2p14_T),FPM_InitFixedPoint_m(0.5, u2p14_T),
	FPM_InitFixedPoint_m(0.5, u2p14_T),FPM_InitFixedPoint_m(0.5, u2p14_T),
	FPM_InitFixedPoint_m(0.5, u2p14_T)},{FPM_InitFixedPoint_m(0.9, u2p14_T),
	FPM_InitFixedPoint_m(0.9, u2p14_T),FPM_InitFixedPoint_m(0.9, u2p14_T),
	FPM_InitFixedPoint_m(0.9, u2p14_T),FPM_InitFixedPoint_m(0.9, u2p14_T)},
	{FPM_InitFixedPoint_m(0.9, u2p14_T),FPM_InitFixedPoint_m(0.9, u2p14_T),
	FPM_InitFixedPoint_m(0.9, u2p14_T),FPM_InitFixedPoint_m(0.9, u2p14_T),
	FPM_InitFixedPoint_m(0.9, u2p14_T)},{FPM_InitFixedPoint_m(0.9, u2p14_T),
	FPM_InitFixedPoint_m(0.9, u2p14_T),FPM_InitFixedPoint_m(0.9, u2p14_T),
	FPM_InitFixedPoint_m(0.9, u2p14_T),FPM_InitFixedPoint_m(0.9, u2p14_T)},
	{FPM_InitFixedPoint_m(1.0, u2p14_T),FPM_InitFixedPoint_m(1.0, u2p14_T),
	FPM_InitFixedPoint_m(1.0, u2p14_T),FPM_InitFixedPoint_m(1.0, u2p14_T),
	FPM_InitFixedPoint_m(1.0, u2p14_T)},{FPM_InitFixedPoint_m(1.0, u2p14_T),
	FPM_InitFixedPoint_m(1.0, u2p14_T),FPM_InitFixedPoint_m(1.0, u2p14_T),
	FPM_InitFixedPoint_m(1.0, u2p14_T),FPM_InitFixedPoint_m(1.0, u2p14_T)}}, {{FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T)},{FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T)},
	{FPM_InitFixedPoint_m(0.25, u5p11_T),FPM_InitFixedPoint_m(0.25, u5p11_T),
	FPM_InitFixedPoint_m(0.25, u5p11_T),FPM_InitFixedPoint_m(0.25, u5p11_T),
	FPM_InitFixedPoint_m(0.25, u5p11_T)},
	{FPM_InitFixedPoint_m(0.25, u5p11_T),FPM_InitFixedPoint_m(0.25, u5p11_T),
	FPM_InitFixedPoint_m(0.25, u5p11_T),FPM_InitFixedPoint_m(0.25, u5p11_T),
	FPM_InitFixedPoint_m(0.25, u5p11_T)},{FPM_InitFixedPoint_m(0.5, u5p11_T),
	FPM_InitFixedPoint_m(0.5, u5p11_T),FPM_InitFixedPoint_m(0.5, u5p11_T),
	FPM_InitFixedPoint_m(0.5, u5p11_T),FPM_InitFixedPoint_m(0.5, u5p11_T)},
	{FPM_InitFixedPoint_m(0.5, u5p11_T),FPM_InitFixedPoint_m(0.5, u5p11_T),
	FPM_InitFixedPoint_m(0.5, u5p11_T),FPM_InitFixedPoint_m(0.5, u5p11_T),
	FPM_InitFixedPoint_m(0.5, u5p11_T)},{FPM_InitFixedPoint_m(0.75, u5p11_T),
	FPM_InitFixedPoint_m(0.75, u5p11_T),FPM_InitFixedPoint_m(0.75, u5p11_T),
	FPM_InitFixedPoint_m(0.75, u5p11_T),FPM_InitFixedPoint_m(0.75, u5p11_T)},
	{FPM_InitFixedPoint_m(0.75, u5p11_T),FPM_InitFixedPoint_m(0.75, u5p11_T),
	FPM_InitFixedPoint_m(0.75, u5p11_T),FPM_InitFixedPoint_m(0.75, u5p11_T),
	FPM_InitFixedPoint_m(0.75, u5p11_T)},{FPM_InitFixedPoint_m(1.1, u5p11_T),
	FPM_InitFixedPoint_m(1.1, u5p11_T),FPM_InitFixedPoint_m(1.1, u5p11_T),
	FPM_InitFixedPoint_m(1.1, u5p11_T),FPM_InitFixedPoint_m(1.1, u5p11_T)},
	{FPM_InitFixedPoint_m(1.1, u5p11_T),FPM_InitFixedPoint_m(1.1, u5p11_T),
	FPM_InitFixedPoint_m(1.1, u5p11_T),FPM_InitFixedPoint_m(1.1, u5p11_T),
	FPM_InitFixedPoint_m(1.1, u5p11_T)},{FPM_InitFixedPoint_m(1.1, u5p11_T),
	FPM_InitFixedPoint_m(1.1, u5p11_T),FPM_InitFixedPoint_m(1.1, u5p11_T),
	FPM_InitFixedPoint_m(1.1, u5p11_T),FPM_InitFixedPoint_m(1.1, u5p11_T)},
	{FPM_InitFixedPoint_m(1.1, u5p11_T),FPM_InitFixedPoint_m(1.1, u5p11_T),
	FPM_InitFixedPoint_m(1.1, u5p11_T),FPM_InitFixedPoint_m(1.1, u5p11_T),
	FPM_InitFixedPoint_m(1.1, u5p11_T)}}, {FPM_InitFixedPoint_m(0.0, u9p7_T), FPM_InitFixedPoint_m(5.0, u9p7_T),
	 FPM_InitFixedPoint_m(30.0, u9p7_T), FPM_InitFixedPoint_m(60.0, u9p7_T),
	 FPM_InitFixedPoint_m(80.0, u9p7_T), FPM_InitFixedPoint_m(100.0, u9p7_T),
	 FPM_InitFixedPoint_m(120.0, u9p7_T),
	 FPM_InitFixedPoint_m(150.0, u9p7_T)}, 0.0f, {FPM_InitFixedPoint_m(8.8, u4p12_T), FPM_InitFixedPoint_m(8.8, u4p12_T),
	 FPM_InitFixedPoint_m(8.8, u4p12_T), FPM_InitFixedPoint_m(8.8, u4p12_T),
	 FPM_InitFixedPoint_m(8.8, u4p12_T), FPM_InitFixedPoint_m(8.8, u4p12_T),
	 FPM_InitFixedPoint_m(8.8, u4p12_T), FPM_InitFixedPoint_m(8.8, u4p12_T),
	 FPM_InitFixedPoint_m(8.8, u4p12_T), FPM_InitFixedPoint_m(8.8, u4p12_T),
	 FPM_InitFixedPoint_m(8.8, u4p12_T), FPM_InitFixedPoint_m(8.8, u4p12_T)}, {FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T)}, {FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T)}, {FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T)}, {FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T),
	 FPM_InitFixedPoint_m(1.0, u4p12_T), FPM_InitFixedPoint_m(1.0, u4p12_T)}, {{FPM_InitFixedPoint_m(2.086427077, u12p4_T),
	FPM_InitFixedPoint_m(10.16797672, u12p4_T),
	FPM_InitFixedPoint_m(21.4030946, u12p4_T),
	FPM_InitFixedPoint_m(34.63743345, u12p4_T),
	FPM_InitFixedPoint_m(54.51215389, u12p4_T),
	FPM_InitFixedPoint_m(78.73446942, u12p4_T),
	FPM_InitFixedPoint_m(103.9123004, u12p4_T),
	FPM_InitFixedPoint_m(126.9879974, u12p4_T),
	FPM_InitFixedPoint_m(150.0636944, u12p4_T),
	FPM_InitFixedPoint_m(173.1871673, u12p4_T),
	FPM_InitFixedPoint_m(219.2907856, u12p4_T),
	FPM_InitFixedPoint_m(277.0516919, u12p4_T),
	FPM_InitFixedPoint_m(369.4022558, u12p4_T)},
	{FPM_InitFixedPoint_m(2.086427077, u12p4_T),
	FPM_InitFixedPoint_m(10.16797672, u12p4_T),
	FPM_InitFixedPoint_m(21.4030946, u12p4_T),
	FPM_InitFixedPoint_m(34.63743345, u12p4_T),
	FPM_InitFixedPoint_m(54.51215389, u12p4_T),
	FPM_InitFixedPoint_m(78.73446942, u12p4_T),
	FPM_InitFixedPoint_m(103.9123004, u12p4_T),
	FPM_InitFixedPoint_m(126.9879974, u12p4_T),
	FPM_InitFixedPoint_m(150.0636944, u12p4_T),
	FPM_InitFixedPoint_m(173.1871673, u12p4_T),
	FPM_InitFixedPoint_m(219.2907856, u12p4_T),
	FPM_InitFixedPoint_m(277.0516919, u12p4_T),
	FPM_InitFixedPoint_m(369.4022558, u12p4_T)},
	{FPM_InitFixedPoint_m(2.086427077, u12p4_T),
	FPM_InitFixedPoint_m(10.16797672, u12p4_T),
	FPM_InitFixedPoint_m(21.4030946, u12p4_T),
	FPM_InitFixedPoint_m(34.63743345, u12p4_T),
	FPM_InitFixedPoint_m(54.51215389, u12p4_T),
	FPM_InitFixedPoint_m(78.73446942, u12p4_T),
	FPM_InitFixedPoint_m(103.9123004, u12p4_T),
	FPM_InitFixedPoint_m(126.9879974, u12p4_T),
	FPM_InitFixedPoint_m(150.0636944, u12p4_T),
	FPM_InitFixedPoint_m(173.1871673, u12p4_T),
	FPM_InitFixedPoint_m(219.2907856, u12p4_T),
	FPM_InitFixedPoint_m(277.0516919, u12p4_T),
	FPM_InitFixedPoint_m(369.4022558, u12p4_T)},
	{FPM_InitFixedPoint_m(2.086427077, u12p4_T),
	FPM_InitFixedPoint_m(10.16797672, u12p4_T),
	FPM_InitFixedPoint_m(21.4030946, u12p4_T),
	FPM_InitFixedPoint_m(34.63743345, u12p4_T),
	FPM_InitFixedPoint_m(54.51215389, u12p4_T),
	FPM_InitFixedPoint_m(78.73446942, u12p4_T),
	FPM_InitFixedPoint_m(103.9123004, u12p4_T),
	FPM_InitFixedPoint_m(126.9879974, u12p4_T),
	FPM_InitFixedPoint_m(150.0636944, u12p4_T),
	FPM_InitFixedPoint_m(173.1871673, u12p4_T),
	FPM_InitFixedPoint_m(219.2907856, u12p4_T),
	FPM_InitFixedPoint_m(277.0516919, u12p4_T),
	FPM_InitFixedPoint_m(369.4022558, u12p4_T)},
	{FPM_InitFixedPoint_m(2.086427077, u12p4_T),
	FPM_InitFixedPoint_m(10.16797672, u12p4_T),
	FPM_InitFixedPoint_m(21.4030946, u12p4_T),
	FPM_InitFixedPoint_m(34.63743345, u12p4_T),
	FPM_InitFixedPoint_m(54.51215389, u12p4_T),
	FPM_InitFixedPoint_m(78.73446942, u12p4_T),
	FPM_InitFixedPoint_m(103.9123004, u12p4_T),
	FPM_InitFixedPoint_m(126.9879974, u12p4_T),
	FPM_InitFixedPoint_m(150.0636944, u12p4_T),
	FPM_InitFixedPoint_m(173.1871673, u12p4_T),
	FPM_InitFixedPoint_m(219.2907856, u12p4_T),
	FPM_InitFixedPoint_m(277.0516919, u12p4_T),
	FPM_InitFixedPoint_m(369.4022558, u12p4_T)},
	{FPM_InitFixedPoint_m(2.086427077, u12p4_T),
	FPM_InitFixedPoint_m(10.16797672, u12p4_T),
	FPM_InitFixedPoint_m(21.4030946, u12p4_T),
	FPM_InitFixedPoint_m(34.63743345, u12p4_T),
	FPM_InitFixedPoint_m(54.51215389, u12p4_T),
	FPM_InitFixedPoint_m(78.73446942, u12p4_T),
	FPM_InitFixedPoint_m(103.9123004, u12p4_T),
	FPM_InitFixedPoint_m(126.9879974, u12p4_T),
	FPM_InitFixedPoint_m(150.0636944, u12p4_T),
	FPM_InitFixedPoint_m(173.1871673, u12p4_T),
	FPM_InitFixedPoint_m(219.2907856, u12p4_T),
	FPM_InitFixedPoint_m(277.0516919, u12p4_T),
	FPM_InitFixedPoint_m(369.4022558, u12p4_T)},
	{FPM_InitFixedPoint_m(2.086427077, u12p4_T),
	FPM_InitFixedPoint_m(10.16797672, u12p4_T),
	FPM_InitFixedPoint_m(21.4030946, u12p4_T),
	FPM_InitFixedPoint_m(34.63743345, u12p4_T),
	FPM_InitFixedPoint_m(54.51215389, u12p4_T),
	FPM_InitFixedPoint_m(78.73446942, u12p4_T),
	FPM_InitFixedPoint_m(103.9123004, u12p4_T),
	FPM_InitFixedPoint_m(126.9879974, u12p4_T),
	FPM_InitFixedPoint_m(150.0636944, u12p4_T),
	FPM_InitFixedPoint_m(173.1871673, u12p4_T),
	FPM_InitFixedPoint_m(219.2907856, u12p4_T),
	FPM_InitFixedPoint_m(277.0516919, u12p4_T),
	FPM_InitFixedPoint_m(369.4022558, u12p4_T)},
	{FPM_InitFixedPoint_m(2.086427077, u12p4_T),
	FPM_InitFixedPoint_m(10.16797672, u12p4_T),
	FPM_InitFixedPoint_m(21.4030946, u12p4_T),
	FPM_InitFixedPoint_m(34.63743345, u12p4_T),
	FPM_InitFixedPoint_m(54.51215389, u12p4_T),
	FPM_InitFixedPoint_m(78.73446942, u12p4_T),
	FPM_InitFixedPoint_m(103.9123004, u12p4_T),
	FPM_InitFixedPoint_m(126.9879974, u12p4_T),
	FPM_InitFixedPoint_m(150.0636944, u12p4_T),
	FPM_InitFixedPoint_m(173.1871673, u12p4_T),
	FPM_InitFixedPoint_m(219.2907856, u12p4_T),
	FPM_InitFixedPoint_m(277.0516919, u12p4_T),
	FPM_InitFixedPoint_m(369.4022558, u12p4_T)},
	{FPM_InitFixedPoint_m(2.086427077, u12p4_T),
	FPM_InitFixedPoint_m(10.16797672, u12p4_T),
	FPM_InitFixedPoint_m(21.4030946, u12p4_T),
	FPM_InitFixedPoint_m(34.63743345, u12p4_T),
	FPM_InitFixedPoint_m(54.51215389, u12p4_T),
	FPM_InitFixedPoint_m(78.73446942, u12p4_T),
	FPM_InitFixedPoint_m(103.9123004, u12p4_T),
	FPM_InitFixedPoint_m(126.9879974, u12p4_T),
	FPM_InitFixedPoint_m(150.0636944, u12p4_T),
	FPM_InitFixedPoint_m(173.1871673, u12p4_T),
	FPM_InitFixedPoint_m(219.2907856, u12p4_T),
	FPM_InitFixedPoint_m(277.0516919, u12p4_T),
	FPM_InitFixedPoint_m(369.4022558, u12p4_T)},
	{FPM_InitFixedPoint_m(2.086427077, u12p4_T),
	FPM_InitFixedPoint_m(10.16797672, u12p4_T),
	FPM_InitFixedPoint_m(21.4030946, u12p4_T),
	FPM_InitFixedPoint_m(34.63743345, u12p4_T),
	FPM_InitFixedPoint_m(54.51215389, u12p4_T),
	FPM_InitFixedPoint_m(78.73446942, u12p4_T),
	FPM_InitFixedPoint_m(103.9123004, u12p4_T),
	FPM_InitFixedPoint_m(126.9879974, u12p4_T),
	FPM_InitFixedPoint_m(150.0636944, u12p4_T),
	FPM_InitFixedPoint_m(173.1871673, u12p4_T),
	FPM_InitFixedPoint_m(219.2907856, u12p4_T),
	FPM_InitFixedPoint_m(277.0516919, u12p4_T),
	FPM_InitFixedPoint_m(369.4022558, u12p4_T)},
	{FPM_InitFixedPoint_m(2.086427077, u12p4_T),
	FPM_InitFixedPoint_m(10.16797672, u12p4_T),
	FPM_InitFixedPoint_m(21.4030946, u12p4_T),
	FPM_InitFixedPoint_m(34.63743345, u12p4_T),
	FPM_InitFixedPoint_m(54.51215389, u12p4_T),
	FPM_InitFixedPoint_m(78.73446942, u12p4_T),
	FPM_InitFixedPoint_m(103.9123004, u12p4_T),
	FPM_InitFixedPoint_m(126.9879974, u12p4_T),
	FPM_InitFixedPoint_m(150.0636944, u12p4_T),
	FPM_InitFixedPoint_m(173.1871673, u12p4_T),
	FPM_InitFixedPoint_m(219.2907856, u12p4_T),
	FPM_InitFixedPoint_m(277.0516919, u12p4_T),
	FPM_InitFixedPoint_m(369.4022558, u12p4_T)},
	{FPM_InitFixedPoint_m(2.086427077, u12p4_T),
	FPM_InitFixedPoint_m(10.16797672, u12p4_T),
	FPM_InitFixedPoint_m(21.4030946, u12p4_T),
	FPM_InitFixedPoint_m(34.63743345, u12p4_T),
	FPM_InitFixedPoint_m(54.51215389, u12p4_T),
	FPM_InitFixedPoint_m(78.73446942, u12p4_T),
	FPM_InitFixedPoint_m(103.9123004, u12p4_T),
	FPM_InitFixedPoint_m(126.9879974, u12p4_T),
	FPM_InitFixedPoint_m(150.0636944, u12p4_T),
	FPM_InitFixedPoint_m(173.1871673, u12p4_T),
	FPM_InitFixedPoint_m(219.2907856, u12p4_T),
	FPM_InitFixedPoint_m(277.0516919, u12p4_T),
	FPM_InitFixedPoint_m(369.4022558, u12p4_T)}}, {{FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T)},{FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T)},
	{FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T)},{FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T)},
	{FPM_InitFixedPoint_m(4.73E-06, u5p11_T),
	FPM_InitFixedPoint_m(0.000112305, u5p11_T),
	FPM_InitFixedPoint_m(0.000497601, u5p11_T),
	FPM_InitFixedPoint_m(0.001303225, u5p11_T),
	FPM_InitFixedPoint_m(0.003227861, u5p11_T),
	FPM_InitFixedPoint_m(0.006733764, u5p11_T),
	FPM_InitFixedPoint_m(0.011729028, u5p11_T),
	FPM_InitFixedPoint_m(0.017516747, u5p11_T),
	FPM_InitFixedPoint_m(0.024461291, u5p11_T),
	FPM_InitFixedPoint_m(0.032580633, u5p11_T),
	FPM_InitFixedPoint_m(0.052235875, u5p11_T),
	FPM_InitFixedPoint_m(0.083377663, u5p11_T),
	FPM_InitFixedPoint_m(0.148226957, u5p11_T)},
	{FPM_InitFixedPoint_m(0.000486471, u5p11_T),
	FPM_InitFixedPoint_m(0.002683176, u5p11_T),
	FPM_InitFixedPoint_m(0.006562175, u5p11_T),
	FPM_InitFixedPoint_m(0.0123626, u5p11_T),
	FPM_InitFixedPoint_m(0.023575163, u5p11_T),
	FPM_InitFixedPoint_m(0.041301363, u5p11_T),
	FPM_InitFixedPoint_m(0.064455533, u5p11_T),
	FPM_InitFixedPoint_m(0.089909836, u5p11_T),
	FPM_InitFixedPoint_m(0.119413028, u5p11_T),
	FPM_InitFixedPoint_m(0.153038774, u5p11_T),
	FPM_InitFixedPoint_m(0.232215934, u5p11_T),
	FPM_InitFixedPoint_m(0.354221553, u5p11_T),
	FPM_InitFixedPoint_m(0.601993991, u5p11_T)},
	{FPM_InitFixedPoint_m(0.00237325, u5p11_T),
	FPM_InitFixedPoint_m(0.012012076, u5p11_T),
	FPM_InitFixedPoint_m(0.02659086, u5p11_T),
	FPM_InitFixedPoint_m(0.045522684, u5p11_T),
	FPM_InitFixedPoint_m(0.077527555, u5p11_T),
	FPM_InitFixedPoint_m(0.122334762, u5p11_T),
	FPM_InitFixedPoint_m(0.175664812, u5p11_T),
	FPM_InitFixedPoint_m(0.230589844, u5p11_T),
	FPM_InitFixedPoint_m(0.291299003, u5p11_T),
	FPM_InitFixedPoint_m(0.357935954, u5p11_T),
	FPM_InitFixedPoint_m(0.508131234, u5p11_T),
	FPM_InitFixedPoint_m(0.728886973, u5p11_T),
	FPM_InitFixedPoint_m(1.157132994, u5p11_T)},
	{FPM_InitFixedPoint_m(0.004734678, u5p11_T),
	FPM_InitFixedPoint_m(0.02374339, u5p11_T),
	FPM_InitFixedPoint_m(0.051937718, u5p11_T),
	FPM_InitFixedPoint_m(0.087787305, u5p11_T),
	FPM_InitFixedPoint_m(0.146985458, u5p11_T),
	FPM_InitFixedPoint_m(0.227835113, u5p11_T),
	FPM_InitFixedPoint_m(0.322007055, u5p11_T),
	FPM_InitFixedPoint_m(0.417387822, u5p11_T),
	FPM_InitFixedPoint_m(0.521444778, u5p11_T),
	FPM_InitFixedPoint_m(0.634420325, u5p11_T),
	FPM_InitFixedPoint_m(0.885672782, u5p11_T),
	FPM_InitFixedPoint_m(1.249329789, u5p11_T),
	FPM_InitFixedPoint_m(1.943698596, u5p11_T)},
	{FPM_InitFixedPoint_m(0.004734678, u5p11_T),
	FPM_InitFixedPoint_m(0.02374339, u5p11_T),
	FPM_InitFixedPoint_m(0.051937718, u5p11_T),
	FPM_InitFixedPoint_m(0.087787305, u5p11_T),
	FPM_InitFixedPoint_m(0.146985458, u5p11_T),
	FPM_InitFixedPoint_m(0.227835113, u5p11_T),
	FPM_InitFixedPoint_m(0.322007055, u5p11_T),
	FPM_InitFixedPoint_m(0.417387822, u5p11_T),
	FPM_InitFixedPoint_m(0.521444778, u5p11_T),
	FPM_InitFixedPoint_m(0.634420325, u5p11_T),
	FPM_InitFixedPoint_m(0.885672782, u5p11_T),
	FPM_InitFixedPoint_m(1.249329789, u5p11_T),
	FPM_InitFixedPoint_m(1.943698596, u5p11_T)},
	{FPM_InitFixedPoint_m(0.004734678, u5p11_T),
	FPM_InitFixedPoint_m(0.02374339, u5p11_T),
	FPM_InitFixedPoint_m(0.051937718, u5p11_T),
	FPM_InitFixedPoint_m(0.087787305, u5p11_T),
	FPM_InitFixedPoint_m(0.146985458, u5p11_T),
	FPM_InitFixedPoint_m(0.227835113, u5p11_T),
	FPM_InitFixedPoint_m(0.322007055, u5p11_T),
	FPM_InitFixedPoint_m(0.417387822, u5p11_T),
	FPM_InitFixedPoint_m(0.521444778, u5p11_T),
	FPM_InitFixedPoint_m(0.634420325, u5p11_T),
	FPM_InitFixedPoint_m(0.885672782, u5p11_T),
	FPM_InitFixedPoint_m(1.249329789, u5p11_T),
	FPM_InitFixedPoint_m(1.943698596, u5p11_T)},
	{FPM_InitFixedPoint_m(0.004734678, u5p11_T),
	FPM_InitFixedPoint_m(0.02374339, u5p11_T),
	FPM_InitFixedPoint_m(0.051937718, u5p11_T),
	FPM_InitFixedPoint_m(0.087787305, u5p11_T),
	FPM_InitFixedPoint_m(0.146985458, u5p11_T),
	FPM_InitFixedPoint_m(0.227835113, u5p11_T),
	FPM_InitFixedPoint_m(0.322007055, u5p11_T),
	FPM_InitFixedPoint_m(0.417387822, u5p11_T),
	FPM_InitFixedPoint_m(0.521444778, u5p11_T),
	FPM_InitFixedPoint_m(0.634420325, u5p11_T),
	FPM_InitFixedPoint_m(0.885672782, u5p11_T),
	FPM_InitFixedPoint_m(1.249329789, u5p11_T),
	FPM_InitFixedPoint_m(1.943698596, u5p11_T)},
	{FPM_InitFixedPoint_m(0.004734678, u5p11_T),
	FPM_InitFixedPoint_m(0.02374339, u5p11_T),
	FPM_InitFixedPoint_m(0.051937718, u5p11_T),
	FPM_InitFixedPoint_m(0.087787305, u5p11_T),
	FPM_InitFixedPoint_m(0.146985458, u5p11_T),
	FPM_InitFixedPoint_m(0.227835113, u5p11_T),
	FPM_InitFixedPoint_m(0.322007055, u5p11_T),
	FPM_InitFixedPoint_m(0.417387822, u5p11_T),
	FPM_InitFixedPoint_m(0.521444778, u5p11_T),
	FPM_InitFixedPoint_m(0.634420325, u5p11_T),
	FPM_InitFixedPoint_m(0.885672782, u5p11_T),
	FPM_InitFixedPoint_m(1.249329789, u5p11_T),
	FPM_InitFixedPoint_m(1.943698596, u5p11_T)}}, { FPM_InitFixedPoint_m(1.0, u2p14_T),FPM_InitFixedPoint_m(1.0, u2p14_T),
	FPM_InitFixedPoint_m(1.0, u2p14_T),FPM_InitFixedPoint_m(1.0, u2p14_T),
	FPM_InitFixedPoint_m(1.0, u2p14_T) }, { FPM_InitFixedPoint_m(0.005, um1p17_T),
	 FPM_InitFixedPoint_m(0.005, um1p17_T),
	 FPM_InitFixedPoint_m(0.005, um1p17_T),
	 FPM_InitFixedPoint_m(0.005, um1p17_T),
	 FPM_InitFixedPoint_m(0.005, um1p17_T),
	 FPM_InitFixedPoint_m(0.005, um1p17_T),
	 FPM_InitFixedPoint_m(0.005, um1p17_T),
	 FPM_InitFixedPoint_m(0.005, um1p17_T),
	 FPM_InitFixedPoint_m(0.005, um1p17_T),
	 FPM_InitFixedPoint_m(0.005, um1p17_T) }, { FPM_InitFixedPoint_m(1.0, u8p8_T), FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(0.3, u8p8_T), FPM_InitFixedPoint_m(0.2, u8p8_T),
	 FPM_InitFixedPoint_m(0.1, u8p8_T), FPM_InitFixedPoint_m(0.0, u8p8_T),
	 FPM_InitFixedPoint_m(0.0, u8p8_T), FPM_InitFixedPoint_m(0.0, u8p8_T),
	 FPM_InitFixedPoint_m(0.0, u8p8_T), FPM_InitFixedPoint_m(0.0, u8p8_T),
	FPM_InitFixedPoint_m(0.0, u8p8_T), FPM_InitFixedPoint_m(0.0, u8p8_T) }, { FPM_InitFixedPoint_m(1.0, u2p14_T),FPM_InitFixedPoint_m(1.0, u2p14_T),
	FPM_InitFixedPoint_m(1.0, u2p14_T),FPM_InitFixedPoint_m(1.0, u2p14_T),
	FPM_InitFixedPoint_m(1.0, u2p14_T) }, { FPM_InitFixedPoint_m(0.05078125, u8p8_T),
	 FPM_InitFixedPoint_m(0.10546875, u8p8_T),
	 FPM_InitFixedPoint_m(0.15625, u8p8_T),
	 FPM_InitFixedPoint_m(0.20703125, u8p8_T),
	 FPM_InitFixedPoint_m(0.2578125, u8p8_T) }, {{FPM_InitFixedPoint_m(15.0, u12p4_T),
	 FPM_InitFixedPoint_m(15.0, u12p4_T),
	 FPM_InitFixedPoint_m(15.0, u12p4_T),FPM_InitFixedPoint_m(15.0, u12p4_T),
	FPM_InitFixedPoint_m(15.0, u12p4_T), FPM_InitFixedPoint_m(15.0, u12p4_T),
	 FPM_InitFixedPoint_m(15.0, u12p4_T),
	 FPM_InitFixedPoint_m(15.0, u12p4_T),FPM_InitFixedPoint_m(15.0, u12p4_T),
	FPM_InitFixedPoint_m(15.0, u12p4_T),FPM_InitFixedPoint_m(15.0, u12p4_T),
	 FPM_InitFixedPoint_m(15.0, u12p4_T)},
	{FPM_InitFixedPoint_m(15.0, u12p4_T),
	 FPM_InitFixedPoint_m(15.0, u12p4_T),FPM_InitFixedPoint_m(15.0, u12p4_T),
	FPM_InitFixedPoint_m(15.0, u12p4_T), FPM_InitFixedPoint_m(15.0, u12p4_T),
	 FPM_InitFixedPoint_m(15.0, u12p4_T),FPM_InitFixedPoint_m(15.0, u12p4_T),
	 FPM_InitFixedPoint_m(15.0, u12p4_T),
	 FPM_InitFixedPoint_m(15.0, u12p4_T),
	 FPM_InitFixedPoint_m(15.0, u12p4_T),
	 FPM_InitFixedPoint_m(15.0, u12p4_T),
	 FPM_InitFixedPoint_m(15.0, u12p4_T)}}, FPM_InitFixedPoint_m(0.0, u9p7_T), 20583U, 3991U, FPM_InitFixedPoint_m(30.0, u9p7_T), FPM_InitFixedPoint_m(3.0, u12p4_T), FPM_InitFixedPoint_m(0.0195, u4p12_T), { FPM_InitFixedPoint_m(0.0, u9p7_T), FPM_InitFixedPoint_m(5.0, u9p7_T),
	 FPM_InitFixedPoint_m(10.0, u9p7_T), FPM_InitFixedPoint_m(20.0, u9p7_T) }, { FPM_InitFixedPoint_m(0.0, u9p7_T), FPM_InitFixedPoint_m(5.0, u9p7_T),
	 FPM_InitFixedPoint_m(10.0, u9p7_T), FPM_InitFixedPoint_m(20.0, u9p7_T) }, { FPM_InitFixedPoint_m(25.0, u12p4_T),
	 FPM_InitFixedPoint_m(50.0, u12p4_T) }, { FPM_InitFixedPoint_m(60.0, u12p4_T),
	 FPM_InitFixedPoint_m(15.0, u12p4_T) }, { FPM_InitFixedPoint_m(0.0, u8p8_T), FPM_InitFixedPoint_m(1.0, u8p8_T) }, {{FPM_InitFixedPoint_m(90.0, u12p4_T),
	 FPM_InitFixedPoint_m(60.0, u12p4_T),
	 FPM_InitFixedPoint_m(30.0, u12p4_T),
	 FPM_InitFixedPoint_m(0.0, u12p4_T)},
	{FPM_InitFixedPoint_m(90.0, u12p4_T),
	 FPM_InitFixedPoint_m(60.0, u12p4_T),
	 FPM_InitFixedPoint_m(30.0, u12p4_T),
	 FPM_InitFixedPoint_m(0.0, u12p4_T)},
	{FPM_InitFixedPoint_m(90.0, u12p4_T),
	 FPM_InitFixedPoint_m(60.0, u12p4_T),
	 FPM_InitFixedPoint_m(30.0, u12p4_T),
	 FPM_InitFixedPoint_m(0.0, u12p4_T)},
	{FPM_InitFixedPoint_m(90.0, u12p4_T),
	 FPM_InitFixedPoint_m(60.0, u12p4_T),
	 FPM_InitFixedPoint_m(30.0, u12p4_T),
	 FPM_InitFixedPoint_m(0.0, u12p4_T)}}, {{FPM_InitFixedPoint_m(1.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.66, u1p15_T),
	 FPM_InitFixedPoint_m(0.33, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T)},{FPM_InitFixedPoint_m(1.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.66, u1p15_T),
	 FPM_InitFixedPoint_m(0.33, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T)},{FPM_InitFixedPoint_m(1.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.66, u1p15_T),
	 FPM_InitFixedPoint_m(0.33, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T)},{FPM_InitFixedPoint_m(1.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.66, u1p15_T),
	 FPM_InitFixedPoint_m(0.33, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T)}}, {{FPM_InitFixedPoint_m(0.0, u0p16_T),
	 FPM_InitFixedPoint_m(0.004, u0p16_T)},
	{FPM_InitFixedPoint_m(0.0, u0p16_T),
	 FPM_InitFixedPoint_m(0.004, u0p16_T)},
	{FPM_InitFixedPoint_m(0.0, u0p16_T),
	 FPM_InitFixedPoint_m(0.004, u0p16_T)},
	{FPM_InitFixedPoint_m(0.0, u0p16_T),
	 FPM_InitFixedPoint_m(0.004, u0p16_T)}}, {{FPM_InitFixedPoint_m(0.0, u0p16_T),
	 FPM_InitFixedPoint_m(0.001953125, u0p16_T)},
	{FPM_InitFixedPoint_m(0.0, u0p16_T),
	 FPM_InitFixedPoint_m(0.001953125, u0p16_T)},
	{FPM_InitFixedPoint_m(0.0, u0p16_T),
	 FPM_InitFixedPoint_m(0.001953125, u0p16_T)},
	{FPM_InitFixedPoint_m(0.0, u0p16_T),
	 FPM_InitFixedPoint_m(0.001953125, u0p16_T)}}, {{FPM_InitFixedPoint_m(20.0, u12p4_T),
	FPM_InitFixedPoint_m(0.0, u12p4_T)},{FPM_InitFixedPoint_m(20.0, u12p4_T),
	FPM_InitFixedPoint_m(0.0, u12p4_T)},{FPM_InitFixedPoint_m(20.0, u12p4_T),
	FPM_InitFixedPoint_m(0.0, u12p4_T)},{FPM_InitFixedPoint_m(20.0, u12p4_T),
	FPM_InitFixedPoint_m(0.0, u12p4_T)}}, {FPM_InitFixedPoint_m(8.0, u7p9_T), FPM_InitFixedPoint_m(8.0, u7p9_T),
	 FPM_InitFixedPoint_m(8.0, u7p9_T), FPM_InitFixedPoint_m(8.0, u7p9_T),
	 FPM_InitFixedPoint_m(8.0, u7p9_T), FPM_InitFixedPoint_m(8.0, u7p9_T),
	 FPM_InitFixedPoint_m(8.0, u7p9_T), FPM_InitFixedPoint_m(8.0, u7p9_T),
	 FPM_InitFixedPoint_m(8.0, u7p9_T), FPM_InitFixedPoint_m(8.0, u7p9_T),
	 FPM_InitFixedPoint_m(8.0, u7p9_T), FPM_InitFixedPoint_m(8.0, u7p9_T)}, {{FPM_InitFixedPoint_m(0.25, u3p13_T),
	FPM_InitFixedPoint_m(0.25, u3p13_T),FPM_InitFixedPoint_m(0.25, u3p13_T),
	FPM_InitFixedPoint_m(0.25, u3p13_T),FPM_InitFixedPoint_m(0.25, u3p13_T),
	FPM_InitFixedPoint_m(0.25, u3p13_T),FPM_InitFixedPoint_m(0.25, u3p13_T),
	FPM_InitFixedPoint_m(0.25, u3p13_T),FPM_InitFixedPoint_m(0.25, u3p13_T),
	FPM_InitFixedPoint_m(0.25, u3p13_T),FPM_InitFixedPoint_m(0.25, u3p13_T),
	FPM_InitFixedPoint_m(0.25, u3p13_T),FPM_InitFixedPoint_m(0.25, u3p13_T)},
	{FPM_InitFixedPoint_m(0.2, u3p13_T),FPM_InitFixedPoint_m(0.2, u3p13_T),
	FPM_InitFixedPoint_m(0.2, u3p13_T),FPM_InitFixedPoint_m(0.2, u3p13_T),
	FPM_InitFixedPoint_m(0.2, u3p13_T),FPM_InitFixedPoint_m(0.2, u3p13_T),
	FPM_InitFixedPoint_m(0.2, u3p13_T),FPM_InitFixedPoint_m(0.2, u3p13_T),
	FPM_InitFixedPoint_m(0.2, u3p13_T),FPM_InitFixedPoint_m(0.2, u3p13_T),
	FPM_InitFixedPoint_m(0.2, u3p13_T),FPM_InitFixedPoint_m(0.2, u3p13_T),
	FPM_InitFixedPoint_m(0.2, u3p13_T)},{FPM_InitFixedPoint_m(0.13, u3p13_T),
	FPM_InitFixedPoint_m(0.13, u3p13_T),FPM_InitFixedPoint_m(0.13, u3p13_T),
	FPM_InitFixedPoint_m(0.13, u3p13_T),FPM_InitFixedPoint_m(0.13, u3p13_T),
	FPM_InitFixedPoint_m(0.13, u3p13_T),FPM_InitFixedPoint_m(0.13, u3p13_T),
	FPM_InitFixedPoint_m(0.13, u3p13_T),FPM_InitFixedPoint_m(0.13, u3p13_T),
	FPM_InitFixedPoint_m(0.13, u3p13_T),FPM_InitFixedPoint_m(0.13, u3p13_T),
	FPM_InitFixedPoint_m(0.13, u3p13_T),FPM_InitFixedPoint_m(0.13, u3p13_T)},
	{FPM_InitFixedPoint_m(0.08, u3p13_T),FPM_InitFixedPoint_m(0.08, u3p13_T),
	FPM_InitFixedPoint_m(0.08, u3p13_T),FPM_InitFixedPoint_m(0.08, u3p13_T),
	FPM_InitFixedPoint_m(0.08, u3p13_T),FPM_InitFixedPoint_m(0.08, u3p13_T),
	FPM_InitFixedPoint_m(0.08, u3p13_T),FPM_InitFixedPoint_m(0.08, u3p13_T),
	FPM_InitFixedPoint_m(0.08, u3p13_T),FPM_InitFixedPoint_m(0.08, u3p13_T),
	FPM_InitFixedPoint_m(0.08, u3p13_T),FPM_InitFixedPoint_m(0.08, u3p13_T),
	FPM_InitFixedPoint_m(0.08, u3p13_T)},
	{FPM_InitFixedPoint_m(0.04, u3p13_T),FPM_InitFixedPoint_m(0.04, u3p13_T),
	FPM_InitFixedPoint_m(0.04, u3p13_T),FPM_InitFixedPoint_m(0.04, u3p13_T),
	FPM_InitFixedPoint_m(0.04, u3p13_T),FPM_InitFixedPoint_m(0.04, u3p13_T),
	FPM_InitFixedPoint_m(0.04, u3p13_T),FPM_InitFixedPoint_m(0.04, u3p13_T),
	FPM_InitFixedPoint_m(0.04, u3p13_T),FPM_InitFixedPoint_m(0.04, u3p13_T),
	FPM_InitFixedPoint_m(0.04, u3p13_T),FPM_InitFixedPoint_m(0.04, u3p13_T),
	FPM_InitFixedPoint_m(0.04, u3p13_T)},
	{FPM_InitFixedPoint_m(0.01, u3p13_T),FPM_InitFixedPoint_m(0.01, u3p13_T),
	FPM_InitFixedPoint_m(0.01, u3p13_T),FPM_InitFixedPoint_m(0.01, u3p13_T),
	FPM_InitFixedPoint_m(0.01, u3p13_T),FPM_InitFixedPoint_m(0.01, u3p13_T),
	FPM_InitFixedPoint_m(0.01, u3p13_T),FPM_InitFixedPoint_m(0.01, u3p13_T),
	FPM_InitFixedPoint_m(0.01, u3p13_T),FPM_InitFixedPoint_m(0.01, u3p13_T),
	FPM_InitFixedPoint_m(0.01, u3p13_T),FPM_InitFixedPoint_m(0.01, u3p13_T),
	FPM_InitFixedPoint_m(0.01, u3p13_T)},{FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T)},
	{FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T)},{FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T)},
	{FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T)},{FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T)},
	{FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T)}}, {{FPM_InitFixedPoint_m(0.25, u3p13_T),
	FPM_InitFixedPoint_m(0.25, u3p13_T),FPM_InitFixedPoint_m(0.25, u3p13_T),
	FPM_InitFixedPoint_m(0.25, u3p13_T),FPM_InitFixedPoint_m(0.25, u3p13_T),
	FPM_InitFixedPoint_m(0.25, u3p13_T),FPM_InitFixedPoint_m(0.25, u3p13_T),
	FPM_InitFixedPoint_m(0.25, u3p13_T),FPM_InitFixedPoint_m(0.25, u3p13_T),
	FPM_InitFixedPoint_m(0.25, u3p13_T),FPM_InitFixedPoint_m(0.25, u3p13_T),
	FPM_InitFixedPoint_m(0.25, u3p13_T),FPM_InitFixedPoint_m(0.25, u3p13_T)},
	{FPM_InitFixedPoint_m(0.2, u3p13_T),FPM_InitFixedPoint_m(0.2, u3p13_T),
	FPM_InitFixedPoint_m(0.2, u3p13_T),FPM_InitFixedPoint_m(0.2, u3p13_T),
	FPM_InitFixedPoint_m(0.2, u3p13_T),FPM_InitFixedPoint_m(0.2, u3p13_T),
	FPM_InitFixedPoint_m(0.2, u3p13_T),FPM_InitFixedPoint_m(0.2, u3p13_T),
	FPM_InitFixedPoint_m(0.2, u3p13_T),FPM_InitFixedPoint_m(0.2, u3p13_T),
	FPM_InitFixedPoint_m(0.2, u3p13_T),FPM_InitFixedPoint_m(0.2, u3p13_T),
	FPM_InitFixedPoint_m(0.2, u3p13_T)},{FPM_InitFixedPoint_m(0.13, u3p13_T),
	FPM_InitFixedPoint_m(0.13, u3p13_T),FPM_InitFixedPoint_m(0.13, u3p13_T),
	FPM_InitFixedPoint_m(0.13, u3p13_T),FPM_InitFixedPoint_m(0.13, u3p13_T),
	FPM_InitFixedPoint_m(0.13, u3p13_T),FPM_InitFixedPoint_m(0.13, u3p13_T),
	FPM_InitFixedPoint_m(0.13, u3p13_T),FPM_InitFixedPoint_m(0.13, u3p13_T),
	FPM_InitFixedPoint_m(0.13, u3p13_T),FPM_InitFixedPoint_m(0.13, u3p13_T),
	FPM_InitFixedPoint_m(0.13, u3p13_T),FPM_InitFixedPoint_m(0.13, u3p13_T)},
	{FPM_InitFixedPoint_m(0.08, u3p13_T),FPM_InitFixedPoint_m(0.08, u3p13_T),
	FPM_InitFixedPoint_m(0.08, u3p13_T),FPM_InitFixedPoint_m(0.08, u3p13_T),
	FPM_InitFixedPoint_m(0.08, u3p13_T),FPM_InitFixedPoint_m(0.08, u3p13_T),
	FPM_InitFixedPoint_m(0.08, u3p13_T),FPM_InitFixedPoint_m(0.08, u3p13_T),
	FPM_InitFixedPoint_m(0.08, u3p13_T),FPM_InitFixedPoint_m(0.08, u3p13_T),
	FPM_InitFixedPoint_m(0.08, u3p13_T),FPM_InitFixedPoint_m(0.08, u3p13_T),
	FPM_InitFixedPoint_m(0.08, u3p13_T)},
	{FPM_InitFixedPoint_m(0.04, u3p13_T),FPM_InitFixedPoint_m(0.04, u3p13_T),
	FPM_InitFixedPoint_m(0.04, u3p13_T),FPM_InitFixedPoint_m(0.04, u3p13_T),
	FPM_InitFixedPoint_m(0.04, u3p13_T),FPM_InitFixedPoint_m(0.04, u3p13_T),
	FPM_InitFixedPoint_m(0.04, u3p13_T),FPM_InitFixedPoint_m(0.04, u3p13_T),
	FPM_InitFixedPoint_m(0.04, u3p13_T),FPM_InitFixedPoint_m(0.04, u3p13_T),
	FPM_InitFixedPoint_m(0.04, u3p13_T),FPM_InitFixedPoint_m(0.04, u3p13_T),
	FPM_InitFixedPoint_m(0.04, u3p13_T)},
	{FPM_InitFixedPoint_m(0.01, u3p13_T),FPM_InitFixedPoint_m(0.01, u3p13_T),
	FPM_InitFixedPoint_m(0.01, u3p13_T),FPM_InitFixedPoint_m(0.01, u3p13_T),
	FPM_InitFixedPoint_m(0.01, u3p13_T),FPM_InitFixedPoint_m(0.01, u3p13_T),
	FPM_InitFixedPoint_m(0.01, u3p13_T),FPM_InitFixedPoint_m(0.01, u3p13_T),
	FPM_InitFixedPoint_m(0.01, u3p13_T),FPM_InitFixedPoint_m(0.01, u3p13_T),
	FPM_InitFixedPoint_m(0.01, u3p13_T),FPM_InitFixedPoint_m(0.01, u3p13_T),
	FPM_InitFixedPoint_m(0.01, u3p13_T)},{FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T)},
	{FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T)},{FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T)},
	{FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T)},{FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T)},
	{FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T),FPM_InitFixedPoint_m(0.0, u3p13_T),
	FPM_InitFixedPoint_m(0.0, u3p13_T)}}, {{FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T)},{FPM_InitFixedPoint_m(0.25, u5p11_T),
	FPM_InitFixedPoint_m(0.25, u5p11_T),FPM_InitFixedPoint_m(0.25, u5p11_T),
	FPM_InitFixedPoint_m(0.25, u5p11_T),FPM_InitFixedPoint_m(0.25, u5p11_T),
	FPM_InitFixedPoint_m(0.25, u5p11_T),FPM_InitFixedPoint_m(0.25, u5p11_T),
	FPM_InitFixedPoint_m(0.25, u5p11_T),FPM_InitFixedPoint_m(0.25, u5p11_T),
	FPM_InitFixedPoint_m(0.25, u5p11_T),FPM_InitFixedPoint_m(0.25, u5p11_T),
	FPM_InitFixedPoint_m(0.25, u5p11_T),FPM_InitFixedPoint_m(0.25, u5p11_T)},
	{FPM_InitFixedPoint_m(0.5, u5p11_T),FPM_InitFixedPoint_m(0.5, u5p11_T),
	FPM_InitFixedPoint_m(0.5, u5p11_T),FPM_InitFixedPoint_m(0.5, u5p11_T),
	FPM_InitFixedPoint_m(0.5, u5p11_T),FPM_InitFixedPoint_m(0.5, u5p11_T),
	FPM_InitFixedPoint_m(0.5, u5p11_T),FPM_InitFixedPoint_m(0.5, u5p11_T),
	FPM_InitFixedPoint_m(0.5, u5p11_T),FPM_InitFixedPoint_m(0.5, u5p11_T),
	FPM_InitFixedPoint_m(0.5, u5p11_T),FPM_InitFixedPoint_m(0.5, u5p11_T),
	FPM_InitFixedPoint_m(0.5, u5p11_T)},{FPM_InitFixedPoint_m(0.75, u5p11_T),
	FPM_InitFixedPoint_m(0.75, u5p11_T),FPM_InitFixedPoint_m(0.75, u5p11_T),
	FPM_InitFixedPoint_m(0.75, u5p11_T),FPM_InitFixedPoint_m(0.75, u5p11_T),
	FPM_InitFixedPoint_m(0.75, u5p11_T),FPM_InitFixedPoint_m(0.75, u5p11_T),
	FPM_InitFixedPoint_m(0.75, u5p11_T),FPM_InitFixedPoint_m(0.75, u5p11_T),
	FPM_InitFixedPoint_m(0.75, u5p11_T),FPM_InitFixedPoint_m(0.75, u5p11_T),
	FPM_InitFixedPoint_m(0.75, u5p11_T),FPM_InitFixedPoint_m(0.75, u5p11_T)},
	{FPM_InitFixedPoint_m(1.0, u5p11_T),FPM_InitFixedPoint_m(1.0, u5p11_T),
	FPM_InitFixedPoint_m(1.0, u5p11_T),FPM_InitFixedPoint_m(1.0, u5p11_T),
	FPM_InitFixedPoint_m(1.0, u5p11_T),FPM_InitFixedPoint_m(1.0, u5p11_T),
	FPM_InitFixedPoint_m(1.0, u5p11_T),FPM_InitFixedPoint_m(1.0, u5p11_T),
	FPM_InitFixedPoint_m(1.0, u5p11_T),FPM_InitFixedPoint_m(1.0, u5p11_T),
	FPM_InitFixedPoint_m(1.0, u5p11_T),FPM_InitFixedPoint_m(1.0, u5p11_T),
	FPM_InitFixedPoint_m(1.0, u5p11_T)},{FPM_InitFixedPoint_m(1.25, u5p11_T),
	FPM_InitFixedPoint_m(1.25, u5p11_T),FPM_InitFixedPoint_m(1.25, u5p11_T),
	FPM_InitFixedPoint_m(1.25, u5p11_T),FPM_InitFixedPoint_m(1.25, u5p11_T),
	FPM_InitFixedPoint_m(1.25, u5p11_T),FPM_InitFixedPoint_m(1.25, u5p11_T),
	FPM_InitFixedPoint_m(1.25, u5p11_T),FPM_InitFixedPoint_m(1.25, u5p11_T),
	FPM_InitFixedPoint_m(1.25, u5p11_T),FPM_InitFixedPoint_m(1.25, u5p11_T),
	FPM_InitFixedPoint_m(1.25, u5p11_T),FPM_InitFixedPoint_m(1.25, u5p11_T)},
	{FPM_InitFixedPoint_m(1.5, u5p11_T),FPM_InitFixedPoint_m(1.5, u5p11_T),
	FPM_InitFixedPoint_m(1.5, u5p11_T),FPM_InitFixedPoint_m(1.5, u5p11_T),
	FPM_InitFixedPoint_m(1.5, u5p11_T),FPM_InitFixedPoint_m(1.5, u5p11_T),
	FPM_InitFixedPoint_m(1.5, u5p11_T),FPM_InitFixedPoint_m(1.5, u5p11_T),
	FPM_InitFixedPoint_m(1.5, u5p11_T),FPM_InitFixedPoint_m(1.5, u5p11_T),
	FPM_InitFixedPoint_m(1.5, u5p11_T),FPM_InitFixedPoint_m(1.5, u5p11_T),
	FPM_InitFixedPoint_m(1.5, u5p11_T)},{FPM_InitFixedPoint_m(2.0, u5p11_T),
	FPM_InitFixedPoint_m(2.0, u5p11_T),FPM_InitFixedPoint_m(2.0, u5p11_T),
	FPM_InitFixedPoint_m(2.0, u5p11_T),FPM_InitFixedPoint_m(2.0, u5p11_T),
	FPM_InitFixedPoint_m(2.0, u5p11_T),FPM_InitFixedPoint_m(2.0, u5p11_T),
	FPM_InitFixedPoint_m(2.0, u5p11_T),FPM_InitFixedPoint_m(2.0, u5p11_T),
	FPM_InitFixedPoint_m(2.0, u5p11_T),FPM_InitFixedPoint_m(2.0, u5p11_T),
	FPM_InitFixedPoint_m(2.0, u5p11_T),FPM_InitFixedPoint_m(2.0, u5p11_T)},
	{FPM_InitFixedPoint_m(4.0, u5p11_T),FPM_InitFixedPoint_m(4.0, u5p11_T),
	FPM_InitFixedPoint_m(4.0, u5p11_T),FPM_InitFixedPoint_m(4.0, u5p11_T),
	FPM_InitFixedPoint_m(4.0, u5p11_T),FPM_InitFixedPoint_m(4.0, u5p11_T),
	FPM_InitFixedPoint_m(4.0, u5p11_T),FPM_InitFixedPoint_m(4.0, u5p11_T),
	FPM_InitFixedPoint_m(4.0, u5p11_T),FPM_InitFixedPoint_m(4.0, u5p11_T),
	FPM_InitFixedPoint_m(4.0, u5p11_T),FPM_InitFixedPoint_m(4.0, u5p11_T),
	FPM_InitFixedPoint_m(4.0, u5p11_T)},{FPM_InitFixedPoint_m(6.0, u5p11_T),
	FPM_InitFixedPoint_m(6.0, u5p11_T),FPM_InitFixedPoint_m(6.0, u5p11_T),
	FPM_InitFixedPoint_m(6.0, u5p11_T),FPM_InitFixedPoint_m(6.0, u5p11_T),
	FPM_InitFixedPoint_m(6.0, u5p11_T),FPM_InitFixedPoint_m(6.0, u5p11_T),
	FPM_InitFixedPoint_m(6.0, u5p11_T),FPM_InitFixedPoint_m(6.0, u5p11_T),
	FPM_InitFixedPoint_m(6.0, u5p11_T),FPM_InitFixedPoint_m(6.0, u5p11_T),
	FPM_InitFixedPoint_m(6.0, u5p11_T),FPM_InitFixedPoint_m(6.0, u5p11_T)},
	{FPM_InitFixedPoint_m(7.5, u5p11_T),FPM_InitFixedPoint_m(7.5, u5p11_T),
	FPM_InitFixedPoint_m(7.5, u5p11_T),FPM_InitFixedPoint_m(7.5, u5p11_T),
	FPM_InitFixedPoint_m(7.5, u5p11_T),FPM_InitFixedPoint_m(7.5, u5p11_T),
	FPM_InitFixedPoint_m(7.5, u5p11_T),FPM_InitFixedPoint_m(7.5, u5p11_T),
	FPM_InitFixedPoint_m(7.5, u5p11_T),FPM_InitFixedPoint_m(7.5, u5p11_T),
	FPM_InitFixedPoint_m(7.5, u5p11_T),FPM_InitFixedPoint_m(7.5, u5p11_T),
	FPM_InitFixedPoint_m(7.5, u5p11_T)},{FPM_InitFixedPoint_m(8.0, u5p11_T),
	FPM_InitFixedPoint_m(8.0, u5p11_T),FPM_InitFixedPoint_m(8.0, u5p11_T),
	FPM_InitFixedPoint_m(8.0, u5p11_T),FPM_InitFixedPoint_m(8.0, u5p11_T),
	FPM_InitFixedPoint_m(8.0, u5p11_T),FPM_InitFixedPoint_m(8.0, u5p11_T),
	FPM_InitFixedPoint_m(8.0, u5p11_T),FPM_InitFixedPoint_m(8.0, u5p11_T),
	FPM_InitFixedPoint_m(8.0, u5p11_T),FPM_InitFixedPoint_m(8.0, u5p11_T),
	FPM_InitFixedPoint_m(8.0, u5p11_T),FPM_InitFixedPoint_m(8.0, u5p11_T)}}, {{FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T)},{FPM_InitFixedPoint_m(0.25, u5p11_T),
	FPM_InitFixedPoint_m(0.25, u5p11_T),FPM_InitFixedPoint_m(0.25, u5p11_T),
	FPM_InitFixedPoint_m(0.25, u5p11_T),FPM_InitFixedPoint_m(0.25, u5p11_T),
	FPM_InitFixedPoint_m(0.25, u5p11_T),FPM_InitFixedPoint_m(0.25, u5p11_T),
	FPM_InitFixedPoint_m(0.25, u5p11_T),FPM_InitFixedPoint_m(0.25, u5p11_T),
	FPM_InitFixedPoint_m(0.25, u5p11_T),FPM_InitFixedPoint_m(0.25, u5p11_T),
	FPM_InitFixedPoint_m(0.25, u5p11_T),FPM_InitFixedPoint_m(0.25, u5p11_T)},
	{FPM_InitFixedPoint_m(0.5, u5p11_T),FPM_InitFixedPoint_m(0.5, u5p11_T),
	FPM_InitFixedPoint_m(0.5, u5p11_T),FPM_InitFixedPoint_m(0.5, u5p11_T),
	FPM_InitFixedPoint_m(0.5, u5p11_T),FPM_InitFixedPoint_m(0.5, u5p11_T),
	FPM_InitFixedPoint_m(0.5, u5p11_T),FPM_InitFixedPoint_m(0.5, u5p11_T),
	FPM_InitFixedPoint_m(0.5, u5p11_T),FPM_InitFixedPoint_m(0.5, u5p11_T),
	FPM_InitFixedPoint_m(0.5, u5p11_T),FPM_InitFixedPoint_m(0.5, u5p11_T),
	FPM_InitFixedPoint_m(0.5, u5p11_T)},{FPM_InitFixedPoint_m(0.75, u5p11_T),
	FPM_InitFixedPoint_m(0.75, u5p11_T),FPM_InitFixedPoint_m(0.75, u5p11_T),
	FPM_InitFixedPoint_m(0.75, u5p11_T),FPM_InitFixedPoint_m(0.75, u5p11_T),
	FPM_InitFixedPoint_m(0.75, u5p11_T),FPM_InitFixedPoint_m(0.75, u5p11_T),
	FPM_InitFixedPoint_m(0.75, u5p11_T),FPM_InitFixedPoint_m(0.75, u5p11_T),
	FPM_InitFixedPoint_m(0.75, u5p11_T),FPM_InitFixedPoint_m(0.75, u5p11_T),
	FPM_InitFixedPoint_m(0.75, u5p11_T),FPM_InitFixedPoint_m(0.75, u5p11_T)},
	{FPM_InitFixedPoint_m(1.0, u5p11_T),FPM_InitFixedPoint_m(1.0, u5p11_T),
	FPM_InitFixedPoint_m(1.0, u5p11_T),FPM_InitFixedPoint_m(1.0, u5p11_T),
	FPM_InitFixedPoint_m(1.0, u5p11_T),FPM_InitFixedPoint_m(1.0, u5p11_T),
	FPM_InitFixedPoint_m(1.0, u5p11_T),FPM_InitFixedPoint_m(1.0, u5p11_T),
	FPM_InitFixedPoint_m(1.0, u5p11_T),FPM_InitFixedPoint_m(1.0, u5p11_T),
	FPM_InitFixedPoint_m(1.0, u5p11_T),FPM_InitFixedPoint_m(1.0, u5p11_T),
	FPM_InitFixedPoint_m(1.0, u5p11_T)},{FPM_InitFixedPoint_m(1.25, u5p11_T),
	FPM_InitFixedPoint_m(1.25, u5p11_T),FPM_InitFixedPoint_m(1.25, u5p11_T),
	FPM_InitFixedPoint_m(1.25, u5p11_T),FPM_InitFixedPoint_m(1.25, u5p11_T),
	FPM_InitFixedPoint_m(1.25, u5p11_T),FPM_InitFixedPoint_m(1.25, u5p11_T),
	FPM_InitFixedPoint_m(1.25, u5p11_T),FPM_InitFixedPoint_m(1.25, u5p11_T),
	FPM_InitFixedPoint_m(1.25, u5p11_T),FPM_InitFixedPoint_m(1.25, u5p11_T),
	FPM_InitFixedPoint_m(1.25, u5p11_T),FPM_InitFixedPoint_m(1.25, u5p11_T)},
	{FPM_InitFixedPoint_m(1.5, u5p11_T),FPM_InitFixedPoint_m(1.5, u5p11_T),
	FPM_InitFixedPoint_m(1.5, u5p11_T),FPM_InitFixedPoint_m(1.5, u5p11_T),
	FPM_InitFixedPoint_m(1.5, u5p11_T),FPM_InitFixedPoint_m(1.5, u5p11_T),
	FPM_InitFixedPoint_m(1.5, u5p11_T),FPM_InitFixedPoint_m(1.5, u5p11_T),
	FPM_InitFixedPoint_m(1.5, u5p11_T),FPM_InitFixedPoint_m(1.5, u5p11_T),
	FPM_InitFixedPoint_m(1.5, u5p11_T),FPM_InitFixedPoint_m(1.5, u5p11_T),
	FPM_InitFixedPoint_m(1.5, u5p11_T)},{FPM_InitFixedPoint_m(2.0, u5p11_T),
	FPM_InitFixedPoint_m(2.0, u5p11_T),FPM_InitFixedPoint_m(2.0, u5p11_T),
	FPM_InitFixedPoint_m(2.0, u5p11_T),FPM_InitFixedPoint_m(2.0, u5p11_T),
	FPM_InitFixedPoint_m(2.0, u5p11_T),FPM_InitFixedPoint_m(2.0, u5p11_T),
	FPM_InitFixedPoint_m(2.0, u5p11_T),FPM_InitFixedPoint_m(2.0, u5p11_T),
	FPM_InitFixedPoint_m(2.0, u5p11_T),FPM_InitFixedPoint_m(2.0, u5p11_T),
	FPM_InitFixedPoint_m(2.0, u5p11_T),FPM_InitFixedPoint_m(2.0, u5p11_T)},
	{FPM_InitFixedPoint_m(4.0, u5p11_T),FPM_InitFixedPoint_m(4.0, u5p11_T),
	FPM_InitFixedPoint_m(4.0, u5p11_T),FPM_InitFixedPoint_m(4.0, u5p11_T),
	FPM_InitFixedPoint_m(4.0, u5p11_T),FPM_InitFixedPoint_m(4.0, u5p11_T),
	FPM_InitFixedPoint_m(4.0, u5p11_T),FPM_InitFixedPoint_m(4.0, u5p11_T),
	FPM_InitFixedPoint_m(4.0, u5p11_T),FPM_InitFixedPoint_m(4.0, u5p11_T),
	FPM_InitFixedPoint_m(4.0, u5p11_T),FPM_InitFixedPoint_m(4.0, u5p11_T),
	FPM_InitFixedPoint_m(4.0, u5p11_T)},{FPM_InitFixedPoint_m(6.0, u5p11_T),
	FPM_InitFixedPoint_m(6.0, u5p11_T),FPM_InitFixedPoint_m(6.0, u5p11_T),
	FPM_InitFixedPoint_m(6.0, u5p11_T),FPM_InitFixedPoint_m(6.0, u5p11_T),
	FPM_InitFixedPoint_m(6.0, u5p11_T),FPM_InitFixedPoint_m(6.0, u5p11_T),
	FPM_InitFixedPoint_m(6.0, u5p11_T),FPM_InitFixedPoint_m(6.0, u5p11_T),
	FPM_InitFixedPoint_m(6.0, u5p11_T),FPM_InitFixedPoint_m(6.0, u5p11_T),
	FPM_InitFixedPoint_m(6.0, u5p11_T),FPM_InitFixedPoint_m(6.0, u5p11_T)},
	{FPM_InitFixedPoint_m(7.5, u5p11_T),FPM_InitFixedPoint_m(7.5, u5p11_T),
	FPM_InitFixedPoint_m(7.5, u5p11_T),FPM_InitFixedPoint_m(7.5, u5p11_T),
	FPM_InitFixedPoint_m(7.5, u5p11_T),FPM_InitFixedPoint_m(7.5, u5p11_T),
	FPM_InitFixedPoint_m(7.5, u5p11_T),FPM_InitFixedPoint_m(7.5, u5p11_T),
	FPM_InitFixedPoint_m(7.5, u5p11_T),FPM_InitFixedPoint_m(7.5, u5p11_T),
	FPM_InitFixedPoint_m(7.5, u5p11_T),FPM_InitFixedPoint_m(7.5, u5p11_T),
	FPM_InitFixedPoint_m(7.5, u5p11_T)},{FPM_InitFixedPoint_m(8.0, u5p11_T),
	FPM_InitFixedPoint_m(8.0, u5p11_T),FPM_InitFixedPoint_m(8.0, u5p11_T),
	FPM_InitFixedPoint_m(8.0, u5p11_T),FPM_InitFixedPoint_m(8.0, u5p11_T),
	FPM_InitFixedPoint_m(8.0, u5p11_T),FPM_InitFixedPoint_m(8.0, u5p11_T),
	FPM_InitFixedPoint_m(8.0, u5p11_T),FPM_InitFixedPoint_m(8.0, u5p11_T),
	FPM_InitFixedPoint_m(8.0, u5p11_T),FPM_InitFixedPoint_m(8.0, u5p11_T),
	FPM_InitFixedPoint_m(8.0, u5p11_T),FPM_InitFixedPoint_m(8.0, u5p11_T)}}, {{FPM_InitFixedPoint_m(0.0, u4p12_T),
	 FPM_InitFixedPoint_m(0.25, u4p12_T), FPM_InitFixedPoint_m(0.5, u4p12_T),
	 FPM_InitFixedPoint_m(0.75, u4p12_T),
	 FPM_InitFixedPoint_m(1.1, u4p12_T)},
	 {FPM_InitFixedPoint_m(0.0, u4p12_T),
	 FPM_InitFixedPoint_m(0.25, u4p12_T), FPM_InitFixedPoint_m(0.5, u4p12_T),
	 FPM_InitFixedPoint_m(0.75, u4p12_T),
	 FPM_InitFixedPoint_m(1.1, u4p12_T)},
	 {FPM_InitFixedPoint_m(0.0, u4p12_T),
	 FPM_InitFixedPoint_m(0.25, u4p12_T), FPM_InitFixedPoint_m(0.5, u4p12_T),
	 FPM_InitFixedPoint_m(0.75, u4p12_T),
	 FPM_InitFixedPoint_m(1.1, u4p12_T)},
	 {FPM_InitFixedPoint_m(0.0, u4p12_T),
	 FPM_InitFixedPoint_m(0.25, u4p12_T), FPM_InitFixedPoint_m(0.5, u4p12_T),
	 FPM_InitFixedPoint_m(0.75, u4p12_T),
	 FPM_InitFixedPoint_m(1.1, u4p12_T)},
	 {FPM_InitFixedPoint_m(0.0, u4p12_T),
	 FPM_InitFixedPoint_m(0.25, u4p12_T), FPM_InitFixedPoint_m(0.5, u4p12_T),
	 FPM_InitFixedPoint_m(0.75, u4p12_T),
	 FPM_InitFixedPoint_m(1.1, u4p12_T)},
	 {FPM_InitFixedPoint_m(0.0, u4p12_T),
	 FPM_InitFixedPoint_m(0.25, u4p12_T), FPM_InitFixedPoint_m(0.5, u4p12_T),
	 FPM_InitFixedPoint_m(0.75, u4p12_T),
	 FPM_InitFixedPoint_m(1.1, u4p12_T)},
	 {FPM_InitFixedPoint_m(0.0, u4p12_T),
	 FPM_InitFixedPoint_m(0.25, u4p12_T), FPM_InitFixedPoint_m(0.5, u4p12_T),
	 FPM_InitFixedPoint_m(0.75, u4p12_T),
	 FPM_InitFixedPoint_m(1.1, u4p12_T)},
	 {FPM_InitFixedPoint_m(0.0, u4p12_T),
	 FPM_InitFixedPoint_m(0.25, u4p12_T), FPM_InitFixedPoint_m(0.5, u4p12_T),
	 FPM_InitFixedPoint_m(0.75, u4p12_T),
	 FPM_InitFixedPoint_m(1.1, u4p12_T)},
	 {FPM_InitFixedPoint_m(0.0, u4p12_T),
	 FPM_InitFixedPoint_m(0.25, u4p12_T), FPM_InitFixedPoint_m(0.5, u4p12_T),
	 FPM_InitFixedPoint_m(0.75, u4p12_T),
	 FPM_InitFixedPoint_m(1.1, u4p12_T)},
	 {FPM_InitFixedPoint_m(0.0, u4p12_T),
	 FPM_InitFixedPoint_m(0.25, u4p12_T), FPM_InitFixedPoint_m(0.5, u4p12_T),
	 FPM_InitFixedPoint_m(0.75, u4p12_T),
	 FPM_InitFixedPoint_m(1.1, u4p12_T)},
	 {FPM_InitFixedPoint_m(0.0, u4p12_T),
	 FPM_InitFixedPoint_m(0.25, u4p12_T), FPM_InitFixedPoint_m(0.5, u4p12_T),
	 FPM_InitFixedPoint_m(0.75, u4p12_T),
	 FPM_InitFixedPoint_m(1.1, u4p12_T)},
	 {FPM_InitFixedPoint_m(0.0, u4p12_T),
	 FPM_InitFixedPoint_m(0.25, u4p12_T), FPM_InitFixedPoint_m(0.5, u4p12_T),
	 FPM_InitFixedPoint_m(0.75, u4p12_T),
	 FPM_InitFixedPoint_m(1.1, u4p12_T)}}, {{FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T)},
	 {FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T)},
	 {FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T)},
	 {FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T)},
	 {FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T)},
	 {FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T)},
	 {FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T)},
	 {FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T)},
	 {FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T)},
	 {FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T)},
	 {FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T)},
	 {FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T), FPM_InitFixedPoint_m(0.0, u1p15_T),
	 FPM_InitFixedPoint_m(0.0, u1p15_T)}}, { FPM_InitFixedPoint_m(0.0, u4p12_T),
	 FPM_InitFixedPoint_m(0.0, u4p12_T), FPM_InitFixedPoint_m(0.0, u4p12_T),
	 FPM_InitFixedPoint_m(0.0, u4p12_T), FPM_InitFixedPoint_m(0.0, u4p12_T),
	 FPM_InitFixedPoint_m(0.0, u4p12_T), FPM_InitFixedPoint_m(0.0, u4p12_T),
	 FPM_InitFixedPoint_m(0.0, u4p12_T), FPM_InitFixedPoint_m(0.0, u4p12_T),
	 FPM_InitFixedPoint_m(0.0, u4p12_T), FPM_InitFixedPoint_m(0.0, u4p12_T),
	 FPM_InitFixedPoint_m(0.0, u4p12_T) }, { FPM_InitFixedPoint_m(0.0, u9p7_T), FPM_InitFixedPoint_m(0.0, u9p7_T),
	 FPM_InitFixedPoint_m(0.0, u9p7_T), FPM_InitFixedPoint_m(0.0, u9p7_T),
	 FPM_InitFixedPoint_m(0.0, u9p7_T), FPM_InitFixedPoint_m(0.0, u9p7_T),
	 FPM_InitFixedPoint_m(0.0, u9p7_T), FPM_InitFixedPoint_m(0.0, u9p7_T),
	 FPM_InitFixedPoint_m(0.0, u9p7_T), FPM_InitFixedPoint_m(0.0, u9p7_T),
	 FPM_InitFixedPoint_m(0.0, u9p7_T), FPM_InitFixedPoint_m(0.0, u9p7_T) }, { FPM_InitFixedPoint_m(0.0, u8p8_T), FPM_InitFixedPoint_m(0.2, u8p8_T),
	 FPM_InitFixedPoint_m(0.4, u8p8_T), FPM_InitFixedPoint_m(0.6, u8p8_T),
	 FPM_InitFixedPoint_m(0.8, u8p8_T), FPM_InitFixedPoint_m(1.0, u8p8_T) }, { FPM_InitFixedPoint_m(0.0, u2p14_T),
	 FPM_InitFixedPoint_m(0.0, u2p14_T), FPM_InitFixedPoint_m(0.0, u2p14_T),
	 FPM_InitFixedPoint_m(0.0, u2p14_T), FPM_InitFixedPoint_m(0.0, u2p14_T),
	 FPM_InitFixedPoint_m(0.0, u2p14_T) }, {{FPM_InitFixedPoint_m(0.0, u9p7_T),FPM_InitFixedPoint_m(0.0, u9p7_T),
	FPM_InitFixedPoint_m(0.0, u9p7_T),FPM_InitFixedPoint_m(0.0, u9p7_T),
	FPM_InitFixedPoint_m(0.0, u9p7_T),FPM_InitFixedPoint_m(0.0, u9p7_T),
	FPM_InitFixedPoint_m(0.0, u9p7_T),FPM_InitFixedPoint_m(0.0, u9p7_T),
	FPM_InitFixedPoint_m(0.0, u9p7_T),FPM_InitFixedPoint_m(0.0, u9p7_T),
	FPM_InitFixedPoint_m(0.0, u9p7_T),FPM_InitFixedPoint_m(0.0, u9p7_T)},
	{FPM_InitFixedPoint_m(0.0, u9p7_T),FPM_InitFixedPoint_m(0.0, u9p7_T),
	FPM_InitFixedPoint_m(0.0, u9p7_T),FPM_InitFixedPoint_m(0.0, u9p7_T),
	FPM_InitFixedPoint_m(0.0, u9p7_T),FPM_InitFixedPoint_m(0.0, u9p7_T),
	FPM_InitFixedPoint_m(0.0, u9p7_T),FPM_InitFixedPoint_m(0.0, u9p7_T),
	FPM_InitFixedPoint_m(0.0, u9p7_T),FPM_InitFixedPoint_m(0.0, u9p7_T),
	FPM_InitFixedPoint_m(0.0, u9p7_T),FPM_InitFixedPoint_m(0.0, u9p7_T)}}, { FPM_InitFixedPoint_m(15.0, u9p7_T),
	 FPM_InitFixedPoint_m(15.0, u9p7_T), FPM_InitFixedPoint_m(15.0, u9p7_T),
	 FPM_InitFixedPoint_m(15.0, u9p7_T), FPM_InitFixedPoint_m(15.0, u9p7_T),
	 FPM_InitFixedPoint_m(15.0, u9p7_T), FPM_InitFixedPoint_m(15.0, u9p7_T),
	 FPM_InitFixedPoint_m(15.0, u9p7_T), FPM_InitFixedPoint_m(15.0, u9p7_T),
	 FPM_InitFixedPoint_m(15.0, u9p7_T), FPM_InitFixedPoint_m(15.0, u9p7_T),
	 FPM_InitFixedPoint_m(15.0, u9p7_T) }, { FPM_InitFixedPoint_m(0.0, u9p7_T), FPM_InitFixedPoint_m(1.0, u9p7_T),
	 FPM_InitFixedPoint_m(2.0, u9p7_T), FPM_InitFixedPoint_m(3.0, u9p7_T),
	 FPM_InitFixedPoint_m(4.0, u9p7_T) }, { FPM_InitFixedPoint_m(1.0, u2p14_T),
	 FPM_InitFixedPoint_m(1.0, u2p14_T), FPM_InitFixedPoint_m(1.0, u2p14_T),
	 FPM_InitFixedPoint_m(1.0, u2p14_T), FPM_InitFixedPoint_m(1.0, u2p14_T) }, { FPM_InitFixedPoint_m(0.0, u8p8_T), FPM_InitFixedPoint_m(0.1, u8p8_T),
	 FPM_InitFixedPoint_m(0.2, u8p8_T), FPM_InitFixedPoint_m(0.4, u8p8_T),
	 FPM_InitFixedPoint_m(0.6, u8p8_T), FPM_InitFixedPoint_m(0.8, u8p8_T),
	 FPM_InitFixedPoint_m(0.9, u8p8_T), FPM_InitFixedPoint_m(1.0, u8p8_T) }, { FPM_InitFixedPoint_m(0.0, u9p7_T),FPM_InitFixedPoint_m(0.0, u9p7_T),
	FPM_InitFixedPoint_m(0.0, u9p7_T),FPM_InitFixedPoint_m(0.0, u9p7_T),
	FPM_InitFixedPoint_m(0.0, u9p7_T),FPM_InitFixedPoint_m(0.0, u9p7_T),
	FPM_InitFixedPoint_m(0.0, u9p7_T),FPM_InitFixedPoint_m(0.0, u9p7_T) }, { FPM_InitFixedPoint_m(0.0, u9p7_T),FPM_InitFixedPoint_m(3.0, u9p7_T),
	FPM_InitFixedPoint_m(7.0, u9p7_T),FPM_InitFixedPoint_m(12.0, u9p7_T),
	FPM_InitFixedPoint_m(20.0, u9p7_T),FPM_InitFixedPoint_m(30.0, u9p7_T),
	FPM_InitFixedPoint_m(45.0, u9p7_T),FPM_InitFixedPoint_m(60.0, u9p7_T),
	FPM_InitFixedPoint_m(80.0, u9p7_T) }, {{FPM_InitFixedPoint_m(0.0, u12p4_T),FPM_InitFixedPoint_m(0.5, u12p4_T),
	FPM_InitFixedPoint_m(1.0, u12p4_T),FPM_InitFixedPoint_m(5.0, u12p4_T),
	FPM_InitFixedPoint_m(10.0, u12p4_T),FPM_InitFixedPoint_m(20.0, u12p4_T),
	FPM_InitFixedPoint_m(30.0, u12p4_T),FPM_InitFixedPoint_m(45.0, u12p4_T),
	FPM_InitFixedPoint_m(60.0, u12p4_T),FPM_InitFixedPoint_m(90.0, u12p4_T),
	FPM_InitFixedPoint_m(120.0, u12p4_T),
	FPM_InitFixedPoint_m(180.0, u12p4_T),
	FPM_InitFixedPoint_m(270.0, u12p4_T),
	FPM_InitFixedPoint_m(360.0, u12p4_T),
	FPM_InitFixedPoint_m(450.0, u12p4_T),
	FPM_InitFixedPoint_m(540.0, u12p4_T)},
	{FPM_InitFixedPoint_m(0.0, u12p4_T),FPM_InitFixedPoint_m(0.5, u12p4_T),
	FPM_InitFixedPoint_m(1.0, u12p4_T),FPM_InitFixedPoint_m(5.0, u12p4_T),
	FPM_InitFixedPoint_m(10.0, u12p4_T),FPM_InitFixedPoint_m(20.0, u12p4_T),
	FPM_InitFixedPoint_m(30.0, u12p4_T),FPM_InitFixedPoint_m(45.0, u12p4_T),
	FPM_InitFixedPoint_m(60.0, u12p4_T),FPM_InitFixedPoint_m(90.0, u12p4_T),
	FPM_InitFixedPoint_m(120.0, u12p4_T),
	FPM_InitFixedPoint_m(180.0, u12p4_T),
	FPM_InitFixedPoint_m(270.0, u12p4_T),
	FPM_InitFixedPoint_m(360.0, u12p4_T),
	FPM_InitFixedPoint_m(450.0, u12p4_T),
	FPM_InitFixedPoint_m(540.0, u12p4_T)},
	{FPM_InitFixedPoint_m(0.0, u12p4_T),FPM_InitFixedPoint_m(0.5, u12p4_T),
	FPM_InitFixedPoint_m(1.0, u12p4_T),FPM_InitFixedPoint_m(5.0, u12p4_T),
	FPM_InitFixedPoint_m(10.0, u12p4_T),FPM_InitFixedPoint_m(20.0, u12p4_T),
	FPM_InitFixedPoint_m(30.0, u12p4_T),FPM_InitFixedPoint_m(45.0, u12p4_T),
	FPM_InitFixedPoint_m(60.0, u12p4_T),FPM_InitFixedPoint_m(90.0, u12p4_T),
	FPM_InitFixedPoint_m(120.0, u12p4_T),
	FPM_InitFixedPoint_m(180.0, u12p4_T),
	FPM_InitFixedPoint_m(270.0, u12p4_T),
	FPM_InitFixedPoint_m(360.0, u12p4_T),
	FPM_InitFixedPoint_m(450.0, u12p4_T),
	FPM_InitFixedPoint_m(540.0, u12p4_T)},
	{FPM_InitFixedPoint_m(0.0, u12p4_T),FPM_InitFixedPoint_m(0.5, u12p4_T),
	FPM_InitFixedPoint_m(1.0, u12p4_T),FPM_InitFixedPoint_m(5.0, u12p4_T),
	FPM_InitFixedPoint_m(10.0, u12p4_T),FPM_InitFixedPoint_m(20.0, u12p4_T),
	FPM_InitFixedPoint_m(30.0, u12p4_T),FPM_InitFixedPoint_m(45.0, u12p4_T),
	FPM_InitFixedPoint_m(60.0, u12p4_T),FPM_InitFixedPoint_m(90.0, u12p4_T),
	FPM_InitFixedPoint_m(120.0, u12p4_T),
	FPM_InitFixedPoint_m(180.0, u12p4_T),
	FPM_InitFixedPoint_m(270.0, u12p4_T),
	FPM_InitFixedPoint_m(360.0, u12p4_T),
	FPM_InitFixedPoint_m(450.0, u12p4_T),
	FPM_InitFixedPoint_m(540.0, u12p4_T)},
	{FPM_InitFixedPoint_m(0.0, u12p4_T),FPM_InitFixedPoint_m(0.5, u12p4_T),
	FPM_InitFixedPoint_m(1.0, u12p4_T),FPM_InitFixedPoint_m(5.0, u12p4_T),
	FPM_InitFixedPoint_m(10.0, u12p4_T),FPM_InitFixedPoint_m(20.0, u12p4_T),
	FPM_InitFixedPoint_m(30.0, u12p4_T),FPM_InitFixedPoint_m(45.0, u12p4_T),
	FPM_InitFixedPoint_m(60.0, u12p4_T),FPM_InitFixedPoint_m(90.0, u12p4_T),
	FPM_InitFixedPoint_m(120.0, u12p4_T),
	FPM_InitFixedPoint_m(180.0, u12p4_T),
	FPM_InitFixedPoint_m(270.0, u12p4_T),
	FPM_InitFixedPoint_m(360.0, u12p4_T),
	FPM_InitFixedPoint_m(450.0, u12p4_T),
	FPM_InitFixedPoint_m(540.0, u12p4_T)},
	{FPM_InitFixedPoint_m(0.0, u12p4_T),FPM_InitFixedPoint_m(0.5, u12p4_T),
	FPM_InitFixedPoint_m(1.0, u12p4_T),FPM_InitFixedPoint_m(5.0, u12p4_T),
	FPM_InitFixedPoint_m(10.0, u12p4_T),FPM_InitFixedPoint_m(20.0, u12p4_T),
	FPM_InitFixedPoint_m(30.0, u12p4_T),FPM_InitFixedPoint_m(45.0, u12p4_T),
	FPM_InitFixedPoint_m(60.0, u12p4_T),FPM_InitFixedPoint_m(90.0, u12p4_T),
	FPM_InitFixedPoint_m(120.0, u12p4_T),
	FPM_InitFixedPoint_m(180.0, u12p4_T),
	FPM_InitFixedPoint_m(270.0, u12p4_T),
	FPM_InitFixedPoint_m(360.0, u12p4_T),
	FPM_InitFixedPoint_m(450.0, u12p4_T),
	FPM_InitFixedPoint_m(540.0, u12p4_T)},
	{FPM_InitFixedPoint_m(0.0, u12p4_T),FPM_InitFixedPoint_m(0.5, u12p4_T),
	FPM_InitFixedPoint_m(1.0, u12p4_T),FPM_InitFixedPoint_m(5.0, u12p4_T),
	FPM_InitFixedPoint_m(10.0, u12p4_T),FPM_InitFixedPoint_m(20.0, u12p4_T),
	FPM_InitFixedPoint_m(30.0, u12p4_T),FPM_InitFixedPoint_m(45.0, u12p4_T),
	FPM_InitFixedPoint_m(60.0, u12p4_T),FPM_InitFixedPoint_m(90.0, u12p4_T),
	FPM_InitFixedPoint_m(120.0, u12p4_T),
	FPM_InitFixedPoint_m(180.0, u12p4_T),
	FPM_InitFixedPoint_m(270.0, u12p4_T),
	FPM_InitFixedPoint_m(360.0, u12p4_T),
	FPM_InitFixedPoint_m(450.0, u12p4_T),
	FPM_InitFixedPoint_m(540.0, u12p4_T)},
	{FPM_InitFixedPoint_m(0.0, u12p4_T),FPM_InitFixedPoint_m(0.5, u12p4_T),
	FPM_InitFixedPoint_m(1.0, u12p4_T),FPM_InitFixedPoint_m(5.0, u12p4_T),
	FPM_InitFixedPoint_m(10.0, u12p4_T),FPM_InitFixedPoint_m(20.0, u12p4_T),
	FPM_InitFixedPoint_m(30.0, u12p4_T),FPM_InitFixedPoint_m(45.0, u12p4_T),
	FPM_InitFixedPoint_m(60.0, u12p4_T),FPM_InitFixedPoint_m(90.0, u12p4_T),
	FPM_InitFixedPoint_m(120.0, u12p4_T),
	FPM_InitFixedPoint_m(180.0, u12p4_T),
	FPM_InitFixedPoint_m(270.0, u12p4_T),
	FPM_InitFixedPoint_m(360.0, u12p4_T),
	FPM_InitFixedPoint_m(450.0, u12p4_T),
	FPM_InitFixedPoint_m(540.0, u12p4_T)},
	{FPM_InitFixedPoint_m(0.0, u12p4_T),FPM_InitFixedPoint_m(0.5, u12p4_T),
	FPM_InitFixedPoint_m(1.0, u12p4_T),FPM_InitFixedPoint_m(5.0, u12p4_T),
	FPM_InitFixedPoint_m(10.0, u12p4_T),FPM_InitFixedPoint_m(20.0, u12p4_T),
	FPM_InitFixedPoint_m(30.0, u12p4_T),FPM_InitFixedPoint_m(45.0, u12p4_T),
	FPM_InitFixedPoint_m(60.0, u12p4_T),FPM_InitFixedPoint_m(90.0, u12p4_T),
	FPM_InitFixedPoint_m(120.0, u12p4_T),
	FPM_InitFixedPoint_m(180.0, u12p4_T),
	FPM_InitFixedPoint_m(270.0, u12p4_T),
	FPM_InitFixedPoint_m(360.0, u12p4_T),
	FPM_InitFixedPoint_m(450.0, u12p4_T),
	FPM_InitFixedPoint_m(540.0, u12p4_T)}}, {{FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T)},
	 {FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T)},
	{FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T)},
	{FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T)},
	{FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T)},
	{FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T)},
	{FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T)},
	{FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T)},
	{FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T)}}, {{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.5, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(2.0, u8p8_T),
	FPM_InitFixedPoint_m(3.0, u8p8_T),FPM_InitFixedPoint_m(4.0, u8p8_T),
	FPM_InitFixedPoint_m(5.0, u8p8_T),FPM_InitFixedPoint_m(10.0, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.5, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(2.0, u8p8_T),
	FPM_InitFixedPoint_m(3.0, u8p8_T),FPM_InitFixedPoint_m(4.0, u8p8_T),
	FPM_InitFixedPoint_m(5.0, u8p8_T),FPM_InitFixedPoint_m(10.0, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.5, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(2.0, u8p8_T),
	FPM_InitFixedPoint_m(3.0, u8p8_T),FPM_InitFixedPoint_m(4.0, u8p8_T),
	FPM_InitFixedPoint_m(5.0, u8p8_T),FPM_InitFixedPoint_m(10.0, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.5, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(2.0, u8p8_T),
	FPM_InitFixedPoint_m(3.0, u8p8_T),FPM_InitFixedPoint_m(4.0, u8p8_T),
	FPM_InitFixedPoint_m(5.0, u8p8_T),FPM_InitFixedPoint_m(10.0, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.5, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(2.0, u8p8_T),
	FPM_InitFixedPoint_m(3.0, u8p8_T),FPM_InitFixedPoint_m(4.0, u8p8_T),
	FPM_InitFixedPoint_m(5.0, u8p8_T),FPM_InitFixedPoint_m(10.0, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.5, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(2.0, u8p8_T),
	FPM_InitFixedPoint_m(3.0, u8p8_T),FPM_InitFixedPoint_m(4.0, u8p8_T),
	FPM_InitFixedPoint_m(5.0, u8p8_T),FPM_InitFixedPoint_m(10.0, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.5, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(2.0, u8p8_T),
	FPM_InitFixedPoint_m(3.0, u8p8_T),FPM_InitFixedPoint_m(4.0, u8p8_T),
	FPM_InitFixedPoint_m(5.0, u8p8_T),FPM_InitFixedPoint_m(10.0, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.5, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(2.0, u8p8_T),
	FPM_InitFixedPoint_m(3.0, u8p8_T),FPM_InitFixedPoint_m(4.0, u8p8_T),
	FPM_InitFixedPoint_m(5.0, u8p8_T),FPM_InitFixedPoint_m(10.0, u8p8_T)},
	{FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.5, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(2.0, u8p8_T),
	FPM_InitFixedPoint_m(3.0, u8p8_T),FPM_InitFixedPoint_m(4.0, u8p8_T),
	FPM_InitFixedPoint_m(5.0, u8p8_T),FPM_InitFixedPoint_m(10.0, u8p8_T)}}, {{FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T)},
	{FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T)},
	{FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T)},
	{FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T)},
	{FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T)},
	{FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T)},
	{FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T)},
	{FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T)},
	{FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T)}}, {{FPM_InitFixedPoint_m(0.0, u7p9_T),FPM_InitFixedPoint_m(40.0, u7p9_T),
	FPM_InitFixedPoint_m(60.0, u7p9_T),FPM_InitFixedPoint_m(80.0, u7p9_T)},
	{FPM_InitFixedPoint_m(0.0, u7p9_T),FPM_InitFixedPoint_m(40.0, u7p9_T),
	FPM_InitFixedPoint_m(60.0, u7p9_T),FPM_InitFixedPoint_m(80.0, u7p9_T)},
	{FPM_InitFixedPoint_m(0.0, u7p9_T),FPM_InitFixedPoint_m(40.0, u7p9_T),
	FPM_InitFixedPoint_m(60.0, u7p9_T),FPM_InitFixedPoint_m(80.0, u7p9_T)},
	{FPM_InitFixedPoint_m(0.0, u7p9_T),FPM_InitFixedPoint_m(40.0, u7p9_T),
	FPM_InitFixedPoint_m(60.0, u7p9_T),FPM_InitFixedPoint_m(80.0, u7p9_T)},
	{FPM_InitFixedPoint_m(0.0, u7p9_T),FPM_InitFixedPoint_m(40.0, u7p9_T),
	FPM_InitFixedPoint_m(60.0, u7p9_T),FPM_InitFixedPoint_m(80.0, u7p9_T)},
	{FPM_InitFixedPoint_m(0.0, u7p9_T),FPM_InitFixedPoint_m(40.0, u7p9_T),
	FPM_InitFixedPoint_m(60.0, u7p9_T),FPM_InitFixedPoint_m(80.0, u7p9_T)},
	{FPM_InitFixedPoint_m(0.0, u7p9_T),FPM_InitFixedPoint_m(40.0, u7p9_T),
	FPM_InitFixedPoint_m(60.0, u7p9_T),FPM_InitFixedPoint_m(80.0, u7p9_T)},
	{FPM_InitFixedPoint_m(0.0, u7p9_T),FPM_InitFixedPoint_m(40.0, u7p9_T),
	FPM_InitFixedPoint_m(60.0, u7p9_T),FPM_InitFixedPoint_m(80.0, u7p9_T)},
	{FPM_InitFixedPoint_m(0.0, u7p9_T),FPM_InitFixedPoint_m(40.0, u7p9_T),
	FPM_InitFixedPoint_m(60.0, u7p9_T),FPM_InitFixedPoint_m(80.0, u7p9_T)}}, {{FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T)},
	{FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T)},
	{FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T)},
	{FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T)},
	{FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T)},
	{FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T)},
	{FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T)},
	{FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T)},
	{FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T),
	FPM_InitFixedPoint_m(1.0, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T)}}, FALSE, {FPM_InitFixedPoint_m(10.0, u8p8_T),FPM_InitFixedPoint_m(40.0, u8p8_T),
	FPM_InitFixedPoint_m(70.0, u8p8_T),FPM_InitFixedPoint_m(100.0, u8p8_T),
	FPM_InitFixedPoint_m(130.0, u8p8_T),FPM_InitFixedPoint_m(180.0, u8p8_T)}, {FPM_InitFixedPoint_m(12.0, u4p12_T),
	FPM_InitFixedPoint_m(11.0, u4p12_T),FPM_InitFixedPoint_m(9.0, u4p12_T),
	FPM_InitFixedPoint_m(7.0, u4p12_T),FPM_InitFixedPoint_m(5.0, u4p12_T),
	FPM_InitFixedPoint_m(3.0, u4p12_T)}, 0.0f };


/***************************** AbsHwPos_TcI2cVd ******************************/
#pragma DATA_SECTION(k_HWAtoMtrADiffLimit_HwDeg_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_HWAtoMtrADiffLimit_HwDeg_f32 = 30.0f;

#pragma DATA_SECTION(k_HwAtoMtrAError_str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_HwAtoMtrAError_str = {200, 4, 1};

#pragma DATA_SECTION(k_HwPosAuthorityStep_Uls_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_HwPosAuthorityStep_Uls_f32 = 0.2f;

#pragma DATA_SECTION(k_HwPosOutputLPFCoeffFc_Hz_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_HwPosOutputLPFCoeffFc_Hz_f32 = 0.21278f;

#pragma DATA_SECTION(k_HwPosOutputLPFError_HwDeg_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_HwPosOutputLPFError_HwDeg_f32 = 5.0f;

#pragma DATA_SECTION(k_I2CHwAuthority_Uls_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_I2CHwAuthority_Uls_f32 = 1.0f;

#pragma DATA_SECTION(k_MaxVehCntrOffDiff_HwDeg_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_MaxVehCntrOffDiff_HwDeg_f32 = 5.0f;

#pragma DATA_SECTION(k_TurnsCntrAuthority_Uls_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_TurnsCntrAuthority_Uls_f32 = 1.0f;

#pragma DATA_SECTION(k_UseTurnsCntr_Cnt_lgc, ".FlashCalSeg");
CONST(boolean, CAL_CONST) k_UseTurnsCntr_Cnt_lgc = FALSE;

#pragma DATA_SECTION(k_VehCntrOffValidLimit_HwDeg_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_VehCntrOffValidLimit_HwDeg_f32 = 1600.0f;


/*********************** AbsHwPos_TcI2cVd, MtrVel_Digi ***********************/
#pragma DATA_SECTION(k_GearRatio_Uls_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_GearRatio_Uls_f32 = 0.045454545f;


/************************* AbsHwPos_TcI2cVd, VehDyn **************************/
#pragma DATA_SECTION(k_HiSpdVDAuthority_Uls_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_HiSpdVDAuthority_Uls_f32 = 1.0f;

#pragma DATA_SECTION(k_LoSpdVDAuthority_Uls_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_LoSpdVDAuthority_Uls_f32 = 1.0f;


/************************************ Adc ************************************/
#pragma DATA_SECTION(k_VbattOVTransIntConfig_Cnt_u32, ".FlashCalSeg");
CONST(uint32, CAL_CONST) k_VbattOVTransIntConfig_Cnt_u32 = 190988291UL;


/************************** Adc, IoHwAbstractionUsr **************************/
#pragma DATA_SECTION(k_MaxADCConvTime_uS_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_MaxADCConvTime_uS_u16 = 50U;


/****************************** AssistFirewall *******************************/
#pragma DATA_SECTION(k_AsstFWFiltKn_Hz_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_AsstFWFiltKn_Hz_f32 = 8.0f;

#pragma DATA_SECTION(k_AsstFWFWActiveLPF_Hz_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_AsstFWFWActiveLPF_Hz_f32 = 50.0f;

#pragma DATA_SECTION(k_AsstFWInpLimitBaseAsst_MtrNm_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_AsstFWInpLimitBaseAsst_MtrNm_f32 = 8.8f;

#pragma DATA_SECTION(k_AsstFWInpLimitHFA_MtrNm_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_AsstFWInpLimitHFA_MtrNm_f32 = 8.8f;

#pragma DATA_SECTION(k_AsstFWInpLimitHysComp_MtrNm_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_AsstFWInpLimitHysComp_MtrNm_f32 = 8.8f;

#pragma DATA_SECTION(k_AsstFWNstep_Cnt_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_AsstFWNstep_Cnt_u16 = 1U;

#pragma DATA_SECTION(k_AsstFWPstep_Cnt_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_AsstFWPstep_Cnt_u16 = 1U;

#pragma DATA_SECTION(k_RestoreThresh_MtrNm_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_RestoreThresh_MtrNm_f32 = 5.0f;

#pragma DATA_SECTION(t_AsstFWDefltAssistX_HwNm_u8p8, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_AsstFWDefltAssistX_HwNm_u8p8[20] = 
	{FPM_InitFixedPoint_m(0.0, u8p8_T), FPM_InitFixedPoint_m(0.15, u8p8_T),
	 FPM_InitFixedPoint_m(0.3, u8p8_T), FPM_InitFixedPoint_m(0.4, u8p8_T),
	 FPM_InitFixedPoint_m(0.6, u8p8_T), FPM_InitFixedPoint_m(0.8, u8p8_T),
	 FPM_InitFixedPoint_m(1.0, u8p8_T), FPM_InitFixedPoint_m(1.3, u8p8_T),
	 FPM_InitFixedPoint_m(1.55, u8p8_T), FPM_InitFixedPoint_m(1.8, u8p8_T),
	 FPM_InitFixedPoint_m(2.05, u8p8_T), FPM_InitFixedPoint_m(2.3, u8p8_T),
	 FPM_InitFixedPoint_m(2.55, u8p8_T), FPM_InitFixedPoint_m(2.8, u8p8_T),
	 FPM_InitFixedPoint_m(3.05, u8p8_T), FPM_InitFixedPoint_m(3.3, u8p8_T),
	 FPM_InitFixedPoint_m(3.55, u8p8_T), FPM_InitFixedPoint_m(3.8, u8p8_T),
	 FPM_InitFixedPoint_m(5.0, u8p8_T), FPM_InitFixedPoint_m(10.0, u8p8_T)};

#pragma DATA_SECTION(t_AsstFWDefltAssistY_MtrNm_s4p11, ".FlashCalSeg");
CONST(sint16, CAL_CONST) t_AsstFWDefltAssistY_MtrNm_s4p11[20] = 
	{FPM_InitFixedPoint_m(0.0, s4p11_T), FPM_InitFixedPoint_m(0.0, s4p11_T),
	 FPM_InitFixedPoint_m(0.015, s4p11_T),
	 FPM_InitFixedPoint_m(0.028, s4p11_T),
	 FPM_InitFixedPoint_m(0.065, s4p11_T),
	 FPM_InitFixedPoint_m(0.11, s4p11_T),
	 FPM_InitFixedPoint_m(0.158, s4p11_T),
	 FPM_InitFixedPoint_m(0.24, s4p11_T),
	 FPM_InitFixedPoint_m(0.32, s4p11_T),
	 FPM_InitFixedPoint_m(0.41, s4p11_T),
	 FPM_InitFixedPoint_m(0.51, s4p11_T),
	 FPM_InitFixedPoint_m(0.62, s4p11_T),
	 FPM_InitFixedPoint_m(0.74, s4p11_T),
	 FPM_InitFixedPoint_m(0.86, s4p11_T), FPM_InitFixedPoint_m(1.0, s4p11_T),
	 FPM_InitFixedPoint_m(1.15, s4p11_T),
	 FPM_InitFixedPoint_m(1.31, s4p11_T),
	 FPM_InitFixedPoint_m(1.47, s4p11_T), FPM_InitFixedPoint_m(2.3, s4p11_T),
	 FPM_InitFixedPoint_m(5.7, s4p11_T)};

#pragma DATA_SECTION(t_AsstFWPstepNstepThresh_Cnt_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_AsstFWPstepNstepThresh_Cnt_u16[2] = {50U, 100U};

#pragma DATA_SECTION(t2_AsstFWUprBoundX_HwNm_s4p11, ".FlashCalSeg");
CONST(sint16, CAL_CONST) t2_AsstFWUprBoundX_HwNm_s4p11[8][11] = 
	{{FPM_InitFixedPoint_m(-10.0, s4p11_T),
	 FPM_InitFixedPoint_m(-1.0, s4p11_T), FPM_InitFixedPoint_m(0.0, s4p11_T),
	 FPM_InitFixedPoint_m(1.0, s4p11_T), FPM_InitFixedPoint_m(2.0, s4p11_T),
	 FPM_InitFixedPoint_m(3.0, s4p11_T), FPM_InitFixedPoint_m(4.0, s4p11_T),
	 FPM_InitFixedPoint_m(5.0, s4p11_T),FPM_InitFixedPoint_m(6.0, s4p11_T),
	 FPM_InitFixedPoint_m(8.0, s4p11_T),
	 FPM_InitFixedPoint_m(10.0, s4p11_T)},
	 {FPM_InitFixedPoint_m(-10.0, s4p11_T),
	 FPM_InitFixedPoint_m(-1.0, s4p11_T), FPM_InitFixedPoint_m(0.0, s4p11_T),
	 FPM_InitFixedPoint_m(1.0, s4p11_T), FPM_InitFixedPoint_m(2.0, s4p11_T),
	 FPM_InitFixedPoint_m(3.0, s4p11_T), FPM_InitFixedPoint_m(4.0, s4p11_T),
	 FPM_InitFixedPoint_m(5.0, s4p11_T),FPM_InitFixedPoint_m(6.0, s4p11_T),
	 FPM_InitFixedPoint_m(8.0, s4p11_T),
	 FPM_InitFixedPoint_m(10.0, s4p11_T)},
	 {FPM_InitFixedPoint_m(-10.0, s4p11_T),
	 FPM_InitFixedPoint_m(-1.0, s4p11_T), FPM_InitFixedPoint_m(0.0, s4p11_T),
	 FPM_InitFixedPoint_m(1.0, s4p11_T), FPM_InitFixedPoint_m(2.0, s4p11_T),
	 FPM_InitFixedPoint_m(3.0, s4p11_T), FPM_InitFixedPoint_m(4.0, s4p11_T),
	 FPM_InitFixedPoint_m(5.0, s4p11_T),FPM_InitFixedPoint_m(6.0, s4p11_T),
	 FPM_InitFixedPoint_m(8.0, s4p11_T),
	 FPM_InitFixedPoint_m(10.0, s4p11_T)},
	 {FPM_InitFixedPoint_m(-10.0, s4p11_T),
	 FPM_InitFixedPoint_m(-1.0, s4p11_T), FPM_InitFixedPoint_m(0.0, s4p11_T),
	 FPM_InitFixedPoint_m(1.0, s4p11_T), FPM_InitFixedPoint_m(2.0, s4p11_T),
	 FPM_InitFixedPoint_m(3.0, s4p11_T), FPM_InitFixedPoint_m(4.0, s4p11_T),
	 FPM_InitFixedPoint_m(5.0, s4p11_T),FPM_InitFixedPoint_m(6.0, s4p11_T),
	 FPM_InitFixedPoint_m(8.0, s4p11_T),
	 FPM_InitFixedPoint_m(10.0, s4p11_T)},
	 {FPM_InitFixedPoint_m(-10.0, s4p11_T),
	 FPM_InitFixedPoint_m(-1.0, s4p11_T), FPM_InitFixedPoint_m(0.0, s4p11_T),
	 FPM_InitFixedPoint_m(1.0, s4p11_T), FPM_InitFixedPoint_m(2.0, s4p11_T),
	 FPM_InitFixedPoint_m(3.0, s4p11_T), FPM_InitFixedPoint_m(4.0, s4p11_T),
	 FPM_InitFixedPoint_m(5.0, s4p11_T),FPM_InitFixedPoint_m(6.0, s4p11_T),
	 FPM_InitFixedPoint_m(8.0, s4p11_T),
	 FPM_InitFixedPoint_m(10.0, s4p11_T)},
	 {FPM_InitFixedPoint_m(-10.0, s4p11_T),
	 FPM_InitFixedPoint_m(-1.0, s4p11_T), FPM_InitFixedPoint_m(0.0, s4p11_T),
	 FPM_InitFixedPoint_m(1.0, s4p11_T), FPM_InitFixedPoint_m(2.0, s4p11_T),
	 FPM_InitFixedPoint_m(3.0, s4p11_T), FPM_InitFixedPoint_m(4.0, s4p11_T),
	 FPM_InitFixedPoint_m(5.0, s4p11_T),FPM_InitFixedPoint_m(6.0, s4p11_T),
	 FPM_InitFixedPoint_m(8.0, s4p11_T),
	 FPM_InitFixedPoint_m(10.0, s4p11_T)},
	 {FPM_InitFixedPoint_m(-10.0, s4p11_T),
	 FPM_InitFixedPoint_m(-1.0, s4p11_T), FPM_InitFixedPoint_m(0.0, s4p11_T),
	 FPM_InitFixedPoint_m(1.0, s4p11_T), FPM_InitFixedPoint_m(2.0, s4p11_T),
	 FPM_InitFixedPoint_m(3.0, s4p11_T), FPM_InitFixedPoint_m(4.0, s4p11_T),
	 FPM_InitFixedPoint_m(5.0, s4p11_T),FPM_InitFixedPoint_m(6.0, s4p11_T),
	 FPM_InitFixedPoint_m(8.0, s4p11_T),
	 FPM_InitFixedPoint_m(10.0, s4p11_T)},
	 {FPM_InitFixedPoint_m(-10.0, s4p11_T),
	 FPM_InitFixedPoint_m(-1.0, s4p11_T), FPM_InitFixedPoint_m(0.0, s4p11_T),
	 FPM_InitFixedPoint_m(1.0, s4p11_T), FPM_InitFixedPoint_m(2.0, s4p11_T),
	 FPM_InitFixedPoint_m(3.0, s4p11_T), FPM_InitFixedPoint_m(4.0, s4p11_T),
	 FPM_InitFixedPoint_m(5.0, s4p11_T),FPM_InitFixedPoint_m(6.0, s4p11_T),
	 FPM_InitFixedPoint_m(8.0, s4p11_T),
	 FPM_InitFixedPoint_m(10.0, s4p11_T)}};

#pragma DATA_SECTION(t2_AsstFWUprBoundY_MtrNm_s4p11, ".FlashCalSeg");
CONST(sint16, CAL_CONST) t2_AsstFWUprBoundY_MtrNm_s4p11[8][11] = 
	{{FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T)},
	 {FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.9995175, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T)},
	 {FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T)},
	 {FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T)},
	 {FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T)},
	 {FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T)},
	 {FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T)},
	{FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T)}};


/********************************* AstLmt_CM *********************************/
#pragma DATA_SECTION(k_SumLimPlCmpLimit_MtrNm_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_SumLimPlCmpLimit_MtrNm_f32 = 8.8f;


/****************************** BatteryVoltage *******************************/
#pragma DATA_SECTION(k_MaxBattVoltDiff_Volts_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_MaxBattVoltDiff_Volts_f32 = 0.5f;

#pragma DATA_SECTION(k_VecuCorrLim_Cnt_Str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_VecuCorrLim_Cnt_Str = {120,1,3};

#pragma DATA_SECTION(k_VecuVbatCorrLim_Volts_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_VecuVbatCorrLim_Volts_f32 = 0.73f;

#pragma DATA_SECTION(k_VswitchCorrLim_Cnt_Str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_VswitchCorrLim_Cnt_Str = {120,1,3};

#pragma DATA_SECTION(k_VswitchCorrLim_Volts_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_VswitchCorrLim_Volts_f32 = 0.73f;


/************************** BatteryVoltage, BkCpPc ***************************/
#pragma DATA_SECTION(k_MaxSwitchedVolt_Volts_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_MaxSwitchedVolt_Volts_f32 = 16.0f;


/********************************** BkCpPc ***********************************/
#pragma DATA_SECTION(k_ChargeMinDeltaExtOp_Volt_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_ChargeMinDeltaExtOp_Volt_f32 = 5.0f;

#pragma DATA_SECTION(k_ChargeMinDeltaNonOp_Volt_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_ChargeMinDeltaNonOp_Volt_f32 = 0.0f;

#pragma DATA_SECTION(k_ChargeMinDeltaNormlOp_Volt_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_ChargeMinDeltaNormlOp_Volt_f32 = 6.0f;

#pragma DATA_SECTION(k_ChargePumpDiag_Cnt_str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_ChargePumpDiag_Cnt_str = {100, 4, 1};

#pragma DATA_SECTION(k_MaxDischEst_Uls_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_MaxDischEst_Uls_f32 = 0.99f;

#pragma DATA_SECTION(k_MinDischEst_Uls_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_MinDischEst_Uls_f32 = 0.98f;

#pragma DATA_SECTION(k_MtrMotionThresh_MtrRadpS_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_MtrMotionThresh_MtrRadpS_f32 = 100.0f;

#pragma DATA_SECTION(k_OVERRIDESIGDIAGOpenThresh_Volts_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_OVERRIDESIGDIAGOpenThresh_Volts_f32 = 0.5f;

#pragma DATA_SECTION(k_PMOSDIAGOpenThresh_Volts_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_PMOSDIAGOpenThresh_Volts_f32 = 0.5f;

#pragma DATA_SECTION(k_PMOSTError_mS_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_PMOSTError_mS_u16 = 50U;

#pragma DATA_SECTION(k_PMOSVError_Volts_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_PMOSVError_Volts_f32 = 1.0f;

#pragma DATA_SECTION(k_PrechargeThresh_mS_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_PrechargeThresh_mS_u16 = 400U;

#pragma DATA_SECTION(k_PwrDiscCloseThresh_Volts_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_PwrDiscCloseThresh_Volts_f32 = 0.5f;

#pragma DATA_SECTION(k_PwrDiscOpenThresh_Volts_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_PwrDiscOpenThresh_Volts_f32 = 2.0f;

#pragma DATA_SECTION(k_VbattSwitchThreshExNorm_Volt_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_VbattSwitchThreshExNorm_Volt_f32 = 8.0f;

#pragma DATA_SECTION(k_VbattSwitchThreshNonExt_Volt_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_VbattSwitchThreshNonExt_Volt_f32 = 7.0f;

#pragma DATA_SECTION(k_VerifyPwrDiscCloseThresh_mS_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_VerifyPwrDiscCloseThresh_mS_u16 = 100U;

#pragma DATA_SECTION(k_VerifyPwrDiscOpenThresh_mS_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_VerifyPwrDiscOpenThresh_mS_u16 = 100U;

#pragma DATA_SECTION(k_VswitchDeltaThresh_Volts_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_VswitchDeltaThresh_Volts_f32 = 0.5f;

#pragma DATA_SECTION(k_WaitForSqrWaveThresh_mS_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_WaitForSqrWaveThresh_mS_u16 = 100U;


/********************************** BVDiag ***********************************/
#pragma DATA_SECTION(k_LowDetect_ms_u16p0, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_LowDetect_ms_u16p0 = 
	FPM_InitFixedPoint_m(1000.0, u16p0_T);

#pragma DATA_SECTION(k_LowDetect_Volts_u10p6, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_LowDetect_Volts_u10p6 = 
	FPM_InitFixedPoint_m(9.0, u10p6_T);

#pragma DATA_SECTION(k_LowNotDetect_ms_u16p0, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_LowNotDetect_ms_u16p0 = 
	FPM_InitFixedPoint_m(600.0, u16p0_T);

#pragma DATA_SECTION(k_LowNotDetect_Volts_u10p6, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_LowNotDetect_Volts_u10p6 = 
	FPM_InitFixedPoint_m(9.0, u10p6_T);

#pragma DATA_SECTION(k_OvDetect_ms_u16p0, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_OvDetect_ms_u16p0 = 
	FPM_InitFixedPoint_m(1000.0, u16p0_T);

#pragma DATA_SECTION(k_OvDetect_Volts_u10p6, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_OvDetect_Volts_u10p6 = 
	FPM_InitFixedPoint_m(18.0, u10p6_T);

#pragma DATA_SECTION(k_OvNotDetect_ms_u16p0, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_OvNotDetect_ms_u16p0 = 
	FPM_InitFixedPoint_m(600.0, u16p0_T);

#pragma DATA_SECTION(k_OvNotDetect_Volts_u10p6, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_OvNotDetect_Volts_u10p6 = 
	FPM_InitFixedPoint_m(18.0, u10p6_T);


/*********************************** C1xx ************************************/
#pragma DATA_SECTION(k_ClearDtcVehSpdLmt_Kph_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_ClearDtcVehSpdLmt_Kph_f32 = 3.0f;

#pragma DATA_SECTION(k_DisableNormalComm28VehSpdLmt_Kph_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_DisableNormalComm28VehSpdLmt_Kph_f32 = 3.0f;


/************************* C1xx, IoHwAbstractionUsr **************************/
#pragma DATA_SECTION(k_ADCVbattScaling_Uls_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_ADCVbattScaling_Uls_f32 = 6.747127f;

#pragma DATA_SECTION(k_ADCVbattSwitchScaling_Uls_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_ADCVbattSwitchScaling_Uls_f32 = 3.369668f;

#pragma DATA_SECTION(k_ADCVrefScaling_Uls_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_ADCVrefScaling_Uls_f32 = 1.0f;

#pragma DATA_SECTION(k_GenMaxADCWaitTime_uS_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_GenMaxADCWaitTime_uS_u16 = 1000U;

#pragma DATA_SECTION(k_SlowADCValidDiag_Cnt_str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_SlowADCValidDiag_Cnt_str = {1,1,1};

#pragma DATA_SECTION(k_VrefMax_Volts_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_VrefMax_Volts_f32 = 2.65f;

#pragma DATA_SECTION(k_VrefMin_Volts_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_VrefMin_Volts_f32 = 2.35f;

#pragma DATA_SECTION(k_VrefOORDiag_Cnt_str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_VrefOORDiag_Cnt_str = {100,4,1};


/***************************** C1xx, wip_fz9hxm ******************************/
#pragma DATA_SECTION(k_Cal2RelNum_Cnt_u8, ".SysCalSeg");
CONST(uint8, CAL_CONST) k_Cal2RelNum_Cnt_u8[12] = "DefaultCals";

#pragma DATA_SECTION(k_CalRelNum_Cnt_u8, ".FlashCalSeg");
CONST(uint8, CAL_CONST) k_CalRelNum_Cnt_u8[12] = "DefaultCals";

#pragma DATA_SECTION(k_ComprVehPartiProStr_Cnt_u8, ".FlashCalSeg");
CONST(uint8, CAL_CONST) k_ComprVehPartiProStr_Cnt_u8[14] = {'8','5','9','0',
	
 '2','0','0','0','0','0','0','0','0','X'};

#pragma DATA_SECTION(k_CPID02VehSpdLmt_Kph_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_CPID02VehSpdLmt_Kph_f32 = 10.0f;

#pragma DATA_SECTION(k_CPID03LockedVehSpdLmt_Kph_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_CPID03LockedVehSpdLmt_Kph_f32 = 0.0f;

#pragma DATA_SECTION(k_CPID03UnlockedVehSpdLmt_Kph_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_CPID03UnlockedVehSpdLmt_Kph_f32 = 10.0f;

#pragma DATA_SECTION(k_CPID04LockedVehSpdLmt_Kph_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_CPID04LockedVehSpdLmt_Kph_f32 = 0.0f;

#pragma DATA_SECTION(k_CPID04UnlockedVehSpdLmt_Kph_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_CPID04UnlockedVehSpdLmt_Kph_f32 = 10.0f;

#pragma DATA_SECTION(k_CPIDFDLockedVehSpdLmt_Kph_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_CPIDFDLockedVehSpdLmt_Kph_f32 = 0.0f;

#pragma DATA_SECTION(k_CPIDFDUnlockedVehSpdLmt_Kph_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_CPIDFDUnlockedVehSpdLmt_Kph_f32 = 0.0f;

#pragma DATA_SECTION(k_DigColPsCustSetTrimLoops_Cnt_u08, ".FlashCalSeg");
CONST(uint8, CAL_CONST) k_DigColPsCustSetTrimLoops_Cnt_u08 = 100;

#pragma DATA_SECTION(k_ECUResetHwTrq_HwNm_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_ECUResetHwTrq_HwNm_f32 = 5.0f;

#pragma DATA_SECTION(k_ECUResetVehSpd_kph_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_ECUResetVehSpd_kph_f32 = 10.0f;

#pragma DATA_SECTION(k_GearCfactor_MmpRev_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_GearCfactor_MmpRev_f32 = 60.0f;

#pragma DATA_SECTION(k_NexteerModeTO_mS_u16p0, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_NexteerModeTO_mS_u16p0 = 
	FPM_InitFixedPoint_m(5000.0, u16p0_T);

#pragma DATA_SECTION(k_SrvcHwTrqLimit_HwNm_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_SrvcHwTrqLimit_HwNm_f32 = 1.0f;

#pragma DATA_SECTION(k_SrvcVehSpdLimit_Kph_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_SrvcVehSpdLimit_Kph_f32 = 10.0f;

#pragma DATA_SECTION(k_SteeringAngleSensorCalHwTrqLimit_HwNm_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_SteeringAngleSensorCalHwTrqLimit_HwNm_f32 = 3.0f;

#pragma DATA_SECTION(k_SteeringAngleSensorCalVehSpdLimit_Kph_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_SteeringAngleSensorCalVehSpdLimit_Kph_f32 = 10.0f;


/*********************** CF12 GMStartStop, GMStrtStop ************************/
#pragma DATA_SECTION(k_AlgEnable_Cnt_lgc, ".FlashCalSeg");
CONST(boolean, CAL_CONST) k_AlgEnable_Cnt_lgc = FALSE;


/********************************* CmMtrCurr *********************************/
#pragma DATA_SECTION(k_CurrCorrErrFiltFc_Hz_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_CurrCorrErrFiltFc_Hz_f32 = 1.7953429f;

#pragma DATA_SECTION(k_CurrCorrErrThresh_Amps_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_CurrCorrErrThresh_Amps_f32 = 0.0f;

#pragma DATA_SECTION(k_CurrGainNumerator_Amps_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_CurrGainNumerator_Amps_f32 = 45.0f;

#pragma DATA_SECTION(k_CurrOffGainKn_Cnt_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_CurrOffGainKn_Cnt_u16 = 1462U;

#pragma DATA_SECTION(k_CurrOffNoofAvg_Cnt_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_CurrOffNoofAvg_Cnt_u16 = 900U;

#pragma DATA_SECTION(k_MaxCurrOffMtrVel_RadpS_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_MaxCurrOffMtrVel_RadpS_f32 = 10.0f;

#pragma DATA_SECTION(k_MtrCurrEOLMaxGain_AmpspVolts_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_MtrCurrEOLMaxGain_AmpspVolts_f32 = 110.0f;

#pragma DATA_SECTION(k_MtrCurrEOLMaxOffset_Volts_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_MtrCurrEOLMaxOffset_Volts_f32 = 2.8f;

#pragma DATA_SECTION(k_MtrCurrEOLMinGain_AmpspVolts_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_MtrCurrEOLMinGain_AmpspVolts_f32 = 90.0f;

#pragma DATA_SECTION(k_MtrCurrEOLMinOffset_Volts_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_MtrCurrEOLMinOffset_Volts_f32 = 2.2f;

#pragma DATA_SECTION(k_MtrCurrOffLoComOff_Cnt_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_MtrCurrOffLoComOff_Cnt_u16 = 500U;

#pragma DATA_SECTION(k_MtrPosComputDelay_Sec_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_MtrPosComputDelay_Sec_f32 = 0.000096f;


/******************************** CMS_Common *********************************/
#pragma DATA_SECTION(k_CMSGotoPosPol_Cnt_s08, ".FlashCalSeg");
CONST(sint8, CAL_CONST) k_CMSGotoPosPol_Cnt_s08 = 1;

#pragma DATA_SECTION(k_CyberSecNexteerCheckEnable_Cnt_lgc, ".FlashCalSeg");
CONST(boolean, CAL_CONST) k_CyberSecNexteerCheckEnable_Cnt_lgc = TRUE;

#pragma DATA_SECTION(k_F00FHandsOnThres_HwNm_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_F00FHandsOnThres_HwNm_f32 = 0.5f;

#pragma DATA_SECTION(k_FreezeMECFD1BEnable_Cnt_lgc, ".FlashCalSeg");
CONST(boolean, CAL_CONST) k_FreezeMECFD1BEnable_Cnt_lgc = TRUE;

#pragma DATA_SECTION(k_NxtrSrvcHandsOnTime_mS_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_NxtrSrvcHandsOnTime_mS_u16 = 5000U;

#pragma DATA_SECTION(k_NxtrSrvcPosTrajHoldTime_mS_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_NxtrSrvcPosTrajHoldTime_mS_u16 = 5000U;

#pragma DATA_SECTION(k_NxtrSrvcPosTrajThres_HwDeg_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_NxtrSrvcPosTrajThres_HwDeg_f32 = 2.0f;

#pragma DATA_SECTION(k_VehSpdZeroCheckEnable_Cnt_lgc, ".FlashCalSeg");
CONST(boolean, CAL_CONST) k_VehSpdZeroCheckEnable_Cnt_lgc = TRUE;

#pragma DATA_SECTION(k_VehSpdZeroThreshold_Kph_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_VehSpdZeroThreshold_Kph_f32 = 0.0f;


/********************************* ComplErr **********************************/
#pragma DATA_SECTION(t_CompErrMtrPosNonLinComplDepTbl_HwDegpMtrNm_u8p8, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_CompErrMtrPosNonLinComplDepTbl_HwDegpMtrNm_u8p8[6] = 
	{FPM_InitFixedPoint_m(0.0, u8p8_T), FPM_InitFixedPoint_m(0.0, u8p8_T),
	 FPM_InitFixedPoint_m(0.0, u8p8_T), FPM_InitFixedPoint_m(0.0, u8p8_T),
	 FPM_InitFixedPoint_m(0.0, u8p8_T), FPM_InitFixedPoint_m(0.0, u8p8_T)};

#pragma DATA_SECTION(t_ComplErrMtrPosNonLinComplIndTbl_MtrNm_u5p11, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_ComplErrMtrPosNonLinComplIndTbl_MtrNm_u5p11[6] = 
	{FPM_InitFixedPoint_m(0.0, u5p11_T), FPM_InitFixedPoint_m(0.5, u5p11_T),
	 FPM_InitFixedPoint_m(1.5, u5p11_T), FPM_InitFixedPoint_m(3.0, u5p11_T),
	 FPM_InitFixedPoint_m(5.0, u5p11_T), FPM_InitFixedPoint_m(8.0, u5p11_T)};


/******************************* CtrldDisShtdn *******************************/
#pragma DATA_SECTION(k_CntrlDmpRampEnd_Uls_u8p8, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_CntrlDmpRampEnd_Uls_u8p8 = 
	FPM_InitFixedPoint_m(0.0, u8p8_T);

#pragma DATA_SECTION(k_CtrlDmpTmrBkptOne_mS_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_CtrlDmpTmrBkptOne_mS_u16 = 100U;

#pragma DATA_SECTION(k_CtrlDmpTmrBkptTwo_mS_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_CtrlDmpTmrBkptTwo_mS_u16 = 1000U;

#pragma DATA_SECTION(k_CtrlDpVelThr_MtrRadpS_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_CtrlDpVelThr_MtrRadpS_f32 = 2.3f;

#pragma DATA_SECTION(k_F2Damping_MtrNmpRadpS_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_F2Damping_MtrNmpRadpS_f32 = 0.036f;

#pragma DATA_SECTION(k_MaxCtrlDmpLimit_MtrNm_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_MaxCtrlDmpLimit_MtrNm_f32 = 3.0f;


/********************************* CtrlTemp **********************************/
#pragma DATA_SECTION(k_CustDiagAmbLowEnable_Cnt_lgc, ".FlashCalSeg");
CONST(boolean, CAL_CONST) k_CustDiagAmbLowEnable_Cnt_lgc = FALSE;

#pragma DATA_SECTION(k_CustDiagAmbLowThresh_DegC_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_CustDiagAmbLowThresh_DegC_f32 = -30.0f;

#pragma DATA_SECTION(k_TempSensDiag_Cnt_str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_TempSensDiag_Cnt_str = {40,2,1};

#pragma DATA_SECTION(k_TempSensHighLimit_DegC_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_TempSensHighLimit_DegC_f32 = 150.0f;

#pragma DATA_SECTION(k_TempSensLowLimit_DegC_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_TempSensLowLimit_DegC_f32 = -40.0f;

#pragma DATA_SECTION(k_TempSnsrDefVal_DegC_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_TempSnsrDefVal_DegC_f32 = 60.0f;

#pragma DATA_SECTION(k_TempSnsrFiltDft_Cnt_lgc, ".FlashCalSeg");
CONST(boolean, CAL_CONST) k_TempSnsrFiltDft_Cnt_lgc = FALSE;

#pragma DATA_SECTION(k_TempSnsrLPFKn_Hz_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_TempSnsrLPFKn_Hz_f32 = 8.0f;

#pragma DATA_SECTION(k_TempSnsrOffset_Volts_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_TempSnsrOffset_Volts_f32 = 0.5f;

#pragma DATA_SECTION(k_TempSnsrScaling_DegpVolt_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_TempSnsrScaling_DegpVolt_f32 = 100.0f;


/********************************** Damping **********************************/
#pragma DATA_SECTION(k_HPSbaseC1_MtrNmpMtrRadpS_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_HPSbaseC1_MtrNmpMtrRadpS_f32 = 0.000521083f;

#pragma DATA_SECTION(k_HPSbaseC2_MtrNmpMtrRadpS_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_HPSbaseC2_MtrNmpMtrRadpS_f32 = 0.0000288893f;

#pragma DATA_SECTION(k_HPSbaseC3_MtrNmpMtrRadpS_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_HPSbaseC3_MtrNmpMtrRadpS_f32 = 0.00618654f;

#pragma DATA_SECTION(k_HPSbaseC4_MtrNmpMtrRadpS_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_HPSbaseC4_MtrNmpMtrRadpS_f32 = 0.00000956832f;

#pragma DATA_SECTION(k_MtrVelDampLPFKn_Hz_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_MtrVelDampLPFKn_Hz_f32 = 15.0f;

#pragma DATA_SECTION(k_QDDHwTrqBckLash_HwNm_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_QDDHwTrqBckLash_HwNm_f32 = 0.0f;

#pragma DATA_SECTION(k_QddHwTrqDampKn_Hz_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_QddHwTrqDampKn_Hz_f32 = 15.0f;

#pragma DATA_SECTION(k_QDDMtrVelBckLash_MtrRadpS_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_QDDMtrVelBckLash_MtrRadpS_f32 = 0.0f;

#pragma DATA_SECTION(k_QddMtrVelDampKn_Hz_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_QddMtrVelDampKn_Hz_f32 = 15.0f;

#pragma DATA_SECTION(k_QddSfLFPKn_Hz_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_QddSfLFPKn_Hz_f32 = 15.0f;

#pragma DATA_SECTION(k_Quad13DmpMult_Uls_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_Quad13DmpMult_Uls_f32 = 1.0f;

#pragma DATA_SECTION(k_Quad24DmpMult_Uls_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_Quad24DmpMult_Uls_f32 = 1.0f;


/******************** DampingFirewall, FrqDepDmpnInrtCmp *********************/
#pragma DATA_SECTION(k_CmnSysKinRatio_MtrDegpHwDeg_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_CmnSysKinRatio_MtrDegpHwDeg_f32 = 22.0f;

#pragma DATA_SECTION(k_CmnTbarStiff_NmpDeg_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_CmnTbarStiff_NmpDeg_f32 = 2.5f;


/*********************************** DemIf ***********************************/
#pragma DATA_SECTION(k_CtcInhibitMask417654_Cnt_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_CtcInhibitMask417654_Cnt_u16 = 71U;

#pragma DATA_SECTION(k_CtcInhibitMask44604B_Cnt_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_CtcInhibitMask44604B_Cnt_u16 = 71U;

#pragma DATA_SECTION(k_CtcInhibitMask446058_Cnt_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_CtcInhibitMask446058_Cnt_u16 = 7U;

#pragma DATA_SECTION(k_CtcInhibitMask44605A_Cnt_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_CtcInhibitMask44605A_Cnt_u16 = 71U;

#pragma DATA_SECTION(k_CtcInhibitMask454500_Cnt_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_CtcInhibitMask454500_Cnt_u16 = 7U;

#pragma DATA_SECTION(k_CtcInhibitMask456D00_Cnt_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_CtcInhibitMask456D00_Cnt_u16 = 7U;

#pragma DATA_SECTION(k_CtcInhibitMask456E42_Cnt_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_CtcInhibitMask456E42_Cnt_u16 = 71U;

#pragma DATA_SECTION(k_CtcInhibitMask480003_Cnt_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_CtcInhibitMask480003_Cnt_u16 = 67U;

#pragma DATA_SECTION(k_CtcInhibitMask480011_Cnt_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_CtcInhibitMask480011_Cnt_u16 = 71U;

#pragma DATA_SECTION(k_CtcInhibitMask480012_Cnt_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_CtcInhibitMask480012_Cnt_u16 = 67U;

#pragma DATA_SECTION(k_CtcInhibitMaskC07300_Cnt_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_CtcInhibitMaskC07300_Cnt_u16 = 11U;

#pragma DATA_SECTION(k_CtcInhibitMaskC07700_Cnt_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_CtcInhibitMaskC07700_Cnt_u16 = 11U;

#pragma DATA_SECTION(k_CtcInhibitMaskC10000_Cnt_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_CtcInhibitMaskC10000_Cnt_u16 = 251U;

#pragma DATA_SECTION(k_CtcInhibitMaskC10100_Cnt_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_CtcInhibitMaskC10100_Cnt_u16 = 251U;

#pragma DATA_SECTION(k_CtcInhibitMaskC12100_Cnt_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_CtcInhibitMaskC12100_Cnt_u16 = 251U;

#pragma DATA_SECTION(k_CtcInhibitMaskC14000_Cnt_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_CtcInhibitMaskC14000_Cnt_u16 = 251U;

#pragma DATA_SECTION(k_CtcInhibitMaskC15900_Cnt_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_CtcInhibitMaskC15900_Cnt_u16 = 251U;

#pragma DATA_SECTION(k_CtcInhibitMaskC26A00_Cnt_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_CtcInhibitMaskC26A00_Cnt_u16 = 251U;

#pragma DATA_SECTION(k_CtcInhibitMaskC40171_Cnt_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_CtcInhibitMaskC40171_Cnt_u16 = 91U;

#pragma DATA_SECTION(k_CtcInhibitMaskC40271_Cnt_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_CtcInhibitMaskC40271_Cnt_u16 = 91U;

#pragma DATA_SECTION(k_CtcInhibitMaskC41571_Cnt_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_CtcInhibitMaskC41571_Cnt_u16 = 91U;

#pragma DATA_SECTION(k_CtcInhibitMaskC42271_Cnt_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_CtcInhibitMaskC42271_Cnt_u16 = 91U;

#pragma DATA_SECTION(k_CtcInhibitMaskC45A71_Cnt_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_CtcInhibitMaskC45A71_Cnt_u16 = 91U;

#pragma DATA_SECTION(k_CtcInhibitMaskC56B71_Cnt_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_CtcInhibitMaskC56B71_Cnt_u16 = 91U;

#pragma DATA_SECTION(k_CtcInhibitMaskD83300_Cnt_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_CtcInhibitMaskD83300_Cnt_u16 = 379U;

#pragma DATA_SECTION(k_CtcInhibitMaskE50271_Cnt_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_CtcInhibitMaskE50271_Cnt_u16 = 91U;


/********************************** DiagMgr **********************************/
#pragma DATA_SECTION(k_FltRmpRate_UlspmS_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_FltRmpRate_UlspmS_f32[13] = { 0.0005f, 0.0005f,
	 0.0005f, 0.0005f, 0.0005f, 0.0005f, 0.0005f, 0.0005f, 0.0005f, 0.0005f,
	 0.0005f, 0.0005f, 0.0005f };

#pragma DATA_SECTION(k_FltRspTbl_Cnt_str, ".SysCalSeg");
CONST(FltRsp_Str, CAL_CONST) k_FltRspTbl_Cnt_str[512] = { {0x000000, 0},
	 {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F,
	 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0},
	 {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F,
	 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0},
	 {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F,
	 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0},
	 {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F,
	 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0},
	 {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F,
	 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0},
	 {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F,
	 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0},
	 {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F,
	 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0},
	 {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F,
	 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0},
	 {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F,
	 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0},
	 {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F,
	 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0},
	 {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F,
	 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0},
	 {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F,
	 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0},
	 {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F,
	 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0},
	 {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F,
	 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0},
	 {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F,
	 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0},
	 {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F,
	 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0},
	 {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F,
	 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0},
	 {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F,
	 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0},
	 {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F,
	 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0},
	 {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F,
	 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0},
	 {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F,
	 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0},
	 {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F,
	 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0},
	 {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F,
	 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0},
	 {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F,
	 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0},
	 {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F,
	 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0},
	 {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F,
	 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0},
	 {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F,
	 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0},
	 {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F,
	 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0},
	 {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F,
	 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0},
	 {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F,
	 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0},
	 {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F,
	 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0},
	 {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F,
	 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0},
	 {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F,
	 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0},
	 {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F,
	 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0},
	 {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F,
	 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0},
	 {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F,
	 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0},
	 {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F,
	 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0},
	 {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F,
	 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0},
	 {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F,
	 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0},
	 {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F,
	 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0},
	 {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F,
	 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0},
	 {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F,
	 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0},
	 {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F,
	 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0},
	 {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F,
	 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0},
	 {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F,
	 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0},
	 {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F,
	 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0},
	 {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F,
	 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0},
	 {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F,
	 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0},
	 {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F,
	 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0},
	 {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F,
	 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0},
	 {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F,
	 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0},
	 {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F,
	 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0},
	 {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F,
	 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0},
	 {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F,
	 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0},
	 {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F,
	 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0},
	 {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F,
	 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0},
	 {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F, 0}, {0xC0000F,
	 0}, {0xC0000F, 0}, {0xC0000F, 0}  };

#pragma DATA_SECTION(t_BlkBoxGrp_Ptr_u32, ".FlashCalSeg");
CONST(uint32* const, CAL_CONST) t_BlkBoxGrp_Ptr_u32[7][3] = {{0,0,0},{0,0,0},
	{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0}};

#pragma DATA_SECTION(t_SortedNTCs_Cnt_enum, ".SysCalSeg");
CONST(NTCNumber, CAL_CONST) t_SortedNTCs_Cnt_enum[256] = { 0x000,0x000,0x000,
	0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,
	0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,
	0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,
	0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,
	0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,
	0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,
	0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,
	0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,
	0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,
	0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,
	0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,
	0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,
	0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,
	0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,
	0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,
	0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,
	0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,
	0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,
	0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,
	0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,
	0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,
	0x000 };


/********************************* DigColPs **********************************/
#pragma DATA_SECTION(k_ColAngSenseLPFFc_Hz_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_ColAngSenseLPFFc_Hz_f32 = 10.0f;

#pragma DATA_SECTION(k_ColSensorI2CAddress_Cnt_u08, ".FlashCalSeg");
CONST(uint8, CAL_CONST) k_ColSensorI2CAddress_Cnt_u08 = 14;

#pragma DATA_SECTION(k_I2CHWInitTransactionTime_Sec_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_I2CHWInitTransactionTime_Sec_f32 = 2.0f;

#pragma DATA_SECTION(k_ReInitMaxTryCntr_Cnt_u08, ".FlashCalSeg");
CONST(uint8, CAL_CONST) k_ReInitMaxTryCntr_Cnt_u08 = 1;

#pragma DATA_SECTION(k_SelectFromColumn_Cnt_lgc, ".FlashCalSeg");
CONST(boolean, CAL_CONST) k_SelectFromColumn_Cnt_lgc = FALSE;

#pragma DATA_SECTION(k_SkipStepErrDiag_Cnt_str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_SkipStepErrDiag_Cnt_str = {21,20,1};

#pragma DATA_SECTION(k_SpurAngSenseLPFFc_Hz_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_SpurAngSenseLPFFc_Hz_f32 = 10.0f;

#pragma DATA_SECTION(k_SpurSensorI2CAddress_Cnt_u08, ".FlashCalSeg");
CONST(uint8, CAL_CONST) k_SpurSensorI2CAddress_Cnt_u08 = 13;

#pragma DATA_SECTION(k_StepDetect_Deg_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_StepDetect_Deg_f32 = 240.0f;

#pragma DATA_SECTION(k_VernCorrErrorDiag_Cnt_str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_VernCorrErrorDiag_Cnt_str = {20,4,1};

#pragma DATA_SECTION(k_VernCorrErrorThresh_Deg_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_VernCorrErrorThresh_Deg_f32 = 4.8f;

#pragma DATA_SECTION(k_VernOORangeThresh_Deg_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_VernOORangeThresh_Deg_f32 = 1200.0f;


/******************************* DigHwTrqSENT ********************************/
#pragma DATA_SECTION(k_CMCLPFOutLim_HwNm_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_CMCLPFOutLim_HwNm_f32 = 0.544009001f;

#pragma DATA_SECTION(k_HwTrqLPFFc_Hz_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_HwTrqLPFFc_Hz_f32 = 0.0f;

#pragma DATA_SECTION(k_MaxHwTrqTrim_HwNm_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_MaxHwTrqTrim_HwNm_f32 = 0.54348f;

#pragma DATA_SECTION(k_T1T2CMCLPFEnable_HwNm_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_T1T2CMCLPFEnable_HwNm_f32 = 0.270677649f;

#pragma DATA_SECTION(k_T1T2CMCLPFFc_Hz_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_T1T2CMCLPFFc_Hz_f32 = 0.019894368f;

#pragma DATA_SECTION(k_T1T2SSLim_HwNm_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_T1T2SSLim_HwNm_f32 = 2.609375f;

#pragma DATA_SECTION(k_T1T2SSLPFFc_Hz_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_T1T2SSLPFFc_Hz_f32 = 0.019894368f;

#pragma DATA_SECTION(k_T1T2TransFltLim_HwNm_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_T1T2TransFltLim_HwNm_f32 = 2.609375f;

#pragma DATA_SECTION(k_T1vsT2TrqSum_HwNm_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_T1vsT2TrqSum_HwNm_f32 = 19.021739f;

#pragma DATA_SECTION(t_T1T2DepTrsTimecon_Hz_u6p10, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_T1T2DepTrsTimecon_Hz_u6p10[17] = 
	{ FPM_InitFixedPoint_m(16.019514175835, u6p10_T),
	 FPM_InitFixedPoint_m(16.019514175835, u6p10_T),
	 FPM_InitFixedPoint_m(16.019514175835, u6p10_T),
	 FPM_InitFixedPoint_m(16.019514175835, u6p10_T),
	 FPM_InitFixedPoint_m(16.019514175835, u6p10_T),
	 FPM_InitFixedPoint_m(10.553716911786, u6p10_T),
	 FPM_InitFixedPoint_m(7.96872965761939, u6p10_T),
	 FPM_InitFixedPoint_m(6.42717395292957, u6p10_T),
	 FPM_InitFixedPoint_m(5.39722706185968, u6p10_T),
	 FPM_InitFixedPoint_m(4.65376910940811, u6p10_T),
	 FPM_InitFixedPoint_m(4.09226390842641, u6p10_T),
	 FPM_InitFixedPoint_m(3.65389865074024, u6p10_T),
	 FPM_InitFixedPoint_m(3.2999820535005, u6p10_T),
	 FPM_InitFixedPoint_m(3.00893568853267, u6p10_T),
	 FPM_InitFixedPoint_m(2.76529899113485, u6p10_T),
	 FPM_InitFixedPoint_m(2.55889942858302, u6p10_T),
	 FPM_InitFixedPoint_m(2.38077029677756, u6p10_T)};

#pragma DATA_SECTION(t_T1T2IndTrsTimecon_HwNm_u5p11, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_T1T2IndTrsTimecon_HwNm_u5p11[17] = 
	{ FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.870414402173913, u5p11_T),
	FPM_InitFixedPoint_m(1.73817510190217, u5p11_T),
	FPM_InitFixedPoint_m(2.60858950407609, u5p11_T),
	FPM_InitFixedPoint_m(3.47900390625, u5p11_T),
	FPM_InitFixedPoint_m(4.34676460597826, u5p11_T),
	FPM_InitFixedPoint_m(5.21717900815217, u5p11_T),
	FPM_InitFixedPoint_m(6.08759341032609, u5p11_T),
	FPM_InitFixedPoint_m(6.95535411005435, u5p11_T),
	FPM_InitFixedPoint_m(7.82576851222826, u5p11_T),
	FPM_InitFixedPoint_m(8.69618291440217, u5p11_T),
	FPM_InitFixedPoint_m(9.56394361413043, u5p11_T),
	FPM_InitFixedPoint_m(10.4343580163043, u5p11_T),
	FPM_InitFixedPoint_m(11.3047724184783, u5p11_T),
	FPM_InitFixedPoint_m(12.1751868206522, u5p11_T),
	FPM_InitFixedPoint_m(13.0429475203804, u5p11_T),
	FPM_InitFixedPoint_m(13.9133619225543, u5p11_T)};


/********************************** DigMSB ***********************************/
#pragma DATA_SECTION(k_Die1RPMMode_Cnt_u08, ".FlashCalSeg");
CONST(uint8, CAL_CONST) k_Die1RPMMode_Cnt_u08 = 0;

#pragma DATA_SECTION(k_Die1vsDie2TrnsCntrThresh_Deg_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_Die1vsDie2TrnsCntrThresh_Deg_f32 = 45.0f;

#pragma DATA_SECTION(k_Die2Offset_Rev_u3p13, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_Die2Offset_Rev_u3p13 = 
	FPM_InitFixedPoint_m(0.5, u3p13_T);

#pragma DATA_SECTION(k_Die2RPMMode_Cnt_u08, ".FlashCalSeg");
CONST(uint8, CAL_CONST) k_Die2RPMMode_Cnt_u08 = 0;

#pragma DATA_SECTION(k_DigMSBErrorRegGenMask_Cnt_u08, ".FlashCalSeg");
CONST(uint8, CAL_CONST) k_DigMSBErrorRegGenMask_Cnt_u08 = 0x16;

#pragma DATA_SECTION(k_DigMSBParity_Cnt_str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_DigMSBParity_Cnt_str = {256,4,1};

#pragma DATA_SECTION(k_DigMSBTCRunTimeParity_Cnt_str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_DigMSBTCRunTimeParity_Cnt_str = {256,4,1};

#pragma DATA_SECTION(k_ErrorRegTCAcc_Cnt_str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_ErrorRegTCAcc_Cnt_str = {256,4,1};

#pragma DATA_SECTION(k_ErrorRegTCMask_Cnt_u08, ".FlashCalSeg");
CONST(uint8, CAL_CONST) k_ErrorRegTCMask_Cnt_u08 = 0x08;

#pragma DATA_SECTION(k_ErrorRegVehMask_Cnt_u08, ".FlashCalSeg");
CONST(uint8, CAL_CONST) k_ErrorRegVehMask_Cnt_u08 = 0x00;

#pragma DATA_SECTION(k_MtrPos1vsMtrPos2Diag_Cnt_str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_MtrPos1vsMtrPos2Diag_Cnt_str = {256,4,1};

#pragma DATA_SECTION(k_MtrPos1vsMtrPos2Thresh_Rev_u3p13, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_MtrPos1vsMtrPos2Thresh_Rev_u3p13 = 
	FPM_InitFixedPoint_m(0.5, u3p13_T);

#pragma DATA_SECTION(k_TurnsCntrOffset_Rev_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_TurnsCntrOffset_Rev_f32 = 0.0f;


/****************************** EOTActuatorMng *******************************/
#pragma DATA_SECTION(k_EOTStateHwTrqLPFKn_Cnt_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_EOTStateHwTrqLPFKn_Cnt_u16 = 20583U;


/************************** EOTActuatorMng, EtDmpFw **************************/
#pragma DATA_SECTION(k_EOTDynConf_Uls_u8p8, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_EOTDynConf_Uls_u8p8 = 
	FPM_InitFixedPoint_m(0.80078125, u8p8_T);


/*********************************** ePWM ************************************/
#pragma DATA_SECTION(k_ADCTrig1Offset_Cnt_s16, ".FlashCalSeg");
CONST(sint16, CAL_CONST) k_ADCTrig1Offset_Cnt_s16 = 200;

#pragma DATA_SECTION(k_HwTrqDiag_Cnt_str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_HwTrqDiag_Cnt_str = {128,10,1};

#pragma DATA_SECTION(k_PwmDeadBand_Cnt_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_PwmDeadBand_Cnt_u16 = 100U;

#pragma DATA_SECTION(k_PwmRelay_Cnt_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_PwmRelay_Cnt_u16 = 2500U;

#pragma DATA_SECTION(k_SENTSyncDelay_Cnt_u32, ".FlashCalSeg");
CONST(uint32, CAL_CONST) k_SENTSyncDelay_Cnt_u32 = 148000UL;

#pragma DATA_SECTION(k_SENTSyncTrgMin_Cnt_u32, ".FlashCalSeg");
CONST(uint32, CAL_CONST) k_SENTSyncTrgMin_Cnt_u32 = 20000UL;

#pragma DATA_SECTION(k_SPI1mOff_Cnt_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_SPI1mOff_Cnt_u16 = 1100U;

#pragma DATA_SECTION(k_SPI50UOff_Cnt_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_SPI50UOff_Cnt_u16 = 1152U;


/********************************** EtDmpFw **********************************/
#pragma DATA_SECTION(k_EOTDmpFWInactiveLim_MtrNm_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_EOTDmpFWInactiveLim_MtrNm_f32 = 8.8f;

#pragma DATA_SECTION(k_EOTDmpFWInputLim_MtrNm_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_EOTDmpFWInputLim_MtrNm_f32 = 8.8f;

#pragma DATA_SECTION(t_EOTDmpFWActiveBoundX_MtrRadpS_s11p4, ".FlashCalSeg");
CONST(sint16, CAL_CONST) t_EOTDmpFWActiveBoundX_MtrRadpS_s11p4[5] = 
	{FPM_InitFixedPoint_m(-700.0, s11p4_T),
	 FPM_InitFixedPoint_m(-5.0, s11p4_T),
	 FPM_InitFixedPoint_m(10.0, s11p4_T),
	 FPM_InitFixedPoint_m(50.0, s11p4_T),
	 FPM_InitFixedPoint_m(700.0, s11p4_T)};

#pragma DATA_SECTION(t_EOTDmpFWVehSpd_Kph_u9p7, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_EOTDmpFWVehSpd_Kph_u9p7[4] = 
	{FPM_InitFixedPoint_m(0.0, u9p7_T), FPM_InitFixedPoint_m(20.0, u9p7_T),
	 FPM_InitFixedPoint_m(40.0, u9p7_T), FPM_InitFixedPoint_m(60.0, u9p7_T)};

#pragma DATA_SECTION(t2_EOTDmpFWActiveBoundY_MtrNm_s7p8, ".FlashCalSeg");
CONST(sint16, CAL_CONST) t2_EOTDmpFWActiveBoundY_MtrNm_s7p8[4][5] = 
	{{FPM_InitFixedPoint_m(8.8, s7p8_T),FPM_InitFixedPoint_m(8.8, s7p8_T),
	FPM_InitFixedPoint_m(8.8, s7p8_T),FPM_InitFixedPoint_m(8.8, s7p8_T),
	FPM_InitFixedPoint_m(8.8, s7p8_T)},{FPM_InitFixedPoint_m(8.8, s7p8_T),
	FPM_InitFixedPoint_m(8.8, s7p8_T),FPM_InitFixedPoint_m(8.8, s7p8_T),
	FPM_InitFixedPoint_m(8.8, s7p8_T),FPM_InitFixedPoint_m(8.8, s7p8_T)},
	{FPM_InitFixedPoint_m(8.8, s7p8_T),FPM_InitFixedPoint_m(8.8, s7p8_T),
	FPM_InitFixedPoint_m(8.8, s7p8_T),FPM_InitFixedPoint_m(8.8, s7p8_T),
	FPM_InitFixedPoint_m(8.8, s7p8_T)},{FPM_InitFixedPoint_m(8.8, s7p8_T),
	FPM_InitFixedPoint_m(8.8, s7p8_T),FPM_InitFixedPoint_m(8.8, s7p8_T),
	FPM_InitFixedPoint_m(8.8, s7p8_T),FPM_InitFixedPoint_m(8.8, s7p8_T)}};


/******************************** GenPosTraj *********************************/
#pragma DATA_SECTION(k_PosTrajMaxAccel_HwDegpSecSqr_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_PosTrajMaxAccel_HwDegpSecSqr_f32 = 500.0f;

#pragma DATA_SECTION(k_PosTrajMaxVelocity_HwDegpSec_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_PosTrajMaxVelocity_HwDegpSec_f32 = 50.0f;


/******************************** HiLoadStall ********************************/
#pragma DATA_SECTION(k_EOTThrmPrtLPFKn_Cnt_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_EOTThrmPrtLPFKn_Cnt_u16 = 1130U;

#pragma DATA_SECTION(k_EOTThrmSlwLmtStp_MtrNm_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_EOTThrmSlwLmtStp_MtrNm_f32 = 0.1015625f;

#pragma DATA_SECTION(t_EOTThrmDpntTbl_MtrNm_u8p8, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_EOTThrmDpntTbl_MtrNm_u8p8[4] = 
	{ FPM_InitFixedPoint_m(8.5, u8p8_T), FPM_InitFixedPoint_m(8.0, u8p8_T),
	 FPM_InitFixedPoint_m(7.5, u8p8_T), FPM_InitFixedPoint_m(7.0, u8p8_T) };

#pragma DATA_SECTION(t_EOTThrmIndptTbl_MtrNm_u8p8, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_EOTThrmIndptTbl_MtrNm_u8p8[4] = 
	{ FPM_InitFixedPoint_m(5.75, u8p8_T), FPM_InitFixedPoint_m(6.22, u8p8_T),
	 FPM_InitFixedPoint_m(6.67, u8p8_T),
	 FPM_InitFixedPoint_m(7.125, u8p8_T) };


/************************ HiLoadStall, ThrmDutyCycle *************************/
#pragma DATA_SECTION(k_AbsMtrVelBkt_MtrRadps_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_AbsMtrVelBkt_MtrRadps_f32 = 1.375f;


/********************************* HOWDetect *********************************/
#pragma DATA_SECTION(k_HOWDecaySF_Uls_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_HOWDecaySF_Uls_f32 = 0.99f;

#pragma DATA_SECTION(k_HOWEstLPFKn_Hz_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_HOWEstLPFKn_Hz_f32 = 0.5f;

#pragma DATA_SECTION(k_HOWMinVehSpd_Kph_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_HOWMinVehSpd_Kph_f32 = 10.0f;

#pragma DATA_SECTION(k_HOWSlewRate_HwNmpS_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_HOWSlewRate_HwNmpS_f32 = 2.0f;

#pragma DATA_SECTION(k_HOWStateLPFKn_Hz_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_HOWStateLPFKn_Hz_f32 = 2.0f;

#pragma DATA_SECTION(k_HOWTrqFinalLPFKn_Hz_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_HOWTrqFinalLPFKn_Hz_f32 = 1.0f;

#pragma DATA_SECTION(k_HOWTrqHPFKn_Hz_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_HOWTrqHPFKn_Hz_f32 = 7.0f;

#pragma DATA_SECTION(k_HOWTrqInitLPFKn_Hz_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_HOWTrqInitLPFKn_Hz_f32 = 7.0f;

#pragma DATA_SECTION(t_HOWHighFreqGainY_Uls_u9p7, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_HOWHighFreqGainY_Uls_u9p7[3] = 
	{FPM_InitFixedPoint_m(17.3984375, u9p7_T),
	 FPM_InitFixedPoint_m(17.3984375, u9p7_T),
	 FPM_InitFixedPoint_m(17.3984375, u9p7_T)};

#pragma DATA_SECTION(t_HOWStateThresholds_Uls_u8p8, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_HOWStateThresholds_Uls_u8p8[7] = 
	{FPM_InitFixedPoint_m(0.0, u8p8_T),
	 FPM_InitFixedPoint_m(0.05859375, u8p8_T),
	 FPM_InitFixedPoint_m(0.25, u8p8_T),
	 FPM_InitFixedPoint_m(0.3515625, u8p8_T),
	 FPM_InitFixedPoint_m(0.6484375, u8p8_T),
	 FPM_InitFixedPoint_m(0.75, u8p8_T),
	 FPM_InitFixedPoint_m(0.94140625, u8p8_T)};

#pragma DATA_SECTION(t_HOWVehSpd_Kph_u9p7, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_HOWVehSpd_Kph_u9p7[3] = 
	{FPM_InitFixedPoint_m(10.0, u9p7_T), FPM_InitFixedPoint_m(50.0, u9p7_T),
	 FPM_InitFixedPoint_m(100.0, u9p7_T)};

#pragma DATA_SECTION(t2_HOWHFRateX_HwNm_u8p8, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t2_HOWHFRateX_HwNm_u8p8[3][6] = 
	{{FPM_InitFixedPoint_m(0.0, u8p8_T),
	 FPM_InitFixedPoint_m(0.1015625, u8p8_T),
	 FPM_InitFixedPoint_m(0.25, u8p8_T),
	 FPM_InitFixedPoint_m(0.30078125, u8p8_T),
	 FPM_InitFixedPoint_m(0.5, u8p8_T), FPM_InitFixedPoint_m(1.0, u8p8_T)},
	 {FPM_InitFixedPoint_m(0.0, u8p8_T),
	 FPM_InitFixedPoint_m(0.1015625, u8p8_T),
	 FPM_InitFixedPoint_m(0.25, u8p8_T),
	 FPM_InitFixedPoint_m(0.30078125, u8p8_T),
	 FPM_InitFixedPoint_m(0.5, u8p8_T), FPM_InitFixedPoint_m(1.0, u8p8_T)},
	 {FPM_InitFixedPoint_m(0.0, u8p8_T),
	 FPM_InitFixedPoint_m(0.1015625, u8p8_T),
	 FPM_InitFixedPoint_m(0.25, u8p8_T),
	 FPM_InitFixedPoint_m(0.30078125, u8p8_T),
	 FPM_InitFixedPoint_m(0.5, u8p8_T), FPM_InitFixedPoint_m(1.0, u8p8_T)}};

#pragma DATA_SECTION(t2_HOWHFRateY_UlspS_s7p8, ".FlashCalSeg");
CONST(sint16, CAL_CONST) t2_HOWHFRateY_UlspS_s7p8[3][6] = 
	{{FPM_InitFixedPoint_m(-5.0, s7p8_T), FPM_InitFixedPoint_m(-1.0, s7p8_T),
	 FPM_InitFixedPoint_m(0.0, s7p8_T), FPM_InitFixedPoint_m(0.0, s7p8_T),
	 FPM_InitFixedPoint_m(20.0, s7p8_T), FPM_InitFixedPoint_m(20.0, s7p8_T)},
	 {FPM_InitFixedPoint_m(-5.0, s7p8_T), FPM_InitFixedPoint_m(-1.0, s7p8_T),
	 FPM_InitFixedPoint_m(0.0, s7p8_T), FPM_InitFixedPoint_m(0.0, s7p8_T),
	 FPM_InitFixedPoint_m(20.0, s7p8_T), FPM_InitFixedPoint_m(20.0, s7p8_T)},
	 {FPM_InitFixedPoint_m(-5.0, s7p8_T), FPM_InitFixedPoint_m(-1.0, s7p8_T),
	 FPM_InitFixedPoint_m(0.0, s7p8_T), FPM_InitFixedPoint_m(0.0, s7p8_T),
	 FPM_InitFixedPoint_m(20.0, s7p8_T), FPM_InitFixedPoint_m(20.0, s7p8_T)}};

#pragma DATA_SECTION(t2_HOWLFRateX_HwNm_u8p8, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t2_HOWLFRateX_HwNm_u8p8[3][5] = 
	{{FPM_InitFixedPoint_m(0.0, u8p8_T),
	 FPM_InitFixedPoint_m(0.07421875, u8p8_T),
	 FPM_InitFixedPoint_m(0.19921875, u8p8_T),
	 FPM_InitFixedPoint_m(0.25, u8p8_T), FPM_InitFixedPoint_m(1.0, u8p8_T)},
	 {FPM_InitFixedPoint_m(0.0, u8p8_T),
	 FPM_InitFixedPoint_m(0.07421875, u8p8_T),
	 FPM_InitFixedPoint_m(0.19921875, u8p8_T),
	 FPM_InitFixedPoint_m(0.25, u8p8_T), FPM_InitFixedPoint_m(1.0, u8p8_T)},
	 {FPM_InitFixedPoint_m(0.0, u8p8_T),
	 FPM_InitFixedPoint_m(0.07421875, u8p8_T),
	 FPM_InitFixedPoint_m(0.19921875, u8p8_T),
	 FPM_InitFixedPoint_m(0.25, u8p8_T), FPM_InitFixedPoint_m(1.0, u8p8_T)}};

#pragma DATA_SECTION(t2_HOWLFRateY_UlspS_s7p8, ".FlashCalSeg");
CONST(sint16, CAL_CONST) t2_HOWLFRateY_UlspS_s7p8[3][5] = 
	{{FPM_InitFixedPoint_m(-2.0, s7p8_T), FPM_InitFixedPoint_m(-0.5, s7p8_T),
	 FPM_InitFixedPoint_m(0.0, s7p8_T), FPM_InitFixedPoint_m(0.0, s7p8_T),
	 FPM_InitFixedPoint_m(90.0, s7p8_T)},
	 {FPM_InitFixedPoint_m(-2.0, s7p8_T), FPM_InitFixedPoint_m(-0.5, s7p8_T),
	 FPM_InitFixedPoint_m(0.0, s7p8_T), FPM_InitFixedPoint_m(0.0, s7p8_T),
	 FPM_InitFixedPoint_m(90.0, s7p8_T)},
	 {FPM_InitFixedPoint_m(-2.0, s7p8_T), FPM_InitFixedPoint_m(-0.5, s7p8_T),
	 FPM_InitFixedPoint_m(0.0, s7p8_T), FPM_InitFixedPoint_m(0.0, s7p8_T),
	 FPM_InitFixedPoint_m(90.0, s7p8_T)}};


/********************************* HystComp **********************************/
#pragma DATA_SECTION(k_HysOutLIm_HwNm_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_HysOutLIm_HwNm_f32 = 16.0f;


/******************** HystComp, SF47_TSMit_Implementation ********************/
#pragma DATA_SECTION(k_CmnSysTrqRatio_HwNmpMtrNm_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_CmnSysTrqRatio_HwNmpMtrNm_f32 = 20.0f;


/********************************** LmtCod ***********************************/
#pragma DATA_SECTION(k_CCLTrqRampIncSlew_UlspS_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_CCLTrqRampIncSlew_UlspS_f32 = 500.0f;

#pragma DATA_SECTION(k_GainDecSlew_UlspS_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_GainDecSlew_UlspS_f32 = 500.0f;

#pragma DATA_SECTION(k_TorqueDecSlew_MtrNmpS_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_TorqueDecSlew_MtrNmpS_f32 = 4400.0f;

#pragma DATA_SECTION(t_GainIncSlewTblX_Kph_u9p7, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_GainIncSlewTblX_Kph_u9p7[2] = 
	{FPM_InitFixedPoint_m(10.0, u9p7_T), FPM_InitFixedPoint_m(20.0, u9p7_T)};

#pragma DATA_SECTION(t_GainIncSlewTblY_UlspS_u9p7, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_GainIncSlewTblY_UlspS_u9p7[2] = 
	{FPM_InitFixedPoint_m(500.0, u9p7_T),
	 FPM_InitFixedPoint_m(500.0, u9p7_T)};

#pragma DATA_SECTION(t_TorqueIncSlewTblX_Kph_u9p7, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_TorqueIncSlewTblX_Kph_u9p7[2] = 
	{FPM_InitFixedPoint_m(10.0, u9p7_T), FPM_InitFixedPoint_m(20.0, u9p7_T)};

#pragma DATA_SECTION(t_TorqueIncSlewTblY_MtrNmpS_u13p3, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_TorqueIncSlewTblY_MtrNmpS_u13p3[2] = 
	{FPM_InitFixedPoint_m(4400.0, u13p3_T),
	 FPM_InitFixedPoint_m(4400.0, u13p3_T)};


/********************************** LrnEOT ***********************************/
#pragma DATA_SECTION(k_HwTrqEOTLrn_HwNm_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_HwTrqEOTLrn_HwNm_f32 = 2.0f;

#pragma DATA_SECTION(k_MinResetAuthority_Uls_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_MinResetAuthority_Uls_f32 = 1.0f;


/************************* MtrCtrl_CM, NonComponent **************************/
#pragma DATA_SECTION(k_CLOAFdbackSignalSclFacSlew_UlspS_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_CLOAFdbackSignalSclFacSlew_UlspS_f32 = 100.0f;

#pragma DATA_SECTION(k_CuThermCoeff_OhmpDegC_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_CuThermCoeff_OhmpDegC_f32 = 0.00393f;

#pragma DATA_SECTION(k_deadtimeVScale_Uls_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_deadtimeVScale_Uls_f32 = 1.0f;

#pragma DATA_SECTION(k_EstPkCurr2msLPFKn_Uls_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_EstPkCurr2msLPFKn_Uls_u16 = 6268U;

#pragma DATA_SECTION(k_EstPkCurrSlowLoopLPFKn_Uls_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_EstPkCurrSlowLoopLPFKn_Uls_u16 = 1224U;

#pragma DATA_SECTION(k_Harmonic12thElec_Uls_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_Harmonic12thElec_Uls_f32 = 12.0f;

#pragma DATA_SECTION(k_Harmonic18thElec_Uls_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_Harmonic18thElec_Uls_f32 = 18.0f;

#pragma DATA_SECTION(k_Harmonic6thElec_Uls_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_Harmonic6thElec_Uls_f32 = 6.0f;

#pragma DATA_SECTION(k_IdBoostGain_Uls_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_IdBoostGain_Uls_f32 = 0.0f;

#pragma DATA_SECTION(k_IdBoostVRThreshScl_Uls_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_IdBoostVRThreshScl_Uls_f32 = 0.25f;

#pragma DATA_SECTION(k_IdqRefIminNIter_Cnt_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_IdqRefIminNIter_Cnt_u16 = 3U;

#pragma DATA_SECTION(k_IdqRefIminTol_Amp_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_IdqRefIminTol_Amp_f32 = 0.1f;

#pragma DATA_SECTION(k_IdqRefLocateRefNIter_Cnt_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_IdqRefLocateRefNIter_Cnt_u16 = 10U;

#pragma DATA_SECTION(k_IdqRefTrqNIter_Cnt_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_IdqRefTrqNIter_Cnt_u16 = 3U;

#pragma DATA_SECTION(k_IdqRefTrqTol_Rad_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_IdqRefTrqTol_Rad_f32 = 0.015f;

#pragma DATA_SECTION(k_ILOAFdbackSignalSclFacSlew_UlspS_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_ILOAFdbackSignalSclFacSlew_UlspS_f32 = 100.0f;

#pragma DATA_SECTION(k_InstMtrDirHyst_Deg_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_InstMtrDirHyst_Deg_f32 = 2.5f;

#pragma DATA_SECTION(k_MagThrC_VpRadpSpDegC_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_MagThrC_VpRadpSpDegC_f32 = -0.001f;

#pragma DATA_SECTION(k_MaxKeRngLmt_VpRadpS_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_MaxKeRngLmt_VpRadpS_f32 = 0.06f;

#pragma DATA_SECTION(k_MaxLdRngLmt_Henry_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_MaxLdRngLmt_Henry_f32 = 0.0002f;

#pragma DATA_SECTION(k_MaxLqRngLmt_Henry_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_MaxLqRngLmt_Henry_f32 = 0.0002f;

#pragma DATA_SECTION(k_MaxRRngLmt_Ohm_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_MaxRRngLmt_Ohm_f32 = 0.06f;

#pragma DATA_SECTION(k_MaxTrqCmdScl_Uls_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_MaxTrqCmdScl_Uls_f32 = 1.1f;

#pragma DATA_SECTION(k_MinKeRngLmt_VpRadpS_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_MinKeRngLmt_VpRadpS_f32 = 0.026f;

#pragma DATA_SECTION(k_MinLdRngLmt_Henry_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_MinLdRngLmt_Henry_f32 = 0.0001f;

#pragma DATA_SECTION(k_MinLqRngLmt_Henry_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_MinLqRngLmt_Henry_f32 = 0.0001f;

#pragma DATA_SECTION(k_MinRRngLmt_Ohm_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_MinRRngLmt_Ohm_f32 = 0.01f;

#pragma DATA_SECTION(k_MinTrqCmdScl_Uls_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_MinTrqCmdScl_Uls_f32 = 0.9f;

#pragma DATA_SECTION(k_MtrCtrlCurrLoopSecOrTranFcEnable_Cnt_lgc, ".FlashCalSeg");
CONST(boolean, CAL_CONST) k_MtrCtrlCurrLoopSecOrTranFcEnable_Cnt_lgc = FALSE;

#pragma DATA_SECTION(k_MtrCtrlFeedbackControlDisable_Cnt_lgc, ".FlashCalSeg");
CONST(boolean, CAL_CONST) k_MtrCtrlFeedbackControlDisable_Cnt_lgc = FALSE;

#pragma DATA_SECTION(k_MtrCtrlVirualResDax_Ohm_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_MtrCtrlVirualResDax_Ohm_f32 = 0.0f;

#pragma DATA_SECTION(k_MtrCtrlVirualResQax_Ohm_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_MtrCtrlVirualResQax_Ohm_f32 = 0.0f;

#pragma DATA_SECTION(k_MtrCurrDaxMaxValScl_Per_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_MtrCurrDaxMaxValScl_Per_f32 = 0.0f;

#pragma DATA_SECTION(k_MtrCurrQaxRefModifDsb_Cnt_lgc, ".FlashCalSeg");
CONST(boolean, CAL_CONST) k_MtrCurrQaxRefModifDsb_Cnt_lgc = FALSE;

#pragma DATA_SECTION(k_MtrCurrQaxRefModifRplEn_Cnt_lgc, ".FlashCalSeg");
CONST(boolean, CAL_CONST) k_MtrCurrQaxRefModifRplEn_Cnt_lgc = TRUE;

#pragma DATA_SECTION(k_MtrDampingRatioDax_Uls_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_MtrDampingRatioDax_Uls_f32 = 1.0f;

#pragma DATA_SECTION(k_MtrDampingRatioQax_Uls_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_MtrDampingRatioQax_Uls_f32 = 1.0f;

#pragma DATA_SECTION(k_MtrPosComputationDelay_Sec_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_MtrPosComputationDelay_Sec_f32 = 0.00009375f;

#pragma DATA_SECTION(k_MtrPosComputationDelayRpl_Sec_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_MtrPosComputationDelayRpl_Sec_f32 = 0.00009375f;

#pragma DATA_SECTION(k_MtrVelFiltFFKn_Hz_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_MtrVelFiltFFKn_Hz_f32 = 125.0f;

#pragma DATA_SECTION(k_MtrVelFiltPIKn_Hz_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_MtrVelFiltPIKn_Hz_f32 = 10.0f;

#pragma DATA_SECTION(k_MtrVoltDaxIntegHiLim_Volt_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_MtrVoltDaxIntegHiLim_Volt_f32 = 9.0f;

#pragma DATA_SECTION(k_MtrVoltDaxIntegLoLim_Volt_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_MtrVoltDaxIntegLoLim_Volt_f32 = -4.5f;

#pragma DATA_SECTION(k_MtrVoltDervFiltCoeffTimeCons_Sec_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_MtrVoltDervFiltCoeffTimeCons_Sec_f32 = 0.00318f;

#pragma DATA_SECTION(k_MtrVoltQaxFiltFFEnable_Cnt_lgc, ".FlashCalSeg");
CONST(boolean, CAL_CONST) k_MtrVoltQaxFiltFFEnable_Cnt_lgc = TRUE;

#pragma DATA_SECTION(k_MtrVoltQaxFiltFFKn_Hz_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_MtrVoltQaxFiltFFKn_Hz_f32 = 500.0f;

#pragma DATA_SECTION(k_MtrVoltQaxIntegHiLim_Volt_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_MtrVoltQaxIntegHiLim_Volt_f32 = 14.5f;

#pragma DATA_SECTION(k_MtrVoltQaxIntegLoLim_Volt_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_MtrVoltQaxIntegLoLim_Volt_f32 = -14.5f;

#pragma DATA_SECTION(k_MtrVoltVecuFiltEnable_Cnt_lgc, ".FlashCalSeg");
CONST(boolean, CAL_CONST) k_MtrVoltVecuFiltEnable_Cnt_lgc = TRUE;

#pragma DATA_SECTION(k_MtrVoltVecuFiltKn_Hz_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_MtrVoltVecuFiltKn_Hz_f32 = 200.0f;

#pragma DATA_SECTION(k_NomLd_Henry_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_NomLd_Henry_f32 = 0.00011889f;

#pragma DATA_SECTION(k_NomLq_Henry_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_NomLq_Henry_f32 = 0.00011889f;

#pragma DATA_SECTION(k_NomRfet_Ohm_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_NomRfet_Ohm_f32 = 0.00625f;

#pragma DATA_SECTION(k_NomTemp_DegC_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_NomTemp_DegC_f32 = 25.0f;

#pragma DATA_SECTION(k_NoofPoles_Uls_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_NoofPoles_Uls_f32 = 6.0f;

#pragma DATA_SECTION(k_PIGainVspdCutoff_kph_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_PIGainVspdCutoff_kph_f32 = 3.0f;

#pragma DATA_SECTION(k_PiSamplingTs_Sec_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_PiSamplingTs_Sec_f32 = 0.000125f;

#pragma DATA_SECTION(k_SiThermCoeff_OhmpDegC_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_SiThermCoeff_OhmpDegC_f32 = 0.005f;

#pragma DATA_SECTION(k_VoltModeDynCompEnable_Cnt_lgc, ".FlashCalSeg");
CONST(boolean, CAL_CONST) k_VoltModeDynCompEnable_Cnt_lgc = FALSE;

#pragma DATA_SECTION(k_VoltSatDaxPolyCoeff_Uls_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_VoltSatDaxPolyCoeff_Uls_f32 = 0.0f;

#pragma DATA_SECTION(k_VoltSatQaxPolyCoeff_Uls_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_VoltSatQaxPolyCoeff_Uls_f32 = 0.0f;

#pragma DATA_SECTION(t_CommOffsetTblX_Uls_u3p13, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_CommOffsetTblX_Uls_u3p13[2] = 
	{FPM_InitFixedPoint_m(0.6, u3p13_T),FPM_InitFixedPoint_m(0.95, u3p13_T)};

#pragma DATA_SECTION(t_CurrParamCompDaxRef_Amp_u9p7, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_CurrParamCompDaxRef_Amp_u9p7[6] = 
	{ FPM_InitFixedPoint_m(0.0, u9p7_T),FPM_InitFixedPoint_m(25.0, u9p7_T),
	FPM_InitFixedPoint_m(50.0, u9p7_T),FPM_InitFixedPoint_m(75.0, u9p7_T),
	FPM_InitFixedPoint_m(100.0, u9p7_T),FPM_InitFixedPoint_m(125.0, u9p7_T) };

#pragma DATA_SECTION(t_CurrParamCompQaxRef_Amp_u9p7, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_CurrParamCompQaxRef_Amp_u9p7[7] = 
	{ FPM_InitFixedPoint_m(0.0, u9p7_T),FPM_InitFixedPoint_m(25.0, u9p7_T),
	FPM_InitFixedPoint_m(50.0, u9p7_T),FPM_InitFixedPoint_m(75.0, u9p7_T),
	FPM_InitFixedPoint_m(100.0, u9p7_T),FPM_InitFixedPoint_m(125.0, u9p7_T),
	FPM_InitFixedPoint_m(150.0, u9p7_T) };

#pragma DATA_SECTION(t_IdBoostTrqCharSclY_Uls_u1p15, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_IdBoostTrqCharSclY_Uls_u1p15[11] = 
	{FPM_InitFixedPoint_m(0.0, u1p15_T),FPM_InitFixedPoint_m(0.5, u1p15_T),
	FPM_InitFixedPoint_m(0.6, u1p15_T),FPM_InitFixedPoint_m(0.7, u1p15_T),
	FPM_InitFixedPoint_m(0.725, u1p15_T),
	FPM_InitFixedPoint_m(0.775, u1p15_T),
	FPM_InitFixedPoint_m(0.825, u1p15_T),FPM_InitFixedPoint_m(0.85, u1p15_T),
	FPM_InitFixedPoint_m(0.9, u1p15_T),FPM_InitFixedPoint_m(0.95, u1p15_T),
	FPM_InitFixedPoint_m(1.0, u1p15_T)};

#pragma DATA_SECTION(t_IdBoostTrqCmdX_MtrNm_u4p12, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_IdBoostTrqCmdX_MtrNm_u4p12[11] = 
	{FPM_InitFixedPoint_m(0.0, u4p12_T),FPM_InitFixedPoint_m(1.5, u4p12_T),
	FPM_InitFixedPoint_m(1.75, u4p12_T),FPM_InitFixedPoint_m(2.0, u4p12_T),
	FPM_InitFixedPoint_m(2.25, u4p12_T),FPM_InitFixedPoint_m(2.5, u4p12_T),
	FPM_InitFixedPoint_m(3.0, u4p12_T),FPM_InitFixedPoint_m(3.5, u4p12_T),
	FPM_InitFixedPoint_m(4.0, u4p12_T),FPM_InitFixedPoint_m(4.5, u4p12_T),
	FPM_InitFixedPoint_m(5.0, u4p12_T)};

#pragma DATA_SECTION(t_KeSatTblX_Amp_u9p7, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_KeSatTblX_Amp_u9p7[16] = 
	{ FPM_InitFixedPoint_m(0.0, u9p7_T), FPM_InitFixedPoint_m(10.0, u9p7_T),
	 FPM_InitFixedPoint_m(25.0, u9p7_T), FPM_InitFixedPoint_m(35.0, u9p7_T),
	 FPM_InitFixedPoint_m(45.0, u9p7_T), FPM_InitFixedPoint_m(55.0, u9p7_T),
	 FPM_InitFixedPoint_m(65.0, u9p7_T), FPM_InitFixedPoint_m(75.0, u9p7_T),
	 FPM_InitFixedPoint_m(85.0, u9p7_T), FPM_InitFixedPoint_m(95.0, u9p7_T),
	 FPM_InitFixedPoint_m(105.0, u9p7_T),
	 FPM_InitFixedPoint_m(115.0, u9p7_T),
	 FPM_InitFixedPoint_m(125.0, u9p7_T),
	 FPM_InitFixedPoint_m(135.0, u9p7_T),
	 FPM_InitFixedPoint_m(145.0, u9p7_T),
	 FPM_InitFixedPoint_m(150.0, u9p7_T) };

#pragma DATA_SECTION(t_KeSatTblY_Uls_u2p14, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_KeSatTblY_Uls_u2p14[16] = 
	{ FPM_InitFixedPoint_m(1.0, u2p14_T), FPM_InitFixedPoint_m(1.0, u2p14_T),
	 FPM_InitFixedPoint_m(1.0, u2p14_T),
	 FPM_InitFixedPoint_m(0.998046875, u2p14_T),
	 FPM_InitFixedPoint_m(0.998046875, u2p14_T),
	 FPM_InitFixedPoint_m(0.994140625, u2p14_T),
	 FPM_InitFixedPoint_m(0.9921875, u2p14_T),
	 FPM_InitFixedPoint_m(0.98828125, u2p14_T),
	 FPM_InitFixedPoint_m(0.982421875, u2p14_T),
	 FPM_InitFixedPoint_m(0.974609375, u2p14_T),
	 FPM_InitFixedPoint_m(0.966796875, u2p14_T),
	 FPM_InitFixedPoint_m(0.95703125, u2p14_T),
	 FPM_InitFixedPoint_m(0.9453125, u2p14_T),
	 FPM_InitFixedPoint_m(0.931640625, u2p14_T),
	 FPM_InitFixedPoint_m(0.916015625, u2p14_T),
	 FPM_InitFixedPoint_m(0.90625, u2p14_T) };

#pragma DATA_SECTION(t_MtrBandwidthDaxY_Hz_u10p6, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_MtrBandwidthDaxY_Hz_u10p6[4] = 
	{FPM_InitFixedPoint_m(300.0, u10p6_T),
	 FPM_InitFixedPoint_m(300.0, u10p6_T),
	 FPM_InitFixedPoint_m(300.0, u10p6_T),
	 FPM_InitFixedPoint_m(300.0, u10p6_T)};

#pragma DATA_SECTION(t_MtrBandwidthQaxY_Hz_u10p6, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_MtrBandwidthQaxY_Hz_u10p6[4] = 
	{FPM_InitFixedPoint_m(300.0, u10p6_T),
	 FPM_InitFixedPoint_m(300.0, u10p6_T),
	 FPM_InitFixedPoint_m(300.0, u10p6_T),
	 FPM_InitFixedPoint_m(300.0, u10p6_T)};

#pragma DATA_SECTION(t_MtrCurrDaxRpl_Amp_u9p7, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_MtrCurrDaxRpl_Amp_u9p7[6] = 
	{FPM_InitFixedPoint_m(0.0, u9p7_T),FPM_InitFixedPoint_m(25.0, u9p7_T),
	FPM_InitFixedPoint_m(50.0, u9p7_T),FPM_InitFixedPoint_m(75.0, u9p7_T),
	FPM_InitFixedPoint_m(100.0, u9p7_T),FPM_InitFixedPoint_m(125.0, u9p7_T)};

#pragma DATA_SECTION(t_MtrCurrQaxRpl_Amp_u9p7, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_MtrCurrQaxRpl_Amp_u9p7[7] = 
	{FPM_InitFixedPoint_m(0.0, u9p7_T),FPM_InitFixedPoint_m(25.0, u9p7_T),
	FPM_InitFixedPoint_m(50.0, u9p7_T),FPM_InitFixedPoint_m(75.0, u9p7_T),
	FPM_InitFixedPoint_m(100.0, u9p7_T),FPM_InitFixedPoint_m(125.0, u9p7_T),
	FPM_InitFixedPoint_m(135.0, u9p7_T)};

#pragma DATA_SECTION(t_MtrNaturalFreqDaxY_Hz_u9p7, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_MtrNaturalFreqDaxY_Hz_u9p7[4] = 
	{FPM_InitFixedPoint_m(300.0, u9p7_T),
	 FPM_InitFixedPoint_m(300.0, u9p7_T),
	 FPM_InitFixedPoint_m(300.0, u9p7_T),
	 FPM_InitFixedPoint_m(300.0, u9p7_T)};

#pragma DATA_SECTION(t_MtrNaturalFreqQaxY_Hz_u9p7, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_MtrNaturalFreqQaxY_Hz_u9p7[4] = 
	{FPM_InitFixedPoint_m(300.0, u9p7_T),
	 FPM_InitFixedPoint_m(300.0, u9p7_T),
	 FPM_InitFixedPoint_m(300.0, u9p7_T),
	 FPM_InitFixedPoint_m(300.0, u9p7_T)};

#pragma DATA_SECTION(t_MtrTrqCmdPIY_MtrNm_u5p11, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_MtrTrqCmdPIY_MtrNm_u5p11[8] = 
	{FPM_InitFixedPoint_m(0.0, u5p11_T), FPM_InitFixedPoint_m(1.0, u5p11_T),
	FPM_InitFixedPoint_m(2.0, u5p11_T), FPM_InitFixedPoint_m(2.5, u5p11_T),
	 FPM_InitFixedPoint_m(3.0, u5p11_T), FPM_InitFixedPoint_m(4.0, u5p11_T),
	 FPM_InitFixedPoint_m(4.5, u5p11_T), FPM_InitFixedPoint_m(5.0, u5p11_T)};

#pragma DATA_SECTION(t_MtrVelCtrlGainX_MtrRadpSec_u12p4, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_MtrVelCtrlGainX_MtrRadpSec_u12p4[4] = 
	{FPM_InitFixedPoint_m(0.0, u12p4_T), FPM_InitFixedPoint_m(1.0, u12p4_T),
	 FPM_InitFixedPoint_m(5.0, u12p4_T), FPM_InitFixedPoint_m(10.0, u12p4_T)};

#pragma DATA_SECTION(t_MtrVelX_MtrRadpS_T_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_MtrVelX_MtrRadpS_T_u16[10] = {0U,100U,114U,303U,
	800U,1200U,2620U,3200U,8492U,11100U};

#pragma DATA_SECTION(t_Q13VltgSchedXTbl_MtrRadpS_u12p4, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_Q13VltgSchedXTbl_MtrRadpS_u12p4[10] = 
	{FPM_InitFixedPoint_m(0.0, u12p4_T),FPM_InitFixedPoint_m(100.0, u12p4_T),
	FPM_InitFixedPoint_m(200.0, u12p4_T),
	FPM_InitFixedPoint_m(300.0, u12p4_T),
	FPM_InitFixedPoint_m(500.0, u12p4_T),
	FPM_InitFixedPoint_m(600.0, u12p4_T),
	FPM_InitFixedPoint_m(700.0, u12p4_T),
	FPM_InitFixedPoint_m(800.0, u12p4_T),
	FPM_InitFixedPoint_m(900.0, u12p4_T),
	FPM_InitFixedPoint_m(1100.0, u12p4_T)};

#pragma DATA_SECTION(t_Q13VltgSchedYTbl_Volt_u5p11, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_Q13VltgSchedYTbl_Volt_u5p11[10] = 
	{FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T)};

#pragma DATA_SECTION(t_Q24VltgSchedXTbl_MtrRadpS_u12p4, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_Q24VltgSchedXTbl_MtrRadpS_u12p4[10] = 
	{FPM_InitFixedPoint_m(0.0, u12p4_T),FPM_InitFixedPoint_m(100.0, u12p4_T),
	FPM_InitFixedPoint_m(200.0, u12p4_T),
	FPM_InitFixedPoint_m(300.0, u12p4_T),
	FPM_InitFixedPoint_m(500.0, u12p4_T),
	FPM_InitFixedPoint_m(600.0, u12p4_T),
	FPM_InitFixedPoint_m(700.0, u12p4_T),
	FPM_InitFixedPoint_m(800.0, u12p4_T),
	FPM_InitFixedPoint_m(900.0, u12p4_T),
	FPM_InitFixedPoint_m(1100.0, u12p4_T)};

#pragma DATA_SECTION(t_Q24VltgSchedYTbl_Volt_u5p11, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_Q24VltgSchedYTbl_Volt_u5p11[10] = 
	{FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T),
	FPM_InitFixedPoint_m(0.0, u5p11_T),FPM_InitFixedPoint_m(0.0, u5p11_T)};

#pragma DATA_SECTION(t_RefDeltaPoints_Rad_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) t_RefDeltaPoints_Rad_f32[8] = {-3.1415926535897931f,
	-2.3561944901923448f,-1.5707963267948966f, -0.78539816339744828f, 0.0f,
	0.78539816339744828f, 1.5707963267948966f, 2.3561944901923448f};

#pragma DATA_SECTION(t2_CurrParamLdSatSclFac_Uls_u2p14, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t2_CurrParamLdSatSclFac_Uls_u2p14[6][7] = 
	{{FPM_InitFixedPoint_m(1.0, u2p14_T),FPM_InitFixedPoint_m(1.0, u2p14_T),
	FPM_InitFixedPoint_m(0.9961, u2p14_T),
	FPM_InitFixedPoint_m(0.9883, u2p14_T),
	FPM_InitFixedPoint_m(0.9707, u2p14_T),
	FPM_InitFixedPoint_m(0.9453, u2p14_T),
	FPM_InitFixedPoint_m(0.9063, u2p14_T)},
	{FPM_InitFixedPoint_m(1.0, u2p14_T),FPM_InitFixedPoint_m(1.0, u2p14_T),
	FPM_InitFixedPoint_m(0.9961, u2p14_T),
	FPM_InitFixedPoint_m(0.9883, u2p14_T),
	FPM_InitFixedPoint_m(0.9707, u2p14_T),
	FPM_InitFixedPoint_m(0.9453, u2p14_T),
	FPM_InitFixedPoint_m(0.9063, u2p14_T)},
	{FPM_InitFixedPoint_m(1.0, u2p14_T),FPM_InitFixedPoint_m(1.0, u2p14_T),
	FPM_InitFixedPoint_m(0.9961, u2p14_T),
	FPM_InitFixedPoint_m(0.9883, u2p14_T),
	FPM_InitFixedPoint_m(0.9707, u2p14_T),
	FPM_InitFixedPoint_m(0.9453, u2p14_T),
	FPM_InitFixedPoint_m(0.9063, u2p14_T)},
	{FPM_InitFixedPoint_m(1.0, u2p14_T),FPM_InitFixedPoint_m(1.0, u2p14_T),
	FPM_InitFixedPoint_m(0.9961, u2p14_T),
	FPM_InitFixedPoint_m(0.9883, u2p14_T),
	FPM_InitFixedPoint_m(0.9707, u2p14_T),
	FPM_InitFixedPoint_m(0.9453, u2p14_T),
	FPM_InitFixedPoint_m(0.9063, u2p14_T)},
	{FPM_InitFixedPoint_m(1.0, u2p14_T),FPM_InitFixedPoint_m(1.0, u2p14_T),
	FPM_InitFixedPoint_m(0.9961, u2p14_T),
	FPM_InitFixedPoint_m(0.9883, u2p14_T),
	FPM_InitFixedPoint_m(0.9707, u2p14_T),
	FPM_InitFixedPoint_m(0.9453, u2p14_T),
	FPM_InitFixedPoint_m(0.9063, u2p14_T)},
	{FPM_InitFixedPoint_m(1.0, u2p14_T),FPM_InitFixedPoint_m(1.0, u2p14_T),
	FPM_InitFixedPoint_m(0.9961, u2p14_T),
	FPM_InitFixedPoint_m(0.9883, u2p14_T),
	FPM_InitFixedPoint_m(0.9707, u2p14_T),
	FPM_InitFixedPoint_m(0.9453, u2p14_T),
	FPM_InitFixedPoint_m(0.9063, u2p14_T)}};

#pragma DATA_SECTION(t2_CurrParamLqSatSclFac_Uls_u2p14, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t2_CurrParamLqSatSclFac_Uls_u2p14[6][7] = 
	{{FPM_InitFixedPoint_m(1.0, u2p14_T),FPM_InitFixedPoint_m(1.0, u2p14_T),
	FPM_InitFixedPoint_m(0.9961, u2p14_T),
	FPM_InitFixedPoint_m(0.9883, u2p14_T),
	FPM_InitFixedPoint_m(0.9707, u2p14_T),
	FPM_InitFixedPoint_m(0.9453, u2p14_T),
	FPM_InitFixedPoint_m(0.9063, u2p14_T)},
	{FPM_InitFixedPoint_m(1.0, u2p14_T),FPM_InitFixedPoint_m(1.0, u2p14_T),
	FPM_InitFixedPoint_m(0.9961, u2p14_T),
	FPM_InitFixedPoint_m(0.9883, u2p14_T),
	FPM_InitFixedPoint_m(0.9707, u2p14_T),
	FPM_InitFixedPoint_m(0.9453, u2p14_T),
	FPM_InitFixedPoint_m(0.9063, u2p14_T)},
	{FPM_InitFixedPoint_m(1.0, u2p14_T),FPM_InitFixedPoint_m(1.0, u2p14_T),
	FPM_InitFixedPoint_m(0.9961, u2p14_T),
	FPM_InitFixedPoint_m(0.9883, u2p14_T),
	FPM_InitFixedPoint_m(0.9707, u2p14_T),
	FPM_InitFixedPoint_m(0.9453, u2p14_T),
	FPM_InitFixedPoint_m(0.9063, u2p14_T)},
	{FPM_InitFixedPoint_m(1.0, u2p14_T),FPM_InitFixedPoint_m(1.0, u2p14_T),
	FPM_InitFixedPoint_m(0.9961, u2p14_T),
	FPM_InitFixedPoint_m(0.9883, u2p14_T),
	FPM_InitFixedPoint_m(0.9707, u2p14_T),
	FPM_InitFixedPoint_m(0.9453, u2p14_T),
	FPM_InitFixedPoint_m(0.9063, u2p14_T)},
	{FPM_InitFixedPoint_m(1.0, u2p14_T),FPM_InitFixedPoint_m(1.0, u2p14_T),
	FPM_InitFixedPoint_m(0.9961, u2p14_T),
	FPM_InitFixedPoint_m(0.9883, u2p14_T),
	FPM_InitFixedPoint_m(0.9707, u2p14_T),
	FPM_InitFixedPoint_m(0.9453, u2p14_T),
	FPM_InitFixedPoint_m(0.9063, u2p14_T)},
	{FPM_InitFixedPoint_m(1.0, u2p14_T),FPM_InitFixedPoint_m(1.0, u2p14_T),
	FPM_InitFixedPoint_m(0.9961, u2p14_T),
	FPM_InitFixedPoint_m(0.9883, u2p14_T),
	FPM_InitFixedPoint_m(0.9707, u2p14_T),
	FPM_InitFixedPoint_m(0.9453, u2p14_T),
	FPM_InitFixedPoint_m(0.9063, u2p14_T)}};

#pragma DATA_SECTION(t2_MtrTrqCancPIMagRP_Uls_u6p10, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t2_MtrTrqCancPIMagRP_Uls_u6p10[10][7] = 
	{{FPM_InitFixedPoint_m(0.0, u6p10_T),FPM_InitFixedPoint_m(0.0, u6p10_T),
	FPM_InitFixedPoint_m(0.0, u6p10_T),FPM_InitFixedPoint_m(0.0, u6p10_T),
	FPM_InitFixedPoint_m(0.0, u6p10_T),FPM_InitFixedPoint_m(0.0, u6p10_T),
	FPM_InitFixedPoint_m(0.0, u6p10_T)},{FPM_InitFixedPoint_m(0.0, u6p10_T),
	FPM_InitFixedPoint_m(0.0, u6p10_T),FPM_InitFixedPoint_m(0.0, u6p10_T),
	FPM_InitFixedPoint_m(0.0, u6p10_T),FPM_InitFixedPoint_m(0.0, u6p10_T),
	FPM_InitFixedPoint_m(0.0, u6p10_T),FPM_InitFixedPoint_m(0.0, u6p10_T)},
	{FPM_InitFixedPoint_m(0.0, u6p10_T),FPM_InitFixedPoint_m(0.0, u6p10_T),
	FPM_InitFixedPoint_m(0.0, u6p10_T),FPM_InitFixedPoint_m(0.0, u6p10_T),
	FPM_InitFixedPoint_m(0.0, u6p10_T),FPM_InitFixedPoint_m(0.0, u6p10_T),
	FPM_InitFixedPoint_m(0.0, u6p10_T)},{FPM_InitFixedPoint_m(0.0, u6p10_T),
	FPM_InitFixedPoint_m(0.0, u6p10_T),FPM_InitFixedPoint_m(0.0, u6p10_T),
	FPM_InitFixedPoint_m(0.0, u6p10_T),FPM_InitFixedPoint_m(0.0, u6p10_T),
	FPM_InitFixedPoint_m(0.0, u6p10_T),FPM_InitFixedPoint_m(0.0, u6p10_T)},
	{FPM_InitFixedPoint_m(0.0, u6p10_T),FPM_InitFixedPoint_m(0.0, u6p10_T),
	FPM_InitFixedPoint_m(0.0, u6p10_T),FPM_InitFixedPoint_m(0.0, u6p10_T),
	FPM_InitFixedPoint_m(0.0, u6p10_T),FPM_InitFixedPoint_m(0.0, u6p10_T),
	FPM_InitFixedPoint_m(0.0, u6p10_T)},{FPM_InitFixedPoint_m(0.0, u6p10_T),
	FPM_InitFixedPoint_m(0.0, u6p10_T),FPM_InitFixedPoint_m(0.0, u6p10_T),
	FPM_InitFixedPoint_m(0.0, u6p10_T),FPM_InitFixedPoint_m(0.0, u6p10_T),
	FPM_InitFixedPoint_m(0.0, u6p10_T),FPM_InitFixedPoint_m(0.0, u6p10_T)},
	{FPM_InitFixedPoint_m(0.0, u6p10_T),FPM_InitFixedPoint_m(0.0, u6p10_T),
	FPM_InitFixedPoint_m(0.0, u6p10_T),FPM_InitFixedPoint_m(0.0, u6p10_T),
	FPM_InitFixedPoint_m(0.0, u6p10_T),FPM_InitFixedPoint_m(0.0, u6p10_T),
	FPM_InitFixedPoint_m(0.0, u6p10_T)},{FPM_InitFixedPoint_m(0.0, u6p10_T),
	FPM_InitFixedPoint_m(0.0, u6p10_T),FPM_InitFixedPoint_m(0.0, u6p10_T),
	FPM_InitFixedPoint_m(0.0, u6p10_T),FPM_InitFixedPoint_m(0.0, u6p10_T),
	FPM_InitFixedPoint_m(0.0, u6p10_T),FPM_InitFixedPoint_m(0.0, u6p10_T)},
	{FPM_InitFixedPoint_m(0.0, u6p10_T),FPM_InitFixedPoint_m(0.0, u6p10_T),
	FPM_InitFixedPoint_m(0.0, u6p10_T),FPM_InitFixedPoint_m(0.0, u6p10_T),
	FPM_InitFixedPoint_m(0.0, u6p10_T),FPM_InitFixedPoint_m(0.0, u6p10_T),
	FPM_InitFixedPoint_m(0.0, u6p10_T)},{FPM_InitFixedPoint_m(0.0, u6p10_T),
	FPM_InitFixedPoint_m(0.0, u6p10_T),FPM_InitFixedPoint_m(0.0, u6p10_T),
	FPM_InitFixedPoint_m(0.0, u6p10_T),FPM_InitFixedPoint_m(0.0, u6p10_T),
	FPM_InitFixedPoint_m(0.0, u6p10_T),FPM_InitFixedPoint_m(0.0, u6p10_T)}};

#pragma DATA_SECTION(t2_MtrTrqCancPIPhRP_Rev_u0p16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t2_MtrTrqCancPIPhRP_Rev_u0p16[10][7] = 
	{{FPM_InitFixedPoint_m(0.0, u0p16_T),FPM_InitFixedPoint_m(0.0, u0p16_T),
	FPM_InitFixedPoint_m(0.0, u0p16_T),FPM_InitFixedPoint_m(0.0, u0p16_T),
	FPM_InitFixedPoint_m(0.0, u0p16_T),FPM_InitFixedPoint_m(0.0, u0p16_T),
	FPM_InitFixedPoint_m(0.0, u0p16_T)},{FPM_InitFixedPoint_m(0.0, u0p16_T),
	FPM_InitFixedPoint_m(0.0, u0p16_T),FPM_InitFixedPoint_m(0.0, u0p16_T),
	FPM_InitFixedPoint_m(0.0, u0p16_T),FPM_InitFixedPoint_m(0.0, u0p16_T),
	FPM_InitFixedPoint_m(0.0, u0p16_T),FPM_InitFixedPoint_m(0.0, u0p16_T)},
	{FPM_InitFixedPoint_m(0.0, u0p16_T),FPM_InitFixedPoint_m(0.0, u0p16_T),
	FPM_InitFixedPoint_m(0.0, u0p16_T),FPM_InitFixedPoint_m(0.0, u0p16_T),
	FPM_InitFixedPoint_m(0.0, u0p16_T),FPM_InitFixedPoint_m(0.0, u0p16_T),
	FPM_InitFixedPoint_m(0.0, u0p16_T)},{FPM_InitFixedPoint_m(0.0, u0p16_T),
	FPM_InitFixedPoint_m(0.0, u0p16_T),FPM_InitFixedPoint_m(0.0, u0p16_T),
	FPM_InitFixedPoint_m(0.0, u0p16_T),FPM_InitFixedPoint_m(0.0, u0p16_T),
	FPM_InitFixedPoint_m(0.0, u0p16_T),FPM_InitFixedPoint_m(0.0, u0p16_T)},
	{FPM_InitFixedPoint_m(0.0, u0p16_T),FPM_InitFixedPoint_m(0.0, u0p16_T),
	FPM_InitFixedPoint_m(0.0, u0p16_T),FPM_InitFixedPoint_m(0.0, u0p16_T),
	FPM_InitFixedPoint_m(0.0, u0p16_T),FPM_InitFixedPoint_m(0.0, u0p16_T),
	FPM_InitFixedPoint_m(0.0, u0p16_T)},{FPM_InitFixedPoint_m(0.0, u0p16_T),
	FPM_InitFixedPoint_m(0.0, u0p16_T),FPM_InitFixedPoint_m(0.0, u0p16_T),
	FPM_InitFixedPoint_m(0.0, u0p16_T),FPM_InitFixedPoint_m(0.0, u0p16_T),
	FPM_InitFixedPoint_m(0.0, u0p16_T),FPM_InitFixedPoint_m(0.0, u0p16_T)},
	{FPM_InitFixedPoint_m(0.0, u0p16_T),FPM_InitFixedPoint_m(0.0, u0p16_T),
	FPM_InitFixedPoint_m(0.0, u0p16_T),FPM_InitFixedPoint_m(0.0, u0p16_T),
	FPM_InitFixedPoint_m(0.0, u0p16_T),FPM_InitFixedPoint_m(0.0, u0p16_T),
	FPM_InitFixedPoint_m(0.0, u0p16_T)},{FPM_InitFixedPoint_m(0.0, u0p16_T),
	FPM_InitFixedPoint_m(0.0, u0p16_T),FPM_InitFixedPoint_m(0.0, u0p16_T),
	FPM_InitFixedPoint_m(0.0, u0p16_T),FPM_InitFixedPoint_m(0.0, u0p16_T),
	FPM_InitFixedPoint_m(0.0, u0p16_T),FPM_InitFixedPoint_m(0.0, u0p16_T)},
	{FPM_InitFixedPoint_m(0.0, u0p16_T),FPM_InitFixedPoint_m(0.0, u0p16_T),
	FPM_InitFixedPoint_m(0.0, u0p16_T),FPM_InitFixedPoint_m(0.0, u0p16_T),
	FPM_InitFixedPoint_m(0.0, u0p16_T),FPM_InitFixedPoint_m(0.0, u0p16_T),
	FPM_InitFixedPoint_m(0.0, u0p16_T)},{FPM_InitFixedPoint_m(0.0, u0p16_T),
	FPM_InitFixedPoint_m(0.0, u0p16_T),FPM_InitFixedPoint_m(0.0, u0p16_T),
	FPM_InitFixedPoint_m(0.0, u0p16_T),FPM_InitFixedPoint_m(0.0, u0p16_T),
	FPM_InitFixedPoint_m(0.0, u0p16_T),FPM_InitFixedPoint_m(0.0, u0p16_T)}};

#pragma DATA_SECTION(t2_MtrTrqRpl12X_MtrNm_s2p13, ".FlashCalSeg");
CONST(sint16, CAL_CONST) t2_MtrTrqRpl12X_MtrNm_s2p13[10][12] = 
	{{FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T)},
	 {FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T)},
	 {FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T)},
	 {FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T)},
	 {FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T)},
	 {FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T)},
	 {FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T)},
	 {FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T)},
	 {FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T)},
	 {FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T)}};

#pragma DATA_SECTION(t2_MtrTrqRpl12Y_MtrNm_s2p13, ".FlashCalSeg");
CONST(sint16, CAL_CONST) t2_MtrTrqRpl12Y_MtrNm_s2p13[10][12] = 
	{{FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T)},
	 {FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T)},
	 {FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T)},
	 {FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T)},
	 {FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T)},
	 {FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T)},
	 {FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T)},
	 {FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T)},
	 {FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T)},
	 {FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T)}};

#pragma DATA_SECTION(t2_MtrTrqRpl18X_MtrNm_s2p13, ".FlashCalSeg");
CONST(sint16, CAL_CONST) t2_MtrTrqRpl18X_MtrNm_s2p13[10][12] = 
	{{FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T)},
	 {FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T)},
	 {FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T)},
	 {FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T)},
	 {FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T)},
	 {FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T)},
	 {FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T)},
	 {FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T)},
	 {FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T)},
	 {FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T)}};

#pragma DATA_SECTION(t2_MtrTrqRpl18Y_MtrNm_s2p13, ".FlashCalSeg");
CONST(sint16, CAL_CONST) t2_MtrTrqRpl18Y_MtrNm_s2p13[10][12] = 
	{{FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T)},
	 {FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T)},
	 {FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T)},
	 {FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T)},
	 {FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T)},
	 {FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T)},
	 {FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T)},
	 {FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T)},
	 {FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T)},
	 {FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T)}};

#pragma DATA_SECTION(t2_MtrTrqRpl6X_MtrNm_s2p13, ".FlashCalSeg");
CONST(sint16, CAL_CONST) t2_MtrTrqRpl6X_MtrNm_s2p13[10][12] = 
	{{FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T)},
	 {FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T)},
	 {FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T)},
	 {FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T)},
	 {FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T)},
	 {FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T)},
	 {FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T)},
	 {FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T)},
	 {FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T)},
	 {FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T)}};

#pragma DATA_SECTION(t2_MtrTrqRpl6Y_MtrNm_s2p13, ".FlashCalSeg");
CONST(sint16, CAL_CONST) t2_MtrTrqRpl6Y_MtrNm_s2p13[10][12] = 
	{{FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T)},
	 {FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T)},
	 {FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T)},
	 {FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T)},
	 {FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T)},
	 {FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T)},
	 {FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T)},
	 {FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T)},
	 {FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T)},
	 {FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T),
	FPM_InitFixedPoint_m(0.0, s2p13_T),FPM_InitFixedPoint_m(0.0, s2p13_T)}};


/********************* MtrCtrl_CM, NonComponent, SVDiag **********************/
#pragma DATA_SECTION(t_CommOffsetTblY_Cnt_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_CommOffsetTblY_Cnt_u16[2] = {63U,0U};


/******************************** MtrTempEst *********************************/
#pragma DATA_SECTION(k_AMAmbLPFKn_Hz_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_AMAmbLPFKn_Hz_f32 = 0.0005f;

#pragma DATA_SECTION(k_AMAmbMult_DegCpWatt_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_AMAmbMult_DegCpWatt_f32 = 0.0f;

#pragma DATA_SECTION(k_AmbPwrMult_WtspAmpSq_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_AmbPwrMult_WtspAmpSq_f32 = 0.01f;

#pragma DATA_SECTION(k_AmbTempScl_Uls_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_AmbTempScl_Uls_f32 = 0.95f;

#pragma DATA_SECTION(k_AMDampScl_NmpRadpS_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_AMDampScl_NmpRadpS_f32 = 0.0001f;

#pragma DATA_SECTION(k_AMDfltOutoutTemp_DegC_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_AMDfltOutoutTemp_DegC_f32 = 25.0f;

#pragma DATA_SECTION(k_AMLLFiltCoefB0_Uls_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_AMLLFiltCoefB0_Uls_f32 = 0.4761987f;

#pragma DATA_SECTION(k_AMLLFiltCoefB1_Uls_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_AMLLFiltCoefB1_Uls_f32 = -0.4761673f;

#pragma DATA_SECTION(k_AMLLFiltPoleA1_Uls_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_AMLLFiltPoleA1_Uls_f32 = 0.99996858f;

#pragma DATA_SECTION(k_AssistMechSlew_DegCpS_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_AssistMechSlew_DegCpS_f32 = 1.0f;

#pragma DATA_SECTION(k_CuAmbLPFKn_Hz_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_CuAmbLPFKn_Hz_f32 = 0.00045f;

#pragma DATA_SECTION(k_CuAmbMult_DegCpWatt_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_CuAmbMult_DegCpWatt_f32 = 0.75f;

#pragma DATA_SECTION(k_CuCorrLmt_DegC_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_CuCorrLmt_DegC_f32 = 80.0f;

#pragma DATA_SECTION(k_CuLLFiltKA1_Uls_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_CuLLFiltKA1_Uls_f32 = 0.99994282f;

#pragma DATA_SECTION(k_CuLLFiltKB0_Uls_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_CuLLFiltKB0_Uls_f32 = 0.86667048f;

#pragma DATA_SECTION(k_CuLLFiltKB1_Uls_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_CuLLFiltKB1_Uls_f32 = -0.8666133f;

#pragma DATA_SECTION(k_EngTempScl_Uls_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_EngTempScl_Uls_f32 = 0.1f;

#pragma DATA_SECTION(k_MagAmbLPFKn_Hz_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_MagAmbLPFKn_Hz_f32 = 0.0004f;

#pragma DATA_SECTION(k_MagAmbMult_DegCpWatt_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_MagAmbMult_DegCpWatt_f32 = 0.01f;

#pragma DATA_SECTION(k_MagCorrLmt_DegC_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_MagCorrLmt_DegC_f32 = 60.0f;

#pragma DATA_SECTION(k_MagLLFiltKA1_Uls_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_MagLLFiltKA1_Uls_f32 = 0.9999623f;

#pragma DATA_SECTION(k_MagLLFiltKB0_Uls_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_MagLLFiltKB0_Uls_f32 = 0.57143665f;

#pragma DATA_SECTION(k_MagLLFiltKB1_Uls_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_MagLLFiltKB1_Uls_f32 = -0.571399f;

#pragma DATA_SECTION(k_SiAmbLPFKn_Hz_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_SiAmbLPFKn_Hz_f32 = 0.024f;

#pragma DATA_SECTION(k_SiAmbMult_DegCpWatt_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_SiAmbMult_DegCpWatt_f32 = 0.0f;

#pragma DATA_SECTION(k_SiCorrLmt_DegC_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_SiCorrLmt_DegC_f32 = 60.0f;

#pragma DATA_SECTION(k_SiLLFiltKA1_Uls_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_SiLLFiltKA1_Uls_f32 = 0.99988879f;

#pragma DATA_SECTION(k_SiLLFiltKB0_Uls_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_SiLLFiltKB0_Uls_f32 = 1.68567616f;

#pragma DATA_SECTION(k_SiLLFiltKB1_Uls_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_SiLLFiltKB1_Uls_f32 = -1.685565f;

#pragma DATA_SECTION(k_TempAMEstCorrLmt_DegC_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_TempAMEstCorrLmt_DegC_f32 = 60.0f;

#pragma DATA_SECTION(k_TrimTempAM_DegC_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_TrimTempAM_DegC_f32 = -2.0f;

#pragma DATA_SECTION(k_TrimTempCu_DegC_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_TrimTempCu_DegC_f32 = -2.0f;

#pragma DATA_SECTION(k_TrimTempMag_DegC_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_TrimTempMag_DegC_f32 = -2.0f;

#pragma DATA_SECTION(k_TrimTempSi_DegC_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_TrimTempSi_DegC_f32 = 0.0f;

#pragma DATA_SECTION(k_WtAvgTempDFt_Cnt_lgc, ".FlashCalSeg");
CONST(Boolean, CAL_CONST) k_WtAvgTempDFt_Cnt_lgc = FALSE;


/******************************** MtrVel_Digi ********************************/
#pragma DATA_SECTION(k_HwVelCorrLim_Cnt_Str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_HwVelCorrLim_Cnt_Str = {12, 3, 1};

#pragma DATA_SECTION(k_HwVelCorrLim_HwRadpS_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_HwVelCorrLim_HwRadpS_f32 = 6.4f;

#pragma DATA_SECTION(k_MtrVelCorrLim_Cnt_Str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_MtrVelCorrLim_Cnt_Str = {12, 3, 1};

#pragma DATA_SECTION(k_MtrVelCorrLim_MtrRadpS_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_MtrVelCorrLim_MtrRadpS_f32 = 225.0f;

#pragma DATA_SECTION(t_MtrVelBlendTblX_MtrRadpS_u12p4, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_MtrVelBlendTblX_MtrRadpS_u12p4[2] = 
	{FPM_InitFixedPoint_m(0.0, u12p4_T), FPM_InitFixedPoint_m(0.0, u12p4_T)};


/******************************** OvrVoltMon *********************************/
#pragma DATA_SECTION(k_CPUSupplyOV_Cnt_Str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_CPUSupplyOV_Cnt_Str = {10,10,1};


/******************************* PwrLmtFuncCr ********************************/
#pragma DATA_SECTION(k_AsstReducLPFKn_Hz_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_AsstReducLPFKn_Hz_f32 = 0.365f;

#pragma DATA_SECTION(k_FiltAsstReducTh_Uls_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_FiltAsstReducTh_Uls_f32 = 0.6f;

#pragma DATA_SECTION(k_KeStdTemp_VpRadpS_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_KeStdTemp_VpRadpS_f32 = 0.033599854f;

#pragma DATA_SECTION(k_LowVltAstRecTh_Volt_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_LowVltAstRecTh_Volt_f32 = 13.5f;

#pragma DATA_SECTION(k_LowVltAstRecTime_mS_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_LowVltAstRecTime_mS_u16 = 2000U;

#pragma DATA_SECTION(k_PwrLmtMtrVelLPFKn_Hz_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_PwrLmtMtrVelLPFKn_Hz_f32 = 100.0f;

#pragma DATA_SECTION(k_PwrLmtVecuAdjSlew_VoltspL_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_PwrLmtVecuAdjSlew_VoltspL_f32 = 0.001f;

#pragma DATA_SECTION(k_PwrLmtVecuAltFltAdj_Volt_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_PwrLmtVecuAltFltAdj_Volt_f32 = 1.0f;

#pragma DATA_SECTION(k_SpdAdjSlewDec_MtrRadpS_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_SpdAdjSlewDec_MtrRadpS_f32 = 0.0625f;

#pragma DATA_SECTION(k_SpdAdjSlewEnable_Cnt_lgc, ".FlashCalSeg");
CONST(boolean, CAL_CONST) k_SpdAdjSlewEnable_Cnt_lgc = TRUE;

#pragma DATA_SECTION(k_SpdAdjSlewInc_MtrRadpS_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_SpdAdjSlewInc_MtrRadpS_f32 = 6.25f;

#pragma DATA_SECTION(t_DLVTblX_Volt_u5p11, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_DLVTblX_Volt_u5p11[10] = 
	{FPM_InitFixedPoint_m(8.54296875, u5p11_T),
	 FPM_InitFixedPoint_m(9.14453125, u5p11_T),
	 FPM_InitFixedPoint_m(9.2421875, u5p11_T),
	 FPM_InitFixedPoint_m(9.34375, u5p11_T),
	 FPM_InitFixedPoint_m(9.44140625, u5p11_T),
	 FPM_InitFixedPoint_m(9.54296875, u5p11_T),
	 FPM_InitFixedPoint_m(10.04296875, u5p11_T),
	 FPM_InitFixedPoint_m(10.54296875, u5p11_T),
	 FPM_InitFixedPoint_m(10.84375, u5p11_T),
	 FPM_InitFixedPoint_m(12.34375, u5p11_T)};

#pragma DATA_SECTION(t_DLVTblY_MtrRadpS_u11p5, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_DLVTblY_MtrRadpS_u11p5[10] = 
	{FPM_InitFixedPoint_m(106.09375, u11p5_T),
	 FPM_InitFixedPoint_m(89.34375, u11p5_T),
	 FPM_InitFixedPoint_m(86.53125, u11p5_T),
	 FPM_InitFixedPoint_m(83.75, u11p5_T),
	 FPM_InitFixedPoint_m(80.96875, u11p5_T),
	 FPM_InitFixedPoint_m(78.15625, u11p5_T),
	FPM_InitFixedPoint_m(64.1875, u11p5_T),
	FPM_InitFixedPoint_m(50.25, u11p5_T),
	FPM_InitFixedPoint_m(41.875, u11p5_T),FPM_InitFixedPoint_m(0.0, u11p5_T)};

#pragma DATA_SECTION(t_MtrEnvTblX_MtrRadpS_s11p4, ".FlashCalSeg");
CONST(sint16, CAL_CONST) t_MtrEnvTblX_MtrRadpS_s11p4[14] = 
	{FPM_InitFixedPoint_m(-1100.0, s11p4_T),
	 FPM_InitFixedPoint_m(-800.0, s11p4_T),
	 FPM_InitFixedPoint_m(-650.0, s11p4_T),
	 FPM_InitFixedPoint_m(-550.0, s11p4_T),
	 FPM_InitFixedPoint_m(-353.5625, s11p4_T),
	 FPM_InitFixedPoint_m(-287.46875, s11p4_T),
	 FPM_InitFixedPoint_m(-218.65625, s11p4_T),
	 FPM_InitFixedPoint_m(-108.1875, s11p4_T),
	 FPM_InitFixedPoint_m(0.0, s11p4_T),
	 FPM_InitFixedPoint_m(108.1875, s11p4_T),
	 FPM_InitFixedPoint_m(218.65625, s11p4_T),
	 FPM_InitFixedPoint_m(287.46875, s11p4_T),
	 FPM_InitFixedPoint_m(353.5625, s11p4_T),
	 FPM_InitFixedPoint_m(550.0, s11p4_T)};

#pragma DATA_SECTION(t_MtrEnvTblY_MtrNm_u5p11, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_MtrEnvTblY_MtrNm_u5p11[14] = 
	{FPM_InitFixedPoint_m(0.720, u5p11_T),
	 FPM_InitFixedPoint_m(1.400, u5p11_T),
	 FPM_InitFixedPoint_m(1.900, u5p11_T),
	 FPM_InitFixedPoint_m(2.300, u5p11_T),
	 FPM_InitFixedPoint_m(3.500, u5p11_T),
	 FPM_InitFixedPoint_m(4.100, u5p11_T),
	 FPM_InitFixedPoint_m(4.632, u5p11_T),
	 FPM_InitFixedPoint_m(4.632, u5p11_T),
	 FPM_InitFixedPoint_m(4.632, u5p11_T),
	 FPM_InitFixedPoint_m(4.632, u5p11_T),
	 FPM_InitFixedPoint_m(3.553, u5p11_T),
	 FPM_InitFixedPoint_m(2.927, u5p11_T),
	 FPM_InitFixedPoint_m(2.200, u5p11_T),
	 FPM_InitFixedPoint_m(0.0, u5p11_T)};

#pragma DATA_SECTION(t_StdOpMtrEnvTblX_MtrRadpS_u11p5, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_StdOpMtrEnvTblX_MtrRadpS_u11p5[6] = 
	{FPM_InitFixedPoint_m(0.0, u11p5_T),
	 FPM_InitFixedPoint_m(68.1875, u11p5_T),
	FPM_InitFixedPoint_m(178.656, u11p5_T),
	FPM_InitFixedPoint_m(247.468, u11p5_T),
	FPM_InitFixedPoint_m(313.5625, u11p5_T),
	FPM_InitFixedPoint_m(510.0, u11p5_T)};

#pragma DATA_SECTION(t_StdOpMtrEnvTblY_MtrNm_u4p12, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_StdOpMtrEnvTblY_MtrNm_u4p12[6] = 
	{FPM_InitFixedPoint_m(4.632, u4p12_T),
	 FPM_InitFixedPoint_m(4.632, u4p12_T),
	 FPM_InitFixedPoint_m(3.553, u4p12_T),
	 FPM_InitFixedPoint_m(2.927, u4p12_T),
	 FPM_InitFixedPoint_m(2.200, u4p12_T),
	 FPM_InitFixedPoint_m(0.000, u4p12_T)};


/********************************** Return ***********************************/
#pragma DATA_SECTION(k_RtnHWAuthSlew_UlspS_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_RtnHWAuthSlew_UlspS_f32 = 0.5f;

#pragma DATA_SECTION(k_RtnLimit_MtrNm_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_RtnLimit_MtrNm_f32 = 0.1f;

#pragma DATA_SECTION(k_RtnOffsetRange_HWDeg_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_RtnOffsetRange_HWDeg_f32 = 17.0f;

#pragma DATA_SECTION(k_RtnOffsetSlew_HwDegpS_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_RtnOffsetSlew_HwDegpS_f32 = 0.04f;

#pragma DATA_SECTION(t_HWAuthRetScl_X_Uls_u8p8, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_HWAuthRetScl_X_Uls_u8p8[4] = 
	{ FPM_InitFixedPoint_m(0.0, u8p8_T),FPM_InitFixedPoint_m(0.5, u8p8_T),
	FPM_InitFixedPoint_m(0.75, u8p8_T),FPM_InitFixedPoint_m(1.0, u8p8_T) };

#pragma DATA_SECTION(t_HWAuthRetScl_Y_Uls_u9p7, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_HWAuthRetScl_Y_Uls_u9p7[4] = 
	{ FPM_InitFixedPoint_m(0.0, u9p7_T),FPM_InitFixedPoint_m(0.0, u9p7_T),
	FPM_InitFixedPoint_m(0.0, u9p7_T),FPM_InitFixedPoint_m(1.0, u9p7_T) };


/****************************** ReturnFirewall *******************************/
#pragma DATA_SECTION(t_RtrnFWUprBoundX_HwDeg_s11p4, ".FlashCalSeg");
CONST(sint16, CAL_CONST) t_RtrnFWUprBoundX_HwDeg_s11p4[11] = 
	{FPM_InitFixedPoint_m(-400.0, s11p4_T),
	 FPM_InitFixedPoint_m(-100.0, s11p4_T),
	 FPM_InitFixedPoint_m(0.0, s11p4_T), FPM_InitFixedPoint_m(50.0, s11p4_T),
	 FPM_InitFixedPoint_m(100.0, s11p4_T),
	 FPM_InitFixedPoint_m(150.0, s11p4_T),
	 FPM_InitFixedPoint_m(200.0, s11p4_T),
	 FPM_InitFixedPoint_m(250.0, s11p4_T),
	 FPM_InitFixedPoint_m(300.0, s11p4_T),
	 FPM_InitFixedPoint_m(350.0, s11p4_T),
	 FPM_InitFixedPoint_m(400.0, s11p4_T)};

#pragma DATA_SECTION(t_RtrnFWVehSpd_Kph_u9p7, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_RtrnFWVehSpd_Kph_u9p7[8] = 
	{FPM_InitFixedPoint_m(0.0, u9p7_T), FPM_InitFixedPoint_m(3.0, u9p7_T),
	 FPM_InitFixedPoint_m(10.0, u9p7_T), FPM_InitFixedPoint_m(20.0, u9p7_T),
	 FPM_InitFixedPoint_m(30.0, u9p7_T), FPM_InitFixedPoint_m(60.0, u9p7_T),
	 FPM_InitFixedPoint_m(100.0, u9p7_T),
	 FPM_InitFixedPoint_m(255.0, u9p7_T)};

#pragma DATA_SECTION(t2_RtrnFWUprBoundY_MtrNm_s4p11, ".FlashCalSeg");
CONST(sint16, CAL_CONST) t2_RtrnFWUprBoundY_MtrNm_s4p11[8][11] = 
	{{FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T)},
	 {FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T)},
	 {FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T)},
	 {FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T)},
	 {FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T)},
	 {FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T)},
	 {FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T)},
	 {FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T),
	 FPM_InitFixedPoint_m(15.99951171875, s4p11_T)}};


/******************************* SASPlausDiag ********************************/
#pragma DATA_SECTION(k_SASPlausDiagMaxDelta_HwDeg_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_SASPlausDiagMaxDelta_HwDeg_f32 = 90.0f;


/************************ SF46_GCCDiag_Implementation ************************/
#pragma DATA_SECTION(k_GCC_PNSettings_str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_GCC_PNSettings_str = {1,1,50};

#pragma DATA_SECTION(t_GCC_VehSpd_Kph_u9p7, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_GCC_VehSpd_Kph_u9p7[2] = 
	{FPM_InitFixedPoint_m(59.0, u9p7_T),FPM_InitFixedPoint_m(60.0, u9p7_T)};

#pragma DATA_SECTION(t2_GCC_UprBoundX_HwNm_s4p11, ".FlashCalSeg");
CONST(sint16, CAL_CONST) t2_GCC_UprBoundX_HwNm_s4p11[2][5] = 
	{{FPM_InitFixedPoint_m(-10.0, s4p11_T),
	FPM_InitFixedPoint_m(-4.5, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(1.5, s4p11_T),FPM_InitFixedPoint_m(10.0, s4p11_T)},
	{FPM_InitFixedPoint_m(-10.0, s4p11_T),
	FPM_InitFixedPoint_m(-4.5, s4p11_T),FPM_InitFixedPoint_m(0.0, s4p11_T),
	FPM_InitFixedPoint_m(1.5, s4p11_T),FPM_InitFixedPoint_m(10.0, s4p11_T)}};

#pragma DATA_SECTION(t2_GCC_UprBoundY_MtrNm_u4p12, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t2_GCC_UprBoundY_MtrNm_u4p12[2][5] = 
	{{FPM_InitFixedPoint_m(0.0, u4p12_T),FPM_InitFixedPoint_m(0.0, u4p12_T),
	FPM_InitFixedPoint_m(1.0, u4p12_T),FPM_InitFixedPoint_m(3.0, u4p12_T),
	FPM_InitFixedPoint_m(3.0, u4p12_T)},{FPM_InitFixedPoint_m(0.0, u4p12_T),
	FPM_InitFixedPoint_m(0.0, u4p12_T),FPM_InitFixedPoint_m(1.0, u4p12_T),
	FPM_InitFixedPoint_m(1.0, u4p12_T),FPM_InitFixedPoint_m(1.0, u4p12_T)}};


/************************* SF47_TSMit_Implementation *************************/
#pragma DATA_SECTION(k_TSMitCmdSlewRate_HwNmpS_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_TSMitCmdSlewRate_HwNmpS_f32 = 25.0f;

#pragma DATA_SECTION(k_TSMitDisableNegTransTrqSTGainLearning_Cnt_f32, ".FlashCalSeg");
CONST(boolean, CAL_CONST) k_TSMitDisableNegTransTrqSTGainLearning_Cnt_f32 = 
	FALSE;

#pragma DATA_SECTION(k_TSMitGainLearningFreqFc_Hz_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_TSMitGainLearningFreqFc_Hz_f32 = 0.001f;

#pragma DATA_SECTION(k_TSMitHwTrqLPFiltFc_Hz_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_TSMitHwTrqLPFiltFc_Hz_f32 = 20.0f;

#pragma DATA_SECTION(k_TSMitMaxHwPosEnable_HwDeg_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_TSMitMaxHwPosEnable_HwDeg_f32 = 6.0f;

#pragma DATA_SECTION(k_TSMitMaxHwVelEnable_HwRadpS_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_TSMitMaxHwVelEnable_HwRadpS_f32 = 10.0f;

#pragma DATA_SECTION(k_TSMitMaxNegTransTrqEnable_TransNm_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_TSMitMaxNegTransTrqEnable_TransNm_f32 = -15.0f;

#pragma DATA_SECTION(k_TSMitMaxVehSpdEnable_Kph_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_TSMitMaxVehSpdEnable_Kph_f32 = 80.0f;

#pragma DATA_SECTION(k_TSMitMaxYawRateEnable_DegpS_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_TSMitMaxYawRateEnable_DegpS_f32 = 4.0f;

#pragma DATA_SECTION(k_TSMitMinHwAuthEnable_Uls_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_TSMitMinHwAuthEnable_Uls_f32 = 1.0f;

#pragma DATA_SECTION(k_TSMitMinHwTrqEnable_HwNm_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_TSMitMinHwTrqEnable_HwNm_f32 = 0.5f;

#pragma DATA_SECTION(k_TSMitMinPosTransTrqEnable_TransNm_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_TSMitMinPosTransTrqEnable_TransNm_f32 = 300.0f;

#pragma DATA_SECTION(k_TSMitMinVehSpdEnable_Kph_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_TSMitMinVehSpdEnable_Kph_f32 = 5.0f;

#pragma DATA_SECTION(k_TSMitNegTransGainLimit_HwNmpTransNm_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_TSMitNegTransGainLimit_HwNmpTransNm_f32 = 0.01f;

#pragma DATA_SECTION(k_TSMitNegTransTrqThresh_TransNm_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_TSMitNegTransTrqThresh_TransNm_f32 = 0.0f;

#pragma DATA_SECTION(k_TSMitPosTransGainLimit_HwNmpTransNm_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_TSMitPosTransGainLimit_HwNmpTransNm_f32 = 0.01f;

#pragma DATA_SECTION(k_TSMitPosTransTrqThresh_TransNm_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_TSMitPosTransTrqThresh_TransNm_f32 = 0.0f;

#pragma DATA_SECTION(k_TSMitTimeOnEnable_Sec_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_TSMitTimeOnEnable_Sec_f32 = 0.5f;

#pragma DATA_SECTION(k_TSMitUseABSActiveFlag_Cnt_lgc, ".FlashCalSeg");
CONST(boolean, CAL_CONST) k_TSMitUseABSActiveFlag_Cnt_lgc = FALSE;

#pragma DATA_SECTION(k_TSMitUseESCActiveFlag_Cnt_lgc, ".FlashCalSeg");
CONST(boolean, CAL_CONST) k_TSMitUseESCActiveFlag_Cnt_lgc = FALSE;

#pragma DATA_SECTION(k_TSMitUseTCSActiveFlag_Cnt_lgc, ".FlashCalSeg");
CONST(boolean, CAL_CONST) k_TSMitUseTCSActiveFlag_Cnt_lgc = FALSE;

#pragma DATA_SECTION(k_TSMitYawRateLPFiltFc_Hz_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_TSMitYawRateLPFiltFc_Hz_f32 = 2.0f;

#pragma DATA_SECTION(t_TSMitCmdSclHwPosTbl_HwDeg_s10p5, ".FlashCalSeg");
CONST(sint16, CAL_CONST) t_TSMitCmdSclHwPosTbl_HwDeg_s10p5[11] = 
	{FPM_InitFixedPoint_m(-800.0, s10p5_T),
	 FPM_InitFixedPoint_m(-180.0, s10p5_T),
	 FPM_InitFixedPoint_m(-120.0, s10p5_T),
	 FPM_InitFixedPoint_m(-100.0, s10p5_T),
	 FPM_InitFixedPoint_m(-80.0, s10p5_T),
	 FPM_InitFixedPoint_m(0.0, s10p5_T), FPM_InitFixedPoint_m(80.0, s10p5_T),
	 FPM_InitFixedPoint_m(100.0, s10p5_T),
	 FPM_InitFixedPoint_m(120.0, s10p5_T),
	 FPM_InitFixedPoint_m(180.0, s10p5_T),
	 FPM_InitFixedPoint_m(800.0, s10p5_T)};

#pragma DATA_SECTION(t_TSMitCmdSclVelocityTbl_Kph_u8p8, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_TSMitCmdSclVelocityTbl_Kph_u8p8[5] = 
	{FPM_InitFixedPoint_m(0.0, u8p8_T), FPM_InitFixedPoint_m(10.0, u8p8_T),
	 FPM_InitFixedPoint_m(70.0, u8p8_T), FPM_InitFixedPoint_m(80.0, u8p8_T),
	 FPM_InitFixedPoint_m(100.0, u8p8_T)};

#pragma DATA_SECTION(t2_TSMitCmdSclScaleFactor_Uls_u2p14, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t2_TSMitCmdSclScaleFactor_Uls_u2p14[5][11] = 
	{{FPM_InitFixedPoint_m(0.0, u2p14_T), FPM_InitFixedPoint_m(0.0, u2p14_T),
	 FPM_InitFixedPoint_m(0.0, u2p14_T), FPM_InitFixedPoint_m(0.0, u2p14_T),
	 FPM_InitFixedPoint_m(0.0, u2p14_T), FPM_InitFixedPoint_m(0.0, u2p14_T),
	 FPM_InitFixedPoint_m(0.0, u2p14_T), FPM_InitFixedPoint_m(0.0, u2p14_T),
	 FPM_InitFixedPoint_m(0.0, u2p14_T), FPM_InitFixedPoint_m(0.0, u2p14_T),
	 FPM_InitFixedPoint_m(0.0, u2p14_T)},{FPM_InitFixedPoint_m(0.0, u2p14_T),
	 FPM_InitFixedPoint_m(0.0, u2p14_T), FPM_InitFixedPoint_m(1.0, u2p14_T),
	 FPM_InitFixedPoint_m(1.0, u2p14_T), FPM_InitFixedPoint_m(1.0, u2p14_T),
	 FPM_InitFixedPoint_m(1.0, u2p14_T), FPM_InitFixedPoint_m(1.0, u2p14_T),
	 FPM_InitFixedPoint_m(1.0, u2p14_T), FPM_InitFixedPoint_m(1.0, u2p14_T),
	 FPM_InitFixedPoint_m(0.0, u2p14_T), FPM_InitFixedPoint_m(0.0, u2p14_T)},
	{FPM_InitFixedPoint_m(0.0, u2p14_T), FPM_InitFixedPoint_m(0.0, u2p14_T),
	 FPM_InitFixedPoint_m(0.0, u2p14_T), FPM_InitFixedPoint_m(1.0, u2p14_T),
	 FPM_InitFixedPoint_m(1.0, u2p14_T), FPM_InitFixedPoint_m(1.0, u2p14_T),
	 FPM_InitFixedPoint_m(1.0, u2p14_T), FPM_InitFixedPoint_m(1.0, u2p14_T),
	 FPM_InitFixedPoint_m(0.0, u2p14_T), FPM_InitFixedPoint_m(0.0, u2p14_T),
	 FPM_InitFixedPoint_m(0.0, u2p14_T)},{FPM_InitFixedPoint_m(0.0, u2p14_T),
	 FPM_InitFixedPoint_m(0.0, u2p14_T), FPM_InitFixedPoint_m(0.0, u2p14_T),
	 FPM_InitFixedPoint_m(0.0, u2p14_T), FPM_InitFixedPoint_m(0.5, u2p14_T),
	 FPM_InitFixedPoint_m(0.5, u2p14_T), FPM_InitFixedPoint_m(0.5, u2p14_T),
	 FPM_InitFixedPoint_m(0.0, u2p14_T), FPM_InitFixedPoint_m(0.0, u2p14_T),
	 FPM_InitFixedPoint_m(0.0, u2p14_T), FPM_InitFixedPoint_m(0.0, u2p14_T)},
	{FPM_InitFixedPoint_m(0.0, u2p14_T), FPM_InitFixedPoint_m(0.0, u2p14_T),
	 FPM_InitFixedPoint_m(0.0, u2p14_T), FPM_InitFixedPoint_m(0.0, u2p14_T),
	 FPM_InitFixedPoint_m(0.0, u2p14_T), FPM_InitFixedPoint_m(0.0, u2p14_T),
	 FPM_InitFixedPoint_m(0.0, u2p14_T), FPM_InitFixedPoint_m(0.0, u2p14_T),
	 FPM_InitFixedPoint_m(0.0, u2p14_T), FPM_InitFixedPoint_m(0.0, u2p14_T),
	 FPM_InitFixedPoint_m(0.0, u2p14_T)}};


/********************************* SgnlCond **********************************/
#pragma DATA_SECTION(k_VehAccelSlewRate_KphpSecSq_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_VehAccelSlewRate_KphpSecSq_f32 = 150.0f;

#pragma DATA_SECTION(k_VehSpdSlewRate_KphpSec_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_VehSpdSlewRate_KphpSec_f32 = 35.0f;


/******************************** SrlComInput ********************************/
#pragma DATA_SECTION(k_ABSActvProtARCVldDiag_Cnt_str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_ABSActvProtARCVldDiag_Cnt_str = { 1u, 1u,
	 1u};

#pragma DATA_SECTION(k_ABSActvProtARCVldTimeOut_mS_u16p0, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_ABSActvProtARCVldTimeOut_mS_u16p0 = 
	FPM_InitFixedPoint_m(1000.0, u16p0_T);

#pragma DATA_SECTION(k_ABSActvProtPValVldDiag_Cnt_str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_ABSActvProtPValVldDiag_Cnt_str = { 1u,
	 1u, 1u};

#pragma DATA_SECTION(k_ABSActvProtPValVldTimeOut_mS_u16p0, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_ABSActvProtPValVldTimeOut_mS_u16p0 = 
	FPM_InitFixedPoint_m(1000.0, u16p0_T);

#pragma DATA_SECTION(k_ABSActvProtVldDiag_Cnt_str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_ABSActvProtVldDiag_Cnt_str = { 1u, 1u,
	 1u};

#pragma DATA_SECTION(k_ABSFldValDiag_Cnt_str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_ABSFldValDiag_Cnt_str = { 1u, 1u, 1u};

#pragma DATA_SECTION(k_ABSFldValTimeOut_mS_u16p0, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_ABSFldValTimeOut_mS_u16p0 = 
	FPM_InitFixedPoint_m(1000.0, u16p0_T);

#pragma DATA_SECTION(k_ActAxleTrqVldDiag_Cnt_str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_ActAxleTrqVldDiag_Cnt_str = {1u, 1u, 1u};

#pragma DATA_SECTION(k_ActAxleTrqVldTimeOut_mS_u16p0, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_ActAxleTrqVldTimeOut_mS_u16p0 = 
	FPM_InitFixedPoint_m(2625.0, u16p0_T);

#pragma DATA_SECTION(k_AmbTempDflt_DegC_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_AmbTempDflt_DegC_f32 = 25.0f;

#pragma DATA_SECTION(k_AmbTempValDiag_Cnt_str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_AmbTempValDiag_Cnt_str = { 1u, 1u, 1u};

#pragma DATA_SECTION(k_AmbTempValTimeOut_mS_u16p0, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_AmbTempValTimeOut_mS_u16p0 = 
	FPM_InitFixedPoint_m(5000.0, u16p0_T);

#pragma DATA_SECTION(k_APANonRecFltsMsk_Cnt_b16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_APANonRecFltsMsk_Cnt_b16 = 65532U;

#pragma DATA_SECTION(k_APARecFltsMsk_Cnt_b08, ".FlashCalSeg");
CONST(uint8, CAL_CONST) k_APARecFltsMsk_Cnt_b08 = 255;

#pragma DATA_SECTION(k_DefaultVehSpd_Kph_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_DefaultVehSpd_Kph_f32 = 50.0f;

#pragma DATA_SECTION(k_EngSpdStatVldDiag_Cnt_str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_EngSpdStatVldDiag_Cnt_str = { 1u, 1u, 1u};

#pragma DATA_SECTION(k_EngSpdStatVldTimeOut_mS_u16p0, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_EngSpdStatVldTimeOut_mS_u16p0 = 2500U;

#pragma DATA_SECTION(k_EngTempDflt_DegC_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_EngTempDflt_DegC_f32 = 60.0f;

#pragma DATA_SECTION(k_EngTempValDiag_Cnt_str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_EngTempValDiag_Cnt_str = { 1u, 1u, 1u};

#pragma DATA_SECTION(k_EngTempValTimeOut_mS_u16p0, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_EngTempValTimeOut_mS_u16p0 = 
	FPM_InitFixedPoint_m(5000.0, u16p0_T);

#pragma DATA_SECTION(k_ESCChksmVldDiag_Cnt_str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_ESCChksmVldDiag_Cnt_str = { 1u, 1u, 1u};

#pragma DATA_SECTION(k_ESCChksmVldTimeOut_mS_u16p0, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_ESCChksmVldTimeOut_mS_u16p0 = 2500U;

#pragma DATA_SECTION(k_ESCMfgEnable_Cnt_lgc, ".SysCalSeg");
CONST(boolean, CAL_CONST) k_ESCMfgEnable_Cnt_lgc = FALSE;

#pragma DATA_SECTION(k_ESCRollCountVldDiag_Cnt_str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_ESCRollCountVldDiag_Cnt_str = { 1u, 1u,
	 1u};

#pragma DATA_SECTION(k_ESCRollCountVldTimeOut_mS_u16p0, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_ESCRollCountVldTimeOut_mS_u16p0 = 2500U;

#pragma DATA_SECTION(k_LatAccDflt_MpSecSqrd_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_LatAccDflt_MpSecSqrd_f32 = 1.0f;

#pragma DATA_SECTION(k_LatAccValDiag_Cnt_str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_LatAccValDiag_Cnt_str = { 1u, 1u, 1u};

#pragma DATA_SECTION(k_LatAccValTimeOut_mS_u16p0, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_LatAccValTimeOut_mS_u16p0 = 
	FPM_InitFixedPoint_m(5000.0, u16p0_T);

#pragma DATA_SECTION(k_LKATqOvrDltCmdPrtVlVldDiag_Cnt_str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_LKATqOvrDltCmdPrtVlVldDiag_Cnt_str = 
	{ 1u, 1u, 1u};

#pragma DATA_SECTION(k_LKATqOvrDltCmdPrtVlVldTimeOut_mS_u16p0, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_LKATqOvrDltCmdPrtVlVldTimeOut_mS_u16p0 = 
	FPM_InitFixedPoint_m(1000.0, u16p0_T);

#pragma DATA_SECTION(k_LKATqOvrDltCmdRCVldDiag_Cnt_str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_LKATqOvrDltCmdRCVldDiag_Cnt_str = { 1u,
	 1u, 1u};

#pragma DATA_SECTION(k_LKATqOvrDltCmdRCVldTimeOut_mS_u16p0, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_LKATqOvrDltCmdRCVldTimeOut_mS_u16p0 = 
	FPM_InitFixedPoint_m(1000.0, u16p0_T);

#pragma DATA_SECTION(k_LKAVehStabEnVldTimeOut_mS_u16p0, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_LKAVehStabEnVldTimeOut_mS_u16p0 = 2500U;

#pragma DATA_SECTION(k_MaxFreqChg_Hz_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_MaxFreqChg_Hz_f32 = 1.5f;

#pragma DATA_SECTION(k_Ms17DTimeOutDiag_Cnt_str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_Ms17DTimeOutDiag_Cnt_str = { 1u, 1u, 1u};

#pragma DATA_SECTION(k_Msg0C1TimeOut_mS_u16p0, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_Msg0C1TimeOut_mS_u16p0 = 
	FPM_InitFixedPoint_m(525.0, u16p0_T);

#pragma DATA_SECTION(k_Msg0C1TimeOutDiag_Cnt_str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_Msg0C1TimeOutDiag_Cnt_str = { 1u, 1u, 1u};

#pragma DATA_SECTION(k_Msg0C9TimeOut_mS_u16p0, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_Msg0C9TimeOut_mS_u16p0 = 
	FPM_InitFixedPoint_m(530.0, u16p0_T);

#pragma DATA_SECTION(k_Msg0C9TimeOutDiag_Cnt_str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_Msg0C9TimeOutDiag_Cnt_str = { 1u, 1u, 1u};

#pragma DATA_SECTION(k_Msg0D3TimeOut_mS_u16p0, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_Msg0D3TimeOut_mS_u16p0 = 
	FPM_InitFixedPoint_m(2625.0, u16p0_T);

#pragma DATA_SECTION(k_Msg0D3TimeOutDiag_Cnt_str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_Msg0D3TimeOutDiag_Cnt_str = {1u, 1u, 1u};

#pragma DATA_SECTION(k_Msg17DLKATimeOut_mS_u16p0, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_Msg17DLKATimeOut_mS_u16p0 = 
	FPM_InitFixedPoint_m(2625.0, u16p0_T);

#pragma DATA_SECTION(k_Msg17DTimeOut_mS_u16p0, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_Msg17DTimeOut_mS_u16p0 = 
	FPM_InitFixedPoint_m(2750.0, u16p0_T);

#pragma DATA_SECTION(k_Msg180CETimeOut_mS_u16p0, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_Msg180CETimeOut_mS_u16p0 = 2500U;

#pragma DATA_SECTION(k_Msg180CETimeOutDiag_Cnt_str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_Msg180CETimeOutDiag_Cnt_str = { 1u, 1u,
	 1u};

#pragma DATA_SECTION(k_Msg180HSLKATimeOut_mS_u16p0, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_Msg180HSLKATimeOut_mS_u16p0 = 
	FPM_InitFixedPoint_m(2625.0, u16p0_T);

#pragma DATA_SECTION(k_Msg180HSTimeOut_mS_u16p0, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_Msg180HSTimeOut_mS_u16p0 = 
	FPM_InitFixedPoint_m(2750.0, u16p0_T);

#pragma DATA_SECTION(k_Msg180HSTimeOutDiag_Cnt_str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_Msg180HSTimeOutDiag_Cnt_str = { 1u, 1u,
	 1u};

#pragma DATA_SECTION(k_Msg182TimeOut_mS_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_Msg182TimeOut_mS_u16 = 750U;

#pragma DATA_SECTION(k_Msg182TimeOutDiag_Cnt_str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_Msg182TimeOutDiag_Cnt_str = { 1u, 1u, 1u};

#pragma DATA_SECTION(k_Msg1E9LKATimeOut_mS_u16p0, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_Msg1E9LKATimeOut_mS_u16p0 = 
	FPM_InitFixedPoint_m(2625.0, u16p0_T);

#pragma DATA_SECTION(k_Msg1E9TimeOut_mS_u16p0, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_Msg1E9TimeOut_mS_u16p0 = 
	FPM_InitFixedPoint_m(550.0, u16p0_T);

#pragma DATA_SECTION(k_Msg1E9TimeOutDiag_Cnt_str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_Msg1E9TimeOutDiag_Cnt_str = { 1u, 1u, 1u};

#pragma DATA_SECTION(k_Msg1F1TimeOut_mS_u16p0, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_Msg1F1TimeOut_mS_u16p0 = 
	FPM_InitFixedPoint_m(750.0, u16p0_T);

#pragma DATA_SECTION(k_Msg1F1TimeOutDiag_Cnt_str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_Msg1F1TimeOutDiag_Cnt_str = { 1u, 1u, 1u};

#pragma DATA_SECTION(k_Msg1F5TimeOut_mS_u16p0, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_Msg1F5TimeOut_mS_u16p0 = 
	FPM_InitFixedPoint_m(562.0, u16p0_T);

#pragma DATA_SECTION(k_Msg1F5TimeOutDiag_Cnt_str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_Msg1F5TimeOutDiag_Cnt_str = { 1u, 1u, 1u};

#pragma DATA_SECTION(k_Msg214LKATimeOut_mS_u16p0, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_Msg214LKATimeOut_mS_u16p0 = 
	FPM_InitFixedPoint_m(2625.0, u16p0_T);

#pragma DATA_SECTION(k_Msg214TimeOut_mS_u16p0, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_Msg214TimeOut_mS_u16p0 = 
	FPM_InitFixedPoint_m(2625.0, u16p0_T);

#pragma DATA_SECTION(k_Msg214TimeOutDiag_Cnt_str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_Msg214TimeOutDiag_Cnt_str = { 1u, 1u, 1u};

#pragma DATA_SECTION(k_Msg232TimeOut_mS_u16p0, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_Msg232TimeOut_mS_u16p0 = 
	FPM_InitFixedPoint_m(625.0, u16p0_T);

#pragma DATA_SECTION(k_Msg232TimeOutDiag_Cnt_str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_Msg232TimeOutDiag_Cnt_str = { 1u, 1u, 1u};

#pragma DATA_SECTION(k_Msg337APAInvalidDiag_Cnt_str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_Msg337APAInvalidDiag_Cnt_str = { 3u, 1u,
	 3u};

#pragma DATA_SECTION(k_Msg337APANonRecTimeOut_mS_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_Msg337APANonRecTimeOut_mS_u16 = 550U;

#pragma DATA_SECTION(k_Msg337APARecTimeOut_mS_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_Msg337APARecTimeOut_mS_u16 = 550U;

#pragma DATA_SECTION(k_Msg337APATimeOutDiag_Cnt_str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_Msg337APATimeOutDiag_Cnt_str = { 1u, 1u,
	 1u};

#pragma DATA_SECTION(k_Msg337TimeOut_mS_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_Msg337TimeOut_mS_u16 = 550U;

#pragma DATA_SECTION(k_Msg337TimeOutDiag_Cnt_str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_Msg337TimeOutDiag_Cnt_str = { 1u, 1u, 1u};

#pragma DATA_SECTION(k_Msg348CELKATimeOut_mS_u16p0, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_Msg348CELKATimeOut_mS_u16p0 = 
	FPM_InitFixedPoint_m(2625.0, u16p0_T);

#pragma DATA_SECTION(k_Msg348CETimeOut_mS_u16p0, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_Msg348CETimeOut_mS_u16p0 = 
	FPM_InitFixedPoint_m(2625.0, u16p0_T);

#pragma DATA_SECTION(k_Msg348CETimeOutDiag_Cnt_str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_Msg348CETimeOutDiag_Cnt_str = { 1u, 1u,
	 1u};

#pragma DATA_SECTION(k_Msg348HSLKATimeOut_mS_u16p0, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_Msg348HSLKATimeOut_mS_u16p0 = 
	FPM_InitFixedPoint_m(2625.0, u16p0_T);

#pragma DATA_SECTION(k_Msg348HSTimeOut_mS_u16p0, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_Msg348HSTimeOut_mS_u16p0 = 
	FPM_InitFixedPoint_m(2625.0, u16p0_T);

#pragma DATA_SECTION(k_Msg348HSTimeOutDiag_Cnt_str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_Msg348HSTimeOutDiag_Cnt_str = { 1u, 1u,
	 1u};

#pragma DATA_SECTION(k_Msg34ACELKATimeOut_mS_u16p0, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_Msg34ACELKATimeOut_mS_u16p0 = 
	FPM_InitFixedPoint_m(2625.0, u16p0_T);

#pragma DATA_SECTION(k_Msg34ACETimeOut_mS_u16p0, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_Msg34ACETimeOut_mS_u16p0 = 
	FPM_InitFixedPoint_m(2625.0, u16p0_T);

#pragma DATA_SECTION(k_Msg34ACETimeOutDiag_Cnt_str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_Msg34ACETimeOutDiag_Cnt_str = { 1u, 1u,
	 1u};

#pragma DATA_SECTION(k_Msg34AHSLKATimeOut_mS_u16p0, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_Msg34AHSLKATimeOut_mS_u16p0 = 
	FPM_InitFixedPoint_m(2625.0, u16p0_T);

#pragma DATA_SECTION(k_Msg34AHSTimeOut_mS_u16p0, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_Msg34AHSTimeOut_mS_u16p0 = 
	FPM_InitFixedPoint_m(2625.0, u16p0_T);

#pragma DATA_SECTION(k_Msg34AHSTimeOutDiag_Cnt_str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_Msg34AHSTimeOutDiag_Cnt_str = { 1u, 1u,
	 1u};

#pragma DATA_SECTION(k_Msg3E9TimeOut_mS_u16p0, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_Msg3E9TimeOut_mS_u16p0 = 
	FPM_InitFixedPoint_m(750.0, u16p0_T);

#pragma DATA_SECTION(k_Msg3E9TimeOutDiag_Cnt_str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_Msg3E9TimeOutDiag_Cnt_str = { 1u, 1u, 1u};

#pragma DATA_SECTION(k_Msg3F1LossTimeOutDiag_Cnt_str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_Msg3F1LossTimeOutDiag_Cnt_str = { 1u, 1u,
	 1u};

#pragma DATA_SECTION(k_Msg3F1TimeOut_mS_u16p0, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_Msg3F1TimeOut_mS_u16p0 = 
	FPM_InitFixedPoint_m(5000.0, u16p0_T);

#pragma DATA_SECTION(k_Msg4C1LossTimeOutDiag_Cnt_str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_Msg4C1LossTimeOutDiag_Cnt_str = { 1u, 1u,
	 1u};

#pragma DATA_SECTION(k_Msg4C1TimeOut_mS_u16p0, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_Msg4C1TimeOut_mS_u16p0 = 
	FPM_InitFixedPoint_m(5000.0, u16p0_T);

#pragma DATA_SECTION(k_Msg500TimeOut_mS_u16p0, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_Msg500TimeOut_mS_u16p0 = 
	FPM_InitFixedPoint_m(3000.0, u16p0_T);

#pragma DATA_SECTION(k_Msg500TimeOutDiag_Cnt_str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_Msg500TimeOutDiag_Cnt_str = { 1u, 1u, 1u};

#pragma DATA_SECTION(k_ParkAssistParallelValDiag_Cnt_str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_ParkAssistParallelValDiag_Cnt_str = { 1u,
	 1u, 1u};

#pragma DATA_SECTION(k_ParkAssistParallelValTimeOut_mS_u16p0, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_ParkAssistParallelValTimeOut_mS_u16p0 = 500U;

#pragma DATA_SECTION(k_RedntVSEActARCVldDiag_Cnt_str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_RedntVSEActARCVldDiag_Cnt_str = { 1u, 1u,
	 1u};

#pragma DATA_SECTION(k_RedntVSEActARCVldTimeOut_mS_u16p0, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_RedntVSEActARCVldTimeOut_mS_u16p0 = 
	FPM_InitFixedPoint_m(1000.0, u16p0_T);

#pragma DATA_SECTION(k_RedntVSEActVldDiag_Cnt_str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_RedntVSEActVldDiag_Cnt_str = { 1u, 1u,
	 1u};

#pragma DATA_SECTION(k_RedntVSEActVldTimeOut_mS_u16p0, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_RedntVSEActVldTimeOut_mS_u16p0 = 
	FPM_InitFixedPoint_m(1000.0, u16p0_T);

#pragma DATA_SECTION(k_TCSysEValDiag_Cnt_str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_TCSysEValDiag_Cnt_str = { 1u, 1u, 1u};

#pragma DATA_SECTION(k_TCSysEValTimeOut_mS_u16p0, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_TCSysEValTimeOut_mS_u16p0 = 
	FPM_InitFixedPoint_m(1000.0, u16p0_T);

#pragma DATA_SECTION(k_TrnsShftLvrPosVldDiag_Cnt_str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_TrnsShftLvrPosVldDiag_Cnt_str = { 1u, 1u,
	 1u};

#pragma DATA_SECTION(k_TrnsShftLvrPosVldTimeOut_mS_u16p0, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_TrnsShftLvrPosVldTimeOut_mS_u16p0 = 2500U;

#pragma DATA_SECTION(k_VehicleDynamicsESCHybCEValDiag_Cnt_str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_VehicleDynamicsESCHybCEValDiag_Cnt_str = 
	{ 1u, 1u, 1u};

#pragma DATA_SECTION(k_VehicleDynamicsESCHybCEValTimeOut_mS_u16p0, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_VehicleDynamicsESCHybCEValTimeOut_mS_u16p0 = 500U;

#pragma DATA_SECTION(k_VehSpdValDiag_Cnt_Str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_VehSpdValDiag_Cnt_Str = { 1u, 1u, 1u};

#pragma DATA_SECTION(k_VehSpdValTimeOut_mS_u16p0, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_VehSpdValTimeOut_mS_u16p0 = 
	FPM_InitFixedPoint_m(5000.0, u16p0_T);

#pragma DATA_SECTION(k_VhDynCValDiag_Cnt_str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_VhDynCValDiag_Cnt_str = { 1u, 1u, 1u};

#pragma DATA_SECTION(k_VhDynCValTimeOut_mS_u16p0, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_VhDynCValTimeOut_mS_u16p0 = 
	FPM_InitFixedPoint_m(1000.0, u16p0_T);

#pragma DATA_SECTION(k_VSEActValDiag_Cnt_str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_VSEActValDiag_Cnt_str = { 1u, 1u, 1u};

#pragma DATA_SECTION(k_VSEActValTimeOut_mS_u16p0, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_VSEActValTimeOut_mS_u16p0 = 
	FPM_InitFixedPoint_m(1000.0, u16p0_T);

#pragma DATA_SECTION(k_WhlGrndVlctyLftDrvnCEValDiag_Cnt_str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_WhlGrndVlctyLftDrvnCEValDiag_Cnt_str = 
	{ 1u, 1u, 1u};

#pragma DATA_SECTION(k_WhlGrndVlctyLftDrvnCEVldTimeOut_mS_u16p0, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_WhlGrndVlctyLftDrvnCEVldTimeOut_mS_u16p0 = 
	FPM_InitFixedPoint_m(1000.0, u16p0_T);

#pragma DATA_SECTION(k_WhlGrndVlctyLftDrvnHSValDiag_Cnt_str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_WhlGrndVlctyLftDrvnHSValDiag_Cnt_str = 
	{ 1u, 1u, 1u};

#pragma DATA_SECTION(k_WhlGrndVlctyLftDrvnHSVldTimeOut_mS_u16p0, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_WhlGrndVlctyLftDrvnHSVldTimeOut_mS_u16p0 = 
	FPM_InitFixedPoint_m(1000.0, u16p0_T);

#pragma DATA_SECTION(k_WhlGrndVlctyLftNnDrvnCEValDiag_Cnt_str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_WhlGrndVlctyLftNnDrvnCEValDiag_Cnt_str = 
	{ 1u, 1u, 1u};

#pragma DATA_SECTION(k_WhlGrndVlctyLftNnDrvnCEVldTimeOut_mS_u16p0, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_WhlGrndVlctyLftNnDrvnCEVldTimeOut_mS_u16p0 = 
	FPM_InitFixedPoint_m(1000.0, u16p0_T);

#pragma DATA_SECTION(k_WhlGrndVlctyLftNnDrvnHSValDiag_Cnt_str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_WhlGrndVlctyLftNnDrvnHSValDiag_Cnt_str = 
	{ 1u, 1u, 1u};

#pragma DATA_SECTION(k_WhlGrndVlctyLftNnDrvnHSVldTimeOut_mS_u16p0, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_WhlGrndVlctyLftNnDrvnHSVldTimeOut_mS_u16p0 = 
	FPM_InitFixedPoint_m(1000.0, u16p0_T);

#pragma DATA_SECTION(k_WhlGrndVlctyRtDrvnCEValDiag_Cnt_str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_WhlGrndVlctyRtDrvnCEValDiag_Cnt_str = 
	{ 1u, 1u, 1u};

#pragma DATA_SECTION(k_WhlGrndVlctyRtDrvnCEVldTimeOut_mS_u16p0, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_WhlGrndVlctyRtDrvnCEVldTimeOut_mS_u16p0 = 
	FPM_InitFixedPoint_m(1000.0, u16p0_T);

#pragma DATA_SECTION(k_WhlGrndVlctyRtDrvnHSValDiag_Cnt_str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_WhlGrndVlctyRtDrvnHSValDiag_Cnt_str = 
	{ 1u, 1u, 1u};

#pragma DATA_SECTION(k_WhlGrndVlctyRtDrvnHSVldTimeOut_mS_u16p0, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_WhlGrndVlctyRtDrvnHSVldTimeOut_mS_u16p0 = 
	FPM_InitFixedPoint_m(1000.0, u16p0_T);

#pragma DATA_SECTION(k_WhlGrndVlctyRtNnDrvnCEValDiag_Cnt_str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_WhlGrndVlctyRtNnDrvnCEValDiag_Cnt_str = 
	{ 1u, 1u, 1u};

#pragma DATA_SECTION(k_WhlGrndVlctyRtNnDrvnCEVldTimeOut_mS_u16p0, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_WhlGrndVlctyRtNnDrvnCEVldTimeOut_mS_u16p0 = 
	FPM_InitFixedPoint_m(1000.0, u16p0_T);

#pragma DATA_SECTION(k_WhlGrndVlctyRtNnDrvnHSValDiag_Cnt_str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_WhlGrndVlctyRtNnDrvnHSValDiag_Cnt_str = 
	{ 1u, 1u, 1u};

#pragma DATA_SECTION(k_WhlGrndVlctyRtNnDrvnHSVldTimeOut_mS_u16p0, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_WhlGrndVlctyRtNnDrvnHSVldTimeOut_mS_u16p0 = 
	FPM_InitFixedPoint_m(1000.0, u16p0_T);

#pragma DATA_SECTION(k_WhlGrndVlctyStuckTime_mS_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_WhlGrndVlctyStuckTime_mS_u16 = 
	FPM_InitFixedPoint_m(2500.0, u16p0_T);

#pragma DATA_SECTION(k_WhlPlsPerRev_Cnt_u16p0, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_WhlPlsPerRev_Cnt_u16p0 = 
	FPM_InitFixedPoint_m(48.0, u16p0_T);

#pragma DATA_SECTION(k_WhlRotVldTimeOut_mS_u16p0, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_WhlRotVldTimeOut_mS_u16p0 = 
	FPM_InitFixedPoint_m(5000.0, u16p0_T);

#pragma DATA_SECTION(k_WhlTstmpRes_SecpCnt_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_WhlTstmpRes_SecpCnt_f32 = 48.0f;

#pragma DATA_SECTION(k_WIRFltStatusDiag_Cnt_str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_WIRFltStatusDiag_Cnt_str = { 1u, 1u, 1u};

#pragma DATA_SECTION(k_YawRateDflt_DegpSec_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_YawRateDflt_DegpSec_f32 = 50.0f;

#pragma DATA_SECTION(k_YawRateValDiag_Cnt_str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_YawRateValDiag_Cnt_str = { 1u, 1u, 1u};

#pragma DATA_SECTION(k_YawRateValTimeOut_mS_u16p0, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_YawRateValTimeOut_mS_u16p0 = 
	FPM_InitFixedPoint_m(5000.0, u16p0_T);


/*********************** SrlComOutput, GMSrlComOutput ************************/
#pragma DATA_SECTION(k_BusOffFaultTimeChannel0_mS_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_BusOffFaultTimeChannel0_mS_u16 = 1000U;

#pragma DATA_SECTION(k_BusOffFaultTimeChannel1_mS_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_BusOffFaultTimeChannel1_mS_u16 = 1000U;

#pragma DATA_SECTION(k_BusOffRecoveryTimeChannel0_mS_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_BusOffRecoveryTimeChannel0_mS_u16 = 0U;

#pragma DATA_SECTION(k_BusOffRecoveryTimeChannel1_mS_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_BusOffRecoveryTimeChannel1_mS_u16 = 0U;

#pragma DATA_SECTION(k_MaxHOWEstimate_Uls_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_MaxHOWEstimate_Uls_f32 = 0.75f;


/***************** SrlComOutput, GMSrlComOutput, SrlComInput *****************/
#pragma DATA_SECTION(k_APAMfgEnable_Cnt_lgc, ".SysCalSeg");
CONST(boolean, CAL_CONST) k_APAMfgEnable_Cnt_lgc = FALSE;

#pragma DATA_SECTION(k_LKAMfgEnable_Cnt_lgc, ".SysCalSeg");
CONST(boolean, CAL_CONST) k_LKAMfgEnable_Cnt_lgc = FALSE;

#pragma DATA_SECTION(k_SComTrqPosPol_Cnt_s08, ".FlashCalSeg");
CONST(sint8, CAL_CONST) k_SComTrqPosPol_Cnt_s08 = -1;


/******************************* StabilityComp *******************************/
#pragma DATA_SECTION(k_StCmpCrosChkEnbl_Uls_lgc, ".FlashCalSeg");
CONST(boolean, CAL_CONST) k_StCmpCrosChkEnbl_Uls_lgc = TRUE;

#pragma DATA_SECTION(k_StCmpHwTrqLPFKn_Hz_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_StCmpHwTrqLPFKn_Hz_f32 = 30.0f;

#pragma DATA_SECTION(k_StCmpStabCmpNstep_Cnt_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_StCmpStabCmpNstep_Cnt_u16 = 0U;

#pragma DATA_SECTION(k_StCmpStabCmpPNThresh_Cnt_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_StCmpStabCmpPNThresh_Cnt_u16 = 5000U;

#pragma DATA_SECTION(k_StCmpStabCmpPstep_Cnt_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_StCmpStabCmpPstep_Cnt_u16 = 0U;

#pragma DATA_SECTION(k_StCmpSysCorrThresh_MtrNm_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_StCmpSysCorrThresh_MtrNm_f32 = 0.15f;

#pragma DATA_SECTION(t_StCmpBlendSpdBS_Kph_u9p7, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_StCmpBlendSpdBS_Kph_u9p7[6] = 
	{FPM_InitFixedPoint_m(0.0, u9p7_T), FPM_InitFixedPoint_m(10.0, u9p7_T),
	 FPM_InitFixedPoint_m(30.0, u9p7_T), FPM_InitFixedPoint_m(45.0, u9p7_T),
	 FPM_InitFixedPoint_m(60.0, u9p7_T), FPM_InitFixedPoint_m(80.0, u9p7_T)};

#pragma DATA_SECTION(t_StCmpNFK_Str, ".FlashCalSeg");
CONST(NotchFiltK_Str, CAL_CONST) t_StCmpNFK_Str[4] = {{-0.2362671F,
	-0.6796265F,2.6297000F,-4.753113F,2.2075200F},{-0.1722412F,-0.6889648F,
	11.530700F,-20.35083F,8.9589230F},{-0.2362671F,-0.6796265F,2.6297000F,
	-4.753113F,2.2075200F},{-0.1722412F,-0.6889648F,11.530700F,-20.35083F,
	8.9589230F}};


/*********************************** StaMd ***********************************/
#pragma DATA_SECTION(k_StaMdsSysCDiag_Cnt_str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_StaMdsSysCDiag_Cnt_str = {21,10,1};


/********************************** SVDiag ***********************************/
#pragma DATA_SECTION(k_ErrorFiltKn_Cnt_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_ErrorFiltKn_Cnt_u16 = 1462U;

#pragma DATA_SECTION(k_ErrorThresh_Cnt_u32, ".FlashCalSeg");
CONST(uint32, CAL_CONST) k_ErrorThresh_Cnt_u32 = 14400UL;

#pragma DATA_SECTION(k_GateDriveDiag_Cnt_str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_GateDriveDiag_Cnt_str = {1500, 512, 1};

#pragma DATA_SECTION(k_LowResPhsReas_Cnt_str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_LowResPhsReas_Cnt_str = {100,1,500};

#pragma DATA_SECTION(k_LowResPhsReasMaxTol_Uls_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_LowResPhsReasMaxTol_Uls_f32 = 1.2f;

#pragma DATA_SECTION(k_LowResPhsReasMinTol_Uls_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_LowResPhsReasMinTol_Uls_f32 = 0.4f;

#pragma DATA_SECTION(k_LRPRCommOffsetMargin_Uls_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_LRPRCommOffsetMargin_Uls_f32 = 1.05f;

#pragma DATA_SECTION(k_LRPRMtrVelDiagEnable_MtrRadpS_T_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_LRPRMtrVelDiagEnable_MtrRadpS_T_f32 = 300.0f;

#pragma DATA_SECTION(k_OnStateDiag_Cnt_str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_OnStateDiag_Cnt_str = {1500, 512, 1};

#pragma DATA_SECTION(k_PhsReasEnableThresh_Cnt_u32, ".FlashCalSeg");
CONST(uint32, CAL_CONST) k_PhsReasEnableThresh_Cnt_u32 = 5760UL;

#pragma DATA_SECTION(k_PhsReasErrorTerm_Cnt_s16, ".FlashCalSeg");
CONST(sint16, CAL_CONST) k_PhsReasErrorTerm_Cnt_s16 = 0;


/********************************* SVDrvr_CM *********************************/
#pragma DATA_SECTION(k_DitherLPFKn_Cnt_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_DitherLPFKn_Cnt_u16 = 20U;

#pragma DATA_SECTION(k_PWMBaseFrequency_Hz_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_PWMBaseFrequency_Hz_u16 = 16000U;


/******************************* ThrmDutyCycle *******************************/
#pragma DATA_SECTION(k_AbsTempDiag_Cnt_str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_AbsTempDiag_Cnt_str = {2, 1, 140};

#pragma DATA_SECTION(k_AbsTmpTrqSlewLmt_MtrNm_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_AbsTmpTrqSlewLmt_MtrNm_f32 = 0.023438f;

#pragma DATA_SECTION(k_CtrlTempSlc_Cnt_lgc, ".FlashCalSeg");
CONST(boolean, CAL_CONST) k_CtrlTempSlc_Cnt_lgc = TRUE;

#pragma DATA_SECTION(k_DefaultIgnOffTime_Sec_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_DefaultIgnOffTime_Sec_f32 = 5000.0f;

#pragma DATA_SECTION(k_DutyCycFltTrshld_Uls_u16p0, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_DutyCycFltTrshld_Uls_u16p0 = 
	FPM_InitFixedPoint_m(92.0, u16p0_T);

#pragma DATA_SECTION(k_EOCCtrlTemp_DegC_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_EOCCtrlTemp_DegC_f32 = 70.0f;

#pragma DATA_SECTION(k_IgnOffCntrEnb_Cnt_lgc, ".FlashCalSeg");
CONST(boolean, CAL_CONST) k_IgnOffCntrEnb_Cnt_lgc = FALSE;

#pragma DATA_SECTION(k_IgnOffMsgWaitTime_Sec_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_IgnOffMsgWaitTime_Sec_f32 = 0.5f;

#pragma DATA_SECTION(k_MtrPrTempSlc_Cnt_lgc, ".FlashCalSeg");
CONST(boolean, CAL_CONST) k_MtrPrTempSlc_Cnt_lgc = TRUE;

#pragma DATA_SECTION(k_MultTempSlc_Cnt_lgc, ".FlashCalSeg");
CONST(boolean, CAL_CONST) k_MultTempSlc_Cnt_lgc = TRUE;

#pragma DATA_SECTION(k_SlowFltTempSlc_Cnt_lgc, ".FlashCalSeg");
CONST(boolean, CAL_CONST) k_SlowFltTempSlc_Cnt_lgc = FALSE;

#pragma DATA_SECTION(k_TrqCmdSlewDown_MtrNm_u9p7, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_TrqCmdSlewDown_MtrNm_u9p7 = 
	FPM_InitFixedPoint_m(0.0390625, u9p7_T);

#pragma DATA_SECTION(k_TrqCmdSlewUp_MtrNm_u9p7, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_TrqCmdSlewUp_MtrNm_u9p7 = 
	FPM_InitFixedPoint_m(0.0390625, u9p7_T);

#pragma DATA_SECTION(t_AbsCtrlTmpTblX_DegC_s15p0, ".FlashCalSeg");
CONST(sint16, CAL_CONST) t_AbsCtrlTmpTblX_DegC_s15p0[4] = 
	{FPM_InitFixedPoint_m(125.0, s15p0_T),
	 FPM_InitFixedPoint_m(127.0, s15p0_T),
	 FPM_InitFixedPoint_m(129.0, s15p0_T),
	 FPM_InitFixedPoint_m(131.0, s15p0_T)};

#pragma DATA_SECTION(t_AbsCtrlTmpTblY_MtrNm_u9p7, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_AbsCtrlTmpTblY_MtrNm_u9p7[4] = 
	{FPM_InitFixedPoint_m(2.703125, u9p7_T),
	 FPM_InitFixedPoint_m(2.242188, u9p7_T),
	 FPM_InitFixedPoint_m(1.828125, u9p7_T),
	 FPM_InitFixedPoint_m(0.0, u9p7_T)};

#pragma DATA_SECTION(t_AbsCuTmpTblX_DegC_s15p0, ".FlashCalSeg");
CONST(sint16, CAL_CONST) t_AbsCuTmpTblX_DegC_s15p0[4] = 
	{FPM_InitFixedPoint_m(210.0, s15p0_T),
	 FPM_InitFixedPoint_m(215.0, s15p0_T),
	 FPM_InitFixedPoint_m(220.0, s15p0_T),
	 FPM_InitFixedPoint_m(225.0, s15p0_T)};

#pragma DATA_SECTION(t_AbsCuTmpTblY_MtrNm_u9p7, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_AbsCuTmpTblY_MtrNm_u9p7[4] = 
	{FPM_InitFixedPoint_m(2.703125, u9p7_T),
	 FPM_InitFixedPoint_m(2.242188, u9p7_T),
	 FPM_InitFixedPoint_m(1.828125, u9p7_T),
	 FPM_InitFixedPoint_m(0.0, u9p7_T)};

#pragma DATA_SECTION(t_LastTblValNS_MtrNm_u9p7, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_LastTblValNS_MtrNm_u9p7[5] = 
	{FPM_InitFixedPoint_m(1.0, u9p7_T), FPM_InitFixedPoint_m(1.0, u9p7_T),
	 FPM_InitFixedPoint_m(1.0, u9p7_T),
	 FPM_InitFixedPoint_m(0.34375, u9p7_T),
	 FPM_InitFixedPoint_m(0.34375, u9p7_T)};

#pragma DATA_SECTION(t_LastTblValS_MtrNm_u9p7, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_LastTblValS_MtrNm_u9p7[5] = 
	{FPM_InitFixedPoint_m(0.96875, u9p7_T),
	 FPM_InitFixedPoint_m(0.96875, u9p7_T),
	 FPM_InitFixedPoint_m(0.96875, u9p7_T),
	 FPM_InitFixedPoint_m(0.3125, u9p7_T),
	 FPM_InitFixedPoint_m(0.3125, u9p7_T)};

#pragma DATA_SECTION(t_Mult1NSTblY_Uls_u3p13, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_Mult1NSTblY_Uls_u3p13[5] = 
	{FPM_InitFixedPoint_m(0.0155029, u3p13_T),
	 FPM_InitFixedPoint_m(0.0155029, u3p13_T),
	 FPM_InitFixedPoint_m(0.0155029, u3p13_T),
	 FPM_InitFixedPoint_m(0.198975, u3p13_T),
	 FPM_InitFixedPoint_m(0.198975, u3p13_T)};

#pragma DATA_SECTION(t_Mult1STblY_Uls_u3p13, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_Mult1STblY_Uls_u3p13[5] = 
	{FPM_InitFixedPoint_m(0.016235, u3p13_T),
	 FPM_InitFixedPoint_m(0.016235, u3p13_T),
	 FPM_InitFixedPoint_m(0.016235, u3p13_T),
	 FPM_InitFixedPoint_m(0.021973, u3p13_T),
	 FPM_InitFixedPoint_m(0.021973, u3p13_T)};

#pragma DATA_SECTION(t_Mult2NSTblY_Uls_u3p13, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_Mult2NSTblY_Uls_u3p13[5] = 
	{FPM_InitFixedPoint_m(0.019409, u3p13_T),
	 FPM_InitFixedPoint_m(0.019409, u3p13_T),
	 FPM_InitFixedPoint_m(0.019409, u3p13_T),
	 FPM_InitFixedPoint_m(0.034302, u3p13_T),
	 FPM_InitFixedPoint_m(0.034302, u3p13_T)};

#pragma DATA_SECTION(t_Mult2STblY_Uls_u3p13, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_Mult2STblY_Uls_u3p13[5] = 
	{FPM_InitFixedPoint_m(0.020386, u3p13_T),
	 FPM_InitFixedPoint_m(0.020386, u3p13_T),
	 FPM_InitFixedPoint_m(0.020386, u3p13_T),
	 FPM_InitFixedPoint_m(0.037842, u3p13_T),
	 FPM_InitFixedPoint_m(0.037842, u3p13_T)};

#pragma DATA_SECTION(t_Mult3NSTblY_Uls_u3p13, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_Mult3NSTblY_Uls_u3p13[5] = 
	{FPM_InitFixedPoint_m(0.024292, u3p13_T),
	 FPM_InitFixedPoint_m(0.024292, u3p13_T),
	 FPM_InitFixedPoint_m(0.024292, u3p13_T),
	 FPM_InitFixedPoint_m(0.1564941, u3p13_T),
	 FPM_InitFixedPoint_m(0.1564941, u3p13_T)};

#pragma DATA_SECTION(t_Mult3STblY_Uls_u3p13, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_Mult3STblY_Uls_u3p13[5] = 
	{FPM_InitFixedPoint_m(0.025635, u3p13_T),
	 FPM_InitFixedPoint_m(0.025635, u3p13_T),
	 FPM_InitFixedPoint_m(0.025635, u3p13_T),
	 FPM_InitFixedPoint_m(0.208374, u3p13_T),
	 FPM_InitFixedPoint_m(0.208374, u3p13_T)};

#pragma DATA_SECTION(t_Mult4NSTblY_Uls_u3p13, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_Mult4NSTblY_Uls_u3p13[5] = 
	{FPM_InitFixedPoint_m(0.000122, u3p13_T),
	 FPM_InitFixedPoint_m(0.000122, u3p13_T),
	 FPM_InitFixedPoint_m(0.000122, u3p13_T),
	 FPM_InitFixedPoint_m(0.000122, u3p13_T),
	 FPM_InitFixedPoint_m(0.000122, u3p13_T)};

#pragma DATA_SECTION(t_Mult4STblY_Uls_u3p13, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_Mult4STblY_Uls_u3p13[5] = 
	{FPM_InitFixedPoint_m(0.000122, u3p13_T),
	 FPM_InitFixedPoint_m(0.000122, u3p13_T),
	 FPM_InitFixedPoint_m(0.000122, u3p13_T),
	 FPM_InitFixedPoint_m(0.000122, u3p13_T),
	 FPM_InitFixedPoint_m(0.000122, u3p13_T)};

#pragma DATA_SECTION(t_Mult5NSTblY_Uls_u3p13, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_Mult5NSTblY_Uls_u3p13[5] = 
	{FPM_InitFixedPoint_m(0.121826, u3p13_T),
	 FPM_InitFixedPoint_m(0.121826, u3p13_T),
	 FPM_InitFixedPoint_m(0.121826, u3p13_T),
	 FPM_InitFixedPoint_m(1.16394, u3p13_T),
	 FPM_InitFixedPoint_m(1.16394, u3p13_T)};

#pragma DATA_SECTION(t_Mult5STblY_Uls_u3p13, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_Mult5STblY_Uls_u3p13[5] = 
	{FPM_InitFixedPoint_m(0.121826, u3p13_T),
	 FPM_InitFixedPoint_m(0.121826, u3p13_T),
	 FPM_InitFixedPoint_m(0.121826, u3p13_T),
	 FPM_InitFixedPoint_m(1.16394, u3p13_T),
	 FPM_InitFixedPoint_m(1.16394, u3p13_T)};

#pragma DATA_SECTION(t_Mult6NSTblY_Uls_u3p13, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_Mult6NSTblY_Uls_u3p13[5] = 
	{FPM_InitFixedPoint_m(0.000122, u3p13_T),
	 FPM_InitFixedPoint_m(0.000122, u3p13_T),
	 FPM_InitFixedPoint_m(0.000122, u3p13_T),
	 FPM_InitFixedPoint_m(0.000122, u3p13_T),
	 FPM_InitFixedPoint_m(0.000122, u3p13_T)};

#pragma DATA_SECTION(t_Mult6STblY_Uls_u3p13, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_Mult6STblY_Uls_u3p13[5] = 
	{FPM_InitFixedPoint_m(0.000122, u3p13_T),
	 FPM_InitFixedPoint_m(0.000122, u3p13_T),
	 FPM_InitFixedPoint_m(0.000122, u3p13_T),
	 FPM_InitFixedPoint_m(0.000122, u3p13_T),
	 FPM_InitFixedPoint_m(0.000122, u3p13_T)};

#pragma DATA_SECTION(t_MultTblX_DegC_s15p0, ".FlashCalSeg");
CONST(sint16, CAL_CONST) t_MultTblX_DegC_s15p0[5] = 
	{FPM_InitFixedPoint_m(-40.0, s15p0_T),
	 FPM_InitFixedPoint_m(0.0, s15p0_T), FPM_InitFixedPoint_m(83.0, s15p0_T),
	 FPM_InitFixedPoint_m(84.0, s15p0_T),
	 FPM_InitFixedPoint_m(85.0, s15p0_T)};

#pragma DATA_SECTION(t_ThrmLoadLmtTblX_Uls_u16p0, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_ThrmLoadLmtTblX_Uls_u16p0[8] = 
	{FPM_InitFixedPoint_m(0.0, u16p0_T), FPM_InitFixedPoint_m(76.0, u16p0_T),
	 FPM_InitFixedPoint_m(80.0, u16p0_T),
	 FPM_InitFixedPoint_m(84.0, u16p0_T),
	 FPM_InitFixedPoint_m(88.0, u16p0_T),
	 FPM_InitFixedPoint_m(92.0, u16p0_T),
	 FPM_InitFixedPoint_m(96.0, u16p0_T),
	 FPM_InitFixedPoint_m(100.0, u16p0_T)};

#pragma DATA_SECTION(t_ThrmLoadLmtTblY_MtrNm_u9p7, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_ThrmLoadLmtTblY_MtrNm_u9p7[8] = 
	{FPM_InitFixedPoint_m(2.703125, u9p7_T),
	 FPM_InitFixedPoint_m(2.703125, u9p7_T),
	 FPM_InitFixedPoint_m(2.703125, u9p7_T),
	 FPM_InitFixedPoint_m(2.703125, u9p7_T),
	 FPM_InitFixedPoint_m(2.242188, u9p7_T),
	 FPM_InitFixedPoint_m(1.828125, u9p7_T),
	 FPM_InitFixedPoint_m(1.414063, u9p7_T),
	 FPM_InitFixedPoint_m(1.0, u9p7_T)};


/********************************* TmprlMon **********************************/
#pragma DATA_SECTION(k_TmprlMonPstepNstep_Cnt_str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_TmprlMonPstepNstep_Cnt_str = {20,10,5};


/******************************* TMS570_uDiag ********************************/
#pragma DATA_SECTION(k_FlashECCDiag_Cnt_str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_FlashECCDiag_Cnt_str = {100, 5, 1};

#pragma DATA_SECTION(k_MtrCtrlMaxCount_Cnt_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_MtrCtrlMaxCount_Cnt_u16 = 120U;

#pragma DATA_SECTION(k_MtrCtrlMinCount_Cnt_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_MtrCtrlMinCount_Cnt_u16 = 10U;

#pragma DATA_SECTION(k_OneMsLoopMaxCount_Cnt_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_OneMsLoopMaxCount_Cnt_u16 = 11U;

#pragma DATA_SECTION(k_OneMsLoopMinCount_Cnt_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_OneMsLoopMinCount_Cnt_u16 = 1U;

#pragma DATA_SECTION(k_RAMECCDiag_Cnt_str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_RAMECCDiag_Cnt_str = {100, 5, 1};

#pragma DATA_SECTION(k_VIMParErrThrsh_Cnt_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_VIMParErrThrsh_Cnt_u16 = 20U;


/********************************** TqRsDg ***********************************/
#pragma DATA_SECTION(k_CurrDiagLambdaMinMax_Volt_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_CurrDiagLambdaMinMax_Volt_f32 = 3.0f;

#pragma DATA_SECTION(k_CurrDiagMtrEnvTblMax_MtrNm_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_CurrDiagMtrEnvTblMax_MtrNm_f32 = 4.6f;

#pragma DATA_SECTION(k_CurrDiagPrim_Cnt_Str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_CurrDiagPrim_Cnt_Str = {200,2,1};

#pragma DATA_SECTION(k_CurrDiagPrimErrorThresh_Volt_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_CurrDiagPrimErrorThresh_Volt_f32 = 20.0f;

#pragma DATA_SECTION(k_CurrDiagPrimLPFKn_Hz_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_CurrDiagPrimLPFKn_Hz_f32 = 1.0f;

#pragma DATA_SECTION(k_CurrDiagSec_Cnt_Str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_CurrDiagSec_Cnt_Str = {200,2,1};

#pragma DATA_SECTION(k_CurrDiagSecErrorThresh_Volt_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_CurrDiagSecErrorThresh_Volt_f32 = 20.0f;

#pragma DATA_SECTION(k_CurrDiagSecLPFKn_Hz_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_CurrDiagSecLPFKn_Hz_f32 = 1.0f;

#pragma DATA_SECTION(k_CurrDiagSecTrqLmtThresh_Uls_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_CurrDiagSecTrqLmtThresh_Uls_f32 = 0.0f;


/********************************** TrqOsc ***********************************/
#pragma DATA_SECTION(t_TrqOscAmpLimit_MtrNm_u5p11, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_TrqOscAmpLimit_MtrNm_u5p11[5] = 
	{FPM_InitFixedPoint_m(0.4, u5p11_T),FPM_InitFixedPoint_m(0.5, u5p11_T),
	 FPM_InitFixedPoint_m(0.6, u5p11_T), FPM_InitFixedPoint_m(0.7, u5p11_T),
	 FPM_InitFixedPoint_m(0.7, u5p11_T)};

#pragma DATA_SECTION(t_TrqOscFreqIn_Hz_u12p4, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_TrqOscFreqIn_Hz_u12p4[5] = 
	{FPM_InitFixedPoint_m(10.0, u12p4_T),FPM_InitFixedPoint_m(15.0, u12p4_T),
	 FPM_InitFixedPoint_m(20.0, u12p4_T),
	 FPM_InitFixedPoint_m(40.0, u12p4_T),
	 FPM_InitFixedPoint_m(50.0, u12p4_T)};


/********************************* TrqOvlSta *********************************/
#pragma DATA_SECTION(k_APAIncludeHaptic_Cnt_lgc, ".FlashCalSeg");
CONST(boolean, CAL_CONST) k_APAIncludeHaptic_Cnt_lgc = TRUE;


/******************************* TuningSelAuth *******************************/
#pragma DATA_SECTION(k_TunSelHwTrqLPFKn_Hz_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_TunSelHwTrqLPFKn_Hz_f32 = 5.0f;

#pragma DATA_SECTION(k_TunSelHwTrqThresh_HwNm_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_TunSelHwTrqThresh_HwNm_f32 = 2.0f;

#pragma DATA_SECTION(k_TunSelVehSpdThresh_Kph_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_TunSelVehSpdThresh_Kph_f32 = 100.0f;


/********************************** VehDyn ***********************************/
#pragma DATA_SECTION(k_AutoCntrHiSpdCntrWindow_HwDeg_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_AutoCntrHiSpdCntrWindow_HwDeg_f32 = 5.0f;

#pragma DATA_SECTION(k_AutoCntrHiSpdFilt1Kn_Hz_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_AutoCntrHiSpdFilt1Kn_Hz_f32 = 0.025f;

#pragma DATA_SECTION(k_AutoCntrHiSpdFilt2Kn_Hz_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_AutoCntrHiSpdFilt2Kn_Hz_f32 = 0.0002f;

#pragma DATA_SECTION(k_AutoCntrHiSpdTimer1_mS_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_AutoCntrHiSpdTimer1_mS_u16 = 1500U;

#pragma DATA_SECTION(k_AutoCntrHiSpdTimer1MtrVel_MtrRadpS_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_AutoCntrHiSpdTimer1MtrVel_MtrRadpS_f32 = 20.0f;

#pragma DATA_SECTION(k_AutoCntrHiSpdTimer1PinTrq_HwNm_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_AutoCntrHiSpdTimer1PinTrq_HwNm_f32 = 4.0f;

#pragma DATA_SECTION(k_AutoCntrHiSpdTimer1VehSpd_kph_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_AutoCntrHiSpdTimer1VehSpd_kph_f32 = 65.0f;

#pragma DATA_SECTION(k_AutoCntrHiSpdTimer2_mS_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_AutoCntrHiSpdTimer2_mS_u16 = 2000U;

#pragma DATA_SECTION(k_AutoCntrHiSpdTimer4_mS_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_AutoCntrHiSpdTimer4_mS_u16 = 2000U;

#pragma DATA_SECTION(k_AutoCntrHiSpdTimer4CntrWindow_HwDeg_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_AutoCntrHiSpdTimer4CntrWindow_HwDeg_f32 = 5.0f;

#pragma DATA_SECTION(k_AutoCntrHiSpdTimer4MtrVel_MtrRadpS_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_AutoCntrHiSpdTimer4MtrVel_MtrRadpS_f32 = 20.0f;

#pragma DATA_SECTION(k_AutoCntrHiSpdTimer4PinTrq_HwNm_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_AutoCntrHiSpdTimer4PinTrq_HwNm_f32 = 3.0f;

#pragma DATA_SECTION(k_AutoCntrHiSpdTimer4VehSpd_kph_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_AutoCntrHiSpdTimer4VehSpd_kph_f32 = 65.0f;

#pragma DATA_SECTION(k_AutoCntrLoSpdCntrWindow_HwDeg_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_AutoCntrLoSpdCntrWindow_HwDeg_f32 = 8.0f;

#pragma DATA_SECTION(k_AutoCntrLoSpdFilt1Kn_Hz_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_AutoCntrLoSpdFilt1Kn_Hz_f32 = 0.1f;

#pragma DATA_SECTION(k_AutoCntrLoSpdFilt2Kn_Hz_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_AutoCntrLoSpdFilt2Kn_Hz_f32 = 0.005f;

#pragma DATA_SECTION(k_AutoCntrLoSpdTimer1_mS_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_AutoCntrLoSpdTimer1_mS_u16 = 500U;

#pragma DATA_SECTION(k_AutoCntrLoSpdTimer1MtrVel_MtrRadpS_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_AutoCntrLoSpdTimer1MtrVel_MtrRadpS_f32 = 30.0f;

#pragma DATA_SECTION(k_AutoCntrLoSpdTimer1PinTrq_HwNm_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_AutoCntrLoSpdTimer1PinTrq_HwNm_f32 = 4.0f;

#pragma DATA_SECTION(k_AutoCntrLoSpdTimer1VehSpd_kph_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_AutoCntrLoSpdTimer1VehSpd_kph_f32 = 20.0f;

#pragma DATA_SECTION(k_AutoCntrLoSpdTimer2_mS_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_AutoCntrLoSpdTimer2_mS_u16 = 2000U;

#pragma DATA_SECTION(k_AutoCntrPinTrqLPFCoeffKn_Hz_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_AutoCntrPinTrqLPFCoeffKn_Hz_f32 = 0.035f;

#pragma DATA_SECTION(k_SLPEnableBFCheck_Cnt_lgc, ".FlashCalSeg");
CONST(boolean, CAL_CONST) k_SLPEnableBFCheck_Cnt_lgc = TRUE;

#pragma DATA_SECTION(k_SLPHwAuthority_Uls_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_SLPHwAuthority_Uls_f32 = 0.3f;

#pragma DATA_SECTION(k_SLPMinHwAuthToStoreHwPos_Uls_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_SLPMinHwAuthToStoreHwPos_Uls_f32 = 0.1f;

#pragma DATA_SECTION(k_SysKinRatio_MtrDegpHwDeg_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_SysKinRatio_MtrDegpHwDeg_f32 = 22.0f;

#pragma DATA_SECTION(k_TravelXCDeadband_Uls_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_TravelXCDeadband_Uls_f32 = 20.0f;

#pragma DATA_SECTION(k_TravelXCHwAuthority_Uls_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_TravelXCHwAuthority_Uls_f32 = 0.3f;


/********************************* VehPwrMd **********************************/
#pragma DATA_SECTION(k_IGNDiagTime_mS_u16p0, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_IGNDiagTime_mS_u16p0 = 5000U;

#pragma DATA_SECTION(k_RampDnRt_UlspmS_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_RampDnRt_UlspmS_f32 = 0.0005f;

#pragma DATA_SECTION(k_RampUpRtLoSpd_UlspmS_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_RampUpRtLoSpd_UlspmS_f32 = 0.0005f;

#pragma DATA_SECTION(k_RmpDnAsstVehSpdLimit_Kph_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_RmpDnAsstVehSpdLimit_Kph_f32 = 10.0f;


/********************************* VehSpdLmt *********************************/
#pragma DATA_SECTION(t_MaxAsstTblX_Kph_u9p7, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_MaxAsstTblX_Kph_u9p7[5] = 
	{ FPM_InitFixedPoint_m(0.0, u9p7_T), FPM_InitFixedPoint_m(25.0, u9p7_T),
	 FPM_InitFixedPoint_m(50.0, u9p7_T), FPM_InitFixedPoint_m(65.0, u9p7_T),
	 FPM_InitFixedPoint_m(75.0, u9p7_T) };

#pragma DATA_SECTION(t_MaxAsstTblY_MtrNm_u5p11, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_MaxAsstTblY_MtrNm_u5p11[5] = 
	{ FPM_InitFixedPoint_m(8.8, u5p11_T),FPM_InitFixedPoint_m(8.8, u5p11_T),
	FPM_InitFixedPoint_m(8.8, u5p11_T),FPM_InitFixedPoint_m(8.8, u5p11_T),
	FPM_InitFixedPoint_m(8.8, u5p11_T) };


/********************************* WhlImbRej *********************************/
#pragma DATA_SECTION(k_AutoScaleEnable_Cnt_lgc, ".FlashCalSeg");
CONST(boolean, CAL_CONST) k_AutoScaleEnable_Cnt_lgc = TRUE;

#pragma DATA_SECTION(k_AutoScaleTarget_RadpSec_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_AutoScaleTarget_RadpSec_f32 = 0.4f;

#pragma DATA_SECTION(k_CmdMagLPFKn1_Hz_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_CmdMagLPFKn1_Hz_f32 = 5.0f;

#pragma DATA_SECTION(k_CmdMagLPFKn2_Hz_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_CmdMagLPFKn2_Hz_f32 = 5.0f;

#pragma DATA_SECTION(k_CorrFltRecDly_Min_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_CorrFltRecDly_Min_f32 = 5.0f;

#pragma DATA_SECTION(k_CorrFltRecLim_Cnt_u8, ".FlashCalSeg");
CONST(uint8, CAL_CONST) k_CorrFltRecLim_Cnt_u8 = 1;

#pragma DATA_SECTION(k_DCTrendFltRecDly_Min_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_DCTrendFltRecDly_Min_f32 = 5.0f;

#pragma DATA_SECTION(k_DCTrendFltRecLim_Cnt_u8, ".FlashCalSeg");
CONST(uint8, CAL_CONST) k_DCTrendFltRecLim_Cnt_u8 = 1;

#pragma DATA_SECTION(k_FreqDiagEnable_Cnt_lgc, ".FlashCalSeg");
CONST(boolean, CAL_CONST) k_FreqDiagEnable_Cnt_lgc = TRUE;

#pragma DATA_SECTION(k_FreqDiagFltRecDly_Min_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_FreqDiagFltRecDly_Min_f32 = 5.0f;

#pragma DATA_SECTION(k_FreqDiagFltRecLim_Cnt_u8, ".FlashCalSeg");
CONST(uint8, CAL_CONST) k_FreqDiagFltRecLim_Cnt_u8 = 1;

#pragma DATA_SECTION(k_FreqDiagLPFKn_Hz_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_FreqDiagLPFKn_Hz_f32 = 2.0f;

#pragma DATA_SECTION(k_FreqDiagUGRPoleMag_Uls_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_FreqDiagUGRPoleMag_Uls_f32 = 0.949996948242188f;

#pragma DATA_SECTION(k_MaxMagFltRecDly_Min_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_MaxMagFltRecDly_Min_f32 = 5.0f;

#pragma DATA_SECTION(k_MaxMagFltRecLim_Cnt_u8, ".FlashCalSeg");
CONST(uint8, CAL_CONST) k_MaxMagFltRecLim_Cnt_u8 = 1;

#pragma DATA_SECTION(k_NumberOfTaps_Cnt_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_NumberOfTaps_Cnt_u16 = 30U;

#pragma DATA_SECTION(k_ScaleCancel_Uls_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_ScaleCancel_Uls_f32 = 0.1f;

#pragma DATA_SECTION(k_UGRPoleMag_Uls_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_UGRPoleMag_Uls_f32 = 0.999f;

#pragma DATA_SECTION(k_WIRDCTrendLPFKn_Hz_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_WIRDCTrendLPFKn_Hz_f32 = 0.2f;

#pragma DATA_SECTION(k_WIRDCTrendTh2_MtrNm_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_WIRDCTrendTh2_MtrNm_f32 = 0.1f;

#pragma DATA_SECTION(k_WIRDCTrendTime2_Sec_f32, ".FlashCalSeg");
CONST(float32, CAL_CONST) k_WIRDCTrendTime2_Sec_f32 = 0.014f;

#pragma DATA_SECTION(k_WIRMaxMagDiag_Cnt_Str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_WIRMaxMagDiag_Cnt_Str = {250, 1, 15};

#pragma DATA_SECTION(k_WIRRampDownTime_mS_u16p0, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_WIRRampDownTime_mS_u16p0 = 
	FPM_InitFixedPoint_m(2000.0, u16p0_T);


/******************************* WIRInputQual ********************************/
#pragma DATA_SECTION(k_WhlSpdQLimit_Cnt_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_WhlSpdQLimit_Cnt_u16 = 10U;

#pragma DATA_SECTION(k_WhlSpdQNStep_Cnt_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_WhlSpdQNStep_Cnt_u16 = 1U;

#pragma DATA_SECTION(k_WhlSpdQPStep_Cnt_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_WhlSpdQPStep_Cnt_u16 = 1U;

#pragma DATA_SECTION(k_WhlSpdQualDiag_Cnt_Str, ".FlashCalSeg");
CONST(DiagSettings_Str, CAL_CONST) k_WhlSpdQualDiag_Cnt_Str = {30, 10, 1};


/*************************************  **************************************/
#pragma DATA_SECTION(k_GateDrvInitDwellTime_mS_u16p0, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_GateDrvInitDwellTime_mS_u16p0 = 10U;

#pragma DATA_SECTION(k_GenGateDrvFltThrsh_Cnt_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_GenGateDrvFltThrsh_Cnt_u16 = 200U;

#pragma DATA_SECTION(k_MtrVelFiltFFKn_Cnt_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_MtrVelFiltFFKn_Cnt_u16 = 7739U;

#pragma DATA_SECTION(k_MtrVelFiltPIKn_Cnt_u16, ".FlashCalSeg");
CONST(uint16, CAL_CONST) k_MtrVelFiltPIKn_Cnt_u16 = 7739U;

#pragma DATA_SECTION(t_KidGainX_MtrRadpSec_u12p4, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_KidGainX_MtrRadpSec_u12p4[8] = 
	{FPM_InitFixedPoint_m(0.0, u12p4_T),FPM_InitFixedPoint_m(5.0, u12p4_T),
	FPM_InitFixedPoint_m(50.0, u12p4_T),FPM_InitFixedPoint_m(100.0, u12p4_T),
	FPM_InitFixedPoint_m(200.0, u12p4_T),
	FPM_InitFixedPoint_m(300.0, u12p4_T),
	FPM_InitFixedPoint_m(400.0, u12p4_T),
	FPM_InitFixedPoint_m(500.0, u12p4_T)};

#pragma DATA_SECTION(t_KidGainY_Uls_u10p6, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_KidGainY_Uls_u10p6[8] = 
	{FPM_InitFixedPoint_m(16.0, u10p6_T),FPM_InitFixedPoint_m(50.0, u10p6_T),
	FPM_InitFixedPoint_m(100.0, u10p6_T),
	FPM_InitFixedPoint_m(100.0, u10p6_T),
	FPM_InitFixedPoint_m(100.0, u10p6_T),
	FPM_InitFixedPoint_m(100.0, u10p6_T),
	FPM_InitFixedPoint_m(100.0, u10p6_T),
	FPM_InitFixedPoint_m(100.0, u10p6_T)};

#pragma DATA_SECTION(t_KiqGainX_MtrRadpSec_u12p4, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_KiqGainX_MtrRadpSec_u12p4[8] = 
	{FPM_InitFixedPoint_m(0.0, u12p4_T),FPM_InitFixedPoint_m(5.0, u12p4_T),
	FPM_InitFixedPoint_m(50.0, u12p4_T),FPM_InitFixedPoint_m(100.0, u12p4_T),
	FPM_InitFixedPoint_m(200.0, u12p4_T),
	FPM_InitFixedPoint_m(300.0, u12p4_T),
	FPM_InitFixedPoint_m(400.0, u12p4_T),
	FPM_InitFixedPoint_m(500.0, u12p4_T)};

#pragma DATA_SECTION(t_KiqGainY_Uls_u10p6, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_KiqGainY_Uls_u10p6[8] = 
	{FPM_InitFixedPoint_m(16.0, u10p6_T),FPM_InitFixedPoint_m(50.0, u10p6_T),
	FPM_InitFixedPoint_m(100.0, u10p6_T),
	FPM_InitFixedPoint_m(100.0, u10p6_T),
	FPM_InitFixedPoint_m(100.0, u10p6_T),
	FPM_InitFixedPoint_m(100.0, u10p6_T),
	FPM_InitFixedPoint_m(100.0, u10p6_T),
	FPM_InitFixedPoint_m(100.0, u10p6_T)};

#pragma DATA_SECTION(t_KpdGainX_MtrRadpSec_u12p4, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_KpdGainX_MtrRadpSec_u12p4[8] = 
	{FPM_InitFixedPoint_m(0.0, u12p4_T),FPM_InitFixedPoint_m(5.0, u12p4_T),
	FPM_InitFixedPoint_m(50.0, u12p4_T),FPM_InitFixedPoint_m(100.0, u12p4_T),
	FPM_InitFixedPoint_m(200.0, u12p4_T),
	FPM_InitFixedPoint_m(300.0, u12p4_T),
	FPM_InitFixedPoint_m(400.0, u12p4_T),
	FPM_InitFixedPoint_m(500.0, u12p4_T)};

#pragma DATA_SECTION(t_KpdGainY_Uls_u6p10, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_KpdGainY_Uls_u6p10[8] = 
	{FPM_InitFixedPoint_m(0.015, u6p10_T),
	FPM_InitFixedPoint_m(0.03, u6p10_T),FPM_InitFixedPoint_m(0.03, u6p10_T),
	FPM_InitFixedPoint_m(0.05, u6p10_T),FPM_InitFixedPoint_m(0.05, u6p10_T),
	FPM_InitFixedPoint_m(0.05, u6p10_T),FPM_InitFixedPoint_m(0.05, u6p10_T),
	FPM_InitFixedPoint_m(0.05, u6p10_T)};

#pragma DATA_SECTION(t_KpqGainX_MtrRadpSec_u12p4, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_KpqGainX_MtrRadpSec_u12p4[8] = 
	{FPM_InitFixedPoint_m(0.0, u12p4_T),FPM_InitFixedPoint_m(5.0, u12p4_T),
	FPM_InitFixedPoint_m(50.0, u12p4_T),FPM_InitFixedPoint_m(100.0, u12p4_T),
	FPM_InitFixedPoint_m(200.0, u12p4_T),
	FPM_InitFixedPoint_m(300.0, u12p4_T),
	FPM_InitFixedPoint_m(400.0, u12p4_T),
	FPM_InitFixedPoint_m(500.0, u12p4_T)};

#pragma DATA_SECTION(t_KpqGainY_Uls_u6p10, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_KpqGainY_Uls_u6p10[8] = 
	{FPM_InitFixedPoint_m(0.015, u6p10_T),
	FPM_InitFixedPoint_m(0.03, u6p10_T),FPM_InitFixedPoint_m(0.03, u6p10_T),
	FPM_InitFixedPoint_m(0.05, u6p10_T),FPM_InitFixedPoint_m(0.05, u6p10_T),
	FPM_InitFixedPoint_m(0.05, u6p10_T),FPM_InitFixedPoint_m(0.05, u6p10_T),
	FPM_InitFixedPoint_m(0.05, u6p10_T)};

#pragma DATA_SECTION(t_MtrCurrQaxRplPIY_Amp_u9p7, ".FlashCalSeg");
CONST(uint16, CAL_CONST) t_MtrCurrQaxRplPIY_Amp_u9p7[7] = 
	{FPM_InitFixedPoint_m(0.0, u9p7_T),FPM_InitFixedPoint_m(25.0, u9p7_T),
	FPM_InitFixedPoint_m(50.0, u9p7_T),FPM_InitFixedPoint_m(75.0, u9p7_T),
	FPM_InitFixedPoint_m(100.0, u9p7_T),FPM_InitFixedPoint_m(125.0, u9p7_T),
	FPM_InitFixedPoint_m(135.0, u9p7_T)};

#pragma DATA_SECTION(t_MtrTrqCog_MtrNm_s5p10, ".FlashCalSeg");
CONST(sint16, CAL_CONST) t_MtrTrqCog_MtrNm_s5p10[512] = 
	{FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T),
	FPM_InitFixedPoint_m(0.0, s5p10_T),FPM_InitFixedPoint_m(0.0, s5p10_T)};

#pragma DATA_SECTION(t2_MtrCurrQaxRpl12X_Amp_s6p9, ".FlashCalSeg");
CONST(sint16, CAL_CONST) t2_MtrCurrQaxRpl12X_Amp_s6p9[6][7] = 
	{{FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T)}, {FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T)},
	{FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T)},{FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T)},
	{FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T)},{FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T)}};

#pragma DATA_SECTION(t2_MtrCurrQaxRpl12Y_Amp_s6p9, ".FlashCalSeg");
CONST(sint16, CAL_CONST) t2_MtrCurrQaxRpl12Y_Amp_s6p9[6][7] = 
	{{FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T)}, {FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T)},
	{FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T)},{FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T)},
	{FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T)},{FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T)}};

#pragma DATA_SECTION(t2_MtrCurrQaxRpl18X_Amp_s6p9, ".FlashCalSeg");
CONST(sint16, CAL_CONST) t2_MtrCurrQaxRpl18X_Amp_s6p9[6][7] = 
	{{FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T)}, {FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T)},
	{FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T)},{FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T)},
	{FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T)},{FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T)}};

#pragma DATA_SECTION(t2_MtrCurrQaxRpl18Y_Amp_s6p9, ".FlashCalSeg");
CONST(sint16, CAL_CONST) t2_MtrCurrQaxRpl18Y_Amp_s6p9[6][7] = 
	{{FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T)}, {FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T)},
	{FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T)},{FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T)},
	{FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T)},{FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T)}};

#pragma DATA_SECTION(t2_MtrCurrQaxRpl6X_Amp_s6p9, ".FlashCalSeg");
CONST(sint16, CAL_CONST) t2_MtrCurrQaxRpl6X_Amp_s6p9[6][7] = 
	{{FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T)}, {FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T)},
	{FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T)},{FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T)},
	{FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T)},{FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T)}};

#pragma DATA_SECTION(t2_MtrCurrQaxRpl6Y_Amp_s6p9, ".FlashCalSeg");
CONST(sint16, CAL_CONST) t2_MtrCurrQaxRpl6Y_Amp_s6p9[6][7] = 
	{{FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T)}, {FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T)},
	{FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T)},{FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T)},
	{FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T)},{FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T),
	FPM_InitFixedPoint_m(0.0, s6p9_T),FPM_InitFixedPoint_m(0.0, s6p9_T)}};

/*************************************  **************************************/
CONSTP2CONST(TUNING_Y_Str, AUTOMATIC, AUTOMATIC) T_TunSetSelectionTbl_Ptr_Str[D_NUMOFTUNSETS_CNT_U16] =
	{&k_TunSet0_Cnt_Str};

CONSTP2CONST(TUNING_P_Str, AUTOMATIC, AUTOMATIC) T_TunPersSelectionTbl_Ptr_Str[D_NUMOFTUNSETS_CNT_U16][D_NUMOFPERS_CNT_U16] =
	{
		{&k_TunSet0Per0_Cnt_Str,
		&k_TunSet0Per1_Cnt_Str,
		&k_TunSet0Per2_Cnt_Str,
		&k_TunSet0Per3_Cnt_Str}
	};





