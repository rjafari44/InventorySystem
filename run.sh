#!/bin/bash

# CLI Build script based off of the Makefile

GCC=g++
CXXFLAGS="-std=c++17"
SRC_DIR="./src"
SRC_FILES=("$SRC_DIR"/*.cpp)
INCLUDE_DIR="-Iinclude"
EXEC="test"

echo "Building..."
echo
$GCC $CXXFLAGS $INCLUDE_DIR "${SRC_FILES[@]}" -o "$EXEC"

if [[ $? -eq 0 ]]; then
    echo "Build successful: ./$EXEC"
    echo
    ./$EXEC
else
    echo "Build failed!"
    echo
    exit 1
fi