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
CMAKE_COMMAND = "/Users/zw/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/182.4129.51/CLion.app/Contents/bin/cmake/mac/bin/cmake"

# The command to remove a file.
RM = "/Users/zw/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/182.4129.51/CLion.app/Contents/bin/cmake/mac/bin/cmake" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/zw/code/C_and_C++_Projects/Problem_Solving

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/zw/code/C_and_C++_Projects/Problem_Solving/cmake-build-debug

# Include any dependencies generated for this target.
include Networking_with_Boost/CMakeFiles/ch01_resolve_DNS.dir/depend.make

# Include the progress variables for this target.
include Networking_with_Boost/CMakeFiles/ch01_resolve_DNS.dir/progress.make

# Include the compile flags for this target's objects.
include Networking_with_Boost/CMakeFiles/ch01_resolve_DNS.dir/flags.make

Networking_with_Boost/CMakeFiles/ch01_resolve_DNS.dir/ch01/resolveDNS.cpp.o: Networking_with_Boost/CMakeFiles/ch01_resolve_DNS.dir/flags.make
Networking_with_Boost/CMakeFiles/ch01_resolve_DNS.dir/ch01/resolveDNS.cpp.o: ../Networking_with_Boost/ch01/resolveDNS.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/zw/code/C_and_C++_Projects/Problem_Solving/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Networking_with_Boost/CMakeFiles/ch01_resolve_DNS.dir/ch01/resolveDNS.cpp.o"
	cd /Users/zw/code/C_and_C++_Projects/Problem_Solving/cmake-build-debug/Networking_with_Boost && /usr/local/opt/llvm/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ch01_resolve_DNS.dir/ch01/resolveDNS.cpp.o -c /Users/zw/code/C_and_C++_Projects/Problem_Solving/Networking_with_Boost/ch01/resolveDNS.cpp

Networking_with_Boost/CMakeFiles/ch01_resolve_DNS.dir/ch01/resolveDNS.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ch01_resolve_DNS.dir/ch01/resolveDNS.cpp.i"
	cd /Users/zw/code/C_and_C++_Projects/Problem_Solving/cmake-build-debug/Networking_with_Boost && /usr/local/opt/llvm/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/zw/code/C_and_C++_Projects/Problem_Solving/Networking_with_Boost/ch01/resolveDNS.cpp > CMakeFiles/ch01_resolve_DNS.dir/ch01/resolveDNS.cpp.i

Networking_with_Boost/CMakeFiles/ch01_resolve_DNS.dir/ch01/resolveDNS.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ch01_resolve_DNS.dir/ch01/resolveDNS.cpp.s"
	cd /Users/zw/code/C_and_C++_Projects/Problem_Solving/cmake-build-debug/Networking_with_Boost && /usr/local/opt/llvm/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/zw/code/C_and_C++_Projects/Problem_Solving/Networking_with_Boost/ch01/resolveDNS.cpp -o CMakeFiles/ch01_resolve_DNS.dir/ch01/resolveDNS.cpp.s

# Object files for target ch01_resolve_DNS
ch01_resolve_DNS_OBJECTS = \
"CMakeFiles/ch01_resolve_DNS.dir/ch01/resolveDNS.cpp.o"

# External object files for target ch01_resolve_DNS
ch01_resolve_DNS_EXTERNAL_OBJECTS =

../bin/ch01_resolve_DNS: Networking_with_Boost/CMakeFiles/ch01_resolve_DNS.dir/ch01/resolveDNS.cpp.o
../bin/ch01_resolve_DNS: Networking_with_Boost/CMakeFiles/ch01_resolve_DNS.dir/build.make
../bin/ch01_resolve_DNS: Networking_with_Boost/CMakeFiles/ch01_resolve_DNS.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/zw/code/C_and_C++_Projects/Problem_Solving/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../bin/ch01_resolve_DNS"
	cd /Users/zw/code/C_and_C++_Projects/Problem_Solving/cmake-build-debug/Networking_with_Boost && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ch01_resolve_DNS.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Networking_with_Boost/CMakeFiles/ch01_resolve_DNS.dir/build: ../bin/ch01_resolve_DNS

.PHONY : Networking_with_Boost/CMakeFiles/ch01_resolve_DNS.dir/build

Networking_with_Boost/CMakeFiles/ch01_resolve_DNS.dir/clean:
	cd /Users/zw/code/C_and_C++_Projects/Problem_Solving/cmake-build-debug/Networking_with_Boost && $(CMAKE_COMMAND) -P CMakeFiles/ch01_resolve_DNS.dir/cmake_clean.cmake
.PHONY : Networking_with_Boost/CMakeFiles/ch01_resolve_DNS.dir/clean

Networking_with_Boost/CMakeFiles/ch01_resolve_DNS.dir/depend:
	cd /Users/zw/code/C_and_C++_Projects/Problem_Solving/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/zw/code/C_and_C++_Projects/Problem_Solving /Users/zw/code/C_and_C++_Projects/Problem_Solving/Networking_with_Boost /Users/zw/code/C_and_C++_Projects/Problem_Solving/cmake-build-debug /Users/zw/code/C_and_C++_Projects/Problem_Solving/cmake-build-debug/Networking_with_Boost /Users/zw/code/C_and_C++_Projects/Problem_Solving/cmake-build-debug/Networking_with_Boost/CMakeFiles/ch01_resolve_DNS.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Networking_with_Boost/CMakeFiles/ch01_resolve_DNS.dir/depend

