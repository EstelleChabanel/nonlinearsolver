//
// Created by Antoine Salaün on 27.11.22.
//

#include "Newton.h"
#include <iostream>


/// Constructors
Newton::Newton() : Equation_Solver(), derivative(nullptr){}

Newton::Newton(double (*fx)(double x), double (*fprime)(double x)) : Equation_Solver(*fx), derivative(nullptr){
    derivative = fprime;
}
Newton::Newton(double (*fx)(double x), double (*fprime)(double x), double starting_point, double iter, double tol)
        : Equation_Solver((*fx), starting_point, iter, tol) {
    derivative = fprime;
}
Newton::Newton(double (*fx)(double x), double (*fprime)(double x), bool acc, double starting_point, double iter, double tol)
    : Equation_Solver((*fx), acc, starting_point, iter, tol) {
    derivative = fprime;
}

/// Destructor
Newton::~Newton(){}

