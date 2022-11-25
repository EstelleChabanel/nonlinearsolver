//
// Created by Antoine Salaün on 25.11.22.
//

#include "Equation_Solver.h"
#include <vector>
#include <iostream>

/// constructor
Equation_Solver::Equation_Solver(double starting_point) : Mama_Solver(), x0(starting_point) {}
Equation_Solver::Equation_Solver(double iter, double tol, double starting_point) : Mama_Solver(iter, tol), x0(starting_point) {}

/// Destructor
Equation_Solver::~Equation_Solver(){}