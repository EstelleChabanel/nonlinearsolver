cmake_minimum_required(VERSION 3.0)
project(nonlinearsolver)

set(CMAKE_CXX_STANDARD 17)

add_library(cstdlib STATIC test_bisection.cpp test_aitken.cpp)
add_library(math STATIC test_aitken.cpp)

add_executable(test_bisection test_bisection.cpp Bisection.cpp Equation_Solver.cpp Mama_Solver.cpp)
add_executable(test_aitken test_aitken.cpp Aitken.cpp Equation_Solver.cpp Mama_Solver.cpp)
add_executable(test_NR test_NR.cpp NR.cpp Newton.cpp Equation_Solver.cpp Mama_Solver.cpp)
