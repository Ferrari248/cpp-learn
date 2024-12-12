#!/bin/bash

rm -rf out
mkdir out

g++  -std=c++17  -I. main.cpp -o out/s

echo "build finish"