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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/debian/Documents/INFT2503-CPP/Oving_7/oving_7/Oppgave_2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/debian/Documents/INFT2503-CPP/Oving_7/oving_7/Oppgave_2/build

# Include any dependencies generated for this target.
include CMakeFiles/set.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/set.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/set.dir/flags.make

CMakeFiles/set.dir/set.cpp.o: CMakeFiles/set.dir/flags.make
CMakeFiles/set.dir/set.cpp.o: ../set.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/debian/Documents/INFT2503-CPP/Oving_7/oving_7/Oppgave_2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/set.dir/set.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/set.dir/set.cpp.o -c /home/debian/Documents/INFT2503-CPP/Oving_7/oving_7/Oppgave_2/set.cpp

CMakeFiles/set.dir/set.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/set.dir/set.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/debian/Documents/INFT2503-CPP/Oving_7/oving_7/Oppgave_2/set.cpp > CMakeFiles/set.dir/set.cpp.i

CMakeFiles/set.dir/set.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/set.dir/set.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/debian/Documents/INFT2503-CPP/Oving_7/oving_7/Oppgave_2/set.cpp -o CMakeFiles/set.dir/set.cpp.s

# Object files for target set
set_OBJECTS = \
"CMakeFiles/set.dir/set.cpp.o"

# External object files for target set
set_EXTERNAL_OBJECTS =

set: CMakeFiles/set.dir/set.cpp.o
set: CMakeFiles/set.dir/build.make
set: CMakeFiles/set.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/debian/Documents/INFT2503-CPP/Oving_7/oving_7/Oppgave_2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable set"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/set.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/set.dir/build: set

.PHONY : CMakeFiles/set.dir/build

CMakeFiles/set.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/set.dir/cmake_clean.cmake
.PHONY : CMakeFiles/set.dir/clean

CMakeFiles/set.dir/depend:
	cd /home/debian/Documents/INFT2503-CPP/Oving_7/oving_7/Oppgave_2/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/debian/Documents/INFT2503-CPP/Oving_7/oving_7/Oppgave_2 /home/debian/Documents/INFT2503-CPP/Oving_7/oving_7/Oppgave_2 /home/debian/Documents/INFT2503-CPP/Oving_7/oving_7/Oppgave_2/build /home/debian/Documents/INFT2503-CPP/Oving_7/oving_7/Oppgave_2/build /home/debian/Documents/INFT2503-CPP/Oving_7/oving_7/Oppgave_2/build/CMakeFiles/set.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/set.dir/depend

