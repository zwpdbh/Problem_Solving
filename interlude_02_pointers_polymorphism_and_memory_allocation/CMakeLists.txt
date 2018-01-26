cmake_minimum_required(VERSION 3.9)

set(CMAKE_C_COMPILER /usr/local/Cellar/gcc/7.2.0/bin/gcc-7)
set(CMAKE_CXX_COMPILER /usr/local/Cellar/gcc/7.2.0/bin/g++-7)

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


# This chapter shows the differences between early binding and late binding (which is an aspect of polymorphism)
# It is a way to communicate to the compiler that the code to execute should not be determined until the program is
# running.

# we allocate memory for a variable on the free store(heep) by using the new operator
# the new operator returns the memory address of the variable in the free store so the program can use it.
# This memory address must be placed in a special type of variable called a pointer variable.


# demo shows the problem of early binding
add_executable(
        demo_problem_of_early_binding
        ../interlude_01_C++_classes/PlainBox.h
        ../interlude_01_C++_classes/MagicBox.h
        demo_problem_of_early_binding.cpp
)
# We need a way to communicate to the compiler that the code to execute should not be determined until
# the program is running. This is called late binding, which is an aspect of polymorphism.
# we need two tools: pointer variables and virtual methods

# demo shows the use of new operator to allocate memory for a variable on the free store (heap) instead of on stack.
add_executable(
        demo_shows_using_new_operator_to_allocate_memory_on_heap
        demo_shows_using_new_operator_to_allocate_memory_on_heap.cpp
)

# demo shows best option for preventing a memory leak: is to not use a function to return a pointer to a newly created object.
# Instead, you should define a class that has a method for this task. The class takes responsibility for deleting the object
# in the free store and ensures that there is no memory leak.
add_executable(
        demo_shows_good_practise_of_good_memory
        demo_shows_good_practise_of_good_memory.cpp
        GoodMemory.h
        GoodMemory.cpp
)

# demo shows late binding
# 1) declare the method we want to late binding as virtual method to communicate to the compiler that the code
#    to execute should not be determined until the program is running.
# 2) to fully implement late binding, we must create the variables in the heap using pointers to reference them.
add_executable(
        demo_shows_late_binding
        PlainBox.h
        demo_shows_late_binding.cpp
)