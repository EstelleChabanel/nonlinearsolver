//
// Created by Antoine Salaün on 27.11.22.
//

#ifndef NONLINEARSOLVER_NR_H
#define NONLINEARSOLVER_NR_H

#include "Newton.h"



/** \brief Daughter class for the classic Newton-Raphson method for non linear equation solving
  * This class implements the Newton-Raphson solving method for non linear equation of type
  * f(x) = 0, with f and x 1D only
  */
class NR : public Newton {

protected :

public :
    /// Default constructor
    NR();
    /// Constructor with function and its derivative and default values
    NR(double (*fx)(double x), double (*fprime)(double x));
    /// Constructor with all attributes, except for the acceleration set to false
    NR(double (*fx)(double x), double (*fprime)(double x), double starting_point, double iter, double tol);
    /// Constructor with all attributes
    NR(double (*fx)(double x), double (*fprime)(double x), bool acc, double starting_point, double iter, double tol);

    /// Destructor
    virtual ~NR();

    /** \brief Overriden solving method
      * This method implements the Newton-Raphson solving algorithm
      * @return the guessed root
      */
    double Solve() final;

};

#endif //NONLINEARSOLVER_NR_H
