//
// Created by Antoine Salaün on 25.11.22.
//

#ifndef NONLINEARSOLVER_EQUATION_SOLVER_H
#define NONLINEARSOLVER_EQUATION_SOLVER_H

#include "Mama_Solver.h"


/** \brief Pure virtual class, inheriting from Mama_Solver, for any king of methods for simple 1D non liner equation solving
  * This class is for every possible solving methods for equation solving of type
  * f(x) = 0, with f and x 1D only
  */
class Equation_Solver : public Mama_Solver {
protected :
    double x0; // initial starting point, gets modified at each iteration to become the best guess
    double (*function)(double); // equation to solve f(x) = 0
    bool acceleration; // whether to use Aitken acceleration or not

public :
    /// Default constructor
    Equation_Solver();
    /// Constructor with function and default values
    Equation_Solver(double (*fx)(double x));
    /// Constructor with all attributes, except for the acceleration set to false
    Equation_Solver(double (*fx)(double x), double starting_point, unsigned int iter, double tol);
    /// Constructor with all attributes
    Equation_Solver(double (*fx)(double x), bool acc, double starting_point, unsigned int iter, double tol);

    /// Destructor
    virtual ~Equation_Solver();

    /** \brief Pure virtual method for solving method
      * This pure virtual method should be overriden with daughter classes specific solving algorithm
      * @return the guessed root
      */
    virtual double Solve() = 0;

    /** \brief Pretty method to compute and print the results
      * This inherited method computes and displays the results in a clear and comprehensive way
      */
    void Result() final;

    /** \brief Aitken acceleration method
      * This method implements the next "root value" to test according to the Aitken acceleration method
      * @return next *root value" to try
      */
    double Accelerate(double current, double next, double next2);

};


#endif //NONLINEARSOLVER_EQUATION_SOLVER_H
