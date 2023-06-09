#!/bin/bash
find . -name "*.c" -exec gcc -c {} -o {}.o \;
rename 's/\.c\.o$/.o/' *.c.o
ar rcs liball.a *.o

