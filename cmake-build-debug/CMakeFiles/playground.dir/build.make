# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

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
CMAKE_COMMAND = "/Users/zw/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/172.3968.17/CLion.app/Contents/bin/cmake/bin/cmake"

# The command to remove a file.
RM = "/Users/zw/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/172.3968.17/CLion.app/Contents/bin/cmake/bin/cmake" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/zw/code/C++_Projects/Problem_Solving

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/zw/code/C++_Projects/Problem_Solving/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/playground.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/playground.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/playground.dir/flags.make

CMakeFiles/playground.dir/tmp/playground.cpp.o: CMakeFiles/playground.dir/flags.make
CMakeFiles/playground.dir/tmp/playground.cpp.o: ../tmp/playground.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/zw/code/C++_Projects/Problem_Solving/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/playground.dir/tmp/playground.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/playground.dir/tmp/playground.cpp.o -c /Users/zw/code/C++_Projects/Problem_Solving/tmp/playground.cpp

CMakeFiles/playground.dir/tmp/playground.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/playground.dir/tmp/playground.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/zw/code/C++_Projects/Problem_Solving/tmp/playground.cpp > CMakeFiles/playground.dir/tmp/playground.cpp.i

CMakeFiles/playground.dir/tmp/playground.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/playground.dir/tmp/playground.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/zw/code/C++_Projects/Problem_Solving/tmp/playground.cpp -o CMakeFiles/playground.dir/tmp/playground.cpp.s

CMakeFiles/playground.dir/tmp/playground.cpp.o.requires:

.PHONY : CMakeFiles/playground.dir/tmp/playground.cpp.o.requires

CMakeFiles/playground.dir/tmp/playground.cpp.o.provides: CMakeFiles/playground.dir/tmp/playground.cpp.o.requires
	$(MAKE) -f CMakeFiles/playground.dir/build.make CMakeFiles/playground.dir/tmp/playground.cpp.o.provides.build
.PHONY : CMakeFiles/playground.dir/tmp/playground.cpp.o.provides

CMakeFiles/playground.dir/tmp/playground.cpp.o.provides.build: CMakeFiles/playground.dir/tmp/playground.cpp.o


CMakeFiles/playground.dir/tmp/PlainBox.cpp.o: CMakeFiles/playground.dir/flags.make
CMakeFiles/playground.dir/tmp/PlainBox.cpp.o: ../tmp/PlainBox.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/zw/code/C++_Projects/Problem_Solving/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/playground.dir/tmp/PlainBox.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/playground.dir/tmp/PlainBox.cpp.o -c /Users/zw/code/C++_Projects/Problem_Solving/tmp/PlainBox.cpp

CMakeFiles/playground.dir/tmp/PlainBox.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/playground.dir/tmp/PlainBox.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/zw/code/C++_Projects/Problem_Solving/tmp/PlainBox.cpp > CMakeFiles/playground.dir/tmp/PlainBox.cpp.i

CMakeFiles/playground.dir/tmp/PlainBox.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/playground.dir/tmp/PlainBox.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/zw/code/C++_Projects/Problem_Solving/tmp/PlainBox.cpp -o CMakeFiles/playground.dir/tmp/PlainBox.cpp.s

CMakeFiles/playground.dir/tmp/PlainBox.cpp.o.requires:

.PHONY : CMakeFiles/playground.dir/tmp/PlainBox.cpp.o.requires

CMakeFiles/playground.dir/tmp/PlainBox.cpp.o.provides: CMakeFiles/playground.dir/tmp/PlainBox.cpp.o.requires
	$(MAKE) -f CMakeFiles/playground.dir/build.make CMakeFiles/playground.dir/tmp/PlainBox.cpp.o.provides.build
.PHONY : CMakeFiles/playground.dir/tmp/PlainBox.cpp.o.provides

CMakeFiles/playground.dir/tmp/PlainBox.cpp.o.provides.build: CMakeFiles/playground.dir/tmp/PlainBox.cpp.o


# Object files for target playground
playground_OBJECTS = \
"CMakeFiles/playground.dir/tmp/playground.cpp.o" \
"CMakeFiles/playground.dir/tmp/PlainBox.cpp.o"

# External object files for target playground
playground_EXTERNAL_OBJECTS =

playground: CMakeFiles/playground.dir/tmp/playground.cpp.o
playground: CMakeFiles/playground.dir/tmp/PlainBox.cpp.o
playground: CMakeFiles/playground.dir/build.make
playground: CMakeFiles/playground.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/zw/code/C++_Projects/Problem_Solving/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable playground"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/playground.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/playground.dir/build: playground

.PHONY : CMakeFiles/playground.dir/build

CMakeFiles/playground.dir/requires: CMakeFiles/playground.dir/tmp/playground.cpp.o.requires
CMakeFiles/playground.dir/requires: CMakeFiles/playground.dir/tmp/PlainBox.cpp.o.requires

.PHONY : CMakeFiles/playground.dir/requires

CMakeFiles/playground.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/playground.dir/cmake_clean.cmake
.PHONY : CMakeFiles/playground.dir/clean

CMakeFiles/playground.dir/depend:
	cd /Users/zw/code/C++_Projects/Problem_Solving/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/zw/code/C++_Projects/Problem_Solving /Users/zw/code/C++_Projects/Problem_Solving /Users/zw/code/C++_Projects/Problem_Solving/cmake-build-debug /Users/zw/code/C++_Projects/Problem_Solving/cmake-build-debug /Users/zw/code/C++_Projects/Problem_Solving/cmake-build-debug/CMakeFiles/playground.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/playground.dir/depend

