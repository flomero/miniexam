#!/bin/bash
source .tests/compile_and_test.sh

# Setup variables
EXERCISE_DIR="code/ex09"
EXERCISE_FILE="ex09.c"
MAIN_FILE=".tests/ex09/main.c"
EXECUTABLE="test_executable"
EXPECTED_FILE=".tests/ex09/09.expected"
OUTPUT_FILE="output.tmp"
TEST_INPUTS=("HelloWorld" "BaumHaus" "1234567" "9" "" "123")
CURRENT_EXERCISE_NUMBER="09"
NEXT_EXERCISE_NUMBER="10"

# Call functions
compile_exercise "$EXERCISE_DIR" "$EXERCISE_FILE" "$MAIN_FILE" "$EXECUTABLE"
run_tests "$EXECUTABLE" "$OUTPUT_FILE" "${TEST_INPUTS[@]}"
validate_output "$EXPECTED_FILE" "$OUTPUT_FILE" "$CURRENT_EXERCISE_NUMBER" "$NEXT_EXERCISE_NUMBER"
cleanup "$EXECUTABLE" "$OUTPUT_FILE"
