#!/bin/bash

# ANSI color codes
GREEN='\033[0;32m'
BLUE='\033[0;34m'
RED='\033[0;31m'
NC='\033[0m' # No Color

# Directories and file names
EXERCISE_DIR="code/ex00"
EXERCISE_FILE="ex00.c"
MAIN_FILE=".tests/ex00/main.c"
EXECUTABLE="test_executable"
EXPECTED_FILE=".tests/ex00/00.expected"
OUTPUT_FILE="output.tmp"

# Compile the exercise file with the main file
cc -Wall -Werror -Wextra -o $EXECUTABLE $EXERCISE_DIR/$EXERCISE_FILE $MAIN_FILE

# Check if compilation was successful
if [ $? -ne 0 ]; then
    echo "Compilation failed."
    exit 1
fi

# Define test inputs (add more if needed)
TEST_INPUTS=("a" "b" "c")

# Run the program with different inputs and save the output
for input in "${TEST_INPUTS[@]}"; do
    ./$EXECUTABLE "$input" >> $OUTPUT_FILE
done

# Compare the output to the expected output
if diff -u --ignore-all-space $EXPECTED_FILE $OUTPUT_FILE > /dev/null; then
    echo "${GREEN}Test00 Passed: Output matches expected output.${NC}"
else
    echo "${RED}Test00 Failed: Output does not match expected output.${NC}"
    diff -u --ignore-all-space $EXPECTED_FILE $OUTPUT_FILE
fi

# Cleanup
rm $EXECUTABLE
rm $OUTPUT_FILE
