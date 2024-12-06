@Echo Off
setlocal



set SWC=CustPerSrvcs

FOR /D %%G in ("..\..\..\..\*_EPS_*") DO set INTPJTDIR=%%G
echo Integration project relative path is: %INTPJTDIR%

 

set BSWMDDIR_CUSTPERSRVCS=%INTPJTDIR%\Tools\AsrProject\Generators\Components\_Schemes\%SWC%\bswmd
set GENDEFDIR_CUSTPERSRVCS=%INTPJTDIR%\Tools\AsrProject\Generators\Artt\%SWC%


mkdir %BSWMDDIR_CUSTPERSRVCS%
mkdir %GENDEFDIR_CUSTPERSRVCS%



copy ..\generate\Ap_CustPerSrvcs_*.arxml	%BSWMDDIR_CUSTPERSRVCS%
copy ..\generate\Ap_CustPerSrvcs_*.tt	%GENDEFDIR_CUSTPERSRVCS%
copy ..\generate\Ap_CustPerSrvcs_*.bat	%GENDEFDIR_CUSTPERSRVCS%


pause
:end

endlocal

