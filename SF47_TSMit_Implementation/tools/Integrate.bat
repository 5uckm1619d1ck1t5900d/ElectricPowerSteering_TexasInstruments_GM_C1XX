@Echo Off
setlocal

set SWC=TSMit

FOR /D %%G in ("..\..\*_EPS_*") DO set INTPJTDIR=%%G
echo Integration project relative path is: %INTPJTDIR%


set BSWMDDIR_TSMIT=%INTPJTDIR%\Tools\AsrProject\Generators\Components\_Schemes\%SWC%\bswmd
set GENDEFDIR_TSMIT=%INTPJTDIR%\Tools\AsrProject\Generators\Artt\%SWC%


mkdir %BSWMDDIR_TSMIT%
mkdir %GENDEFDIR_TSMIT%


copy ..\generate\Ap_TSMit_*.arxml	%BSWMDDIR_TSMIT%
copy ..\generate\Ap_TSMit_*.tt	%GENDEFDIR_TSMIT%
copy ..\generate\Ap_TSMit_*.bat	%GENDEFDIR_TSMIT%

pause
:end

endlocal