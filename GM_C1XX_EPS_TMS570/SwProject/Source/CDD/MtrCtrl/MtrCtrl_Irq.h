/*****************************************************************************
* Copyright 2010 Nexteer Automotive, All Rights Reserved.
* Nexteer Confidential
*
* Module File Name  : MtrCtrl_Irq.h
* Module Description: Motor Control Interupt 
* Product           : Gen II Plus - EA3.0
* Author            : Jeremy Warmbier
*****************************************************************************/
/* Version Control:
 * Date Created:      Wed Apr 13 12:17:00 2011
 * %version:          1 %
 * %derived_by:       czgng4 %
 * %date_modified:    Mon Jul 29 08:33:21 2013 %
 *---------------------------------------------------------------------------------------------------------------------
 * Date      Rev      Author         Change Description                                                        SCR #
 * -------   -------  --------  ---------------------------------------------------------------------------  ----------
 * 07/29/13  1        LWW       Initial C1xx Synergy Version
 */

#ifndef MTRCTRL_IRQ_H
#define MTRCTRL_IRQ_H

/*****************************************************************************
 *  GLOBAL CONSTANT MACROS
 ******************************************************************************/
#define MTRCTRL_COMPILER_ISR    interrupt

/*****************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 ******************************************************************************/
MTRCTRL_COMPILER_ISR void Isr_MtrCtrl(void);


#endif
