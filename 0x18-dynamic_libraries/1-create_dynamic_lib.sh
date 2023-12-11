#!/bin/bash
gcc -c -fPIC *.c
gcc -shared -o liball.so *.o
export LD_LIRARY_PATH=$PWD:$LD_LIBRARY_PATH
