cmake_minimum_required(VERSION 3.9)

set(CMAKE_C_COMPILER /usr/local/Cellar/gcc/7.2.0/bin/gcc-7)
set(CMAKE_CXX_COMPILER /usr/local/Cellar/gcc/7.2.0/bin/g++-7)

set(CMAKE_CXX_STANDARD 11)

# set the output folder where your program will be created
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH  ${CMAKE_BINARY_DIR})
# CMAKE_SOURCE_DIR is where cmake was started, the top level source directory
# CMAKE_BINARY_DIR is the same as CMAKE_SOURCE_DIR, otherwise this is the top level directory of your build tree

include_directories("${PROJECT_SOURCE_DIR}")
# contains the full path to the root of your project source directory (for example, to the nearest directory where
# CMakeLists.txt contains the PROJECT() command)


# This chapter shows the differences between early binding and late binding (which is an aspect of polymorphism)
# It is a way to communicate to the compiler that the code to execute should not be determined until the program is
# running.

# we allocate memory for a variable on the free store(heep) by using the new operator
# the new operator returns the memory address of the variable in the free store so the program can use it.
# This memory address must be placed in a special type of variable called a pointer variable.

add_executable(
        interlude_02_pointers_polymorphism_and_memory_allocation
        ../interfaces/BagInterface.h
        main.cpp
)

add_executable(
        problem_of_early_binding
        a_problem_main.cpp
)