# DLR Adapter

## Intro
DLR Adapter functions are similar to DLR - all functions has TT suffix added to the original DLR function names. For example:
- CreateDLRModelTT
- SetDLRInputTT
- RunDLRModelTT
- GetDLROutputTT


Each DLR function invocation is wrapped with a code which measures and prints exec time.

## Build
```
# Copy existing libdlr.so to the root of the project

mkdir build
cd build

cmake ..
 
# OR For crosscompilation specify C Compiler, e.g.
cmake .. \
-DCMAKE_C_COMPILER=aarch64-linux-gnu-gcc

make VERBOSE=1

# it will generale libdlr_adapter.so
```
