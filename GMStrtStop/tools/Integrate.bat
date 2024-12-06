@Echo Off
setlocal



set SWC=StrtStop

FOR /D %%G in ("..\..\..\..\*_EPS_*") DO set INTPJTDIR=%%G
echo Integration project relative path is: %INTPJTDIR%

 

set BSWMDDIR_STRTSTOP=%INTPJTDIR%\Tools\AsrProject\Generators\Components\_Schemes\%SWC%\bswmd
set GENDEFDIR_STRTSTOP=%INTPJTDIR%\Tools\AsrProject\Generators\Artt\%SWC%


mkdir %BSWMDDIR_STRTSTOP%
mkdir %GENDEFDIR_STRTSTOP%



copy ..\generate\Ap_StrtStop_*.arxml	%BSWMDDIR_STRTSTOP%
copy ..\generate\Ap_StrtStop_*.tt	%GENDEFDIR_STRTSTOP%
copy ..\generate\Ap_StrtStop_*.bat	%GENDEFDIR_STRTSTOP%


pause
:end

endlocal

