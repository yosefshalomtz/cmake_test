# CMake Test Project
This is a simple CMake project to demonstrate how to set up a basic C++ project using CMake.

### build on windows:
requirements:
- CMake installed
- MinGW installed
- Git installed

type the following commands in the terminal:
> git clone https://github.com/yosefshalomtz/cmake_test
> cd cmake_test
> mkdir build
> cd build
> cmake -G "MinGW Makefiles" ..
> mingw32-make

### build on linux:
requirements:
- CMake installed
- MinGW installed
- Git installed

type the following commands in the terminal:
> git clone https://github.com/yosefshalomtz/cmake_test
> cd cmake_test
> mkdir build && cd build
> cmake -G "Unix Makefiles" ..
> make

# issues:
If you encounter any issues, please open an issue on the GitHub repository.