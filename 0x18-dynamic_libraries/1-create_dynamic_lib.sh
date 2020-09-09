#!/bin/bash
gcc -c -fPIC *.c
gcc -shared -Wl -soname -o liball.so *.o
