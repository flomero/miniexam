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

run_tests() {
    local executable=$1
    local output_file=$2
    local timeout_duration=1  # Timeout set to 5 seconds
    shift 2
    local test_inputs=("$@")

    for input in "${test_inputs[@]}"; do
        # Start spinning cursor
        spin='-\|/'
        i=0

        # Run the spinner in the background
        spin_cursor() {
            while true; do
                i=$(( (i+1) %4 ))
                printf "\r${spin:$i:1}"
                sleep .1
            done
        }
        spin_cursor &
        spin_pid=$!

        # Run the command in the background
        "./$executable" "$input" >> "$output_file" &
        pid=$!

        # Wait for the specified duration
        sleep "$timeout_duration"

        # Check if the process is still running and kill it if so
        if kill -0 $pid 2>/dev/null; then
            echo -e "\rTest failed due to timeout" >> "$output_file"
            kill $pid 2>/dev/null
        fi

        # Kill the spinner
        kill $spin_pid 2>/dev/null
        wait $spin_pid 2>/dev/null

        # Overwrite the spinner with spaces and move back to the start of the line
        echo -ne "\r    \r"

        # Wait for the process to finish or be terminated
        wait $pid 2>/dev/null
    done
}

run_tests_with_multible_arguments() {
    local executable=$1
    local output_file=$2
    local timeout_duration=1  # Timeout set to 5 seconds
    shift 2
    local test_inputs=("$@")


    # Start spinning cursor
    spin='-\|/'
    i=0

    # Run the spinner in the background
    spin_cursor() {
        while true; do
            i=$(( (i+1) %4 ))
            printf "\r${spin:$i:1}"
            sleep .1
        done
    }
    spin_cursor &
    spin_pid=$!

    # Run the command in the background
    "./$executable" "${test_inputs[@]}" >> "$output_file" &
    pid=$!

    # Wait for the specified duration
    sleep "$timeout_duration"

    # Check if the process is still running and kill it if so
    if kill -0 $pid 2>/dev/null; then
        echo -e "\rTest failed due to timeout" >> "$output_file"
        kill $pid 2>/dev/null
    fi

    # Kill the spinner
    kill $spin_pid 2>/dev/null
    wait $spin_pid 2>/dev/null

    # Overwrite the spinner with spaces and move back to the start of the line
    echo -ne "\r    \r"

    # Wait for the process to finish or be terminated
    wait $pid 2>/dev/null
}

# Function to validate output
validate_output() {
    local expected_file=$1
    local output_file=$2
    local exercise_number=$3
    local next_exercise_number=$4

    if diff -u "$expected_file" "$output_file" > /dev/null; then
        echo "${GREEN}Test${exercise_number} Passed: Output matches expected output.${NC}"
        if [ -n "$next_exercise_number" ]; then
            prepare_next_exercise "$next_exercise_number"
        fi
    else
        echo "${RED}Test${exercise_number} Failed: Output does not match expected output.${NC}"
        diff -u "$expected_file" "$output_file"
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
