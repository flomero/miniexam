#!/bin/bash
source .tests/compile_and_test.sh

# Setup variables
EXERCISE_DIR="code/ex04"
EXERCISE_FILE="ex04.c"
MAIN_FILE=".tests/ex04/main.c"
EXECUTABLE="test_executable"
EXPECTED_FILE=".tests/ex04/04.expected"
OUTPUT_FILE="output.tmp"
TEST_INPUTS=("hello+world" "baum+" "test+123" "+baum")
CURRENT_EXERCISE_NUMBER="04"
NEXT_EXERCISE_NUMBER="05"

# Call functions
compile_exercise "$EXERCISE_DIR" "$EXERCISE_FILE" "$MAIN_FILE" "$EXECUTABLE"
run_tests "$EXECUTABLE" "$OUTPUT_FILE" "${TEST_INPUTS[@]}"
validate_output "$EXPECTED_FILE" "$OUTPUT_FILE" "$CURRENT_EXERCISE_NUMBER"
prepare_next_exercise "$NEXT_EXERCISE_NUMBER"
cleanup "$EXECUTABLE" "$OUTPUT_FILE"
