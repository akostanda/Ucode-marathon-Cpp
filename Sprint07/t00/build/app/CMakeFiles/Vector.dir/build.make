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
include app/CMakeFiles/Vector.dir/depend.make

# Include the progress variables for this target.
include app/CMakeFiles/Vector.dir/progress.make

# Include the compile flags for this target's objects.
include app/CMakeFiles/Vector.dir/flags.make

app/CMakeFiles/Vector.dir/main.cpp.o: app/CMakeFiles/Vector.dir/flags.make
app/CMakeFiles/Vector.dir/main.cpp.o: ../app/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/akostanda/Sprint07-2/t00/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object app/CMakeFiles/Vector.dir/main.cpp.o"
	cd /Users/akostanda/Sprint07-2/t00/build/app && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Vector.dir/main.cpp.o -c /Users/akostanda/Sprint07-2/t00/app/main.cpp

app/CMakeFiles/Vector.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Vector.dir/main.cpp.i"
	cd /Users/akostanda/Sprint07-2/t00/build/app && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/akostanda/Sprint07-2/t00/app/main.cpp > CMakeFiles/Vector.dir/main.cpp.i

app/CMakeFiles/Vector.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Vector.dir/main.cpp.s"
	cd /Users/akostanda/Sprint07-2/t00/build/app && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/akostanda/Sprint07-2/t00/app/main.cpp -o CMakeFiles/Vector.dir/main.cpp.s

# Object files for target Vector
Vector_OBJECTS = \
"CMakeFiles/Vector.dir/main.cpp.o"

# External object files for target Vector
Vector_EXTERNAL_OBJECTS =

app/Vector: app/CMakeFiles/Vector.dir/main.cpp.o
app/Vector: app/CMakeFiles/Vector.dir/build.make
app/Vector: app/src/liblib_Vector.a
app/Vector: app/CMakeFiles/Vector.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/akostanda/Sprint07-2/t00/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Vector"
	cd /Users/akostanda/Sprint07-2/t00/build/app && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Vector.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
app/CMakeFiles/Vector.dir/build: app/Vector

.PHONY : app/CMakeFiles/Vector.dir/build

app/CMakeFiles/Vector.dir/clean:
	cd /Users/akostanda/Sprint07-2/t00/build/app && $(CMAKE_COMMAND) -P CMakeFiles/Vector.dir/cmake_clean.cmake
.PHONY : app/CMakeFiles/Vector.dir/clean

app/CMakeFiles/Vector.dir/depend:
	cd /Users/akostanda/Sprint07-2/t00/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/akostanda/Sprint07-2/t00 /Users/akostanda/Sprint07-2/t00/app /Users/akostanda/Sprint07-2/t00/build /Users/akostanda/Sprint07-2/t00/build/app /Users/akostanda/Sprint07-2/t00/build/app/CMakeFiles/Vector.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : app/CMakeFiles/Vector.dir/depend

