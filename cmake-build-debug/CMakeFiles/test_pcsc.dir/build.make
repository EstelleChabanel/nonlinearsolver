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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/c/Users/eecha/OneDrive/Documents/EPFL-Master/Semestre3/nonlinearsolver

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Users/eecha/OneDrive/Documents/EPFL-Master/Semestre3/nonlinearsolver/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/test_pcsc.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/test_pcsc.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test_pcsc.dir/flags.make

CMakeFiles/test_pcsc.dir/test/test_newton_system.cpp.o: CMakeFiles/test_pcsc.dir/flags.make
CMakeFiles/test_pcsc.dir/test/test_newton_system.cpp.o: ../test/test_newton_system.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/eecha/OneDrive/Documents/EPFL-Master/Semestre3/nonlinearsolver/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/test_pcsc.dir/test/test_newton_system.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test_pcsc.dir/test/test_newton_system.cpp.o -c /mnt/c/Users/eecha/OneDrive/Documents/EPFL-Master/Semestre3/nonlinearsolver/test/test_newton_system.cpp

CMakeFiles/test_pcsc.dir/test/test_newton_system.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_pcsc.dir/test/test_newton_system.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/eecha/OneDrive/Documents/EPFL-Master/Semestre3/nonlinearsolver/test/test_newton_system.cpp > CMakeFiles/test_pcsc.dir/test/test_newton_system.cpp.i

CMakeFiles/test_pcsc.dir/test/test_newton_system.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_pcsc.dir/test/test_newton_system.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/eecha/OneDrive/Documents/EPFL-Master/Semestre3/nonlinearsolver/test/test_newton_system.cpp -o CMakeFiles/test_pcsc.dir/test/test_newton_system.cpp.s

CMakeFiles/test_pcsc.dir/src/Newton_System.cpp.o: CMakeFiles/test_pcsc.dir/flags.make
CMakeFiles/test_pcsc.dir/src/Newton_System.cpp.o: ../src/Newton_System.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/eecha/OneDrive/Documents/EPFL-Master/Semestre3/nonlinearsolver/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/test_pcsc.dir/src/Newton_System.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test_pcsc.dir/src/Newton_System.cpp.o -c /mnt/c/Users/eecha/OneDrive/Documents/EPFL-Master/Semestre3/nonlinearsolver/src/Newton_System.cpp

CMakeFiles/test_pcsc.dir/src/Newton_System.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_pcsc.dir/src/Newton_System.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/eecha/OneDrive/Documents/EPFL-Master/Semestre3/nonlinearsolver/src/Newton_System.cpp > CMakeFiles/test_pcsc.dir/src/Newton_System.cpp.i

CMakeFiles/test_pcsc.dir/src/Newton_System.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_pcsc.dir/src/Newton_System.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/eecha/OneDrive/Documents/EPFL-Master/Semestre3/nonlinearsolver/src/Newton_System.cpp -o CMakeFiles/test_pcsc.dir/src/Newton_System.cpp.s

CMakeFiles/test_pcsc.dir/src/System_Solver.cpp.o: CMakeFiles/test_pcsc.dir/flags.make
CMakeFiles/test_pcsc.dir/src/System_Solver.cpp.o: ../src/System_Solver.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/eecha/OneDrive/Documents/EPFL-Master/Semestre3/nonlinearsolver/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/test_pcsc.dir/src/System_Solver.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test_pcsc.dir/src/System_Solver.cpp.o -c /mnt/c/Users/eecha/OneDrive/Documents/EPFL-Master/Semestre3/nonlinearsolver/src/System_Solver.cpp

CMakeFiles/test_pcsc.dir/src/System_Solver.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_pcsc.dir/src/System_Solver.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/eecha/OneDrive/Documents/EPFL-Master/Semestre3/nonlinearsolver/src/System_Solver.cpp > CMakeFiles/test_pcsc.dir/src/System_Solver.cpp.i

CMakeFiles/test_pcsc.dir/src/System_Solver.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_pcsc.dir/src/System_Solver.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/eecha/OneDrive/Documents/EPFL-Master/Semestre3/nonlinearsolver/src/System_Solver.cpp -o CMakeFiles/test_pcsc.dir/src/System_Solver.cpp.s

CMakeFiles/test_pcsc.dir/src/Mama_Solver.cpp.o: CMakeFiles/test_pcsc.dir/flags.make
CMakeFiles/test_pcsc.dir/src/Mama_Solver.cpp.o: ../src/Mama_Solver.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/eecha/OneDrive/Documents/EPFL-Master/Semestre3/nonlinearsolver/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/test_pcsc.dir/src/Mama_Solver.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test_pcsc.dir/src/Mama_Solver.cpp.o -c /mnt/c/Users/eecha/OneDrive/Documents/EPFL-Master/Semestre3/nonlinearsolver/src/Mama_Solver.cpp

CMakeFiles/test_pcsc.dir/src/Mama_Solver.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_pcsc.dir/src/Mama_Solver.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/eecha/OneDrive/Documents/EPFL-Master/Semestre3/nonlinearsolver/src/Mama_Solver.cpp > CMakeFiles/test_pcsc.dir/src/Mama_Solver.cpp.i

CMakeFiles/test_pcsc.dir/src/Mama_Solver.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_pcsc.dir/src/Mama_Solver.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/eecha/OneDrive/Documents/EPFL-Master/Semestre3/nonlinearsolver/src/Mama_Solver.cpp -o CMakeFiles/test_pcsc.dir/src/Mama_Solver.cpp.s

CMakeFiles/test_pcsc.dir/src/exceptions/Interval.cpp.o: CMakeFiles/test_pcsc.dir/flags.make
CMakeFiles/test_pcsc.dir/src/exceptions/Interval.cpp.o: ../src/exceptions/Interval.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/eecha/OneDrive/Documents/EPFL-Master/Semestre3/nonlinearsolver/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/test_pcsc.dir/src/exceptions/Interval.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test_pcsc.dir/src/exceptions/Interval.cpp.o -c /mnt/c/Users/eecha/OneDrive/Documents/EPFL-Master/Semestre3/nonlinearsolver/src/exceptions/Interval.cpp

CMakeFiles/test_pcsc.dir/src/exceptions/Interval.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_pcsc.dir/src/exceptions/Interval.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/eecha/OneDrive/Documents/EPFL-Master/Semestre3/nonlinearsolver/src/exceptions/Interval.cpp > CMakeFiles/test_pcsc.dir/src/exceptions/Interval.cpp.i

CMakeFiles/test_pcsc.dir/src/exceptions/Interval.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_pcsc.dir/src/exceptions/Interval.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/eecha/OneDrive/Documents/EPFL-Master/Semestre3/nonlinearsolver/src/exceptions/Interval.cpp -o CMakeFiles/test_pcsc.dir/src/exceptions/Interval.cpp.s

CMakeFiles/test_pcsc.dir/src/exceptions/MaxIter.cpp.o: CMakeFiles/test_pcsc.dir/flags.make
CMakeFiles/test_pcsc.dir/src/exceptions/MaxIter.cpp.o: ../src/exceptions/MaxIter.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/eecha/OneDrive/Documents/EPFL-Master/Semestre3/nonlinearsolver/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/test_pcsc.dir/src/exceptions/MaxIter.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test_pcsc.dir/src/exceptions/MaxIter.cpp.o -c /mnt/c/Users/eecha/OneDrive/Documents/EPFL-Master/Semestre3/nonlinearsolver/src/exceptions/MaxIter.cpp

CMakeFiles/test_pcsc.dir/src/exceptions/MaxIter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_pcsc.dir/src/exceptions/MaxIter.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/eecha/OneDrive/Documents/EPFL-Master/Semestre3/nonlinearsolver/src/exceptions/MaxIter.cpp > CMakeFiles/test_pcsc.dir/src/exceptions/MaxIter.cpp.i

CMakeFiles/test_pcsc.dir/src/exceptions/MaxIter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_pcsc.dir/src/exceptions/MaxIter.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/eecha/OneDrive/Documents/EPFL-Master/Semestre3/nonlinearsolver/src/exceptions/MaxIter.cpp -o CMakeFiles/test_pcsc.dir/src/exceptions/MaxIter.cpp.s

CMakeFiles/test_pcsc.dir/src/exceptions/WrongDim.cpp.o: CMakeFiles/test_pcsc.dir/flags.make
CMakeFiles/test_pcsc.dir/src/exceptions/WrongDim.cpp.o: ../src/exceptions/WrongDim.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/eecha/OneDrive/Documents/EPFL-Master/Semestre3/nonlinearsolver/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/test_pcsc.dir/src/exceptions/WrongDim.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test_pcsc.dir/src/exceptions/WrongDim.cpp.o -c /mnt/c/Users/eecha/OneDrive/Documents/EPFL-Master/Semestre3/nonlinearsolver/src/exceptions/WrongDim.cpp

CMakeFiles/test_pcsc.dir/src/exceptions/WrongDim.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_pcsc.dir/src/exceptions/WrongDim.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/eecha/OneDrive/Documents/EPFL-Master/Semestre3/nonlinearsolver/src/exceptions/WrongDim.cpp > CMakeFiles/test_pcsc.dir/src/exceptions/WrongDim.cpp.i

CMakeFiles/test_pcsc.dir/src/exceptions/WrongDim.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_pcsc.dir/src/exceptions/WrongDim.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/eecha/OneDrive/Documents/EPFL-Master/Semestre3/nonlinearsolver/src/exceptions/WrongDim.cpp -o CMakeFiles/test_pcsc.dir/src/exceptions/WrongDim.cpp.s

CMakeFiles/test_pcsc.dir/src/exceptions/Exceptions.cpp.o: CMakeFiles/test_pcsc.dir/flags.make
CMakeFiles/test_pcsc.dir/src/exceptions/Exceptions.cpp.o: ../src/exceptions/Exceptions.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/eecha/OneDrive/Documents/EPFL-Master/Semestre3/nonlinearsolver/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/test_pcsc.dir/src/exceptions/Exceptions.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test_pcsc.dir/src/exceptions/Exceptions.cpp.o -c /mnt/c/Users/eecha/OneDrive/Documents/EPFL-Master/Semestre3/nonlinearsolver/src/exceptions/Exceptions.cpp

CMakeFiles/test_pcsc.dir/src/exceptions/Exceptions.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_pcsc.dir/src/exceptions/Exceptions.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/eecha/OneDrive/Documents/EPFL-Master/Semestre3/nonlinearsolver/src/exceptions/Exceptions.cpp > CMakeFiles/test_pcsc.dir/src/exceptions/Exceptions.cpp.i

CMakeFiles/test_pcsc.dir/src/exceptions/Exceptions.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_pcsc.dir/src/exceptions/Exceptions.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/eecha/OneDrive/Documents/EPFL-Master/Semestre3/nonlinearsolver/src/exceptions/Exceptions.cpp -o CMakeFiles/test_pcsc.dir/src/exceptions/Exceptions.cpp.s

# Object files for target test_pcsc
test_pcsc_OBJECTS = \
"CMakeFiles/test_pcsc.dir/test/test_newton_system.cpp.o" \
"CMakeFiles/test_pcsc.dir/src/Newton_System.cpp.o" \
"CMakeFiles/test_pcsc.dir/src/System_Solver.cpp.o" \
"CMakeFiles/test_pcsc.dir/src/Mama_Solver.cpp.o" \
"CMakeFiles/test_pcsc.dir/src/exceptions/Interval.cpp.o" \
"CMakeFiles/test_pcsc.dir/src/exceptions/MaxIter.cpp.o" \
"CMakeFiles/test_pcsc.dir/src/exceptions/WrongDim.cpp.o" \
"CMakeFiles/test_pcsc.dir/src/exceptions/Exceptions.cpp.o"

# External object files for target test_pcsc
test_pcsc_EXTERNAL_OBJECTS =

test_pcsc: CMakeFiles/test_pcsc.dir/test/test_newton_system.cpp.o
test_pcsc: CMakeFiles/test_pcsc.dir/src/Newton_System.cpp.o
test_pcsc: CMakeFiles/test_pcsc.dir/src/System_Solver.cpp.o
test_pcsc: CMakeFiles/test_pcsc.dir/src/Mama_Solver.cpp.o
test_pcsc: CMakeFiles/test_pcsc.dir/src/exceptions/Interval.cpp.o
test_pcsc: CMakeFiles/test_pcsc.dir/src/exceptions/MaxIter.cpp.o
test_pcsc: CMakeFiles/test_pcsc.dir/src/exceptions/WrongDim.cpp.o
test_pcsc: CMakeFiles/test_pcsc.dir/src/exceptions/Exceptions.cpp.o
test_pcsc: CMakeFiles/test_pcsc.dir/build.make
test_pcsc: libpcsc.a
test_pcsc: CMakeFiles/test_pcsc.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/Users/eecha/OneDrive/Documents/EPFL-Master/Semestre3/nonlinearsolver/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Linking CXX executable test_pcsc"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_pcsc.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test_pcsc.dir/build: test_pcsc

.PHONY : CMakeFiles/test_pcsc.dir/build

CMakeFiles/test_pcsc.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test_pcsc.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test_pcsc.dir/clean

CMakeFiles/test_pcsc.dir/depend:
	cd /mnt/c/Users/eecha/OneDrive/Documents/EPFL-Master/Semestre3/nonlinearsolver/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Users/eecha/OneDrive/Documents/EPFL-Master/Semestre3/nonlinearsolver /mnt/c/Users/eecha/OneDrive/Documents/EPFL-Master/Semestre3/nonlinearsolver /mnt/c/Users/eecha/OneDrive/Documents/EPFL-Master/Semestre3/nonlinearsolver/cmake-build-debug /mnt/c/Users/eecha/OneDrive/Documents/EPFL-Master/Semestre3/nonlinearsolver/cmake-build-debug /mnt/c/Users/eecha/OneDrive/Documents/EPFL-Master/Semestre3/nonlinearsolver/cmake-build-debug/CMakeFiles/test_pcsc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test_pcsc.dir/depend
