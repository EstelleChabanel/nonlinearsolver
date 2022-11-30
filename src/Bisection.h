//
// Created by eecha on 25/11/2022.
//

#ifndef NONLINEARSOLVER_BISECTION_H
#define NONLINEARSOLVER_BISECTION_H

#include "Equation_Solver.h"

/** \brief Daughter class for the bisection method for non liner equation solving
  * This class implements the bisection solving method for non linear equation of type
  * f(x) = 0, with f and x 1D only
  */
class Bisection : public Equation_Solver {
// the function needs to be continue entre a et b et f(a)<0 et f(b)>0

private:
    double b;

public:
    /// Constructors
    Bisection();
    Bisection(double (*fx)(double x));
    Bisection(double (*fx)(double x), double starting_point, double b, double iter, double tol);
    Bisection(double (*fx)(double x), bool acc, double starting_point, double b, double iter, double tol);

    /// Desctructor
    ~Bisection();

    /** \brief Overrided solving method
      * This method implements the bisection solving algorithm
      * @return the guessed root
      */
    double Solve();

};


#endif //NONLINEARSOLVER_BISECTION_H
