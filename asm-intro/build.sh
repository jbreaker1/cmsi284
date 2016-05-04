#!/bin/bash
 
clear
 
nasm -felf64 calc-ops.asm
gcc calc-ops.o addition.c -o addition
gcc calc-ops.o gcd.c -o gcd
gcc calc-ops.o subtract.c -o subtract
echo To call each function say [addition, gcd, subtract] {arg1} {arg2}
