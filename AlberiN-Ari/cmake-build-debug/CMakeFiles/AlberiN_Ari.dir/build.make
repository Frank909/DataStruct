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
CMAKE_SOURCE_DIR = C:\Users\Frank\CLionProjects\AlberiN-Ari

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Frank\CLionProjects\AlberiN-Ari\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/AlberiN_Ari.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/AlberiN_Ari.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/AlberiN_Ari.dir/flags.make

CMakeFiles/AlberiN_Ari.dir/main.cpp.obj: CMakeFiles/AlberiN_Ari.dir/flags.make
CMakeFiles/AlberiN_Ari.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Frank\CLionProjects\AlberiN-Ari\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/AlberiN_Ari.dir/main.cpp.obj"
	D:\MinGW\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\AlberiN_Ari.dir\main.cpp.obj -c C:\Users\Frank\CLionProjects\AlberiN-Ari\main.cpp

CMakeFiles/AlberiN_Ari.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AlberiN_Ari.dir/main.cpp.i"
	D:\MinGW\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Frank\CLionProjects\AlberiN-Ari\main.cpp > CMakeFiles\AlberiN_Ari.dir\main.cpp.i

CMakeFiles/AlberiN_Ari.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AlberiN_Ari.dir/main.cpp.s"
	D:\MinGW\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Frank\CLionProjects\AlberiN-Ari\main.cpp -o CMakeFiles\AlberiN_Ari.dir\main.cpp.s

CMakeFiles/AlberiN_Ari.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/AlberiN_Ari.dir/main.cpp.obj.requires

CMakeFiles/AlberiN_Ari.dir/main.cpp.obj.provides: CMakeFiles/AlberiN_Ari.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\AlberiN_Ari.dir\build.make CMakeFiles/AlberiN_Ari.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/AlberiN_Ari.dir/main.cpp.obj.provides

CMakeFiles/AlberiN_Ari.dir/main.cpp.obj.provides.build: CMakeFiles/AlberiN_Ari.dir/main.cpp.obj


# Object files for target AlberiN_Ari
AlberiN_Ari_OBJECTS = \
"CMakeFiles/AlberiN_Ari.dir/main.cpp.obj"

# External object files for target AlberiN_Ari
AlberiN_Ari_EXTERNAL_OBJECTS =

AlberiN_Ari.exe: CMakeFiles/AlberiN_Ari.dir/main.cpp.obj
AlberiN_Ari.exe: CMakeFiles/AlberiN_Ari.dir/build.make
AlberiN_Ari.exe: CMakeFiles/AlberiN_Ari.dir/linklibs.rsp
AlberiN_Ari.exe: CMakeFiles/AlberiN_Ari.dir/objects1.rsp
AlberiN_Ari.exe: CMakeFiles/AlberiN_Ari.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Frank\CLionProjects\AlberiN-Ari\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable AlberiN_Ari.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\AlberiN_Ari.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/AlberiN_Ari.dir/build: AlberiN_Ari.exe

.PHONY : CMakeFiles/AlberiN_Ari.dir/build

CMakeFiles/AlberiN_Ari.dir/requires: CMakeFiles/AlberiN_Ari.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/AlberiN_Ari.dir/requires

CMakeFiles/AlberiN_Ari.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\AlberiN_Ari.dir\cmake_clean.cmake
.PHONY : CMakeFiles/AlberiN_Ari.dir/clean

CMakeFiles/AlberiN_Ari.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Frank\CLionProjects\AlberiN-Ari C:\Users\Frank\CLionProjects\AlberiN-Ari C:\Users\Frank\CLionProjects\AlberiN-Ari\cmake-build-debug C:\Users\Frank\CLionProjects\AlberiN-Ari\cmake-build-debug C:\Users\Frank\CLionProjects\AlberiN-Ari\cmake-build-debug\CMakeFiles\AlberiN_Ari.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/AlberiN_Ari.dir/depend
