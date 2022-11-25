//
// Created by Antoine Salaün on 25.11.22.
//

#ifndef NONLINEARSOLVER_EQUATION_SOLVER_H
#define NONLINEARSOLVER_EQUATION_SOLVER_H
#include "Mama_Solver.h"


class Equation_Solver : public Mama_Solver {
protected :
    double x0;

public :
    virtual Solve();

    Equation_Solver(double starting_point);
    virtual ~Equation_Solver();

};


#endif //NONLINEARSOLVER_EQUATION_SOLVER_H
