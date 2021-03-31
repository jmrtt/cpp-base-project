cmake_minimum_required(VERSION 3.16)
project(cpp_base_project)

# Set a default build type if none was specified
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE "Release")
endif()

# Set standard to C++20 and enable testing
set(CMAKE_CXX_STANDARD 20)
enable_testing()

# Configure and run conan. Download automatically if doesn't exists and perform a basic setup
if(NOT EXISTS "${CMAKE_BINARY_DIR}/conan.cmake")
    message(STATUS "Downloading conan.cmake from https://github.com/conan-io/cmake-conan")
    file(DOWNLOAD "https://raw.githubusercontent.com/conan-io/cmake-conan/master/conan.cmake"
            "${CMAKE_BINARY_DIR}/conan.cmake")
endif()

include(${CMAKE_BINARY_DIR}/conan.cmake)

conan_cmake_run(REQUIRES catch2/2.13.4
                BASIC_SETUP)

# Main executable
add_executable(cpp_base_project src/main.cpp src/factorial.hpp)

# Tests
add_executable(catch_tests tests/catch_tests.cpp tests/factorial_tests.cpp)
target_include_directories(catch_tests PUBLIC src)

add_test(NAME catchTests COMMAND catch_tests)
