//
// Created by eecha on 27/11/2022.
//

#ifndef NONLINEARSOLVER_CHORD_H
#define NONLINEARSOLVER_CHORD_H

#include "Equation_Solver.h"


/** \brief Daughter class for the chord method for non liner equation solving
  * This class implements the chord solving method for non linear equation of type
  * f(x) = 0, with f and x 1D only
  */
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

    /** \brief Overrided solving method
      * This method implements the Chord solving algorithm
      * @return the guessed root
      */
    double Solve() final;

};


#endif //NONLINEARSOLVER_CHORD_H
