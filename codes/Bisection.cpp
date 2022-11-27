//
// Created by eecha on 25/11/2022.
//

#include "Bisection.h"
#include <cstdlib>
#include <iostream>

/// Constructors
Bisection::Bisection() : Equation_Solver(), a(1.0), b(1000) {}
Bisection::Bisection(double starting_point, double b_, double (*fx)(double x), double iter, double tol)
  :  a(starting_point), b(b_), Equation_Solver(starting_point, *fx, iter, tol)
    {
    // catch exception pour vérifier que f(a) bien < f(b)
    }

/// Desctructor
Bisection::~Bisection() {}

/// Getters
double Bisection::GetA() {
    return a;
}
double Bisection::GetB() {
    return b;
}

/// Setters
void Bisection::SetA(double new_a) {
    a = new_a;
}
void Bisection::SetB(double new_b) {
    b = new_b;
}

/// Methods
double Bisection::Solve() {
    float guess = 0.5*(a+b);
    float old_guess = 0.5*(a+b) + 100*tolerance;
    unsigned int i = 0;
    while((abs(old_guess-guess) > tolerance) && (i < max_iter)){
        // std::cout << " old-new " << abs(old_guess-guess) << std::endl;
        // std::cout << " guess " << i << " : " << guess << std::endl;
        float fa = (*function)(a);
        float fb = (*function)(b);
        float fguess = function(guess);
        if(fguess == 0) {
            break;
        } else if(fguess*fa < 0) {
            b = guess;
        } else {
            a = guess;
        }
        i += 1;
        old_guess = guess;
        guess = 0.5*(a+b);
    }
    return guess;
}
