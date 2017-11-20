cmake_minimum_required(VERSION 3.8)
project(Problem_Solving)

set(CMAKE_CXX_STANDARD 11)

#set(SOURCE_FILES main.cpp)
#add_executable(Problem_Solving ${SOURCE_FILES})

add_executable(
        chapter01_playground chapter01_c++_interlude_01/main.cpp
        chapter01_c++_interlude_01/PlainBox.cpp
        chapter01_c++_interlude_01/ToyBox.cpp
        chapter01_c++_interlude_01/MagicBox.cpp
        interface_and_template_and_inheritance/ArrayBag.cpp interface_and_template_and_inheritance/ArrayBag.h)

add_executable(
        classes_and_dynamic_memeory_allocation
        classes_and_dynamic_memeory_allocation/StringBag.cpp
        classes_and_dynamic_memeory_allocation/main.cpp)


add_executable(
        Interface_and_template_and_inheritance
        interface_and_template_and_inheritance/BagInterface.h
        interface_and_template_and_inheritance/ArrayBag.h
        interface_and_template_and_inheritance/main.cpp)