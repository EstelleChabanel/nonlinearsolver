//
// Created by Antoine Salaün on 25.11.22.
//

#ifndef NONLINEARSOLVER_EQUATION_SOLVER_H
#define NONLINEARSOLVER_EQUATION_SOLVER_H
#include "Mama_Solver.h"


class Equation_Solver : public Mama_Solver {
protected :
    double x0;
    double (*function)(double);

public :
    /// Constructors
    Equation_Solver();
    Equation_Solver(double starting_point, double (*fx)(double x), double iter, double tol);
    /// Destructor
    virtual ~Equation_Solver();

    /// Solving method
    virtual double Solve() = 0;
    void Result();

    bool Continuing(double guess, unsigned int iteration);

    };


#endif //NONLINEARSOLVER_EQUATION_SOLVER_H
