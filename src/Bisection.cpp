//
// Created by eecha on 25/11/2022.
//

#include "Bisection.h"
#include "exceptions/Interval.h"


/// Constructors
Bisection::Bisection() : Equation_Solver(), b(200.0) {}
Bisection::Bisection(double (*fx)(double x)) : b(200.0), Equation_Solver(*fx) {}
Bisection::Bisection(double (*fx)(double x), double starting_point, double b_, double iter, double tol)
  :  b(b_), Equation_Solver(*fx, starting_point, iter, tol)
  {
    // ToDo: catch exception pour vérifier que f(a) bien < f(b)
    if(fx(x0)*fx(b) > 0){
        throw(Interval());
    }
  }
Bisection::Bisection(double (*fx)(double x), bool acc, double starting_point, double b_, double iter, double tol)
    : b(b_), Equation_Solver(*fx, acc, starting_point, iter, tol)
    {
    // ToDo: catch exception pour vérifier que f(a) bien < f(b)
    if(fx(x0)*fx(b) > 0){
        throw(Interval());
    }
    }


/// Destructor
Bisection::~Bisection() {}


/** \brief Overrided solving method
  * This method implements the bisection solving algorithm
  * @return the guessed root
  */
double Bisection::Solve() {

    double guess = 0.5*(x0+b);
    unsigned int i = 0;

    //while((abs((*function)(guess)) > tolerance) && (i < max_iter)){
    while(Continuing(guess,i)){

        // For debbugging
        //std::cout << "------iteration " << i << std::endl;
        //std::cout << "a = " << x0  << " f(a) = " << function(x0) << " b = " << b << " f(b) = " << function(b) << " guess = " << guess << " f(guess) = " << function(guess) << std::endl;

        double fa = (*function)(x0);
        double fguess = function(guess);

        if(fguess == 0) {
            break; // devrait pas être possible si ??
        } else if(fguess*fa < 0) {
            b = guess;
        } else {
            x0 = guess;
        }
        double next = 0.5*(x0+b); //ici on devra peut être implementer l'accélerateur

        if(acceleration == true){
            if((*function)(next)*(*function)(x0) < 0) {
                b = next;
            } else {
                x0 = next;
            }
            double next2 = 0.5*(x0+b);
            guess = Accelerate(guess, next, next2);
            //std::cout << "accelerated guess = " << guess << std::endl;
        } else {
            guess = next;
        }
        i += 1;
    }
    return guess;
}
