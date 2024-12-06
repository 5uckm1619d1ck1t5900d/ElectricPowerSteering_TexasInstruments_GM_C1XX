
/*****************************************************************************
* Copyright 2010 Nexteer Automotive, All Rights Reserved.
* Nexteer Confidential
*
* Module File Name  : Sa_ DIGMSB_Cfg.h
* Module Description: Configuration file of DiagMgr module
* Product           : Gen II Plus - EA3.0
* Generator         : artt 2.0.2.0
* Generation Time   : 30.11.2012 08:09:43
*****************************************************************************/
/* Version Control:
 * Date Created:      Fri Jul 13 18:34:17 2012
 * %version:          8 %
 * %date_modified:    Fri Aug 30 17:01:16 2013 %
 *---------------------------------------------------------------------------------------------------------------------
 * Date      Rev      Author         Change Description                                                        SCR #
 * -------   -------  --------  ---------------------------------------------------------------------------  ----------
 * 07/13/13   1       Selva      Initial template creation
 * 08/08/13   2       Selva      Template Updated  
 */

#ifndef  DIGMSB_CFG_H
#define  DIGMSB_CFG_H

#include "Dma.h"
#include "CDD_Data.h"
#include "SpiNxt.h"

/*******************************************************************************
**                      Define Section                                       **
*******************************************************************************/
#define	 DigMSB_Read_MtrPosPolarity_Cnt_s08(ptr) ((*(ptr))=CDD_MtrPosPolarity_Cnt_G_s08[CDD_CDDDataAccessBfr_Cnt_G_u16])

/* Data written by DigMSB */
#define	DigMSB_Write_MechMtrPos1_Rev_u0p16(Var)	(CDD_MechMtrPos1_Rev_G_u0p16 = (Var))
#define	DigMSB_Write_SysCMechMtrPos1_Rev_u0p16(Var)	((void)0)
#define	DigMSB_Write_SysCorrectedElecMtrPos_Rev_u0p16(Var)	(CDD_SysCorrectedElecMtrPos_Rev_G_u0p16[CDD_CDDDataAccessBfr_Cnt_G_u16] = (Var))
#define	DigMSB_Write_MechMtrPos1TimeStamp_uSec_u32(Var)	(CDD_MechMtrPos1TimeStamp_uSec_G_u32[CDD_CDDDataAccessBfr_Cnt_G_u16] = (Var))
#define	DigMSB_Write_MechMtrPos2TimeStamp_uSec_u32(Var)	(CDD_MechMtrPos2TimeStamp_uSec_G_u32[CDD_CDDDataAccessBfr_Cnt_G_u16] = (Var))
/*------------------------------------------------*/
#define	DigMSB_Write_CorrectedElecMtrPos_Rev_u0p16(Var)	(CDD_CorrectedElecMtrPos_Rev_G_u0p16[CDD_CDDDataAccessBfr_Cnt_G_u16] = (Var))


/****Used in 2ms of DigMSB***/
#define	DigMSB_Write_UncorrMechMtrPos1_Rev_u0p16(Var)	(CDD_UncorrMechMtrPos1_Rev_G_u0p16[CDD_CDDDataAccessBfr_Cnt_G_u16] = (Var))
#define	DigMSB_Write_CumMechMtrPos_Rev_s15p16(Var)	(CDD_CumMechMtrPos_Rev_G_s15p16[CDD_CDDDataAccessBfr_Cnt_G_u16] = (Var))
#define	DigMSB_Write_Die1RxError_Cnt_u16(Var)	(CDD_Die1RxError_Cnt_G_u16[CDD_CDDDataAccessBfr_Cnt_G_u16] = (Var))
#define	DigMSB_Write_Die2RxError_Cnt_u16(Var)	(CDD_Die2RxError_Cnt_G_u16[CDD_CDDDataAccessBfr_Cnt_G_u16] = (Var))
#define	DigMSB_Write_Die1RxRevCtr_Cnt_u16(Var)	(CDD_Die1RxRevCtr_Cnt_G_u16[CDD_CDDDataAccessBfr_Cnt_G_u16] = (Var))
#define	DigMSB_Write_Die2RxRevCtr_Cnt_u16(Var)	(CDD_Die2RxRevCtr_Cnt_G_u16[CDD_CDDDataAccessBfr_Cnt_G_u16] = (Var))
#define	DigMSB_Write_Die1RxMtrPos_Cnt_u16(Var)	(CDD_Die1RxMtrPos_Cnt_G_u16[CDD_CDDDataAccessBfr_Cnt_G_u16] = (Var))
#define	DigMSB_Write_Die2RxMtrPos_Cnt_u16(Var)	(CDD_Die2RxMtrPos_Cnt_G_u16[CDD_CDDDataAccessBfr_Cnt_G_u16] = (Var))
#define	DigMSB_Write_RxMtrPos1ParityAccum_Cnt_u16(Var)	(CDD_RxMtrPos1ParityAccum_Cnt_G_u16[CDD_CDDDataAccessBfr_Cnt_G_u16] = (Var))
#define DigMSB_Write_RxMtrPos1UnderVoltgFltAccum_Cnt_u16(Var) (CDD_RxMtrPos1UnderVoltgFltAccum_Cnt_u16[CDD_CDDDataAccessBfr_Cnt_G_u16] = (Var))

#define	MSB1GetData(ptr)										(ptr)[0] = DMAData_G_str.FastSPI_Cnt_u16[0]; \
																(ptr)[1] = DMAData_G_str.FastSPI_Cnt_u16[1]; \
																(ptr)[2] = DMAData_G_str.FastSPI_Cnt_u16[2]
#define	MSB1SetData(ptr)										mibspiSetData(mibspiREG3, TRANS_GRP_0, (ptr))
#define	MSB2GetData(ptr)										(ptr)[0] = DMAData_G_str.SlowSPI_Cnt_u16[0]; \
																(ptr)[1] = DMAData_G_str.SlowSPI_Cnt_u16[1]; \
																(ptr)[2] = DMAData_G_str.SlowSPI_Cnt_u16[2]
#define	MSB2SetData(ptr)										mibspiSetData(mibspiREG5, TRANS_GRP_0, (ptr))
#define MSB1EnableDataTransfer()								mibspiTransfer(mibspiREG3, TRANS_GRP_0)
#define MSB2EnableDataTransfer()								mibspiTransfer(mibspiREG5, TRANS_GRP_0)
#define	MSB1GetConfig(ptr)										mibspiGetData(mibspiREG3, TRANS_GRP_1, ptr)
#define	MSB1SetConfig(ptr)										mibspiSetData(mibspiREG3, TRANS_GRP_1, ptr)
#define	MSB2GetConfig(ptr)										mibspiGetData(mibspiREG5, TRANS_GRP_1, ptr)
#define	MSB2SetConfig(ptr)										mibspiSetData(mibspiREG5, TRANS_GRP_1, ptr)
#define MSB1EnableConfigTransfer()								mibspiTransfer(mibspiREG3, TRANS_GRP_1)
#define MSB2EnableConfigTransfer()								mibspiTransfer(mibspiREG5, TRANS_GRP_1)


/*** End of file **************************************************************/

#endif /* DIGMSBSIGCORR_CFG_H */
