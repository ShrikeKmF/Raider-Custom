@echo off
REM ---------------------------
REM Paths (edit as needed)
REM ---------------------------
set "ADDONBUILDER=F:\SteamLibrary\steamapps\common\Arma 3 Tools\AddonBuilder\AddonBuilder.exe"
set "SOURCE=F:\Arma 3\Raider-Custom\Mod Files\rtgCustomContent"
set "OUTPUT=F:\Arma 3\Raider-Custom\@raiderTacticalGroup\addons"
set "EXCLUDE=F:\Arma 3\Raider-Custom\exclude.lst"

"%ADDONBUILDER%" -packonly -clear  "%SOURCE%" "%OUTPUT%" -exclude="%EXCLUDE%" 

echo Done.
pause
