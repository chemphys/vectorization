#!/bin/bash

rm -f main main_aligned main_gcc main_aligned_gcc
icpc -qopt-report main.cpp -o main
icpc -qopt-report main_aligned.cpp -o main_aligned

g++ -std=c++11 -O2 -ftree-vectorize -fdump-tree-optimized main.cpp -o main_gcc
g++ -std=c++11 -O2 -ftree-vectorize -fdump-tree-optimized main_aligned.cpp -o main_aligned_gcc
