/*****************************************************************************
* Copyright 2010 Nexteer Automotive, All Rights Reserved.
* Nexteer Confidential
*
* Module File Name  : CDD_Func.h
* Module Description: Header file for functions communicated between Nexteer
*                      Complex Device Drivers (CDD)
* Product           : Gen II Plus - EA3.0
* Author            : Lucas Wendling
*****************************************************************************/
/* Version Control:
 * Date Created:      Wed Apr 13 12:17:00 2011
 * %version:          1 %
 * %derived_by:       czgng4 %
 * %date_modified:    Mon Jul 29 08:16:41 2013 %
 *---------------------------------------------------------------------------------------------------------------------
 * Date      Rev      Author         Change Description                                                        SCR #
 * -------   -------  --------  ---------------------------------------------------------------------------  ----------
 * 07/29/13  1        LWW       Initial C1xx Synergy Version
 */

#ifndef CDD_FUNC_H
#define CDD_FUNC_H

#include "Std_Types.h"

extern FUNC(void, SA_MTRPOS_CODE) MtrPos_Per1(void);
extern FUNC(void, RTE_AP_MICRODIAG_APPL_CODE) MicroDiag_Per1(void);

/* TODO: Determine if the  CalRamInit really needs to execute as a CDD early in init */
/*        if it is determined that RAM cals are only used after RTE Start, then this */
/*        function can be removed from here and scheduled in Developer               */
extern FUNC(void, XCP_CODE) Xcp_CalRamInit(void);

#endif
