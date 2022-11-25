cmake_minimum_required(VERSION 3.0)
project(nonlinearsolver)

set(CMAKE_CXX_STANDARD 17)

add_executable(test_bisection.cpp Bisection.cpp Equation_Solver.cpp Mama_Solver.cpp)
