#!/bin/bash
gcc -shared -o lib_test.so -fPIC test.c
LD_PRELOAD=/$PWD/lib_test.so ./gm 9 8 10 24 75 9
