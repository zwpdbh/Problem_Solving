cmake_minimum_required(VERSION 3.9)

# set(CMAKE_C_COMPILER /usr/local/Cellar/gcc/7.2.0/bin/gcc-7)
# set(CMAKE_CXX_COMPILER /usr/local/Cellar/gcc/7.2.0/bin/g++-7)
set(CMAKE_C_COMPILER /usr/local/opt/llvm/bin/clang)
set(CMAKE_CXX_COMPILER /usr/local/opt/llvm/bin/clang++)

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


# this dome shows the use of link-list based bag implementation
# Also, in the main function, it uses one interface to test two kind of implementation of bag
# this shows the power of polymorphism using late binding (see interlude 02)
# 1) use virtual method to tell compiler to decide it during run time.
# 2) use new to allocate memory on heap instead of on stack.
add_executable(
        ch04_link-based_implementations
        ../interfaces/BagInterface.h
        ../interlude_02_pointers_polymorphism_and_memory_allocation/ArrayBag.h
        main.cpp
        LinkedBag.h
        Node.h
)