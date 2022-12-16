//
// Created by Antoine Salaün on 27.11.22.
//

#ifndef NONLINEARSOLVER_NEWTON_H
#define NONLINEARSOLVER_NEWTON_H
#include "Equation_Solver.h"


/** \brief Daughter class and mother class for the different Newton methods for 1D non linear equation solving
  * This class is for the Newton solving methods for non linear equation of type
  * f(x) = 0, with f and x 1D only. This super class was implemented in the perspective of implementing other newton
  * methods (methods using the derivative of the function).
  */
class Newton : public Equation_Solver {
protected :
    double (*derivative)(double);

public :
    /// Constructor
    Newton();
    //// Constructor with function and its derivative and default values
    Newton(double (*fx)(double x), double (*fxprime)(double x));
    /// Constructor with all attributes, except for the acceleration set to false
    Newton(double (*fx)(double x), double (*fxprime)(double x), double starting_point, double iter, double tol);
    /// Constructor with all attributes
    Newton(double (*fx)(double x), double (*fxprime)(double x), bool acc, double starting_point, double iter, double tol);
    /// Destructor
    virtual ~Newton();

};

#endif //NONLINEARSOLVER_NEWTON_H
