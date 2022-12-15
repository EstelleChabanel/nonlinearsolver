//
// Created by Antoine Salaün on 27.11.22.
//

#include "Newton.h"

// Constructors
Newton::Newton() : Equation_Solver(){}
Newton::Newton(double (*fx)(double x), double (*fxprime)(double x)) : Equation_Solver(*fx) {
    derivative = fxprime;
}
Newton::Newton(double (*fx)(double x), double (*fxprime)(double x), double starting_point, double iter, double tol)
        : Equation_Solver((*fx), starting_point, iter, tol) {
    derivative = fxprime;
}
Newton::Newton(double (*fx)(double x), double (*fxprime)(double x), bool acc, double starting_point, double iter, double tol)
    : Equation_Solver((*fx), acc, starting_point, iter, tol) {
    derivative = fxprime;
}


// Destructor
Newton::~Newton(){}
