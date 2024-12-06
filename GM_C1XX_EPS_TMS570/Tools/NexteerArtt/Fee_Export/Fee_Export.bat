@echo off
setlocal
REM ******************************************************************
REM * Fee Export Script
REM * Created by: Kevin Smith
REM * Version: 1.0
REM * Last Modified: 23-Jul-13
REM * 
REM * The following script was created to use the ARTT text template
REM * scripting support to export the Ea configuration for the 
REM * provided ECUC file and create an csv output. 
REM *
REM * Support Files: 
REM * -------------------
REM * Ea_Prase_csv.tt -> Text template that generates the CSV report
REM *
REM ******************************************************************

REM **************************
REM * Variables to configure *
REM **************************

REM * EXEC_PATH -> Path to the artt executable.
set EXEC_PATH=..\..\AsrProject\Generators\Artt\artt\artt.exe

REM * ARTT_INCLUDE_PATH -> ARTT include path
set ARTT_INCLUDE_PATH=..\..\AsrProject\Generators\Artt\artt\include

REM * ECUC_FILE -> Full project ECUC file to analyze.
set ECUC_FILE=..\..\AsrProject\Config\ECUC\EPS.ecuc.arxml

REM * EXPORT_TEMPLATE -> Export template to execute.
set EXPORT_TEMPLATE=.\Fee_Export_csv.tt

REM * AUTOSAR_VERSION -> Location of autosar schema
set AUTOSAR_VERSION="http://autosar.org/3.0.2"

REM * OUTPUT_PATH -> Path for report to be generated. 
set OUTPUT_PATH=.\

REM **************************
REM * Execute Export Command *
REM **************************
%EXEC_PATH% -d=%ECUC_FILE% -t=%EXPORT_TEMPLATE% -i=%ARTT_INCLUDE_PATH% -u=%AUTOSAR_VERSION% -o=%OUTPUT_PATH%
pause
