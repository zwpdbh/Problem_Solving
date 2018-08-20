cmake_minimum_required(VERSION 3.9)
# This must be done before any language is set (ie before any project() or enable_language() command).
set(CMAKE_C_COMPILER "/usr/local/opt/llvm/bin/clang")
set(CMAKE_CXX_COMPILER "/usr/local/opt/llvm/bin/clang++")

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
# cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=ON -H. -Bbuild
set(CMAKE_CXX_STANDARD 11)
# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

# set the output folder where your program will be created
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH  ${CMAKE_BINARY_DIR})
# CMAKE_SOURCE_DIR is where cmake was started, the top level source directory
# CMAKE_BINARY_DIR is the same as CMAKE_SOURCE_DIR, otherwise this is the top level directory of your build tree

include_directories("${PROJECT_SOURCE_DIR}")
# contains the full path to the root of your project source directory (for example, to the nearest directory where
# CMakeLists.txt contains the PROJECT() command)


# shows the basic operator overloading on a custom class
# When using Binary Overloaed Operators as Non-Member Functions:
# y < z is treated as if the call operator<(y, z)
add_executable(
        test_operator_overloading
        operator_overloading/binary_operator_overloading_as_nonmember_function/main.cpp
        operator_overloading/binary_operator_overloading_as_nonmember_function/phonenumber.cpp
)
add_executable(
        overloading_increment_operators
        operator_overloading/unary_operator_overloading_as_member_function/main.cpp
        operator_overloading/unary_operator_overloading_as_member_function/date.cpp
)
add_executable(
        demo_operator_overloading_with_custom_class
        operator_overloading/demo_operator_overloading_with_custom_class/main.cpp
        operator_overloading/demo_operator_overloading_with_custom_class/array.cpp
)
# end of demos show operator overloading


add_executable(
        different_print_function
        different_print_function.cpp
)

