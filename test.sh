#!/bin/bash

# ANSI color codes
GREEN='\033[0;32m'
BLUE='\033[0;34m'
RED='\033[0;31m'
NC='\033[0m' # No Color

# Directory where test scripts are located
TEST_SCRIPT_DIR=".tests"

# Function to run a single test script
run_test_script() {
    script=$1
    if [ -x "$script" ]; then
        echo "${BLUE}Running test: $(basename "$script")${NC}"
        . "$script"
        echo "----------------------------------"
    else
        echo "${RED}Test script $script not executable or found.${NC}"
    fi
}

# Check if an argument is given
if [ "$#" -eq 1 ]; then
    TEST_SCRIPT="${TEST_SCRIPT_DIR}/ex$1/test$1.sh"
    run_test_script "$TEST_SCRIPT"
else
    echo "Running all tests..."
    for script in ${TEST_SCRIPT_DIR}/*/test*.sh; do
        run_test_script "$script"
    done
fi
