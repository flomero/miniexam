#!/bin/bash
source .tests/compile_and_test.sh

# Setup variables
EXERCISE_DIR="code/ex13"
EXERCISE_FILE="ex13.c"
MAIN_FILE=""
EXECUTABLE="test_executable"
EXPECTED_FILE=".tests/ex13/13.expected"
OUTPUT_FILE="output.tmp"
TEST_INPUTS=("Hello" "World" "Zigzag" "Pattern")
CURRENT_EXERCISE_NUMBER="13"
NEXT_EXERCISE_NUMBER="14"

# Call functions
compile_exercise "$EXERCISE_DIR" "$EXERCISE_FILE" "$MAIN_FILE" "$EXECUTABLE"
run_tests_with_multible_arguments "$EXECUTABLE" "$OUTPUT_FILE" "${TEST_INPUTS[@]}"
validate_output "$EXPECTED_FILE" "$OUTPUT_FILE" "$CURRENT_EXERCISE_NUMBER"
cleanup "$EXECUTABLE" "$OUTPUT_FILE"
