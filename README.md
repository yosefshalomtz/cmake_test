# CMake Test Project
This is a simple CMake project to demonstrate how to set up a basic C++ project using CMake.

### build on windows:
> cd cmake_test
> mkdir build
> cd build
> cmake -G "MinGW Makefiles" ..
> mingw32-make

### build on linux:
> cd cmake_test
> mkdir build && cd build
> cmake -G "Unix Makefiles" ..
> make