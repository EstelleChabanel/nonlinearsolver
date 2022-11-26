//
// Created by Antoine Salaün on 26.11.22.
//

#include "Aitken.h"
#include <math.h>

/// Constructors
Aitken::Aitken() : Equation_Solver(), x0(0.0), div(1e-6) {}
Aitken::Aitken(double starting_point, double (*fx)(double x), double iter, double tol, double div_limit)
        : x0(starting_point) div(div_limit), Equation_Solver(starting_point, *fx, iter, tol)
{
    // Exceptions ? sur div peut être ?
}

Aitken::~Aitken() {}

double Aitken::Solve() {
    unsigned int i = 0;
    double aitken = 0;
    do {
        double x1 = (*function)(x0);
        double x2 = (*function)(x1);
        double denominator = (x2 - x1) - (x1 - x0);

        if (denominator < div) {
            // Raise Exception -> Denominator too small
            break;
        }
        aitken = x2 - (pow((x2 - x1), 2)) / denominator;

        x0 = aitken;
        i = i+1;
    }while((abs(aitken-x2) > tolerance) && (i < max_iter))

    return guess;
}


