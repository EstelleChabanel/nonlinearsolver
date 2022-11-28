//
// Created by eecha on 27/11/2022.
//

#ifndef NONLINEARSOLVER_CHORD_H
#define NONLINEARSOLVER_CHORD_H

#include "Equation_Solver.h"


class Chord : public Equation_Solver {
private:
    double b;
    bool acceleration;

public:
    /// Constructors
    Chord();
    Chord(double (*fx)(double x));
    Chord(double (*fx)(double x), double starting_point, double b_, double iter, double tol);
    Chord(double (*fx)(double x), bool acc, double starting_point, double b_, double iter, double tol);

    /// Desctructor
    ~Chord();

    /// Methods
    double Solve();

};


#endif //NONLINEARSOLVER_CHORD_H
