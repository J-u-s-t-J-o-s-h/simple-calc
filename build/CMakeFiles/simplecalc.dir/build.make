# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_SOURCE_DIR = /home/josh/projects/SimpleCalc

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/josh/projects/SimpleCalc/build

# Include any dependencies generated for this target.
include CMakeFiles/simplecalc.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/simplecalc.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/simplecalc.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/simplecalc.dir/flags.make

CMakeFiles/simplecalc.dir/src/simplecalc.c.o: CMakeFiles/simplecalc.dir/flags.make
CMakeFiles/simplecalc.dir/src/simplecalc.c.o: ../src/simplecalc.c
CMakeFiles/simplecalc.dir/src/simplecalc.c.o: CMakeFiles/simplecalc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/josh/projects/SimpleCalc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/simplecalc.dir/src/simplecalc.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/simplecalc.dir/src/simplecalc.c.o -MF CMakeFiles/simplecalc.dir/src/simplecalc.c.o.d -o CMakeFiles/simplecalc.dir/src/simplecalc.c.o -c /home/josh/projects/SimpleCalc/src/simplecalc.c

CMakeFiles/simplecalc.dir/src/simplecalc.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/simplecalc.dir/src/simplecalc.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/josh/projects/SimpleCalc/src/simplecalc.c > CMakeFiles/simplecalc.dir/src/simplecalc.c.i

CMakeFiles/simplecalc.dir/src/simplecalc.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/simplecalc.dir/src/simplecalc.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/josh/projects/SimpleCalc/src/simplecalc.c -o CMakeFiles/simplecalc.dir/src/simplecalc.c.s

CMakeFiles/simplecalc.dir/src/parser.c.o: CMakeFiles/simplecalc.dir/flags.make
CMakeFiles/simplecalc.dir/src/parser.c.o: ../src/parser.c
CMakeFiles/simplecalc.dir/src/parser.c.o: CMakeFiles/simplecalc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/josh/projects/SimpleCalc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/simplecalc.dir/src/parser.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/simplecalc.dir/src/parser.c.o -MF CMakeFiles/simplecalc.dir/src/parser.c.o.d -o CMakeFiles/simplecalc.dir/src/parser.c.o -c /home/josh/projects/SimpleCalc/src/parser.c

CMakeFiles/simplecalc.dir/src/parser.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/simplecalc.dir/src/parser.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/josh/projects/SimpleCalc/src/parser.c > CMakeFiles/simplecalc.dir/src/parser.c.i

CMakeFiles/simplecalc.dir/src/parser.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/simplecalc.dir/src/parser.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/josh/projects/SimpleCalc/src/parser.c -o CMakeFiles/simplecalc.dir/src/parser.c.s

CMakeFiles/simplecalc.dir/src/math_ops.c.o: CMakeFiles/simplecalc.dir/flags.make
CMakeFiles/simplecalc.dir/src/math_ops.c.o: ../src/math_ops.c
CMakeFiles/simplecalc.dir/src/math_ops.c.o: CMakeFiles/simplecalc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/josh/projects/SimpleCalc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/simplecalc.dir/src/math_ops.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/simplecalc.dir/src/math_ops.c.o -MF CMakeFiles/simplecalc.dir/src/math_ops.c.o.d -o CMakeFiles/simplecalc.dir/src/math_ops.c.o -c /home/josh/projects/SimpleCalc/src/math_ops.c

CMakeFiles/simplecalc.dir/src/math_ops.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/simplecalc.dir/src/math_ops.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/josh/projects/SimpleCalc/src/math_ops.c > CMakeFiles/simplecalc.dir/src/math_ops.c.i

CMakeFiles/simplecalc.dir/src/math_ops.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/simplecalc.dir/src/math_ops.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/josh/projects/SimpleCalc/src/math_ops.c -o CMakeFiles/simplecalc.dir/src/math_ops.c.s

CMakeFiles/simplecalc.dir/src/error.c.o: CMakeFiles/simplecalc.dir/flags.make
CMakeFiles/simplecalc.dir/src/error.c.o: ../src/error.c
CMakeFiles/simplecalc.dir/src/error.c.o: CMakeFiles/simplecalc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/josh/projects/SimpleCalc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/simplecalc.dir/src/error.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/simplecalc.dir/src/error.c.o -MF CMakeFiles/simplecalc.dir/src/error.c.o.d -o CMakeFiles/simplecalc.dir/src/error.c.o -c /home/josh/projects/SimpleCalc/src/error.c

CMakeFiles/simplecalc.dir/src/error.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/simplecalc.dir/src/error.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/josh/projects/SimpleCalc/src/error.c > CMakeFiles/simplecalc.dir/src/error.c.i

CMakeFiles/simplecalc.dir/src/error.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/simplecalc.dir/src/error.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/josh/projects/SimpleCalc/src/error.c -o CMakeFiles/simplecalc.dir/src/error.c.s

# Object files for target simplecalc
simplecalc_OBJECTS = \
"CMakeFiles/simplecalc.dir/src/simplecalc.c.o" \
"CMakeFiles/simplecalc.dir/src/parser.c.o" \
"CMakeFiles/simplecalc.dir/src/math_ops.c.o" \
"CMakeFiles/simplecalc.dir/src/error.c.o"

# External object files for target simplecalc
simplecalc_EXTERNAL_OBJECTS =

simplecalc: CMakeFiles/simplecalc.dir/src/simplecalc.c.o
simplecalc: CMakeFiles/simplecalc.dir/src/parser.c.o
simplecalc: CMakeFiles/simplecalc.dir/src/math_ops.c.o
simplecalc: CMakeFiles/simplecalc.dir/src/error.c.o
simplecalc: CMakeFiles/simplecalc.dir/build.make
simplecalc: CMakeFiles/simplecalc.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/josh/projects/SimpleCalc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking C executable simplecalc"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/simplecalc.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/simplecalc.dir/build: simplecalc
.PHONY : CMakeFiles/simplecalc.dir/build

CMakeFiles/simplecalc.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/simplecalc.dir/cmake_clean.cmake
.PHONY : CMakeFiles/simplecalc.dir/clean

CMakeFiles/simplecalc.dir/depend:
	cd /home/josh/projects/SimpleCalc/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/josh/projects/SimpleCalc /home/josh/projects/SimpleCalc /home/josh/projects/SimpleCalc/build /home/josh/projects/SimpleCalc/build /home/josh/projects/SimpleCalc/build/CMakeFiles/simplecalc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/simplecalc.dir/depend

