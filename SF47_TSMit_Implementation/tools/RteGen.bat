@echo off
REM ********************************************************************************************************************
REM *  Description:    CBD RTE generation for SWC Update and contract phase generation for use with unit testing
REM *  Created By:     Nexteer
REM *  Prerequisites:  The Rte Generator of choice must be located in a Folder named RteGen in the UnitTestEnv subproject
REM *                  located at the same folder level of the SWC project folder
REM *
REM ********************************************************************************************************************

attrib -r "..\src\*.c" > logfile.txt
attrib -r "contract\*.h" >> logfile.txt

set SWC=Ap_TSMit

..\..\Autosar3Tools\RteGen\dvrtegen -d "..\autosar\%SWC%.dcf" -m %SWC% -g i -o "..\src" >> logfile.txt
..\..\Autosar3Tools\RteGen\dvrtegen -d "..\autosar\%SWC%.dcf" -m %SWC% -g c -o "contract\%SWC%" >> logfile.txt