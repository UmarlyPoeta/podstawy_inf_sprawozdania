#!/bin/bash
g++ -o zadanie1 z01.cpp
if [ $? -eq 0 ]; then
    echo "Compilation successful."


    ./zadanie1


    if [ $? -eq 0 ]; then
        echo "Program ran successfully."
        python3 wykresy.py

        if [ $? -eq 0 ]; then
            echo "Plot created successfully."
        else
            echo "Failed to create plot."
        fi
    else
        echo "Program execution failed."
    fi
else
    echo "Compilation failed."
fi