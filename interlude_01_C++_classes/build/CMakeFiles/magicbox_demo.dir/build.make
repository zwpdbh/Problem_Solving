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
include CMakeFiles/magicbox_demo.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/magicbox_demo.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/magicbox_demo.dir/flags.make

CMakeFiles/magicbox_demo.dir/demo_magicbox.cpp.o: CMakeFiles/magicbox_demo.dir/flags.make
CMakeFiles/magicbox_demo.dir/demo_magicbox.cpp.o: ../demo_magicbox.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/zw/code/C_and_C++_Projects/Problem_Solving/interlude_01_C++_classes/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/magicbox_demo.dir/demo_magicbox.cpp.o"
	/usr/local/Cellar/gcc/7.2.0/bin/g++-7  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/magicbox_demo.dir/demo_magicbox.cpp.o -c /Users/zw/code/C_and_C++_Projects/Problem_Solving/interlude_01_C++_classes/demo_magicbox.cpp

CMakeFiles/magicbox_demo.dir/demo_magicbox.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/magicbox_demo.dir/demo_magicbox.cpp.i"
	/usr/local/Cellar/gcc/7.2.0/bin/g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/zw/code/C_and_C++_Projects/Problem_Solving/interlude_01_C++_classes/demo_magicbox.cpp > CMakeFiles/magicbox_demo.dir/demo_magicbox.cpp.i

CMakeFiles/magicbox_demo.dir/demo_magicbox.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/magicbox_demo.dir/demo_magicbox.cpp.s"
	/usr/local/Cellar/gcc/7.2.0/bin/g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/zw/code/C_and_C++_Projects/Problem_Solving/interlude_01_C++_classes/demo_magicbox.cpp -o CMakeFiles/magicbox_demo.dir/demo_magicbox.cpp.s

CMakeFiles/magicbox_demo.dir/demo_magicbox.cpp.o.requires:

.PHONY : CMakeFiles/magicbox_demo.dir/demo_magicbox.cpp.o.requires

CMakeFiles/magicbox_demo.dir/demo_magicbox.cpp.o.provides: CMakeFiles/magicbox_demo.dir/demo_magicbox.cpp.o.requires
	$(MAKE) -f CMakeFiles/magicbox_demo.dir/build.make CMakeFiles/magicbox_demo.dir/demo_magicbox.cpp.o.provides.build
.PHONY : CMakeFiles/magicbox_demo.dir/demo_magicbox.cpp.o.provides

CMakeFiles/magicbox_demo.dir/demo_magicbox.cpp.o.provides.build: CMakeFiles/magicbox_demo.dir/demo_magicbox.cpp.o


# Object files for target magicbox_demo
magicbox_demo_OBJECTS = \
"CMakeFiles/magicbox_demo.dir/demo_magicbox.cpp.o"

# External object files for target magicbox_demo
magicbox_demo_EXTERNAL_OBJECTS =

../bin/magicbox_demo: CMakeFiles/magicbox_demo.dir/demo_magicbox.cpp.o
../bin/magicbox_demo: CMakeFiles/magicbox_demo.dir/build.make
../bin/magicbox_demo: CMakeFiles/magicbox_demo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/zw/code/C_and_C++_Projects/Problem_Solving/interlude_01_C++_classes/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../bin/magicbox_demo"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/magicbox_demo.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/magicbox_demo.dir/build: ../bin/magicbox_demo

.PHONY : CMakeFiles/magicbox_demo.dir/build

CMakeFiles/magicbox_demo.dir/requires: CMakeFiles/magicbox_demo.dir/demo_magicbox.cpp.o.requires

.PHONY : CMakeFiles/magicbox_demo.dir/requires

CMakeFiles/magicbox_demo.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/magicbox_demo.dir/cmake_clean.cmake
.PHONY : CMakeFiles/magicbox_demo.dir/clean

CMakeFiles/magicbox_demo.dir/depend:
	cd /Users/zw/code/C_and_C++_Projects/Problem_Solving/interlude_01_C++_classes/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/zw/code/C_and_C++_Projects/Problem_Solving/interlude_01_C++_classes /Users/zw/code/C_and_C++_Projects/Problem_Solving/interlude_01_C++_classes /Users/zw/code/C_and_C++_Projects/Problem_Solving/interlude_01_C++_classes/build /Users/zw/code/C_and_C++_Projects/Problem_Solving/interlude_01_C++_classes/build /Users/zw/code/C_and_C++_Projects/Problem_Solving/interlude_01_C++_classes/build/CMakeFiles/magicbox_demo.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/magicbox_demo.dir/depend

