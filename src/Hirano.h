//
// Created by Antoine Salaün on 12.12.22.
//

#ifndef PCSC_PROJECT_HIRANO_H
#define PCSC_PROJECT_HIRANO_H

#include "Newton.h"
#include <complex>
using namespace std;

class Hirano : public Newton {
protected:
    complex<double> complex_x0;
    complex<double>  (*complex_function)(complex<double> , int);
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

    /** \brief solving method for complex numbers
      * This method implements the Hirano solving algorithm
      * implemented from Murota, Kazuo (1982). Global Convergence of a Modified Newton Iteration for Algebraic Equations.
      * SIAM Journal on Numerical Analysis, 19(4), 793–799. doi:10.1137/0719055
      * limited to the case of order 4
      * @return the guessed root
      */
    complex<double> Complex_Solve();

    /** \brief Overides the Solve function
      * Since a different solving method is used, this methods overides the pure virtual Solve
      * to make sur the class is actually instantiable
      * @return 0
      */
    double Solve();

    /** \brief Continuing crierion used in complax solve
      * As the complex functions take two arguments instead of one, it cannot use the Continuing template
      * made in Mama_Solver
      * @return a bool that decides wether to keep looping or not
      */
    bool Continuing_complex(complex<double> x, complex<double> (*fx) (complex<double> x, int order) ,unsigned int iteration);

    };

#endif //PCSC_PROJECT_HIRANO_H
