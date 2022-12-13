//
// Created by Antoine Salaün on 27.11.22.
//

#include "NR.h"
#include "exceptions/DivZero.h"
using namespace std;



/// Constructors
NR::NR() : Newton(){}
NR::NR(double (*fx)(double x), double (*fprime)(double x)) : Newton(*fx) {
    derivative = fprime;
}
NR::NR(double (*fx)(double x), double (*fprime)(double x), double starting_point, double iter, double tol)
    : Newton(*fx,  starting_point, iter, tol) {
    derivative = fprime;
}
NR::NR(double (*fx)(double x), double (*fprime)(double x), bool acc, double starting_point, double iter, double tol)
    : Newton(*fx,  acc, starting_point, iter, tol) {
    derivative = fprime;
}

/// Destructor
NR::~NR(){}

/** \brief Overrided solving method
      * This method implements the Newton-Raphson solving algorithm
      * @return the guessed root
      */

double NR::Solve(){
    unsigned int i = 0;
    double next;

    do{
        next = x0 - function(x0)/derivative(x0); // Classic Newton method

        if(acceleration==true) {
            if(derivative(next) == 0){throw(DivZero());} // making sure the denominator is not 0
            double next2 = next -  function(next) / derivative(next)  ;
            x0 = Accelerate(x0, next, next2); // Aitken accleration implemented
        } else {
            x0 = next; // if no accelaration we pass the new value straight away
        }
        i+=1;

    }while(Continuing(x0, function, i)); // using the Continuing template from the Mama_Solver
    return x0;
}








