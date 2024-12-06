/*****************************************************************************
* Copyright 2010 Nexteer Automotive, All Rights Reserved.
* Nexteer Confidential
*
* Module File Name  : ApplCallbacks.h
* Module Description: Application defined Callback functions
* Product           : Gen II Plus - EA3.0
* Author            : Jeremy Warmbier
*****************************************************************************/
/* Version Control:
 * Date Created:      Wed Apr 13 12:17:00 2011
 * %version:          1 %
 * %derived_by:       czgng4 %
 * %date_modified:    Mon Jul 29 08:08:40 2013 %
 *---------------------------------------------------------------------------------------------------------------------
 * Date      Rev      Author         Change Description                                                        SCR #
 * -------   -------  --------  ---------------------------------------------------------------------------  ----------
 * 07/29/13  1        LWW       Initial C1xx Synergy Version
 */
#ifndef APPLCALLBACKS_H
#define APPLCALLBACKS_H

extern void Appl_WaitNvMReady(const uint16 blockNumber, const boolean fastMode);
extern void SystemTick(void);

#endif /*APPLCALLBACKS_H*/
