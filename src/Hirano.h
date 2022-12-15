//
// Created by Antoine Salaün on 12.12.22.
//

#ifndef PCSC_PROJECT_HIRANO_H
#define PCSC_PROJECT_HIRANO_H

#include "Complex_Solver.h"
#include <complex>
using namespace std;


/** \brief Daughter class for the Hirano method for non linear complex equation solving
  * This class implements the Hirano solving method for non linear equation of type
  * f(x) = 0, with f and x complex 1D
  */
class Hirano : public Complex_Solver {
protected:
    // parameters for the solving algorithm
    double beta;
    double delta;

public:
    /// Constructors
    Hirano();
    Hirano(complex<double> (*complex_fx)(complex<double>, int));
    Hirano(complex<double> (*complex_fx)(complex<double>, int) , complex<double> starting_point, double beta, double delta, double tolerance, unsigned int iter);


    /// Destructor
    virtual ~Hirano();

    double Factorial(const int n);

    /** \brief Overriden solving method
      * This method implements the Hirano's solving algorithm as in https://epubs.siam.org/doi/abs/10.1137/0719055
      * The method uses the Taylor expansion of order 4, but it can be generalized to higher order if one defines higher
      * derivatives order of the function to solve.
      * @return the guessed complex root
      */
    complex<double> Solve();

};

#endif //PCSC_PROJECT_HIRANO_H
