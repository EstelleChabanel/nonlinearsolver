//
// Created by Antoine Salaün on 27.11.22.
//

#ifndef NONLINEARSOLVER_NR_H
#define NONLINEARSOLVER_NR_H

#include "Newton.h"



/** \brief Daughter class and mother class for the classic Newton-Raphson method for non liner equation solving
  * This class implements the Newton-Raphson solving method for non linear equation of type
  * f(x) = 0, with f and x 1D only
  */

class NR : public Newton {

protected :
    double (*derivative)(double);

public :
    /// Constructors
    NR();
    NR(double (*fx)(double x), double (*fprime)(double x));
    NR(double (*fx)(double x), double (*fprime)(double x), double starting_point, double iter, double tol);
    NR(double (*fx)(double x), double (*fprime)(double x), bool acc, double starting_point, double iter, double tol);

    /// Destructor
    virtual ~NR();

    /** \brief Overrided solving method
      * This method implements the Newton-Raphson solving algorithm
      * @return the guessed root
      */
    double Solve();

};

#endif //NONLINEARSOLVER_NR_H
