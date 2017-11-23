cmake_minimum_required(VERSION 3.8)
project(Problem_Solving)

set(CMAKE_CXX_STANDARD 11)

#set(SOURCE_FILES main.cpp)
#add_executable(Problem_Solving ${SOURCE_FILES})


add_executable(
        classes_and_dynamic_memeory_allocation
        classes_and_dynamic_memeory_allocation/StringBag.cpp
        classes_and_dynamic_memeory_allocation/main.cpp)


add_executable(
        ch01_03_interface_and_template_and_inheritance
        ch01_03_interface_and_template_and_inheritance/BagInterface.h
        ch01_03_interface_and_template_and_inheritance/ArrayBag.h
        ch01_03_interface_and_template_and_inheritance/main.cpp)


add_executable(
        interlude_02_pointers_polymorphism_and_memory_allocation
        interlude_02_pointers_polymorphism_and_memory_allocation/main.cpp)

add_executable(
        ch04_link-based_implementations
        ch04_link-based_implementations/main.cpp
        ch04_link-based_implementations/Node.h
        ch04_link-based_implementations/BagInterface.h
        ch04_link-based_implementations/LinkedBag.h)