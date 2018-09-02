cmake_minimum_required(VERSION 3.9)
# This must be done before any language is set (ie before any project() or enable_language() command).
set(CMAKE_C_COMPILER "/usr/local/opt/llvm/bin/clang")
set(CMAKE_CXX_COMPILER "/usr/local/opt/llvm/bin/clang++")

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
# cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=ON -H. -Bbuild
set(CMAKE_CXX_STANDARD 11)
# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

#project(Fundanmental)

# set the output folder where your program will be created
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH  ${CMAKE_BINARY_DIR})
# CMAKE_SOURCE_DIR is where cmake was started, the top level source directory
# CMAKE_BINARY_DIR is the same as CMAKE_SOURCE_DIR, otherwise this is the top level directory of your build tree

include_directories("${PROJECT_SOURCE_DIR}")
# contains the full path to the root of your project source directory (for example, to the nearest directory where
# CMakeLists.txt contains the PROJECT() command)



add_executable(
        basics_prefix_vs_postfix_operator
        basics/prefix_and_postfix_operator.cpp
)

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
        adt_compare
        basics/ADT_implementation_in_C/main_generic_compare.cpp
)

add_executable(
        memory_allignment
        basics/memory_allignment.cpp
)



add_executable(
        stream_input_main
        stream_input_and_output/stream_input_main.cpp
)

add_executable(
        manipulator_widthValue
        stream_input_and_output/stream_manipulators/widthValue_main.cpp
)

add_executable(
        fig_14_03
        file_processing/fig14_03.cpp
)

add_executable(
        fig_14_06
        file_processing/fig14_06.cpp
)

# shows the usage of RandomFile access
add_executable(
        credit_processing_system
        file_processing/credit_processing_program/clientdata.cpp
        file_processing/credit_processing_program/main.cpp
)


# Chapter 15
add_executable(
        ch15_ex04
        container_and_literator/fig15_04.cpp
)

add_executable(
        ch15_ex10
        container_and_literator/fig15_10.cpp
)

add_executable(
        ch15_ex11
        container_and_literator/fig15_11.cpp
)

add_executable(
        ch15_ex13
        container_and_literator/fig15_13.cpp
)

add_executable(
        ch15_ex14
        container_and_literator/fig15_14.cpp
)


add_executable(
        ch15_ex19
        container_and_literator/fig15_19.cpp
)

add_executable(
        ch15_ex21
        container_and_literator/fig15_21.cpp
)

add_executable(
        ch16_01
        standard_algorithm/fig16_01.cpp
)

add_executable(
        ch16_02
        standard_algorithm/fig16_02.cpp
)

add_executable(
        ch16_03
        standard_algorithm/fig16_03.cpp
)

add_executable(
        ch16_04
        standard_algorithm/fig16_04.cpp
)

add_executable(
        ch16_08
        standard_algorithm/fig16_08.cpp
)