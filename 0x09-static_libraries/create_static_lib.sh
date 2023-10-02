#!/bin/bash
gcc -std=gnu89 -c *.c;
ar cr liball.a *.o;
ranlib liball.a
