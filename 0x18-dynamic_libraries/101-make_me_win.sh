#!/bin/bash
gcc -shared -o lib_test.so -fPIC test.c
LD_PRELOAD=/home/bene/Desktop/alx-low_level_programming/0x18-dynamic_libraries/lib_test.so ./gm 9 8 10 24 75 9
