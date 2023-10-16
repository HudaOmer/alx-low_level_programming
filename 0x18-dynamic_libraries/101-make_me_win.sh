#!/bin/bash
gcc -shared -o myprintf.so -fPIC print.c
export LD_PRELOAD=./myprintf.so:LD_LIBRARY_PATH
