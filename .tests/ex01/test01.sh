#!/bin/bash
source .tests/compile_and_test.sh

# Setup variables
EXERCISE_DIR="code/ex01"
EXERCISE_FILE="ex01.c"
MAIN_FILE=".tests/ex01/main.c"
EXECUTABLE="test_executable"
EXPECTED_FILE=".tests/ex01/01.expected"
OUTPUT_FILE="output.tmp"
TEST_INPUTS=("Hello" "." "")
CURRENT_EXERCISE_NUMBER="01"
NEXT_EXERCISE_NUMBER="02"

# Call functions
compile_exercise "$EXERCISE_DIR" "$EXERCISE_FILE" "$MAIN_FILE" "$EXECUTABLE"
run_tests "$EXECUTABLE" "$OUTPUT_FILE" "${TEST_INPUTS[@]}"
validate_output "$EXPECTED_FILE" "$OUTPUT_FILE" "$CURRENT_EXERCISE_NUMBER" "$NEXT_EXERCISE_NUMBER"
cleanup "$EXECUTABLE" "$OUTPUT_FILE"
