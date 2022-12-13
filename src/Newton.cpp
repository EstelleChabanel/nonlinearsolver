//
// Created by Antoine Salaün on 27.11.22.
//

#include "Newton.h"

/// Constructors
Newton::Newton() : Equation_Solver(){}
Newton::Newton(double (*fx)(double x)) : Equation_Solver(*fx) {}
Newton::Newton(double (*fx)(double x), double starting_point, double iter, double tol)
        : Equation_Solver((*fx), starting_point, iter, tol) {}
Newton::Newton(double (*fx)(double x),  bool acc, double starting_point, double iter, double tol)
    : Equation_Solver((*fx), acc, starting_point, iter, tol) {}


/// Destructor
Newton::~Newton(){}
