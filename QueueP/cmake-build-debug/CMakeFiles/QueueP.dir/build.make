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
CMAKE_SOURCE_DIR = C:\Users\Frank\CLionProjects\QueueP

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Frank\CLionProjects\QueueP\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/QueueP.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/QueueP.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/QueueP.dir/flags.make

CMakeFiles/QueueP.dir/main.cpp.obj: CMakeFiles/QueueP.dir/flags.make
CMakeFiles/QueueP.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Frank\CLionProjects\QueueP\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/QueueP.dir/main.cpp.obj"
	D:\MinGW\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\QueueP.dir\main.cpp.obj -c C:\Users\Frank\CLionProjects\QueueP\main.cpp

CMakeFiles/QueueP.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/QueueP.dir/main.cpp.i"
	D:\MinGW\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Frank\CLionProjects\QueueP\main.cpp > CMakeFiles\QueueP.dir\main.cpp.i

CMakeFiles/QueueP.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/QueueP.dir/main.cpp.s"
	D:\MinGW\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Frank\CLionProjects\QueueP\main.cpp -o CMakeFiles\QueueP.dir\main.cpp.s

CMakeFiles/QueueP.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/QueueP.dir/main.cpp.obj.requires

CMakeFiles/QueueP.dir/main.cpp.obj.provides: CMakeFiles/QueueP.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\QueueP.dir\build.make CMakeFiles/QueueP.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/QueueP.dir/main.cpp.obj.provides

CMakeFiles/QueueP.dir/main.cpp.obj.provides.build: CMakeFiles/QueueP.dir/main.cpp.obj


# Object files for target QueueP
QueueP_OBJECTS = \
"CMakeFiles/QueueP.dir/main.cpp.obj"

# External object files for target QueueP
QueueP_EXTERNAL_OBJECTS =

QueueP.exe: CMakeFiles/QueueP.dir/main.cpp.obj
QueueP.exe: CMakeFiles/QueueP.dir/build.make
QueueP.exe: CMakeFiles/QueueP.dir/linklibs.rsp
QueueP.exe: CMakeFiles/QueueP.dir/objects1.rsp
QueueP.exe: CMakeFiles/QueueP.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Frank\CLionProjects\QueueP\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable QueueP.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\QueueP.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/QueueP.dir/build: QueueP.exe

.PHONY : CMakeFiles/QueueP.dir/build

CMakeFiles/QueueP.dir/requires: CMakeFiles/QueueP.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/QueueP.dir/requires

CMakeFiles/QueueP.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\QueueP.dir\cmake_clean.cmake
.PHONY : CMakeFiles/QueueP.dir/clean

CMakeFiles/QueueP.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Frank\CLionProjects\QueueP C:\Users\Frank\CLionProjects\QueueP C:\Users\Frank\CLionProjects\QueueP\cmake-build-debug C:\Users\Frank\CLionProjects\QueueP\cmake-build-debug C:\Users\Frank\CLionProjects\QueueP\cmake-build-debug\CMakeFiles\QueueP.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/QueueP.dir/depend
