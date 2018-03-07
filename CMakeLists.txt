cmake_minimum_required(VERSION 3.9)
project(Problem_Solving)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
# cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=ON -H. -Bbuild
set(CMAKE_CXX_STANDARD 11)

set(CMAKE_C_COMPILER /usr/local/opt/llvm/bin/clang)
set(CMAKE_CXX_COMPILER /usr/local/opt/llvm/bin/clang++)



# set the output folder where your program will be created
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH  ${CMAKE_BINARY_DIR})
# CMAKE_SOURCE_DIR is where cmake was started, the top level source directory
# CMAKE_BINARY_DIR is the same as CMAKE_SOURCE_DIR, otherwise this is the top level directory of your build tree

include_directories("${PROJECT_SOURCE_DIR}")
# contains the full path to the root of your project source directory (for example, to the nearest directory where
# CMakeLists.txt contains the PROJECT() command)


add_subdirectory(ch01_03_interface_and_template_and_inheritance)
add_subdirectory(ch04_link-based_implementations)
add_subdirectory(ch05_recursion_problems)
add_subdirectory(interlude_01_C++_classes)
add_subdirectory(interlude_02_pointers_polymorphism_and_memory_allocation)
add_subdirectory(ch06_stacks)
add_subdirectory(ch07_stack_implementations)
add_subdirectory(interlude_03_exceptions)
