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
    : Newton(*fx, *fprime, starting_point, iter, tol) {}
NR::NR(double (*fx)(double x), double (*fprime)(double x), bool acc, double starting_point, double iter, double tol)
    : Newton(*fx, *fprime, acc, starting_point, iter, tol) {}

/// Destructor
NR::~NR(){}

double NR::inv_derivative(double x0){
    double f0 = derivative(x0);
    if(f0 == 0){
        // ToDo : RaiseException (div0)
        throw(DivZero());
    }

    return 1.0/f0;
}

double NR::Solve(){
    double a (0); // used to infer a type to the templated function
    return Solve_template(a);
}



/** \brief Overrided solving method
      * This method implements the Newton-Raphson solving algorithm
      * @return the guessed root
      */
template <typename T> T NR::Solve_template(T double_or_vector) {

    unsigned int i = 0;
    do{
        // For debugging
        //std::cout<<"Iteration : "<< i << "-> x0 = "<< x0 <<" f0 = "<< f0 << " g0 = "<< g0 << std::endl;
        T next = x0 - inv_derivative(x0)*function(x0);

        /*
        if(acceleration==true) {
            if(derivative(next) == 0){
                throw(DivZero());
            }
            double next2 = next - inv_derivative(next) * function(next) ; // ToDo: RaiseException pour division par 0
            x0 = Accelerate(x0, next, next2);
        } else {
            x0 = next;
        }
        */

        i+=1;

        // For debugging
        //std::cout<<"Iteration : "<< i <<"-> guess = "<< x0 <<" and f(guess) = "<< function(x0)<< std::endl;

    // }while(Continuing(x0, i));
    }while(i<50);
    return x0;
}