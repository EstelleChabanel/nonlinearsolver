//
// Created by Antoine Salaün on 25.11.22.
//

#include "Equation_Solver.h"
#include "exceptions/MaxIter.h"
#include <iostream>
#include <cmath>

/// Constructors
Equation_Solver::Equation_Solver() : Mama_Solver(), x0(-200.0), function(nullptr), acceleration(false) {}
Equation_Solver::Equation_Solver(double (*fx)(double x)) : Mama_Solver(), x0(-200.0), acceleration(false) {
    function = fx;
}
Equation_Solver::Equation_Solver(double (*fx)(double x), double starting_point, double iter, double tol) : Mama_Solver(iter, tol), x0(starting_point), acceleration(false) {
    function = fx;
}
Equation_Solver::Equation_Solver(double (*fx)(double x), bool acc, double starting_point, double iter, double tol) : Mama_Solver(iter, tol), x0(starting_point), acceleration(acc) {
    function = fx;
}

/// Destructor
Equation_Solver::~Equation_Solver(){}



/** \brief Pretty method to compute and print the results
  * This method computes and displays the results in a clear and comprehensive way
  */
void Equation_Solver::Result(){
    double res = Solve();
    std::cout << "------------------RESULTS------------------" << std::endl;
    std::cout << "The finale estimation of the root is x_f=" << res << std::endl;
    std::cout << "Verification : f(x_f)=" << (*function)(res) << std::endl;
}


/** \brief Stopping criterion for the solving algorithm
  * This method evaluates the value of the stopping criterion for all daughter classes solving algorithm
  * @return a boolean that assert if the algorithm should stop or continue
  */
bool Equation_Solver::Continuing(double guess, unsigned int iteration){
    //bool crit = (abs(function(x0))>tolerance)&&(iteration<max_iter);
    bool continues = true;
    bool result_is_satisfying = std::abs(function(guess))<tolerance;
    bool last_iteration = iteration>=max_iter;

    if (result_is_satisfying==true){
        std::cout<<"Computation converged within tolerance " << tolerance <<  " in " << iteration <<  " iterations " << std::endl;
        continues = false;
    }
    else if(iteration>=max_iter){
        continues = false;
        throw(MaxIter(max_iter));
        std::cout<<"Computation did not converge in " << iteration << " iterations (make it an exception)"<< std::endl;
    }

    return continues;
}


/** \brief Aitken acceleration method
  * This method implements the next "root value" to test according to the Aitken acceleration method
  * @return next *root value" to try
  */
double Equation_Solver::Accelerate(double current, double next, double next2){
    double delta1 = next - current;
    double denominator = next2 - 2*next + current;
    double new_next = current - pow(delta1, 2)/denominator;
    return new_next;
};
