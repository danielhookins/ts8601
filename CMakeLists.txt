cmake_minimum_required(VERSION 3.0)
project(ts8601 C)

set(CMAKE_C_STANDARD 11)

# Set the source directory
set(SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)

# Set the build directory
set(BIN_DIR ${CMAKE_CURRENT_BINARY_DIR}/bin)

# Set the output directory for the executable based on build type
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${BIN_DIR})

# Add the executable target
add_executable(ts8601 ${SRC_DIR}/main.c)
