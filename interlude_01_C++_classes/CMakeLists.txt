cmake_minimum_required(VERSION 3.9)

set(CMAKE_C_COMPILER /usr/local/Cellar/gcc/7.2.0/bin/gcc-7)
set(CMAKE_CXX_COMPILER /usr/local/Cellar/gcc/7.2.0/bin/g++-7)

set(CMAKE_CXX_STANDARD 11)

# set the output folder where your program will be created
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})
# CMAKE_SOURCE_DIR is where cmake was started, the top level source directory
# CMAKE_BINARY_DIR is the same as CMAKE_SOURCE_DIR, otherwise this is the top level directory of your build tree

include_directories("${PROJECT_SOURCE_DIR}")
# contains the full path to the root of your project source directory (for example, to the nearest directory where
# CMakeLists.txt contains the PROJECT() command)

# this demo shows the class concept and template
add_executable(
        plainbox_demo
        PlainBox.h
        demo_plainbox.cpp
)

# this demo shows the inheritance of class
add_executable(
        toybox_demo
        demo_toybox.cpp
        ToyBox.h
)

# this demo shows the overriding of base class method
add_executable(
        magicbox_demo
        MagicBox.h
        demo_magicbox.cpp
)

# demo shows the problem of not using virtual key word to define a method during inheritance
add_executable(
        demo_why_declare_method_as_virtual
        demo_why_declare_method_as_virtual.cpp
)

add_executable(
        classes_and_dynamic_memeory_allocation
        StringBag.cpp
        main.cpp
)
