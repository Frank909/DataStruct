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
CMAKE_SOURCE_DIR = C:\Users\Frank\CLionProjects\QueueVT

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Frank\CLionProjects\QueueVT\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/QueueVT.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/QueueVT.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/QueueVT.dir/flags.make

CMakeFiles/QueueVT.dir/main.cpp.obj: CMakeFiles/QueueVT.dir/flags.make
CMakeFiles/QueueVT.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Frank\CLionProjects\QueueVT\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/QueueVT.dir/main.cpp.obj"
	D:\MinGW\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\QueueVT.dir\main.cpp.obj -c C:\Users\Frank\CLionProjects\QueueVT\main.cpp

CMakeFiles/QueueVT.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/QueueVT.dir/main.cpp.i"
	D:\MinGW\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Frank\CLionProjects\QueueVT\main.cpp > CMakeFiles\QueueVT.dir\main.cpp.i

CMakeFiles/QueueVT.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/QueueVT.dir/main.cpp.s"
	D:\MinGW\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Frank\CLionProjects\QueueVT\main.cpp -o CMakeFiles\QueueVT.dir\main.cpp.s

CMakeFiles/QueueVT.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/QueueVT.dir/main.cpp.obj.requires

CMakeFiles/QueueVT.dir/main.cpp.obj.provides: CMakeFiles/QueueVT.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\QueueVT.dir\build.make CMakeFiles/QueueVT.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/QueueVT.dir/main.cpp.obj.provides

CMakeFiles/QueueVT.dir/main.cpp.obj.provides.build: CMakeFiles/QueueVT.dir/main.cpp.obj


# Object files for target QueueVT
QueueVT_OBJECTS = \
"CMakeFiles/QueueVT.dir/main.cpp.obj"

# External object files for target QueueVT
QueueVT_EXTERNAL_OBJECTS =

QueueVT.exe: CMakeFiles/QueueVT.dir/main.cpp.obj
QueueVT.exe: CMakeFiles/QueueVT.dir/build.make
QueueVT.exe: CMakeFiles/QueueVT.dir/linklibs.rsp
QueueVT.exe: CMakeFiles/QueueVT.dir/objects1.rsp
QueueVT.exe: CMakeFiles/QueueVT.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Frank\CLionProjects\QueueVT\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable QueueVT.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\QueueVT.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/QueueVT.dir/build: QueueVT.exe

.PHONY : CMakeFiles/QueueVT.dir/build

CMakeFiles/QueueVT.dir/requires: CMakeFiles/QueueVT.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/QueueVT.dir/requires

CMakeFiles/QueueVT.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\QueueVT.dir\cmake_clean.cmake
.PHONY : CMakeFiles/QueueVT.dir/clean

CMakeFiles/QueueVT.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Frank\CLionProjects\QueueVT C:\Users\Frank\CLionProjects\QueueVT C:\Users\Frank\CLionProjects\QueueVT\cmake-build-debug C:\Users\Frank\CLionProjects\QueueVT\cmake-build-debug C:\Users\Frank\CLionProjects\QueueVT\cmake-build-debug\CMakeFiles\QueueVT.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/QueueVT.dir/depend

