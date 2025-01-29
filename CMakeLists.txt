cmake_minimum_required(VERSION 3.10)
project(MyMathLibProject)

set(CMAKE_CXX_STANDARD 17)

# Ensure header files are included properly
include_directories(${CMAKE_SOURCE_DIR})  # Add root project directory

# Define source files for main executable
set(SOURCES
    main.cpp
)

# Create main executable
add_executable(MyMathLibExecutable ${SOURCES})

# Enable unit testing
option(ENABLE_TESTING "Enable a Unit Testing build." ON)

# Download GoogleTest using FetchContent
include(FetchContent)
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG release-1.11.0
)
FetchContent_MakeAvailable(googletest)

# If testing is enabled, set up unit tests
if(ENABLE_TESTING)
    enable_testing()

    # Define test sources
    set(TEST_SOURCES
        tests/test.cpp
    )

    # Create test executable
    add_executable(test_suite ${TEST_SOURCES})

    # Ensure test suite can find headers
    target_include_directories(test_suite PRIVATE ${CMAKE_SOURCE_DIR})

    # Link GoogleTest
    target_link_libraries(test_suite PRIVATE gtest gtest_main)

    # Register tests with CTest
    add_test(NAME AllTests COMMAND test_suite)
endif()
