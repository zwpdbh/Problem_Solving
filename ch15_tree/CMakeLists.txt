
cmake_minimum_required(VERSION 3.9)
# This must be done before any language is set (ie before any project() or enable_language() command).
set(CMAKE_C_COMPILER "/usr/local/opt/llvm/bin/clang")
set(CMAKE_CXX_COMPILER "/usr/local/opt/llvm/bin/clang++")

# When enable this, it goes into loop?
#project(Problem_Solving)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
# cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=ON -H. -Bbuild
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


add_executable(binarytreeinterface
        main_test.cpp
        binarytreeinterface.hpp
        BinaryNode.hpp
        BinaryNodeTree.hpp
        BinarySearchTree.hpp
)