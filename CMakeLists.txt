cmake_minimum_required(VERSION 3.10)
project(cmake_test)

# Use C++17 standard
set(CMAKE_CXX_STANDARD 17)

# Add the include directory to the compiler
include_directories(include)

# Find all source files in the src directory
file(GLOB SOURCES "src/*.cpp")

# Create the executable from the source files
add_executable(MyProject ${SOURCES})
