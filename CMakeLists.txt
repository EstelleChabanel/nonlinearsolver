cmake_minimum_required (VERSION 3.0)
project (PCSC-project)

set(CMAKE_CXX_STANDARD 17)

add_library(pcsc
        #Solver classes
        src/Mama_Solver.cpp
        src/Equation_Solver.cpp
        src/pcsc.cpp
        src/Bisection.cpp
        src/Chord.cpp
        src/Newton.cpp
        src/NR.cpp
        src/System_Solver.cpp
        src/Newton_System.cpp
        #Functions to test
        test/test_functions.cpp
        #Exceptions classes
        src/exceptions/Exceptions.cpp
        src/exceptions/Interval.cpp
        src/exceptions/DivZero.cpp
        src/exceptions/MaxIter.cpp
        src/exceptions/WrongDim.cpp
        )

#add_subdirectory(googletest)

add_executable(main src/main.cpp)
target_link_libraries(main pcsc)


# A SUPPRIMER NORMALEMENT
#add_executable(test_pcsc test/test_bisection.cpp src/Bisection.cpp src/Equation_Solver.cpp src/Mama_Solver.cpp src/exceptions/Interval.cpp src/exceptions/Exceptions.cpp)
#add_executable(test_pcsc test/test_chord.cpp src/Chord.cpp src/Equation_Solver.cpp src/Mama_Solver.cpp src/exceptions/Interval.cpp src/exceptions/MaxIter.cpp src/exceptions/Exceptions.cpp)
#add_executable(test_pcsc test/test_NR.cpp src/NR.cpp src/Newton.cpp src/Equation_Solver.cpp src/Mama_Solver.cpp src/exceptions/DivZero.cpp src/exceptions/MaxIter.cpp src/exceptions/Exceptions.cpp)
#add_executable(test_pcsc test/test_newton_system.cpp src/Newton_System.cpp src/System_Solver.cpp src/Mama_Solver.cpp src/exceptions/Interval.cpp src/exceptions/MaxIter.cpp src/exceptions/WrongDim.cpp src/exceptions/Exceptions.cpp)
# Add new test path to the following:
add_executable(test_pcsc test/test_bisection.cpp test/test_chord.cpp test/test_NR.cpp test/test_newton_system.cpp)


# A SUPPRIMER
#add_executable(user_interface src/user_interface.cpp src/Bisection.cpp src/NR.cpp src/Newton.cpp src/Newton_System.cpp src/Chord.cpp src/Equation_Solver.cpp src/System_Solver.cpp src/Mama_Solver.cpp src/exceptions/Interval.cpp src/exceptions/MaxIter.cpp src/exceptions/WrongDim.cpp src/exceptions/DivZero.cpp src/exceptions/Interval.cpp src/exceptions/Exceptions.cpp)


target_link_libraries(test_pcsc gtest_main gtest pthread pcsc )
#target_link_libraries(test_pcsc  pcsc )


add_custom_target(test ./test_pcsc DEPENDS test_pcsc)
