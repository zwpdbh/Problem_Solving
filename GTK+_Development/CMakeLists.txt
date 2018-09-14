cmake_minimum_required(VERSION 3.9)
# This must be done before any language is set (ie before any project() or enable_language() command).
set(CMAKE_C_COMPILER "/usr/local/Cellar/gcc/7.3.0/bin/gcc-7")
set(CMAKE_CXX_COMPILER "/usr/local/Cellar/gcc/7.3.0/bin/g++-7")

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
# cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=ON -H. -Bbuild
set(CMAKE_CXX_STANDARD 11)
# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

#project(GTK+_Development)

# set the output folder where your program will be created
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH  ${CMAKE_BINARY_DIR})
# CMAKE_SOURCE_DIR is where cmake was started, the top level source directory
# CMAKE_BINARY_DIR is the same as CMAKE_SOURCE_DIR, otherwise this is the top level directory of your build tree

include_directories("${PROJECT_SOURCE_DIR}")
# contains the full path to the root of your project source directory (for example, to the nearest directory where
# CMakeLists.txt contains the PROJECT() command)


#use pkg-config tool to detect gtk headers and link libs
FIND_PACKAGE(PkgConfig REQUIRED)
PKG_CHECK_MODULES(GTK3 REQUIRED gtk+-3.0)

#include gtk3 headers
#pkg-config --cflags gtk+-3.0, returns directory names to the com- piler’s include path.
#This will make sure that the GTK+ header files are available to the compiler.
INCLUDE_DIRECTORIES(${GTK3_INCLUDE_DIRS})

#link gtk3 libs
#pkg-config --libs gtk+-3.0, appends options to the command line used by the linker
#including library directory path extensions and a list of libraries needed for linking to the executable.
LINK_DIRECTORIES(${GTK3_LIBRARY_DIRS})

#add other flags from gtk3
ADD_DEFINITIONS(${GTK3_CFLAGS_OTHER})


# ch02
add_executable(
        gtk_hello_world
        hello_world.cpp
)
target_link_libraries(gtk_hello_world ${GTK3_LIBRARIES})





#include_directories("/usr/local/include/gtk-3.0/")
#include_directories("/usr/local/Cellar/glib/2.58.0_1/include/glib-2.0/")
#include_directories("/usr/local/Cellar/glib/2.58.0_1/lib/glib-2.0/include/")
#include_directories("/usr/local/Cellar/pango/1.42.4/include/pango-1.0/")
#include_directories("/usr/local/Cellar/cairo/1.14.12/include/cairo/")
#include_directories("/usr/local/Cellar/gdk-pixbuf/2.38.0/include/gdk-pixbuf-2.0/")
#include_directories("/usr/local/Cellar/atk/2.30.0/include/atk-1.0/")
#
#
#link_directories("/usr/local/Cellar/gtk+3/3.22.30/lib")
#link_directories("/usr/local/Cellar/glib/2.58.0_1/lib")
#
#link_libraries(
#        "gtk-3.0"
##        "gailutil-3.0"
##        "gio-2.0"
##        "glib-2.0"
#        "gobject-2.0"
#)