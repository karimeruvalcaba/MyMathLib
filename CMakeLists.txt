if(ENABLE_TESTING)
    enable_testing()

    # Define test sources
    set(TEST_SOURCES
        tests/test.cpp
        tests/test1.cpp
        tests/test2.cpp
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
