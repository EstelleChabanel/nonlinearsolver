cmake_minimum_required (VERSION 3.0)
project (PCSC-project)

set(CMAKE_CXX_STANDARD 17)

add_library(pcsc
        src/pcsc.cpp
        )

add_subdirectory(googletest)

add_executable(main src/main.cpp)
target_link_libraries(main pcsc)

#add_executable(test_pcsc test/test_bisection.cpp src/Bisection.cpp src/Equation_Solver.cpp src/Mama_Solver.cpp src/exceptions/Interval.cpp src/exceptions/Exceptions.cpp)
add_executable(test_pcsc test/test_chord.cpp src/Chord.cpp src/Equation_Solver.cpp src/Mama_Solver.cpp src/exceptions/Interval.cpp src/exceptions/MaxIter.cpp src/exceptions/Exceptions.cpp)
#add_executable(test_pcsc test/test_NR.cpp src/NR.cpp src/Newton.cpp src/Equation_Solver.cpp src/Mama_Solver.cpp src/exceptions/DivZero.cpp src/exceptions/MaxIter.cpp src/exceptions/Exceptions.cpp)

target_link_libraries(test_pcsc gtest_main gtest pthread pcsc)

add_custom_target(test ./test_pcsc DEPENDS test_pcsc)
