# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

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
CMAKE_COMMAND = /Users/akostanda/.brew/Cellar/cmake/3.18.1/bin/cmake

# The command to remove a file.
RM = /Users/akostanda/.brew/Cellar/cmake/3.18.1/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/akostanda/Sprint02/t03

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/akostanda/Sprint02/t03/build

# Include any dependencies generated for this target.
include src/CMakeFiles/lib_tesLibrary.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/lib_tesLibrary.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/lib_tesLibrary.dir/flags.make

src/CMakeFiles/lib_tesLibrary.dir/tesLibrary.cpp.o: src/CMakeFiles/lib_tesLibrary.dir/flags.make
src/CMakeFiles/lib_tesLibrary.dir/tesLibrary.cpp.o: ../src/tesLibrary.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/akostanda/Sprint02/t03/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/lib_tesLibrary.dir/tesLibrary.cpp.o"
	cd /Users/akostanda/Sprint02/t03/build/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lib_tesLibrary.dir/tesLibrary.cpp.o -c /Users/akostanda/Sprint02/t03/src/tesLibrary.cpp

src/CMakeFiles/lib_tesLibrary.dir/tesLibrary.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lib_tesLibrary.dir/tesLibrary.cpp.i"
	cd /Users/akostanda/Sprint02/t03/build/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/akostanda/Sprint02/t03/src/tesLibrary.cpp > CMakeFiles/lib_tesLibrary.dir/tesLibrary.cpp.i

src/CMakeFiles/lib_tesLibrary.dir/tesLibrary.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lib_tesLibrary.dir/tesLibrary.cpp.s"
	cd /Users/akostanda/Sprint02/t03/build/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/akostanda/Sprint02/t03/src/tesLibrary.cpp -o CMakeFiles/lib_tesLibrary.dir/tesLibrary.cpp.s

# Object files for target lib_tesLibrary
lib_tesLibrary_OBJECTS = \
"CMakeFiles/lib_tesLibrary.dir/tesLibrary.cpp.o"

# External object files for target lib_tesLibrary
lib_tesLibrary_EXTERNAL_OBJECTS =

src/liblib_tesLibrary.a: src/CMakeFiles/lib_tesLibrary.dir/tesLibrary.cpp.o
src/liblib_tesLibrary.a: src/CMakeFiles/lib_tesLibrary.dir/build.make
src/liblib_tesLibrary.a: src/CMakeFiles/lib_tesLibrary.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/akostanda/Sprint02/t03/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library liblib_tesLibrary.a"
	cd /Users/akostanda/Sprint02/t03/build/src && $(CMAKE_COMMAND) -P CMakeFiles/lib_tesLibrary.dir/cmake_clean_target.cmake
	cd /Users/akostanda/Sprint02/t03/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lib_tesLibrary.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/lib_tesLibrary.dir/build: src/liblib_tesLibrary.a

.PHONY : src/CMakeFiles/lib_tesLibrary.dir/build

src/CMakeFiles/lib_tesLibrary.dir/clean:
	cd /Users/akostanda/Sprint02/t03/build/src && $(CMAKE_COMMAND) -P CMakeFiles/lib_tesLibrary.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/lib_tesLibrary.dir/clean

src/CMakeFiles/lib_tesLibrary.dir/depend:
	cd /Users/akostanda/Sprint02/t03/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/akostanda/Sprint02/t03 /Users/akostanda/Sprint02/t03/src /Users/akostanda/Sprint02/t03/build /Users/akostanda/Sprint02/t03/build/src /Users/akostanda/Sprint02/t03/build/src/CMakeFiles/lib_tesLibrary.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/lib_tesLibrary.dir/depend

