cmake_minimum_required(VERSION 3.9)
# This must be done before any language is set (ie before any project() or enable_language() command).
set(CMAKE_C_COMPILER "/usr/local/opt/llvm/bin/clang")
set(CMAKE_CXX_COMPILER "/usr/local/opt/llvm/bin/clang++")

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
# cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=ON -H. -Bbuild
set(CMAKE_CXX_STANDARD 11)
# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

# Must set project to eanble the previously setted configuration, such as compiler options.
#project(Networking_with_Boost)

# set the output folder where your program will be created
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH  ${CMAKE_BINARY_DIR})
# CMAKE_SOURCE_DIR is where cmake was started, the top level source directory
# CMAKE_BINARY_DIR is the same as CMAKE_SOURCE_DIR, otherwise this is the top level directory of your build tree

include_directories("${PROJECT_SOURCE_DIR}")
# contains the full path to the root of your project source directory (for example, to the nearest directory where
# CMakeLists.txt contains the PROJECT() command)

include_directories("/usr/local/Cellar/boost/1.67.0_1/include/")
link_directories("/usr/local/Cellar/boost/1.67.0_1/lib")

link_libraries(
        "boost_system"
)

add_executable(
        ch01_client_endpoint
        ch01/clientEndpoint.cpp
)

add_executable(
        ch01_server_endpoint
        ch01/serverEndpoint.cpp
)

add_executable(
        ch01_active_socket
        ch01/activeSocket.cpp
)

add_executable(
        ch01_passive_socket
        ch01/passiveSocket.cpp
)

add_executable(
        ch01_resolve_DNS
        ch01/resolveDNS.cpp
)