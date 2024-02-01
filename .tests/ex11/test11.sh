#!/bin/bash
source .tests/compile_and_test.sh

# Setup variables
EXERCISE_DIR="code/ex11"
EXERCISE_FILE="ex11.c"
MAIN_FILE=""
EXECUTABLE="test_executable"
EXPECTED_FILE=".tests/ex11/11.expected"
OUTPUT_FILE="output.tmp"
TEST_INPUTS=("HelloWorld" "BaumHaus" "1234567" "9" "123")
CURRENT_EXERCISE_NUMBER="11"
NEXT_EXERCISE_NUMBER="12"

# Call functions
compile_exercise "$EXERCISE_DIR" "$EXERCISE_FILE" "$MAIN_FILE" "$EXECUTABLE"
run_tests_with_multible_arguments "$EXECUTABLE" "$OUTPUT_FILE" "${TEST_INPUTS[@]}"
validate_output "$EXPECTED_FILE" "$OUTPUT_FILE" "$CURRENT_EXERCISE_NUMBER"
prepare_next_exercise "$NEXT_EXERCISE_NUMBER"
cleanup "$EXECUTABLE" "$OUTPUT_FILE"
