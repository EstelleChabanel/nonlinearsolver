//
// Created by Antoine Salaün on 26.11.22.
//

#include "Aitken.h"
#include <math.h>
#include <cstdlib>
#include <iostream>



// ToDo: NORMALEMENT DEVRAIT POUVOIR ETR SUPPRIMER,
//  maintenant methode de Equation_Solver

/// Constructors
Aitken::Aitken() : Equation_Solver(), div(1e-6) {}
Aitken::Aitken(double starting_point, double (*fx)(double x), double iter, double tol, double div_limit)
        : div(div_limit), Equation_Solver(starting_point, *fx, iter, tol)
{
    // Exceptions ? sur div peut être ?
}

Aitken::~Aitken() {}

double Aitken::Solve() {
    unsigned int i = 0;
    double x1;
    double x2;
    std::cout<<"doudou"<<i<< " : "<< x0 << std::endl;

    do {
        x1 = (*function)(x0);
        x2 = (*function)(x1);

        std::cout<<"x0 : "<< x0 <<" x1 : "<< x1 << " x2 : " << x2 << std::endl;
        double denominator = (x2 - x1) - (x1 - x0);
        std::cout<<"denominator : "<< denominator << std::endl;

        if (abs(denominator) < div) {
            // Raise Exception -> Denominator too small
            std::cout<<"break!-> Error"<<std::endl;
            break;
        }
        x0  = x2 - pow(x2 - x1,2)/denominator;

        std::cout<<"guess at iteration "<<i<< " : "<< x0 << std::endl;
        i = i+1;
        std::cout<<"condition is  "<< ((abs(x0-x2) > tolerance) && (i < max_iter))<<std::endl;


    }while((abs(x0-x2) > tolerance) && (i < max_iter));

    return x0;
}


