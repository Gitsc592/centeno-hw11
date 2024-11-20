#!/bin/bash

### Filename : build.sh
## Author : Sed Centeno
## Date : 11/19/2024
###
## Builds "read_resistance.cpp"

echo "Building read_resistance.cpp..."
g++ ./read_resistance.cpp ./AnalogIn.cpp -o read_resistance
echo "Finished building."
