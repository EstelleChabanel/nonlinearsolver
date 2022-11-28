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
    bool acceleration;

public :
    /// Constructors
    Equation_Solver();
    Equation_Solver(double (*fx)(double x));
    Equation_Solver(double (*fx)(double x), double starting_point, double iter, double tol);
    Equation_Solver(double (*fx)(double x), bool acc, double starting_point, double iter, double tol);
    /// Destructor
    virtual ~Equation_Solver();

    /// Solving method
    virtual double Solve() = 0;

    /// Compute and display result
    void Result();

    /// Stopping/continuing criterion during solving
    bool Continuing(double guess, unsigned int iteration);

    /// Aitken acceleration method
    double Accelerate(double current, double next, double next2);

};


#endif //NONLINEARSOLVER_EQUATION_SOLVER_H
