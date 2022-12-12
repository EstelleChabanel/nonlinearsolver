//
// Created by Antoine Salaün on 25.11.22.
//

#ifndef NONLINEARSOLVER_EQUATION_SOLVER_H
#define NONLINEARSOLVER_EQUATION_SOLVER_H

#include "Mama_Solver.h"


/** \brief 2nd line super class for any king of methods for non liner equation solving
  * This class is for every possible solving methods for equation solving of type
  * f(x) = 0, with f and x 1D only
  */
class Equation_Solver : public Mama_Solver {
protected :
    double x0;
    double (*function)(double);
    bool acceleration;

public :
    /// Constructors
    Equation_Solver();
    Equation_Solver(double (*fx)(double x));
    Equation_Solver(double (*fx)(double x), double starting_point, double iter, double tol);
    Equation_Solver(double (*fx)(double x), bool acc, double starting_point, double iter, double tol);
    /// Destructor
    virtual ~Equation_Solver();

    /** \brief Pure virtual method for solving method
      * This pure virtual method should be overriden with daughter classes specific solving algorithm
      * @return the guessed root
      */
    virtual double Solve() = 0;

    /** \brief Pretty method to compute and print the results
      * This method computes and displays the results in a clear and comprehensive way
      */
    void Result() final;

    /** \brief Aitken acceleration method
      * This method implements the next "root value" to test according to the Aitken acceleration method
      * @return next *root value" to try
      */
    double Accelerate(double current, double next, double next2);

};


#endif //NONLINEARSOLVER_EQUATION_SOLVER_H
