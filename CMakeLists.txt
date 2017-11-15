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
        chapter03_main
        chapter03_array-based_implementations/ArrayBag.cpp
        chapter03_array-based_implementations/ArrayBag.h
        chapter03_array-based_implementations/main.cpp)


add_executable(
        classes_and_dynamic_memeory_allocation
        classes_and_dynamic_memeory_allocation/StringBag.cpp
        classes_and_dynamic_memeory_allocation/StringBag.h
        classes_and_dynamic_memeory_allocation/main.cpp)

add_executable(
        class_Inheritance_01
        class_Inheritance/TableTennisPlayer.cpp
        class_Inheritance/TableTennisPlayer.h
        class_Inheritance/main.cpp
        class_Inheritance/RatedPlayer.cpp
        class_Inheritance/RatedPlayer.h)

add_executable(
        virtual_method_in_class
        class_Inheritance/virtual_methods_in_class/main.cpp
        class_Inheritance/virtual_methods_in_class/Brass.h
        class_Inheritance/virtual_methods_in_class/Brass.cpp
        class_Inheritance/virtual_methods_in_class/BrassPlus.h
        class_Inheritance/virtual_methods_in_class/BrassPlus.cpp
)

add_executable(class_Inheritance_03
        class_Inheritance/dma.h
        class_Inheritance/dma.cpp
        class_Inheritance/main_dma.cpp)

add_executable(
        class_template
        class_template/main.cpp
        class_template/stacktp.h
        class_template/stacktp.cpp)