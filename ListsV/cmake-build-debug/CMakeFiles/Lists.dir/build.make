# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.10

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.1.5\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.1.5\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Frank\CLionProjects\ListsV

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Frank\CLionProjects\ListsV\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Lists.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Lists.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Lists.dir/flags.make

CMakeFiles/Lists.dir/main.cpp.obj: CMakeFiles/Lists.dir/flags.make
CMakeFiles/Lists.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Frank\CLionProjects\ListsV\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Lists.dir/main.cpp.obj"
	D:\MinGW\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Lists.dir\main.cpp.obj -c C:\Users\Frank\CLionProjects\ListsV\main.cpp

CMakeFiles/Lists.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Lists.dir/main.cpp.i"
	D:\MinGW\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Frank\CLionProjects\ListsV\main.cpp > CMakeFiles\Lists.dir\main.cpp.i

CMakeFiles/Lists.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Lists.dir/main.cpp.s"
	D:\MinGW\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Frank\CLionProjects\ListsV\main.cpp -o CMakeFiles\Lists.dir\main.cpp.s

CMakeFiles/Lists.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/Lists.dir/main.cpp.obj.requires

CMakeFiles/Lists.dir/main.cpp.obj.provides: CMakeFiles/Lists.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\Lists.dir\build.make CMakeFiles/Lists.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/Lists.dir/main.cpp.obj.provides

CMakeFiles/Lists.dir/main.cpp.obj.provides.build: CMakeFiles/Lists.dir/main.cpp.obj


# Object files for target Lists
Lists_OBJECTS = \
"CMakeFiles/Lists.dir/main.cpp.obj"

# External object files for target Lists
Lists_EXTERNAL_OBJECTS =

Lists.exe: CMakeFiles/Lists.dir/main.cpp.obj
Lists.exe: CMakeFiles/Lists.dir/build.make
Lists.exe: CMakeFiles/Lists.dir/linklibs.rsp
Lists.exe: CMakeFiles/Lists.dir/objects1.rsp
Lists.exe: CMakeFiles/Lists.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Frank\CLionProjects\ListsV\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Lists.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Lists.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Lists.dir/build: Lists.exe

.PHONY : CMakeFiles/Lists.dir/build

CMakeFiles/Lists.dir/requires: CMakeFiles/Lists.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/Lists.dir/requires

CMakeFiles/Lists.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Lists.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Lists.dir/clean

CMakeFiles/Lists.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Frank\CLionProjects\ListsV C:\Users\Frank\CLionProjects\ListsV C:\Users\Frank\CLionProjects\ListsV\cmake-build-debug C:\Users\Frank\CLionProjects\ListsV\cmake-build-debug C:\Users\Frank\CLionProjects\ListsV\cmake-build-debug\CMakeFiles\Lists.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Lists.dir/depend
