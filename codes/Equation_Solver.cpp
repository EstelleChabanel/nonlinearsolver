//
// Created by Antoine Salaün on 25.11.22.
//

#include "Equation_Solver.h"
#include <vector>
#include <iostream>

/// constructor
Equation_Solver::Equation_Solver() : Mama_Solver(), x0(1.0), function(nullptr) {}
Equation_Solver::Equation_Solver(double starting_point, double (*fx)(double x), double iter, double tol) : Mama_Solver(iter, tol), x0(starting_point) {
    function = fx;
}

/// Destructor
Equation_Solver::~Equation_Solver(){}


/// Solving method
//double Equation_Solver::Solve(){} (virtual pure)

void Equation_Solver::Result(){
    double res = Solve();
    std::cout << "------------------RESULTS------------------" << std::endl;
    std::cout << "The finale estimation of the root is x_f=" << res << std::endl;
    std::cout << "Verification : f(x_f)=" << (*function)(res) << std::endl;
}

bool Equation_Solver::Continuing(double guess, unsigned int iteration){
    //bool crit = (abs(function(x0))>tolerance)&&(iteration<max_iter);
    bool continues = true;
    bool result_is_satisfying = abs(function(x0))<tolerance;
    bool last_iteration = iteration>=max_iter;

    if (result_is_satisfying==true){
        std::cout<<"Computation converged within tolerance " << tolerance <<  " in " << iteration <<  " iterations " << std::endl;
        continues = false;
    }
    else if(iteration>=max_iter){
        continues = false;
        std::cout<<"Computation did not converge in " << iteration << " iterations (make it an exception)"<< std::endl;
    }

    return continues;

}