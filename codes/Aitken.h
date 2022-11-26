//
// Created by Antoine Salaün on 26.11.22.
//

#ifndef NONLINEARSOLVER_AITKEN_H
#define NONLINEARSOLVER_AITKEN_H

#include "Equation_Solver.h"

class Aitken : public Equation_Solver {

private:
    double div;

public:
    /// Constructors
    Aitken();
    Aitken(double starting_point, double (*fx)(double x), double iter, double tol, double div_limit);

    /// Desctructor
    ~Aitken();

    /// Methods
    double Solve();

};


#endif //NONLINEARSOLVER_AITKEN_H
