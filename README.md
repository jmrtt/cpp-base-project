# C++ base template project

This is a C++ base template project with the following components:
* [CMake](https://cmake.org/) for cross-platform build system;
* Default C++ standard set to C++20, so we can use new features like concepts;
* [Catch2](https://github.com/catchorg/Catch2) for testing;
* [Conan](https://conan.io/) for package manager that is called by CMake to download the necessary dependencies;

This project was only tested in Ubuntu 20.10.

## Build

To build the project, create a directory and run the following commands:

```shell
mkdir build && cd build
cmake ..
make
 ./bin/cpp_base_project
```

## Test

Testing uses [CTest](https://cmake.org/cmake/help/latest/manual/ctest.1.html) and [Catch2](https://github.com/catchorg/Catch2) and after building the project, run:

```shell
make test
```
