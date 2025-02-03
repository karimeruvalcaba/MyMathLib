cmake_minimum_required(VERSION 3.30)
project(unit_test)

set(CMAKE_CXX_STANDARD 17)

set(SOURCES
        main.cpp
        MyMathLib.h
        KarimeMathLib.h
        KarimeMathLib2.h

)


add_executable(unit_test main.cpp)

# Opciones
option(ENABLE_TESTING "Enable a Unit Testing build." ON)

# Descarga GoogleTest usando FetchContent
include(FetchContent)
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG release-1.11.0
)
FetchContent_MakeAvailable(googletest)

# Si se habilitan las pruebas, agrega GoogleTest y las pruebas unitarias
if(ENABLE_TESTING)
    enable_testing()

    # Add the test cases
    add_executable(MathTestCase tests/test.cpp)
    target_link_libraries(MathTestCase PRIVATE gtest gtest_main)
    target_include_directories(MathTestCase PRIVATE ${CMAKE_SOURCE_DIR})
    add_test(NAME TestMath COMMAND MathTestCase)

    add_executable(KarimeMathLibTest tests/test1.cpp)
    target_link_libraries(KarimeMathLibTest PRIVATE gtest gtest_main)
    target_include_directories(KarimeMathLibTest PRIVATE ${CMAKE_SOURCE_DIR})
    add_test(NAME TestKarimeMathLib COMMAND KarimeMathLibTest)

    add_executable(KarimeMathLib2Test tests/test2.cpp)
    target_link_libraries(KarimeMathLib2Test PRIVATE gtest gtest_main)
    target_include_directories(KarimeMathLib2Test PRIVATE ${CMAKE_SOURCE_DIR})
    add_test(NAME TestKarimeMathLib2 COMMAND KarimeMathLib2Test)

endif()