//
// Created by Antoine Salaün on 27.11.22.
//

#ifndef NONLINEARSOLVER_NEWTON_H
#define NONLINEARSOLVER_NEWTON_H
#include "Equation_Solver.h"


/** \brief Daughter class and mother class for the different Newton methods for non liner equation solving
  * This class is for the Newton solving methods for non linear equation of type
  * f(x) = 0, with f and x 1D only
  */
class Newton : public Equation_Solver {
protected :


public :
    /// Constructors
    Newton();
    Newton(double (*fx)(double x));
    Newton(double (*fx)(double x), double starting_point, double iter, double tol);
    Newton(double (*fx)(double x), bool acc, double starting_point, double iter, double tol);
    /// Destructor
    virtual ~Newton();

};

#endif //NONLINEARSOLVER_NEWTON_H
