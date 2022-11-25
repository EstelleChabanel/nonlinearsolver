//
// Created by Antoine Salaün on 25.11.22.
//

#include "Equation_Solver.h"
#include <vector>
#include <iostream>

/// constructor
Equation_Solver::Equation_Solver() : Mama_Solver(), x0(1.0), function(nullptr) {}
Equation_Solver::Equation_Solver(double starting_point, double (*fx)(double x), double iter, double tol) : Mama_Solver(iter, tol), x0(starting_point) {
    function = fx;
}

/// Destructor
Equation_Solver::~Equation_Solver(){}


/// Solving method
//double Equation_Solver::Solve(){}