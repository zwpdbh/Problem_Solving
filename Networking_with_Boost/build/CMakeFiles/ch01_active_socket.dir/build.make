# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.12.0/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.12.0/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/zw/code/C_and_C++_Projects/Problem_Solving/Networking_with_Boost

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/zw/code/C_and_C++_Projects/Problem_Solving/Networking_with_Boost/build

# Include any dependencies generated for this target.
include CMakeFiles/ch01_active_socket.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ch01_active_socket.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ch01_active_socket.dir/flags.make

CMakeFiles/ch01_active_socket.dir/ch01/activeSocket.cpp.o: CMakeFiles/ch01_active_socket.dir/flags.make
CMakeFiles/ch01_active_socket.dir/ch01/activeSocket.cpp.o: ../ch01/activeSocket.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/zw/code/C_and_C++_Projects/Problem_Solving/Networking_with_Boost/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ch01_active_socket.dir/ch01/activeSocket.cpp.o"
	/usr/local/opt/llvm/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ch01_active_socket.dir/ch01/activeSocket.cpp.o -c /Users/zw/code/C_and_C++_Projects/Problem_Solving/Networking_with_Boost/ch01/activeSocket.cpp

CMakeFiles/ch01_active_socket.dir/ch01/activeSocket.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ch01_active_socket.dir/ch01/activeSocket.cpp.i"
	/usr/local/opt/llvm/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/zw/code/C_and_C++_Projects/Problem_Solving/Networking_with_Boost/ch01/activeSocket.cpp > CMakeFiles/ch01_active_socket.dir/ch01/activeSocket.cpp.i

CMakeFiles/ch01_active_socket.dir/ch01/activeSocket.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ch01_active_socket.dir/ch01/activeSocket.cpp.s"
	/usr/local/opt/llvm/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/zw/code/C_and_C++_Projects/Problem_Solving/Networking_with_Boost/ch01/activeSocket.cpp -o CMakeFiles/ch01_active_socket.dir/ch01/activeSocket.cpp.s

# Object files for target ch01_active_socket
ch01_active_socket_OBJECTS = \
"CMakeFiles/ch01_active_socket.dir/ch01/activeSocket.cpp.o"

# External object files for target ch01_active_socket
ch01_active_socket_EXTERNAL_OBJECTS =

../bin/ch01_active_socket: CMakeFiles/ch01_active_socket.dir/ch01/activeSocket.cpp.o
../bin/ch01_active_socket: CMakeFiles/ch01_active_socket.dir/build.make
../bin/ch01_active_socket: CMakeFiles/ch01_active_socket.dir/NodePtr.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/zw/code/C_and_C++_Projects/Problem_Solving/Networking_with_Boost/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../bin/ch01_active_socket"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ch01_active_socket.dir/NodePtr.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ch01_active_socket.dir/build: ../bin/ch01_active_socket

.PHONY : CMakeFiles/ch01_active_socket.dir/build

CMakeFiles/ch01_active_socket.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ch01_active_socket.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ch01_active_socket.dir/clean

CMakeFiles/ch01_active_socket.dir/depend:
	cd /Users/zw/code/C_and_C++_Projects/Problem_Solving/Networking_with_Boost/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/zw/code/C_and_C++_Projects/Problem_Solving/Networking_with_Boost /Users/zw/code/C_and_C++_Projects/Problem_Solving/Networking_with_Boost /Users/zw/code/C_and_C++_Projects/Problem_Solving/Networking_with_Boost/build /Users/zw/code/C_and_C++_Projects/Problem_Solving/Networking_with_Boost/build /Users/zw/code/C_and_C++_Projects/Problem_Solving/Networking_with_Boost/build/CMakeFiles/ch01_active_socket.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ch01_active_socket.dir/depend

