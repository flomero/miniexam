#!/bin/bash

# Function to compile exercises
compile_exercise() {
    local exercise_dir=$1
    local exercise_file=$2
    local main_file=$3
    local executable=$4

    cc -Wall -Werror -Wextra -o "$executable" "$exercise_dir/$exercise_file" "$main_file"

    # Check if compilation was successful
    if [ $? -ne 0 ]; then
        echo "Compilation failed."
        exit 1
    fi
}

# Function to run tests
run_tests() {
    local executable=$1
    local output_file=$2
    shift 2
    local test_inputs=("$@")

    for input in "${test_inputs[@]}"; do
        "./$executable" "$input" >> "$output_file"
    done
}

# Function to validate output
validate_output() {
    local expected_file=$1
    local output_file=$2
    local exercise_number=$3

    if diff -u --ignore-all-space "$expected_file" "$output_file" > /dev/null; then
        echo "${GREEN}Test${exercise_number} Passed: Output matches expected output.${NC}"
    else
        echo "${RED}Test${exercise_number} Failed: Output does not match expected output.${NC}"
        diff -u --ignore-all-space "$expected_file" "$output_file"
    fi
}

# Function to prepare the next exercise
prepare_next_exercise() {
    local next_exercise_number=$1
    local next_exercise_file_hidden="exercises/.ex${next_exercise_number}.txt"
    local next_exercise_file_visable="exercises/ex${next_exercise_number}.txt"
    echo
    echo "----------------------------------"
    if [ -f "$next_exercise_file_hidden" ]; then
        mv "$next_exercise_file_hidden" "$next_exercise_file_visable"
        echo "${GREEN}Exercise ex$next_exercise_number is now visable.${NC}"
    else
        echo "${RED}File for exercise ex$next_exercise_number not found. Maybe it is already shown.${NC}"
    fi
}

# Function for cleanup
cleanup() {
    rm "$@"
}
