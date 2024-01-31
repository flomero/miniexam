#!/bin/bash
source .tests/compile_and_test.sh

# Setup variables
EXERCISE_DIR="code/ex02"
EXERCISE_FILE="ex02.c"
MAIN_FILE=".tests/ex02/main.c"
EXECUTABLE="test_executable"
EXPECTED_FILE=".tests/ex02/02.expected"
OUTPUT_FILE="output.tmp"
TEST_INPUTS=("1" "0" "2147483647" "-2147483648")
CURRENT_EXERCISE_NUMBER="02"
NEXT_EXERCISE_NUMBER="03"

# Call functions
compile_exercise "$EXERCISE_DIR" "$EXERCISE_FILE" "$MAIN_FILE" "$EXECUTABLE"
run_tests "$EXECUTABLE" "$OUTPUT_FILE" "${TEST_INPUTS[@]}"
validate_output "$EXPECTED_FILE" "$OUTPUT_FILE" "$CURRENT_EXERCISE_NUMBER"
prepare_next_exercise "$NEXT_EXERCISE_NUMBER"
cleanup "$EXECUTABLE" "$OUTPUT_FILE"
