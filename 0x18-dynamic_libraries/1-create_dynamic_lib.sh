#!/bin/bash
gcc -c *.c -FPIC ; gcc -shared *.o -o liball.so
