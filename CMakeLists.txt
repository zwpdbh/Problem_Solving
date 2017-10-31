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
        chapter01_c++_interlude_01/BoxInterface.h)

add_executable(
        chapter03_playground
        BagInterface.h
        chapter03_array-based_implementations/ArrayBag.cpp
        chapter03_array-based_implementations/ArrayBag.h
        chapter03_array-based_implementations/main.cpp)