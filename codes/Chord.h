//
// Created by eecha on 27/11/2022.
//

#ifndef NONLINEARSOLVER_CHORD_H
#define NONLINEARSOLVER_CHORD_H

#include "Equation_Solver.h"


class Chord : public Equation_Solver {
private:
    double b;

public:
    /// Constructors
    Chord();
    Chord(double starting_point, double b_, double (*fx)(double x), double iter, double tol);

    /// Desctructor
    ~Chord();

    /// Methods
    double Solve();

};


#endif //NONLINEARSOLVER_CHORD_H
