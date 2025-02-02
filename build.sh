#!/bin/bash

# Exit immediately if any command fails
set -e

# Create the build directory if it doesn't exist
mkdir -p build

# Navigate into the build directory
cd build

# Run CMake to generate the Makefile
cmake ..

# Compile the project using Make
make

# Return to the project root directory
cd ..

# Notify the user that the build was successful
echo "✅ Build complete! Run the program using: ./build/simplecalc"
