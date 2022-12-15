//
// Created by eecha on 25/11/2022.
//

#include "Bisection.h"
#include "exceptions/Interval.h"


// Constructors
Bisection::Bisection() : Equation_Solver(), b(200.0) {}
Bisection::Bisection(double (*fx)(double x)) : b(200.0), Equation_Solver(*fx) {}
Bisection::Bisection(double (*fx)(double x), double starting_point, double b_, unsigned int iter, double tol)
  :  b(b_), Equation_Solver(*fx, starting_point, iter, tol)
  {
    if(fx(x0)*fx(b) > 0){
        throw(Interval());
    }
  }
Bisection::Bisection(double (*fx)(double x), bool acc, double starting_point, double b_, unsigned int iter, double tol)
    : b(b_), Equation_Solver(*fx, acc, starting_point, iter, tol)
    {
    if(fx(x0)*fx(b) > 0){
        throw(Interval());
    }
    }


// Destructor
Bisection::~Bisection() {}


// Overriden solving method
double Bisection::Solve() {

    double guess = 0.5*(x0+b);
    unsigned int i = 0;

    while(Continuing(guess,function,i)){

        double fa = (*function)(x0);
        double fguess = function(guess);

        if(fguess*fa < 0) {
            b = guess;
        } else {
            x0 = guess;
        }
        double next = 0.5*(x0+b);

        if(acceleration == true){
            if((*function)(next)*(*function)(x0) < 0) {
                b = next;
            } else {
                x0 = next;
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
