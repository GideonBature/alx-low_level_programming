#!/bin/bash
gcc -shared -o lib_test.so -fPIC test.c
export LD_PRELOAD=$PWD/lib_test.so
