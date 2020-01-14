@echo off
Echo off
:Menu
Title C++ Creator Template
Echo Header for...
set /p ans=:
set name=%ans%
set tp=cpp
set ti=in

copy header.txt "%name%.%tp%"
copy empty "%name%.%ti%"

start Code "%name%.%tp%" "%name%.%ti%"
exit