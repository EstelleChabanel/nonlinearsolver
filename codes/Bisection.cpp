//
// Created by eecha on 25/11/2022.
//

#include "Bisection.h"
#include <cstdlib>
#include <iostream>

/// Constructors
Bisection::Bisection() : Equation_Solver(), b(1000) {}
Bisection::Bisection(double starting_point, double b_, double (*fx)(double x), double iter, double tol)
  :  b(b_), Equation_Solver(starting_point, *fx, iter, tol)
    {
    // catch exception pour vérifier que f(a) bien < f(b)
    }

/// Desctructor
Bisection::~Bisection() {}


/// Methods
double Bisection::Solve() {

    double guess = 0.5*(x0+b);
    double old_guess = 0.5*(x0+b) + 100*tolerance;

    unsigned int i = 0;

    //while((abs((*function)(guess)) > tolerance) && (i < max_iter)){
    while(Continuing(guess,i)){

        //std::cout << "------iteration " << i << std::endl;
        //std::cout << "a = " << x0  << " b = " << b << " guess = " << guess << std::endl;

        double fa = (*function)(x0);
        //double fb = (*function)(b);
        double fguess = function(guess);
        //std::cout << "f(a) = " << fa  << " f(b) = " << fb << " f(guess) = " << fguess << std::endl;

        if(fguess == 0) {
            break;
        } else if(fguess*fa < 0) {
            b = guess;
        } else {
            x0 = guess;
        }
        i += 1;
        //old_guess = guess;
        guess = 0.5*(x0+b); //ici on devra peut être implementer l'accélerateur
    }
    return guess;
}
