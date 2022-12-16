//
// Created by eecha on 25/11/2022.
//

#ifndef NONLINEARSOLVER_BISECTION_H
#define NONLINEARSOLVER_BISECTION_H

#include "Equation_Solver.h"

/** \brief Daughter class for the bisection method for 1D non linear equation solving
  * This class implements the bisection solving method for non linear equation of type
  * f(x) = 0, with f and x 1D only
  */
class Bisection : public Equation_Solver {
private:
    // the function needs to be continuous between a and b, with f(a)<0 and f(b)>0
    double b; // x0 from the mother class will be used as a, the left starting point, b is the second starting point

public:
    /// Default constructor
    Bisection();
    /// Constructor with function and default values
    Bisection(double (*fx)(double x));
    /// Constructor with all attributes, except for the acceleration set to false
    Bisection(double (*fx)(double x), double starting_point, double b, unsigned int iter, double tol);
    /// Constructor with all attributes
    Bisection(double (*fx)(double x), bool acc, double starting_point, double b, unsigned int iter, double tol);

    /// Desctructor
    ~Bisection();

    /** \brief Overriden solving method
      * This method implements the bisection solving algorithm
      * @return the guessed root
      */
    double Solve() final;

};


#endif //NONLINEARSOLVER_BISECTION_H
