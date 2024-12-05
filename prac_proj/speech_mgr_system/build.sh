#!/bin/bash

rm -rf out
mkdir out

g++  -std=c++17  -I. main.cpp -o temps
mv temps out/s

echo "build finish"