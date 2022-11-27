//
// Created by Antoine Salaün on 27.11.22.
//

#include "Newton.h"
#include <iostream>


/// constructor
Newton::Newton() : Equation_Solver(), derivative(nullptr){}

Newton::Newton(double starting_point, double (*fx)(double x), double (*fprime)(double x) , double iter, double tol) :
Equation_Solver( starting_point, (*fx), iter, tol) {
    derivative = fprime;
}
;
/// Destructor
Newton::~Newton(){}

/// Solving method
//double Equation_Solver::Solve(){}