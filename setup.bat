@echo off
IF NOT EXIST "Tools\FoundryTools_windows_x64\zig.exe" (
    .\Tools\wget.exe https://ziglang.org/download/0.11.0/zig-windows-x86_64-0.11.0.zip
    .\Tools\unzip.exe -j zig-windows-x86_64-0.11.0.zip zig-windows-x86_64-0.11.0/zig.exe -d ./Tools/FoundryTools_windows_x64
    del .\zig-windows-x86_64-0.11.0.zip
)