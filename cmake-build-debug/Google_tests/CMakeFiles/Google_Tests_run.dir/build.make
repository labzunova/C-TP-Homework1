# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\Program files\CLion 2020.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Program files\CLion 2020.2.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\projects\C,C++ TechPark\Homework1"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\projects\C,C++ TechPark\Homework1\cmake-build-debug"

# Include any dependencies generated for this target.
include Google_tests/CMakeFiles/Google_Tests_run.dir/depend.make

# Include the progress variables for this target.
include Google_tests/CMakeFiles/Google_Tests_run.dir/progress.make

# Include the compile flags for this target's objects.
include Google_tests/CMakeFiles/Google_Tests_run.dir/flags.make

Google_tests/CMakeFiles/Google_Tests_run.dir/tests.cpp.obj: Google_tests/CMakeFiles/Google_Tests_run.dir/flags.make
Google_tests/CMakeFiles/Google_Tests_run.dir/tests.cpp.obj: Google_tests/CMakeFiles/Google_Tests_run.dir/includes_CXX.rsp
Google_tests/CMakeFiles/Google_Tests_run.dir/tests.cpp.obj: ../Google_tests/tests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\projects\C,C++ TechPark\Homework1\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Google_tests/CMakeFiles/Google_Tests_run.dir/tests.cpp.obj"
	cd /d "D:\projects\C,C++ TechPark\Homework1\cmake-build-debug\Google_tests" && D:\MinGW\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Google_Tests_run.dir\tests.cpp.obj -c "D:\projects\C,C++ TechPark\Homework1\Google_tests\tests.cpp"

Google_tests/CMakeFiles/Google_Tests_run.dir/tests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Google_Tests_run.dir/tests.cpp.i"
	cd /d "D:\projects\C,C++ TechPark\Homework1\cmake-build-debug\Google_tests" && D:\MinGW\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\projects\C,C++ TechPark\Homework1\Google_tests\tests.cpp" > CMakeFiles\Google_Tests_run.dir\tests.cpp.i

Google_tests/CMakeFiles/Google_Tests_run.dir/tests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Google_Tests_run.dir/tests.cpp.s"
	cd /d "D:\projects\C,C++ TechPark\Homework1\cmake-build-debug\Google_tests" && D:\MinGW\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\projects\C,C++ TechPark\Homework1\Google_tests\tests.cpp" -o CMakeFiles\Google_Tests_run.dir\tests.cpp.s

# Object files for target Google_Tests_run
Google_Tests_run_OBJECTS = \
"CMakeFiles/Google_Tests_run.dir/tests.cpp.obj"

# External object files for target Google_Tests_run
Google_Tests_run_EXTERNAL_OBJECTS =

Google_tests/Google_Tests_run.exe: Google_tests/CMakeFiles/Google_Tests_run.dir/tests.cpp.obj
Google_tests/Google_Tests_run.exe: Google_tests/CMakeFiles/Google_Tests_run.dir/build.make
Google_tests/Google_Tests_run.exe: libHomework_1.a
Google_tests/Google_Tests_run.exe: lib/libgtestd.a
Google_tests/Google_Tests_run.exe: lib/libgtest_maind.a
Google_tests/Google_Tests_run.exe: lib/libgtestd.a
Google_tests/Google_Tests_run.exe: Google_tests/CMakeFiles/Google_Tests_run.dir/linklibs.rsp
Google_tests/Google_Tests_run.exe: Google_tests/CMakeFiles/Google_Tests_run.dir/objects1.rsp
Google_tests/Google_Tests_run.exe: Google_tests/CMakeFiles/Google_Tests_run.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\projects\C,C++ TechPark\Homework1\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Google_Tests_run.exe"
	cd /d "D:\projects\C,C++ TechPark\Homework1\cmake-build-debug\Google_tests" && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Google_Tests_run.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Google_tests/CMakeFiles/Google_Tests_run.dir/build: Google_tests/Google_Tests_run.exe

.PHONY : Google_tests/CMakeFiles/Google_Tests_run.dir/build

Google_tests/CMakeFiles/Google_Tests_run.dir/clean:
	cd /d "D:\projects\C,C++ TechPark\Homework1\cmake-build-debug\Google_tests" && $(CMAKE_COMMAND) -P CMakeFiles\Google_Tests_run.dir\cmake_clean.cmake
.PHONY : Google_tests/CMakeFiles/Google_Tests_run.dir/clean

Google_tests/CMakeFiles/Google_Tests_run.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\projects\C,C++ TechPark\Homework1" "D:\projects\C,C++ TechPark\Homework1\Google_tests" "D:\projects\C,C++ TechPark\Homework1\cmake-build-debug" "D:\projects\C,C++ TechPark\Homework1\cmake-build-debug\Google_tests" "D:\projects\C,C++ TechPark\Homework1\cmake-build-debug\Google_tests\CMakeFiles\Google_Tests_run.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : Google_tests/CMakeFiles/Google_Tests_run.dir/depend

