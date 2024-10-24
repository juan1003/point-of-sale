#!/bin/bash

# Build the project

build_project() {
    # Initialize an empty string for the object files
    objects=""

    # Iterate through all .c files in the current directory
    for file in *.c; do
        # Check if there are any .c files in the directory
        if [[ -f "$file" ]]; then
            # Compile each .c file into an object file (.o)
            gcc -c "$file" -o "${file%.c}.o"
            
            # Add the object file to the list of objects
            objects+="${file%.c}.o "
        fi
    done

    # If object files were compiled, link them into the final executable
    if [[ -n "$objects" ]]; then
        # Create the final executable (named "output" here, you can change it)
        gcc $objects -o restaurant

        echo "Build successful! Executable 'output' created."
    else
        echo "No .c files found in the current directory."
    fi
}

build_project
