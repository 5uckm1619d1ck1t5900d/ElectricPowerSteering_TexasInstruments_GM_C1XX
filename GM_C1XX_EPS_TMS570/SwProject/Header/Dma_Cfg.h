/*****************************************************************************
* Copyright 2010 Nexteer Automotive, All Rights Reserved.
* Nexteer Confidential
*
* Module File Name  : Dma_Cfg.h
* Module Description: DMA Peripheral Configuration Header
* Product           : Gen II Plus - EA3.0
* Author            : Owen Tosh
*****************************************************************************/
/*******************************************************************************
* Version Control:
* Date Created:      Tue Mar 11 12:00:00 2014
* %version:          2 %
* %derived_by:       zz4r1x %
* %date_modified:    Tue Mar 11 12:00:00 2014 %
*******************************************************************************/
/*******************************************************************************
* Change History:
* Date      Rev      Author    Change Description
* --------  -------  --------  ------------------------------------------------
* 04/09/14   1       BWL       Initial version
*******************************************************************************/


#ifndef DMA_CFG_H
#define DMA_CFG_H


#define D_DMAFLSTSTENABLED_CNT_ENUM			STD_ON	/* FlsTst Init Groups */
#define D_FASTSPIGROUPENABLED_CNT_ENUM		STD_ON	/* 50us SPI Group */
#define D_FASTADCGROUPENABLED_CNT_ENUM		STD_ON	/* 50us ADC Group */
#define D_FASTPWMGROUPENABLED_CNT_ENUM		STD_ON	/* 50us PWM Group */
#define D_SLOWADCGROUPENABLED_CNT_ENUM		STD_ON	/* 2ms ADC Group */

#define DMA_REPORTERRORSTATUS(event, param, status)		NxtrDiagMgr10_SetNTCStatus(event, param, status)

#endif
