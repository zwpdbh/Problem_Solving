# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.9.4/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.9.4/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/zw/code/C_and_C++_Projects/Problem_Solving/interlude_01_C++_classes

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/zw/code/C_and_C++_Projects/Problem_Solving/interlude_01_C++_classes/build

# Include any dependencies generated for this target.
include CMakeFiles/toybox_demo.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/toybox_demo.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/toybox_demo.dir/flags.make

CMakeFiles/toybox_demo.dir/demo_toybox.cpp.o: CMakeFiles/toybox_demo.dir/flags.make
CMakeFiles/toybox_demo.dir/demo_toybox.cpp.o: ../demo_toybox.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/zw/code/C_and_C++_Projects/Problem_Solving/interlude_01_C++_classes/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/toybox_demo.dir/demo_toybox.cpp.o"
	/usr/local/Cellar/gcc/7.2.0/bin/g++-7  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/toybox_demo.dir/demo_toybox.cpp.o -c /Users/zw/code/C_and_C++_Projects/Problem_Solving/interlude_01_C++_classes/demo_toybox.cpp

CMakeFiles/toybox_demo.dir/demo_toybox.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/toybox_demo.dir/demo_toybox.cpp.i"
	/usr/local/Cellar/gcc/7.2.0/bin/g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/zw/code/C_and_C++_Projects/Problem_Solving/interlude_01_C++_classes/demo_toybox.cpp > CMakeFiles/toybox_demo.dir/demo_toybox.cpp.i

CMakeFiles/toybox_demo.dir/demo_toybox.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/toybox_demo.dir/demo_toybox.cpp.s"
	/usr/local/Cellar/gcc/7.2.0/bin/g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/zw/code/C_and_C++_Projects/Problem_Solving/interlude_01_C++_classes/demo_toybox.cpp -o CMakeFiles/toybox_demo.dir/demo_toybox.cpp.s

CMakeFiles/toybox_demo.dir/demo_toybox.cpp.o.requires:

.PHONY : CMakeFiles/toybox_demo.dir/demo_toybox.cpp.o.requires

CMakeFiles/toybox_demo.dir/demo_toybox.cpp.o.provides: CMakeFiles/toybox_demo.dir/demo_toybox.cpp.o.requires
	$(MAKE) -f CMakeFiles/toybox_demo.dir/build.make CMakeFiles/toybox_demo.dir/demo_toybox.cpp.o.provides.build
.PHONY : CMakeFiles/toybox_demo.dir/demo_toybox.cpp.o.provides

CMakeFiles/toybox_demo.dir/demo_toybox.cpp.o.provides.build: CMakeFiles/toybox_demo.dir/demo_toybox.cpp.o


# Object files for target toybox_demo
toybox_demo_OBJECTS = \
"CMakeFiles/toybox_demo.dir/demo_toybox.cpp.o"

# External object files for target toybox_demo
toybox_demo_EXTERNAL_OBJECTS =

../bin/toybox_demo: CMakeFiles/toybox_demo.dir/demo_toybox.cpp.o
../bin/toybox_demo: CMakeFiles/toybox_demo.dir/build.make
../bin/toybox_demo: CMakeFiles/toybox_demo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/zw/code/C_and_C++_Projects/Problem_Solving/interlude_01_C++_classes/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../bin/toybox_demo"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/toybox_demo.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/toybox_demo.dir/build: ../bin/toybox_demo

.PHONY : CMakeFiles/toybox_demo.dir/build

CMakeFiles/toybox_demo.dir/requires: CMakeFiles/toybox_demo.dir/demo_toybox.cpp.o.requires

.PHONY : CMakeFiles/toybox_demo.dir/requires

CMakeFiles/toybox_demo.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/toybox_demo.dir/cmake_clean.cmake
.PHONY : CMakeFiles/toybox_demo.dir/clean

CMakeFiles/toybox_demo.dir/depend:
	cd /Users/zw/code/C_and_C++_Projects/Problem_Solving/interlude_01_C++_classes/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/zw/code/C_and_C++_Projects/Problem_Solving/interlude_01_C++_classes /Users/zw/code/C_and_C++_Projects/Problem_Solving/interlude_01_C++_classes /Users/zw/code/C_and_C++_Projects/Problem_Solving/interlude_01_C++_classes/build /Users/zw/code/C_and_C++_Projects/Problem_Solving/interlude_01_C++_classes/build /Users/zw/code/C_and_C++_Projects/Problem_Solving/interlude_01_C++_classes/build/CMakeFiles/toybox_demo.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/toybox_demo.dir/depend

