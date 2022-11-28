//
// Created by eecha on 25/11/2022.
//

#include "Bisection.h"
#include <cstdlib>
#include <iostream>

/// Constructors
Bisection::Bisection() : Equation_Solver(), b(200.0) {}
Bisection::Bisection(double (*fx)(double x)) : b(200.0), Equation_Solver(*fx) {}
Bisection::Bisection(double (*fx)(double x), double starting_point, double b_, double iter, double tol)
  :  b(b_), Equation_Solver(*fx, starting_point, iter, tol)
    {
    // ToDo: catch exception pour vérifier que f(a) bien < f(b)
    }
Bisection::Bisection(double (*fx)(double x), bool acc, double starting_point, double b_, double iter, double tol)
        :  b(b_), Equation_Solver(*fx, acc, starting_point, iter, tol)
{
    // ToDo: catch exception pour vérifier que f(a) bien < f(b)
}


/// Desctructor
Bisection::~Bisection() {}


/// Methods
double Bisection::Solve() {

    double guess = 0.5*(x0+b);
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
            break; // devrait pas être possible si ??
        } else if(fguess*fa < 0) {
            b = guess;
        } else {
            x0 = guess;
        }
        double next = 0.5*(x0+b); //ici on devra peut être implementer l'accélerateur
        if(acceleration == true){
            if(fguess*fa < 0) {
                b = guess;
            } else {
                x0 = guess;
            }
            double next2 = 0.5*(x0+b);
            guess = Accelerate(guess, next, next2);
        } else {
            guess = next;
        }
        i += 1;
    }
    return guess;
}
