#!/bin/bash
gcc -fPIC -shared -o lib_test.so test.c
export LD_PRELOAD=/$PWD/lib_test.so
