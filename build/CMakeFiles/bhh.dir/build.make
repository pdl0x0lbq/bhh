# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/sw/CLionProjects/bhh

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sw/CLionProjects/bhh/build

# Include any dependencies generated for this target.
include CMakeFiles/bhh.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/bhh.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/bhh.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/bhh.dir/flags.make

CMakeFiles/bhh.dir/main.cpp.o: CMakeFiles/bhh.dir/flags.make
CMakeFiles/bhh.dir/main.cpp.o: ../main.cpp
CMakeFiles/bhh.dir/main.cpp.o: CMakeFiles/bhh.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sw/CLionProjects/bhh/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/bhh.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/bhh.dir/main.cpp.o -MF CMakeFiles/bhh.dir/main.cpp.o.d -o CMakeFiles/bhh.dir/main.cpp.o -c /home/sw/CLionProjects/bhh/main.cpp

CMakeFiles/bhh.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bhh.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sw/CLionProjects/bhh/main.cpp > CMakeFiles/bhh.dir/main.cpp.i

CMakeFiles/bhh.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bhh.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sw/CLionProjects/bhh/main.cpp -o CMakeFiles/bhh.dir/main.cpp.s

# Object files for target bhh
bhh_OBJECTS = \
"CMakeFiles/bhh.dir/main.cpp.o"

# External object files for target bhh
bhh_EXTERNAL_OBJECTS =

bhh: CMakeFiles/bhh.dir/main.cpp.o
bhh: CMakeFiles/bhh.dir/build.make
bhh: CMakeFiles/bhh.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/sw/CLionProjects/bhh/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable bhh"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/bhh.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/bhh.dir/build: bhh
.PHONY : CMakeFiles/bhh.dir/build

CMakeFiles/bhh.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/bhh.dir/cmake_clean.cmake
.PHONY : CMakeFiles/bhh.dir/clean

CMakeFiles/bhh.dir/depend:
	cd /home/sw/CLionProjects/bhh/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sw/CLionProjects/bhh /home/sw/CLionProjects/bhh /home/sw/CLionProjects/bhh/build /home/sw/CLionProjects/bhh/build /home/sw/CLionProjects/bhh/build/CMakeFiles/bhh.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/bhh.dir/depend

