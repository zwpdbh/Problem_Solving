cmake_minimum_required(VERSION 3.8)
project(Problem_Solving)

set(CMAKE_CXX_STANDARD 11)

#set(SOURCE_FILES main.cpp)
#add_executable(Problem_Solving ${SOURCE_FILES})

add_executable(
        playground tmp/playground.cpp
        tmp/PlainBox.cpp
        tmp/ToyBox.cpp
        tmp/MagicBox.cpp
        tmp/BoxInterface.h)