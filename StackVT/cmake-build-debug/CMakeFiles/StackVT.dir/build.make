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
CMAKE_SOURCE_DIR = C:\Users\Frank\CLionProjects\StackVT

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Frank\CLionProjects\StackVT\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/StackVT.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/StackVT.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/StackVT.dir/flags.make

CMakeFiles/StackVT.dir/main.cpp.obj: CMakeFiles/StackVT.dir/flags.make
CMakeFiles/StackVT.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Frank\CLionProjects\StackVT\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/StackVT.dir/main.cpp.obj"
	D:\MinGW\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\StackVT.dir\main.cpp.obj -c C:\Users\Frank\CLionProjects\StackVT\main.cpp

CMakeFiles/StackVT.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/StackVT.dir/main.cpp.i"
	D:\MinGW\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Frank\CLionProjects\StackVT\main.cpp > CMakeFiles\StackVT.dir\main.cpp.i

CMakeFiles/StackVT.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/StackVT.dir/main.cpp.s"
	D:\MinGW\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Frank\CLionProjects\StackVT\main.cpp -o CMakeFiles\StackVT.dir\main.cpp.s

CMakeFiles/StackVT.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/StackVT.dir/main.cpp.obj.requires

CMakeFiles/StackVT.dir/main.cpp.obj.provides: CMakeFiles/StackVT.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\StackVT.dir\build.make CMakeFiles/StackVT.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/StackVT.dir/main.cpp.obj.provides

CMakeFiles/StackVT.dir/main.cpp.obj.provides.build: CMakeFiles/StackVT.dir/main.cpp.obj


# Object files for target StackVT
StackVT_OBJECTS = \
"CMakeFiles/StackVT.dir/main.cpp.obj"

# External object files for target StackVT
StackVT_EXTERNAL_OBJECTS =

StackVT.exe: CMakeFiles/StackVT.dir/main.cpp.obj
StackVT.exe: CMakeFiles/StackVT.dir/build.make
StackVT.exe: CMakeFiles/StackVT.dir/linklibs.rsp
StackVT.exe: CMakeFiles/StackVT.dir/objects1.rsp
StackVT.exe: CMakeFiles/StackVT.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Frank\CLionProjects\StackVT\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable StackVT.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\StackVT.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/StackVT.dir/build: StackVT.exe

.PHONY : CMakeFiles/StackVT.dir/build

CMakeFiles/StackVT.dir/requires: CMakeFiles/StackVT.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/StackVT.dir/requires

CMakeFiles/StackVT.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\StackVT.dir\cmake_clean.cmake
.PHONY : CMakeFiles/StackVT.dir/clean

CMakeFiles/StackVT.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Frank\CLionProjects\StackVT C:\Users\Frank\CLionProjects\StackVT C:\Users\Frank\CLionProjects\StackVT\cmake-build-debug C:\Users\Frank\CLionProjects\StackVT\cmake-build-debug C:\Users\Frank\CLionProjects\StackVT\cmake-build-debug\CMakeFiles\StackVT.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/StackVT.dir/depend

