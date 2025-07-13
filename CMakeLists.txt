cmake_minimum_required(VERSION 3.10)
project(cmake_test)

# נשתמש ב־C++17
set(CMAKE_CXX_STANDARD 17)

# נוסיף את תיקיית include לקומפיילר
include_directories(include)

# נמצא את כל קבצי המקור
file(GLOB SOURCES "src/*.cpp")

# נבנה את האובייקט
add_executable(MyProject ${SOURCES})
