# Install script for directory: /Users/zw/code/C_and_C++_Projects/Problem_Solving

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/Users/zw/code/C_and_C++_Projects/Problem_Solving/cmake-build-debug/C++_Concurrency_in_Action/cmake_install.cmake")
  include("/Users/zw/code/C_and_C++_Projects/Problem_Solving/cmake-build-debug/C_C++_fundamental/cmake_install.cmake")
  include("/Users/zw/code/C_and_C++_Projects/Problem_Solving/cmake-build-debug/LeetCode/cmake_install.cmake")
  include("/Users/zw/code/C_and_C++_Projects/Problem_Solving/cmake-build-debug/Numberical_Methods_for_Engineers/cmake_install.cmake")
  include("/Users/zw/code/C_and_C++_Projects/Problem_Solving/cmake-build-debug/Networking_with_Boost/cmake_install.cmake")
  include("/Users/zw/code/C_and_C++_Projects/Problem_Solving/cmake-build-debug/Data_Structure_and_Algorithms/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/Users/zw/code/C_and_C++_Projects/Problem_Solving/cmake-build-debug/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
