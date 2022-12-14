//
// Created by Antoine Salaün on 12.12.22.
//

#ifndef PCSC_PROJECT_HIRANO_H
#define PCSC_PROJECT_HIRANO_H

#include "Complex_Solver.h"
#include <complex>
using namespace std;

class Hirano : public Complex_Solver {
protected:

    // complex functions are implemented differently, the second int represents the order of the derivatives
    double beta;
    double delta;

public:
/// Constructors
    Hirano();
    Hirano(complex<double> (*complex_fx)(complex<double>, int) , complex<double> starting_point, double beta, double delta, double tolerance, unsigned int iter);


    /// Destructor
    virtual ~Hirano();

    double factorial(const int n);

    /** \brief Overides the Solve function
      * Since a different solving method is used, this methods overides the pure virtual Solve
      * to make sur the class is actually instantiable
      * @return 0
      */
    complex<double> Solve();

    /** \brief Continuing crierion used in complax solve
      * As the complex functions take two arguments instead of one, it cannot use the Continuing template
      * made in Mama_Solver
      * @return a bool that decides wether to keep looping or not
      */
    bool Continuing_complex(complex<double> x, complex<double> (*fx) (complex<double> x, int order) ,unsigned int iteration);

    };

#endif //PCSC_PROJECT_HIRANO_H
