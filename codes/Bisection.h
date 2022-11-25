//
// Created by eecha on 25/11/2022.
//

#ifndef NONLINEARSOLVER_BISECTION_H
#define NONLINEARSOLVER_BISECTION_H

#include "Equation_Solver.h"


class Bisection : public Equation_Solver {
// the function needs to be continue entre a et b et f(a)<0 et f(b)>0

private:
    double a;
    double b;

public:
    /// Constructors
    Bisection();
    Bisection(double starting_point, double b, double (*fx)(double x), double iter, double tol);

    /// Desctructor
    ~Bisection();

    /// Getters
    double GetA();
    double GetB();

    /// Setters
    void SetA(double new_a);
    void SetB(double new_b);

    /// Methods
    double Solve();

};


#endif //NONLINEARSOLVER_BISECTION_H
