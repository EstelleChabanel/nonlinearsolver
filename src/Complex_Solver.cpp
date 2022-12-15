//
// Created by Antoine Salaün on 14.12.22.
//

#include "Complex_Solver.h"
#include <complex>
#include <iostream>
#include "../src/exceptions/DivZero.h"
#include "../src/exceptions/MaxIter.h"


using namespace std;

// Constructors
Complex_Solver::Complex_Solver() : complex_x0(0.5, 2), complex_function(nullptr), Mama_Solver(){}
Complex_Solver::Complex_Solver(complex<double>  (*fx)(complex<double> , int)) : complex_x0(0.5, 2), Mama_Solver() {
    complex_function = fx;
}
Complex_Solver::Complex_Solver(complex<double>  (*fx)(complex<double> x , int j), complex<double> starting_complex, unsigned int iter, double tol)
: Mama_Solver(iter,tol){
complex_x0 = starting_complex;
complex_function = fx;
}

// Destructor
Complex_Solver::~Complex_Solver(){};


// View result method
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


// Continuing criterion method
bool Complex_Solver::Continuing_complex(complex<double> x, complex<double> (*fx) (complex<double> x, int order) ,unsigned int iteration){
    bool continues = true;
    bool result_is_satisfying = abs(fx(x,0))<tolerance;

    if (result_is_satisfying==true){
        std::cout<<"Computation converged within tolerance " << tolerance <<  " in " << iteration <<  " iterations " << std::endl;
        continues = false;
    }
    else if(iteration>=max_iter){
        std::cout<<"Computation did not converge in " << iteration << " iterations"<< std::endl;
        throw(MaxIter(max_iter));
    }
    return continues;
}


