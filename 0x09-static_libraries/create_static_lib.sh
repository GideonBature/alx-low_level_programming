#!/bin/bash
find . -name "*.c" -exec gcc -c {} -o {}.o \;
ar rcs liball.a *.o
