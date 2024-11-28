#!/bin/bash

rm -rf out
mkdir out
c++  -std=c++17  *.cpp -o out/s

echo "build finish"