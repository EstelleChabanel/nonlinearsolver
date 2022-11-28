//
// Created by Antoine Salaün on 25.11.22.
//

#include "Equation_Solver.h"
#include <vector>
#include <iostream>
#include <cmath>

/// constructor
Equation_Solver::Equation_Solver() : Mama_Solver(), x0(-200.0), function(nullptr), acceleration(false) {}
Equation_Solver::Equation_Solver(double (*fx)(double x)) : Mama_Solver(), x0(-200.0), acceleration(false) {
    function = fx;
}
Equation_Solver::Equation_Solver(double (*fx)(double x), bool acc, double starting_point, double iter, double tol) : Mama_Solver(iter, tol), x0(starting_point), acceleration(acc) {
    function = fx;
}

/// Destructor
Equation_Solver::~Equation_Solver(){}


/// Solving method
//double Equation_Solver::Solve(){} (virtual pure)

/// Compute and display result
void Equation_Solver::Result(){
    double res = Solve();
    std::cout << "------------------RESULTS------------------" << std::endl;
    std::cout << "The finale estimation of the root is x_f=" << res << std::endl;
    std::cout << "Verification : f(x_f)=" << (*function)(res) << std::endl;
}

/// Stopping/continuing criterion during solving
bool Equation_Solver::Continuing(double guess, unsigned int iteration){
    //bool crit = (abs(function(x0))>tolerance)&&(iteration<max_iter);
    bool continues = true;
    bool result_is_satisfying = abs(function(guess))<tolerance;
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


/// Aitken acceleration method
double Equation_Solver::Accelerate(double current, double next, double next2){
    double delta1 = next - current;
    double denominator = next2 - 2*next + current;
    double new_next = current - pow(delta1, 2)/denominator;
    return new_next;
};
