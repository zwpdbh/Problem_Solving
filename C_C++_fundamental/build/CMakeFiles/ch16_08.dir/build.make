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
include CMakeFiles/ch16_08.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ch16_08.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ch16_08.dir/flags.make

CMakeFiles/ch16_08.dir/standard_algorithm/fig16_08.cpp.o: CMakeFiles/ch16_08.dir/flags.make
CMakeFiles/ch16_08.dir/standard_algorithm/fig16_08.cpp.o: ../standard_algorithm/fig16_08.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/zw/code/C_and_C++_Projects/Problem_Solving/C_C++_fundamental/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ch16_08.dir/standard_algorithm/fig16_08.cpp.o"
	/usr/local/opt/llvm/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ch16_08.dir/standard_algorithm/fig16_08.cpp.o -c /Users/zw/code/C_and_C++_Projects/Problem_Solving/C_C++_fundamental/standard_algorithm/fig16_08.cpp

CMakeFiles/ch16_08.dir/standard_algorithm/fig16_08.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ch16_08.dir/standard_algorithm/fig16_08.cpp.i"
	/usr/local/opt/llvm/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/zw/code/C_and_C++_Projects/Problem_Solving/C_C++_fundamental/standard_algorithm/fig16_08.cpp > CMakeFiles/ch16_08.dir/standard_algorithm/fig16_08.cpp.i

CMakeFiles/ch16_08.dir/standard_algorithm/fig16_08.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ch16_08.dir/standard_algorithm/fig16_08.cpp.s"
	/usr/local/opt/llvm/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/zw/code/C_and_C++_Projects/Problem_Solving/C_C++_fundamental/standard_algorithm/fig16_08.cpp -o CMakeFiles/ch16_08.dir/standard_algorithm/fig16_08.cpp.s

CMakeFiles/ch16_08.dir/standard_algorithm/fig16_08.cpp.o.requires:

.PHONY : CMakeFiles/ch16_08.dir/standard_algorithm/fig16_08.cpp.o.requires

CMakeFiles/ch16_08.dir/standard_algorithm/fig16_08.cpp.o.provides: CMakeFiles/ch16_08.dir/standard_algorithm/fig16_08.cpp.o.requires
	$(MAKE) -f CMakeFiles/ch16_08.dir/build.make CMakeFiles/ch16_08.dir/standard_algorithm/fig16_08.cpp.o.provides.build
.PHONY : CMakeFiles/ch16_08.dir/standard_algorithm/fig16_08.cpp.o.provides

CMakeFiles/ch16_08.dir/standard_algorithm/fig16_08.cpp.o.provides.build: CMakeFiles/ch16_08.dir/standard_algorithm/fig16_08.cpp.o


# Object files for target ch16_08
ch16_08_OBJECTS = \
"CMakeFiles/ch16_08.dir/standard_algorithm/fig16_08.cpp.o"

# External object files for target ch16_08
ch16_08_EXTERNAL_OBJECTS =

../bin/ch16_08: CMakeFiles/ch16_08.dir/standard_algorithm/fig16_08.cpp.o
../bin/ch16_08: CMakeFiles/ch16_08.dir/build.make
../bin/ch16_08: CMakeFiles/ch16_08.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/zw/code/C_and_C++_Projects/Problem_Solving/C_C++_fundamental/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../bin/ch16_08"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ch16_08.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ch16_08.dir/build: ../bin/ch16_08

.PHONY : CMakeFiles/ch16_08.dir/build

CMakeFiles/ch16_08.dir/requires: CMakeFiles/ch16_08.dir/standard_algorithm/fig16_08.cpp.o.requires

.PHONY : CMakeFiles/ch16_08.dir/requires

CMakeFiles/ch16_08.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ch16_08.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ch16_08.dir/clean

CMakeFiles/ch16_08.dir/depend:
	cd /Users/zw/code/C_and_C++_Projects/Problem_Solving/C_C++_fundamental/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/zw/code/C_and_C++_Projects/Problem_Solving/C_C++_fundamental /Users/zw/code/C_and_C++_Projects/Problem_Solving/C_C++_fundamental /Users/zw/code/C_and_C++_Projects/Problem_Solving/C_C++_fundamental/build /Users/zw/code/C_and_C++_Projects/Problem_Solving/C_C++_fundamental/build /Users/zw/code/C_and_C++_Projects/Problem_Solving/C_C++_fundamental/build/CMakeFiles/ch16_08.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ch16_08.dir/depend

