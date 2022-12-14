//
// Created by Antoine Salaün on 14.12.22.
//

#ifndef PCSC_PROJECT_COMPLEX_SOLVER_H
#define PCSC_PROJECT_COMPLEX_SOLVER_H

#include "Mama_Solver.h"
#include <complex>
using namespace std;

class Complex_Solver : public Mama_Solver {

protected:
    complex<double> complex_x0;
    complex<double>  (*complex_function)(complex<double> , int);

public:
    Complex_Solver();
    Complex_Solver(complex<double>  (*complex_function)(complex<double> , int), complex<double> starting_complex, unsigned int iter, double tol);

    virtual ~Complex_Solver();

    /** \brief Pure virtual method for solving method
      * This pure virtual method should be overriden with daughter classes specific solving algorithm
      * @return the guessed root
      */
    virtual complex<double> Solve() = 0;

    /** \brief Pretty method to compute and print the results
      * This method computes and displays the results in a clear and comprehensive way
      */
    void Result() final;

};


#endif //PCSC_PROJECT_COMPLEX_SOLVER_H
