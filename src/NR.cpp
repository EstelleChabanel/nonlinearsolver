//
// Created by Antoine Salaün on 27.11.22.
//

#include "NR.h"
#include "exceptions/DivZero.h"
using namespace std;



/// Constructors
NR::NR() : Newton(){}
NR::NR(double (*fx)(double x), double (*fprime)(double x)) : Newton(*fx, *fprime) {}
NR::NR(double (*fx)(double x), double (*fprime)(double x), double starting_point, double iter, double tol)
    : Newton(*fx, *fprime, starting_point, iter, tol) {
}
NR::NR(double (*fx)(double x), double (*fprime)(double x), bool acc, double starting_point, double iter, double tol)
    : Newton(*fx, *fprime, acc, starting_point, iter, tol) {


}

/// Destructor
NR::~NR(){}

/** \brief Overrided solving method
      * This method implements the Newton-Raphson solving algorithm
      * @return the guessed root
      */

double NR::Solve(){
    unsigned int i = 0;
    cout<<"Starting a Solve_template" << endl;
    double next;

    do{
        next = x0 - function(x0)/derivative(x0);

        if(acceleration==true) {
            if(derivative(next) == 0){
                throw(DivZero());
            }
            double next2 = next -  function(next) / derivative(next)  ; // ToDo: RaiseException pour division par 0
            x0 = Accelerate(x0, next, next2);
        } else {
            x0 = next;
        }
        i+=1;

    }while(Continuing(x0, function, i));
    return x0;
}








