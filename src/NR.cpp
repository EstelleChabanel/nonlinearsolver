//
// Created by Antoine Salaün on 27.11.22.
//

#include "NR.h"
#include "exceptions/DivZero.h"
#include <iostream>
#include <cstdlib>

/// Constructors
NR::NR() : Newton(){}
NR::NR(double (*fx)(double x), double (*fprime)(double x)) : Newton(*fx, *fprime) {}
NR::NR(double (*fx)(double x), double (*fprime)(double x), double starting_point, double iter, double tol)
    : Newton(*fx, *fprime, starting_point, iter, tol) {}
NR::NR(double (*fx)(double x), double (*fprime)(double x), bool acc, double starting_point, double iter, double tol)
    : Newton(*fx, *fprime, acc, starting_point, iter, tol) {}

/// Destructor
NR::~NR(){}


/** \brief Overrided solving method
      * This method implements the Newton-Raphson solving algorithm
      * @return the guessed root
      */
double NR::Solve() {
    unsigned int i = 0;

    do{
        double f0 = function(x0);
        double g0 = derivative(x0);
        if(g0 == 0){
            // ToDo : RaiseException (div0)
            throw(DivZero());
        }

        // For debugging
        //std::cout<<"Iteration : "<< i << "-> x0 = "<< x0 <<" f0 = "<< f0 << " g0 = "<< g0 << std::endl;
        double next = x0 - f0/g0;
        if(acceleration==true) {
            if(derivative(next) == 0){
                throw(DivZero());
            }
            double next2 = next - function(next) / derivative(next); // ToDo: RaiseException pour division par 0
            x0 = Accelerate(x0, next, next2);
        } else {
            x0 = next;
        }
        i+=1;
        // For debugging
        //std::cout<<"Iteration : "<< i <<"-> guess = "<< x0 <<" and f(guess) = "<< function(x0)<< std::endl;

    }while(Continuing(x0, i));

    return x0;
}