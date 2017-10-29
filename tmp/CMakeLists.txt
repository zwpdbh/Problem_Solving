cmake_minimum_required(VERSION 3.8)
set(CMAKE_BUILD_TYPE DEBUG)
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

project("Problem solving C++ part one")
# Set the output folder where your program will be created
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})

# The following folder will be included
include_directories("${PROJECT_SOURCE_DIR}")

add_executable(
	firstCmake 
	playground.cpp  
	PlainBox.cpp 
	ToyBox.cpp
)

