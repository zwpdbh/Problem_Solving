# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.10.2/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.10.2/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/zw/code/C_and_C++_Projects/Problem_Solving/C_C++_fundamental

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/zw/code/C_and_C++_Projects/Problem_Solving/C_C++_fundamental/build

# Include any dependencies generated for this target.
include CMakeFiles/memory_allignment.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/memory_allignment.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/memory_allignment.dir/flags.make

CMakeFiles/memory_allignment.dir/basics/memory_allignment.cpp.o: CMakeFiles/memory_allignment.dir/flags.make
CMakeFiles/memory_allignment.dir/basics/memory_allignment.cpp.o: ../basics/memory_allignment.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/zw/code/C_and_C++_Projects/Problem_Solving/C_C++_fundamental/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/memory_allignment.dir/basics/memory_allignment.cpp.o"
	/usr/local/opt/llvm/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/memory_allignment.dir/basics/memory_allignment.cpp.o -c /Users/zw/code/C_and_C++_Projects/Problem_Solving/C_C++_fundamental/basics/memory_allignment.cpp

CMakeFiles/memory_allignment.dir/basics/memory_allignment.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/memory_allignment.dir/basics/memory_allignment.cpp.i"
	/usr/local/opt/llvm/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/zw/code/C_and_C++_Projects/Problem_Solving/C_C++_fundamental/basics/memory_allignment.cpp > CMakeFiles/memory_allignment.dir/basics/memory_allignment.cpp.i

CMakeFiles/memory_allignment.dir/basics/memory_allignment.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/memory_allignment.dir/basics/memory_allignment.cpp.s"
	/usr/local/opt/llvm/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/zw/code/C_and_C++_Projects/Problem_Solving/C_C++_fundamental/basics/memory_allignment.cpp -o CMakeFiles/memory_allignment.dir/basics/memory_allignment.cpp.s

CMakeFiles/memory_allignment.dir/basics/memory_allignment.cpp.o.requires:

.PHONY : CMakeFiles/memory_allignment.dir/basics/memory_allignment.cpp.o.requires

CMakeFiles/memory_allignment.dir/basics/memory_allignment.cpp.o.provides: CMakeFiles/memory_allignment.dir/basics/memory_allignment.cpp.o.requires
	$(MAKE) -f CMakeFiles/memory_allignment.dir/build.make CMakeFiles/memory_allignment.dir/basics/memory_allignment.cpp.o.provides.build
.PHONY : CMakeFiles/memory_allignment.dir/basics/memory_allignment.cpp.o.provides

CMakeFiles/memory_allignment.dir/basics/memory_allignment.cpp.o.provides.build: CMakeFiles/memory_allignment.dir/basics/memory_allignment.cpp.o


# Object files for target memory_allignment
memory_allignment_OBJECTS = \
"CMakeFiles/memory_allignment.dir/basics/memory_allignment.cpp.o"

# External object files for target memory_allignment
memory_allignment_EXTERNAL_OBJECTS =

../bin/memory_allignment: CMakeFiles/memory_allignment.dir/basics/memory_allignment.cpp.o
../bin/memory_allignment: CMakeFiles/memory_allignment.dir/build.make
../bin/memory_allignment: CMakeFiles/memory_allignment.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/zw/code/C_and_C++_Projects/Problem_Solving/C_C++_fundamental/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../bin/memory_allignment"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/memory_allignment.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/memory_allignment.dir/build: ../bin/memory_allignment

.PHONY : CMakeFiles/memory_allignment.dir/build

CMakeFiles/memory_allignment.dir/requires: CMakeFiles/memory_allignment.dir/basics/memory_allignment.cpp.o.requires

.PHONY : CMakeFiles/memory_allignment.dir/requires

CMakeFiles/memory_allignment.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/memory_allignment.dir/cmake_clean.cmake
.PHONY : CMakeFiles/memory_allignment.dir/clean

CMakeFiles/memory_allignment.dir/depend:
	cd /Users/zw/code/C_and_C++_Projects/Problem_Solving/C_C++_fundamental/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/zw/code/C_and_C++_Projects/Problem_Solving/C_C++_fundamental /Users/zw/code/C_and_C++_Projects/Problem_Solving/C_C++_fundamental /Users/zw/code/C_and_C++_Projects/Problem_Solving/C_C++_fundamental/build /Users/zw/code/C_and_C++_Projects/Problem_Solving/C_C++_fundamental/build /Users/zw/code/C_and_C++_Projects/Problem_Solving/C_C++_fundamental/build/CMakeFiles/memory_allignment.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/memory_allignment.dir/depend
