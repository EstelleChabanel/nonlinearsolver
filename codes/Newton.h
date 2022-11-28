//
// Created by Antoine Salaün on 27.11.22.
//

#ifndef NONLINEARSOLVER_NEWTON_H
#define NONLINEARSOLVER_NEWTON_H
#include "Equation_Solver.h"

class Newton : public Equation_Solver {
protected :
    // variables en commun des Newton Classic et Newton Alternatif
    double (*derivative)(double);

public :
    /// Constructors
    Newton();
    Newton(double (*fx)(double x), double (*fprime)(double x));
    Newton(double (*fx)(double x), double (*fprime)(double x), double starting_point, double iter, double tol);
    Newton(double (*fx)(double x), double (*fprime)(double x), bool acc, double starting_point, double iter, double tol);
    /// Destructor
    virtual ~Newton();

};

#endif //NONLINEARSOLVER_NEWTON_H
