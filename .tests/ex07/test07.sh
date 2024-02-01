#!/bin/bash
source .tests/compile_and_test.sh

# Setup variables
EXERCISE_DIR="code/ex07"
EXERCISE_FILE="ex07.c"
MAIN_FILE=".tests/ex07/main.c"
EXECUTABLE="test_executable"
EXPECTED_FILE=".tests/ex07/07.expected"
OUTPUT_FILE="output.tmp"
TEST_INPUTS=("0123456789" "baum+" "test+123" "9" "")
CURRENT_EXERCISE_NUMBER="07"
NEXT_EXERCISE_NUMBER="08"

# Call functions
compile_exercise "$EXERCISE_DIR" "$EXERCISE_FILE" "$MAIN_FILE" "$EXECUTABLE"
run_tests "$EXECUTABLE" "$OUTPUT_FILE" "${TEST_INPUTS[@]}"
validate_output "$EXPECTED_FILE" "$OUTPUT_FILE" "$CURRENT_EXERCISE_NUMBER" "$NEXT_EXERCISE_NUMBER"
cleanup "$EXECUTABLE" "$OUTPUT_FILE"
