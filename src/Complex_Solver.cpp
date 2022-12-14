//
// Created by Antoine Salaün on 14.12.22.
//

#include "Complex_Solver.h"
#include <complex>
#include <iostream>
#include "../src/exceptions/DivZero.h"
#include "../src/exceptions/MaxIter.h"


using namespace std;

Complex_Solver::Complex_Solver() : Mama_Solver(){};
Complex_Solver::Complex_Solver(complex<double>  (*fx)(complex<double> x , int j), complex<double> starting_complex, unsigned int iter, double tol)
: Mama_Solver(iter,tol){
complex_x0 = starting_complex;
complex_function = fx;
}

Complex_Solver::~Complex_Solver(){};

void Complex_Solver::Result(){
    cout << "------------------RESULTS------------------" << std::endl;
    try {
        complex<double> res = Solve();
        std::cout << "The finale estimation of the root is x_f=" << res << std::endl;
        std::cout << "Verification : f(x_f)=" << (*complex_function)(res,0) << std::endl;
    } catch(DivZero& e){
        e.PrintError();
    } catch(MaxIter& f){
        f.PrintError();
    }
}


