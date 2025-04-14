@echo off
cd out/build/

echo Cleaning up build directory...
del /f /q *.* >nul 2>&1
for /d %%p in (*) do rmdir /s /q "%%p"

cd ../../
echo Cleaning complete.
