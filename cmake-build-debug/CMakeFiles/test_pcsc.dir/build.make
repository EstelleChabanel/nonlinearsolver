# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.23

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/nounou/Desktop/EPFL/M5/Programming concepts for scientific computing/pcsc/nonlinearsolver"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/nounou/Desktop/EPFL/M5/Programming concepts for scientific computing/pcsc/nonlinearsolver/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/test_pcsc.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/test_pcsc.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/test_pcsc.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test_pcsc.dir/flags.make

CMakeFiles/test_pcsc.dir/test/test_bisection.cpp.o: CMakeFiles/test_pcsc.dir/flags.make
CMakeFiles/test_pcsc.dir/test/test_bisection.cpp.o: ../test/test_bisection.cpp
CMakeFiles/test_pcsc.dir/test/test_bisection.cpp.o: CMakeFiles/test_pcsc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/nounou/Desktop/EPFL/M5/Programming concepts for scientific computing/pcsc/nonlinearsolver/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/test_pcsc.dir/test/test_bisection.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/test_pcsc.dir/test/test_bisection.cpp.o -MF CMakeFiles/test_pcsc.dir/test/test_bisection.cpp.o.d -o CMakeFiles/test_pcsc.dir/test/test_bisection.cpp.o -c "/Users/nounou/Desktop/EPFL/M5/Programming concepts for scientific computing/pcsc/nonlinearsolver/test/test_bisection.cpp"

CMakeFiles/test_pcsc.dir/test/test_bisection.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_pcsc.dir/test/test_bisection.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/nounou/Desktop/EPFL/M5/Programming concepts for scientific computing/pcsc/nonlinearsolver/test/test_bisection.cpp" > CMakeFiles/test_pcsc.dir/test/test_bisection.cpp.i

CMakeFiles/test_pcsc.dir/test/test_bisection.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_pcsc.dir/test/test_bisection.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/nounou/Desktop/EPFL/M5/Programming concepts for scientific computing/pcsc/nonlinearsolver/test/test_bisection.cpp" -o CMakeFiles/test_pcsc.dir/test/test_bisection.cpp.s

CMakeFiles/test_pcsc.dir/test/test_chord.cpp.o: CMakeFiles/test_pcsc.dir/flags.make
CMakeFiles/test_pcsc.dir/test/test_chord.cpp.o: ../test/test_chord.cpp
CMakeFiles/test_pcsc.dir/test/test_chord.cpp.o: CMakeFiles/test_pcsc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/nounou/Desktop/EPFL/M5/Programming concepts for scientific computing/pcsc/nonlinearsolver/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/test_pcsc.dir/test/test_chord.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/test_pcsc.dir/test/test_chord.cpp.o -MF CMakeFiles/test_pcsc.dir/test/test_chord.cpp.o.d -o CMakeFiles/test_pcsc.dir/test/test_chord.cpp.o -c "/Users/nounou/Desktop/EPFL/M5/Programming concepts for scientific computing/pcsc/nonlinearsolver/test/test_chord.cpp"

CMakeFiles/test_pcsc.dir/test/test_chord.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_pcsc.dir/test/test_chord.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/nounou/Desktop/EPFL/M5/Programming concepts for scientific computing/pcsc/nonlinearsolver/test/test_chord.cpp" > CMakeFiles/test_pcsc.dir/test/test_chord.cpp.i

CMakeFiles/test_pcsc.dir/test/test_chord.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_pcsc.dir/test/test_chord.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/nounou/Desktop/EPFL/M5/Programming concepts for scientific computing/pcsc/nonlinearsolver/test/test_chord.cpp" -o CMakeFiles/test_pcsc.dir/test/test_chord.cpp.s

CMakeFiles/test_pcsc.dir/test/test_NR.cpp.o: CMakeFiles/test_pcsc.dir/flags.make
CMakeFiles/test_pcsc.dir/test/test_NR.cpp.o: ../test/test_NR.cpp
CMakeFiles/test_pcsc.dir/test/test_NR.cpp.o: CMakeFiles/test_pcsc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/nounou/Desktop/EPFL/M5/Programming concepts for scientific computing/pcsc/nonlinearsolver/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/test_pcsc.dir/test/test_NR.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/test_pcsc.dir/test/test_NR.cpp.o -MF CMakeFiles/test_pcsc.dir/test/test_NR.cpp.o.d -o CMakeFiles/test_pcsc.dir/test/test_NR.cpp.o -c "/Users/nounou/Desktop/EPFL/M5/Programming concepts for scientific computing/pcsc/nonlinearsolver/test/test_NR.cpp"

CMakeFiles/test_pcsc.dir/test/test_NR.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_pcsc.dir/test/test_NR.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/nounou/Desktop/EPFL/M5/Programming concepts for scientific computing/pcsc/nonlinearsolver/test/test_NR.cpp" > CMakeFiles/test_pcsc.dir/test/test_NR.cpp.i

CMakeFiles/test_pcsc.dir/test/test_NR.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_pcsc.dir/test/test_NR.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/nounou/Desktop/EPFL/M5/Programming concepts for scientific computing/pcsc/nonlinearsolver/test/test_NR.cpp" -o CMakeFiles/test_pcsc.dir/test/test_NR.cpp.s

CMakeFiles/test_pcsc.dir/test/test_newton_system.cpp.o: CMakeFiles/test_pcsc.dir/flags.make
CMakeFiles/test_pcsc.dir/test/test_newton_system.cpp.o: ../test/test_newton_system.cpp
CMakeFiles/test_pcsc.dir/test/test_newton_system.cpp.o: CMakeFiles/test_pcsc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/nounou/Desktop/EPFL/M5/Programming concepts for scientific computing/pcsc/nonlinearsolver/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/test_pcsc.dir/test/test_newton_system.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/test_pcsc.dir/test/test_newton_system.cpp.o -MF CMakeFiles/test_pcsc.dir/test/test_newton_system.cpp.o.d -o CMakeFiles/test_pcsc.dir/test/test_newton_system.cpp.o -c "/Users/nounou/Desktop/EPFL/M5/Programming concepts for scientific computing/pcsc/nonlinearsolver/test/test_newton_system.cpp"

CMakeFiles/test_pcsc.dir/test/test_newton_system.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_pcsc.dir/test/test_newton_system.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/nounou/Desktop/EPFL/M5/Programming concepts for scientific computing/pcsc/nonlinearsolver/test/test_newton_system.cpp" > CMakeFiles/test_pcsc.dir/test/test_newton_system.cpp.i

CMakeFiles/test_pcsc.dir/test/test_newton_system.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_pcsc.dir/test/test_newton_system.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/nounou/Desktop/EPFL/M5/Programming concepts for scientific computing/pcsc/nonlinearsolver/test/test_newton_system.cpp" -o CMakeFiles/test_pcsc.dir/test/test_newton_system.cpp.s

CMakeFiles/test_pcsc.dir/test/test_hirano.cpp.o: CMakeFiles/test_pcsc.dir/flags.make
CMakeFiles/test_pcsc.dir/test/test_hirano.cpp.o: ../test/test_hirano.cpp
CMakeFiles/test_pcsc.dir/test/test_hirano.cpp.o: CMakeFiles/test_pcsc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/nounou/Desktop/EPFL/M5/Programming concepts for scientific computing/pcsc/nonlinearsolver/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/test_pcsc.dir/test/test_hirano.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/test_pcsc.dir/test/test_hirano.cpp.o -MF CMakeFiles/test_pcsc.dir/test/test_hirano.cpp.o.d -o CMakeFiles/test_pcsc.dir/test/test_hirano.cpp.o -c "/Users/nounou/Desktop/EPFL/M5/Programming concepts for scientific computing/pcsc/nonlinearsolver/test/test_hirano.cpp"

CMakeFiles/test_pcsc.dir/test/test_hirano.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_pcsc.dir/test/test_hirano.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/nounou/Desktop/EPFL/M5/Programming concepts for scientific computing/pcsc/nonlinearsolver/test/test_hirano.cpp" > CMakeFiles/test_pcsc.dir/test/test_hirano.cpp.i

CMakeFiles/test_pcsc.dir/test/test_hirano.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_pcsc.dir/test/test_hirano.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/nounou/Desktop/EPFL/M5/Programming concepts for scientific computing/pcsc/nonlinearsolver/test/test_hirano.cpp" -o CMakeFiles/test_pcsc.dir/test/test_hirano.cpp.s

# Object files for target test_pcsc
test_pcsc_OBJECTS = \
"CMakeFiles/test_pcsc.dir/test/test_bisection.cpp.o" \
"CMakeFiles/test_pcsc.dir/test/test_chord.cpp.o" \
"CMakeFiles/test_pcsc.dir/test/test_NR.cpp.o" \
"CMakeFiles/test_pcsc.dir/test/test_newton_system.cpp.o" \
"CMakeFiles/test_pcsc.dir/test/test_hirano.cpp.o"

# External object files for target test_pcsc
test_pcsc_EXTERNAL_OBJECTS =

test_pcsc: CMakeFiles/test_pcsc.dir/test/test_bisection.cpp.o
test_pcsc: CMakeFiles/test_pcsc.dir/test/test_chord.cpp.o
test_pcsc: CMakeFiles/test_pcsc.dir/test/test_NR.cpp.o
test_pcsc: CMakeFiles/test_pcsc.dir/test/test_newton_system.cpp.o
test_pcsc: CMakeFiles/test_pcsc.dir/test/test_hirano.cpp.o
test_pcsc: CMakeFiles/test_pcsc.dir/build.make
test_pcsc: lib/libgtest_main.a
test_pcsc: lib/libgtest.a
test_pcsc: libpcsc.a
test_pcsc: CMakeFiles/test_pcsc.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/nounou/Desktop/EPFL/M5/Programming concepts for scientific computing/pcsc/nonlinearsolver/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable test_pcsc"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_pcsc.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test_pcsc.dir/build: test_pcsc
.PHONY : CMakeFiles/test_pcsc.dir/build

CMakeFiles/test_pcsc.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test_pcsc.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test_pcsc.dir/clean

CMakeFiles/test_pcsc.dir/depend:
	cd "/Users/nounou/Desktop/EPFL/M5/Programming concepts for scientific computing/pcsc/nonlinearsolver/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/nounou/Desktop/EPFL/M5/Programming concepts for scientific computing/pcsc/nonlinearsolver" "/Users/nounou/Desktop/EPFL/M5/Programming concepts for scientific computing/pcsc/nonlinearsolver" "/Users/nounou/Desktop/EPFL/M5/Programming concepts for scientific computing/pcsc/nonlinearsolver/cmake-build-debug" "/Users/nounou/Desktop/EPFL/M5/Programming concepts for scientific computing/pcsc/nonlinearsolver/cmake-build-debug" "/Users/nounou/Desktop/EPFL/M5/Programming concepts for scientific computing/pcsc/nonlinearsolver/cmake-build-debug/CMakeFiles/test_pcsc.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/test_pcsc.dir/depend

