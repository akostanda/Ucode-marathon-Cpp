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
CMAKE_SOURCE_DIR = /Users/akostanda/Sprint07-2/t00

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/akostanda/Sprint07-2/t00/build

# Include any dependencies generated for this target.
include app/src/CMakeFiles/lib_Vector.dir/depend.make

# Include the progress variables for this target.
include app/src/CMakeFiles/lib_Vector.dir/progress.make

# Include the compile flags for this target's objects.
include app/src/CMakeFiles/lib_Vector.dir/flags.make

app/src/CMakeFiles/lib_Vector.dir/Vector.cpp.o: app/src/CMakeFiles/lib_Vector.dir/flags.make
app/src/CMakeFiles/lib_Vector.dir/Vector.cpp.o: ../app/src/Vector.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/akostanda/Sprint07-2/t00/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object app/src/CMakeFiles/lib_Vector.dir/Vector.cpp.o"
	cd /Users/akostanda/Sprint07-2/t00/build/app/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lib_Vector.dir/Vector.cpp.o -c /Users/akostanda/Sprint07-2/t00/app/src/Vector.cpp

app/src/CMakeFiles/lib_Vector.dir/Vector.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lib_Vector.dir/Vector.cpp.i"
	cd /Users/akostanda/Sprint07-2/t00/build/app/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/akostanda/Sprint07-2/t00/app/src/Vector.cpp > CMakeFiles/lib_Vector.dir/Vector.cpp.i

app/src/CMakeFiles/lib_Vector.dir/Vector.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lib_Vector.dir/Vector.cpp.s"
	cd /Users/akostanda/Sprint07-2/t00/build/app/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/akostanda/Sprint07-2/t00/app/src/Vector.cpp -o CMakeFiles/lib_Vector.dir/Vector.cpp.s

# Object files for target lib_Vector
lib_Vector_OBJECTS = \
"CMakeFiles/lib_Vector.dir/Vector.cpp.o"

# External object files for target lib_Vector
lib_Vector_EXTERNAL_OBJECTS =

app/src/liblib_Vector.a: app/src/CMakeFiles/lib_Vector.dir/Vector.cpp.o
app/src/liblib_Vector.a: app/src/CMakeFiles/lib_Vector.dir/build.make
app/src/liblib_Vector.a: app/src/CMakeFiles/lib_Vector.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/akostanda/Sprint07-2/t00/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library liblib_Vector.a"
	cd /Users/akostanda/Sprint07-2/t00/build/app/src && $(CMAKE_COMMAND) -P CMakeFiles/lib_Vector.dir/cmake_clean_target.cmake
	cd /Users/akostanda/Sprint07-2/t00/build/app/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lib_Vector.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
app/src/CMakeFiles/lib_Vector.dir/build: app/src/liblib_Vector.a

.PHONY : app/src/CMakeFiles/lib_Vector.dir/build

app/src/CMakeFiles/lib_Vector.dir/clean:
	cd /Users/akostanda/Sprint07-2/t00/build/app/src && $(CMAKE_COMMAND) -P CMakeFiles/lib_Vector.dir/cmake_clean.cmake
.PHONY : app/src/CMakeFiles/lib_Vector.dir/clean

app/src/CMakeFiles/lib_Vector.dir/depend:
	cd /Users/akostanda/Sprint07-2/t00/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/akostanda/Sprint07-2/t00 /Users/akostanda/Sprint07-2/t00/app/src /Users/akostanda/Sprint07-2/t00/build /Users/akostanda/Sprint07-2/t00/build/app/src /Users/akostanda/Sprint07-2/t00/build/app/src/CMakeFiles/lib_Vector.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : app/src/CMakeFiles/lib_Vector.dir/depend

