# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /snap/clion/114/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/114/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/alexey/repos/coursera

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/alexey/repos/coursera/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/coursera.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/coursera.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/coursera.dir/flags.make

CMakeFiles/coursera.dir/main.cpp.o: CMakeFiles/coursera.dir/flags.make
CMakeFiles/coursera.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alexey/repos/coursera/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/coursera.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/coursera.dir/main.cpp.o -c /home/alexey/repos/coursera/main.cpp

CMakeFiles/coursera.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/coursera.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alexey/repos/coursera/main.cpp > CMakeFiles/coursera.dir/main.cpp.i

CMakeFiles/coursera.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/coursera.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alexey/repos/coursera/main.cpp -o CMakeFiles/coursera.dir/main.cpp.s

CMakeFiles/coursera.dir/annagrams.cpp.o: CMakeFiles/coursera.dir/flags.make
CMakeFiles/coursera.dir/annagrams.cpp.o: ../annagrams.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alexey/repos/coursera/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/coursera.dir/annagrams.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/coursera.dir/annagrams.cpp.o -c /home/alexey/repos/coursera/annagrams.cpp

CMakeFiles/coursera.dir/annagrams.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/coursera.dir/annagrams.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alexey/repos/coursera/annagrams.cpp > CMakeFiles/coursera.dir/annagrams.cpp.i

CMakeFiles/coursera.dir/annagrams.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/coursera.dir/annagrams.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alexey/repos/coursera/annagrams.cpp -o CMakeFiles/coursera.dir/annagrams.cpp.s

# Object files for target coursera
coursera_OBJECTS = \
"CMakeFiles/coursera.dir/main.cpp.o" \
"CMakeFiles/coursera.dir/annagrams.cpp.o"

# External object files for target coursera
coursera_EXTERNAL_OBJECTS =

coursera: CMakeFiles/coursera.dir/main.cpp.o
coursera: CMakeFiles/coursera.dir/annagrams.cpp.o
coursera: CMakeFiles/coursera.dir/build.make
coursera: CMakeFiles/coursera.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/alexey/repos/coursera/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable coursera"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/coursera.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/coursera.dir/build: coursera

.PHONY : CMakeFiles/coursera.dir/build

CMakeFiles/coursera.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/coursera.dir/cmake_clean.cmake
.PHONY : CMakeFiles/coursera.dir/clean

CMakeFiles/coursera.dir/depend:
	cd /home/alexey/repos/coursera/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alexey/repos/coursera /home/alexey/repos/coursera /home/alexey/repos/coursera/cmake-build-debug /home/alexey/repos/coursera/cmake-build-debug /home/alexey/repos/coursera/cmake-build-debug/CMakeFiles/coursera.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/coursera.dir/depend

