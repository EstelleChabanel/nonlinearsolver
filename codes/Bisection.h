//
// Created by eecha on 25/11/2022.
//

#ifndef NONLINEARSOLVER_BISECTION_H
#define NONLINEARSOLVER_BISECTION_H

#include "Equation_Solver.h"


class Bisection : public Equation_Solver {
// the function needs to be continue entre a et b et f(a)<0 et f(b)>0

private:
    double b;
    bool acceleration;

public:
    /// Constructors
    Bisection();
    Bisection(double (*fx)(double x));
    Bisection(double (*fx)(double x), double starting_point, double b, double iter, double tol);
    Bisection(double (*fx)(double x), bool acc, double starting_point, double b, double iter, double tol);

    /// Desctructor
    ~Bisection();

    /// Methods
    double Solve();

};


#endif //NONLINEARSOLVER_BISECTION_H
