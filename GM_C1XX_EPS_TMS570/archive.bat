@Echo off

REM *** SET Zip File Name to Directory in which this bat file resides **********
for %%A in ("%~dp0.") do set PJTDIR=%%~nA
set FILENAME=%PJTDIR%

cd ..

del %FILENAME%.zip
wzzip -P -r %FILENAME%.zip *.*