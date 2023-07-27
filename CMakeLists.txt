cmake_minimum_required(VERSION 3.26)

project(algo_thinking
    LANGUAGES C
    VERSION 0.1.0
    DESCRIPTION "solutions to the Algorithmic Thinking (2n ed) book.")

set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED TRUE)

# Disable in-source builds.
set(CMAKE_DISABLE_IN_SOURCE_BUILD ON)
set(CMAKE_DISABLE_SOURCE_CHANGES ON)

add_subdirectory(src)

message("C++ Compiler: ${CMAKE_C_COMPILER}")
