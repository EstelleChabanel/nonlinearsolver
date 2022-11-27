//
// Created by Antoine Salaün on 27.11.22.
//

#include "NR.h"
#include <iostream>
#include <cstdlib>

// constructeurs
NR::NR() : Newton(){}

NR::NR(double starting_point, double (*fx)(double x), double (*fprime)(double x) , double iter, double tol) :
Newton(starting_point, *fx, *fprime, iter, tol){

};

// destructeurs
NR::~NR(){}

double NR::Solve() {
    unsigned int i = 0;

    do{
        double f0 = function(x0);
        double g0 = derivative(x0);
        if(g0 == 0){
            // ToDo : RaiseException (div0)
            std::cout << "derivative is 0 -> Error";
            break;
        };

        std::cout<<"Iteration : "<< i<<"-> x0 = "<< x0 <<" f0 = "<< f0 << " g0 = "<< g0 << std::endl;

        x0 = x0 - f0/g0;
        i+=1;
        std::cout<<"Iteration : "<< i<<"-> guess = "<< x0 <<" and f(guess) = "<< function(x0)<< std::endl;

    }while(abs(function(x0)>tolerance)&&(i<max_iter));

    return x0;
}