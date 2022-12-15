//
// Created by Antoine Salaün on 14.12.22.
//

#ifndef PCSC_PROJECT_COMPLEX_SOLVER_H
#define PCSC_PROJECT_COMPLEX_SOLVER_H

#include "Mama_Solver.h"
#include <complex>
using namespace std;


/** \brief Daughter class and virtual mother class for non linear complex equation solving
  * This class is for the solving methods of non linear equation of type
  * f(x) = 0, with f and x 1D and complex. This super class was implemented in the perspective of implementing other
  * complex solving methods.
  */
class Complex_Solver : public Mama_Solver {

protected:
    complex<double> complex_x0;
    // complex functions are implemented differently, the second int represents the order of the derivatives
    complex<double>  (*complex_function)(complex<double> , int);

public:
    /// Constructors
    Complex_Solver();
    Complex_Solver(complex<double>  (*fx)(complex<double> , int));
    Complex_Solver(complex<double>  (*fx)(complex<double> , int), complex<double> starting_complex, unsigned int iter, double tol);

    /// Destructor
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

    /** \brief Continuing crierion used in complax solve
      * As the complex functions take two arguments instead of one, it cannot use the Continuing template
      * made in Mama_Solver
      * @return a bool that decides wether to keep looping or not
      */
    bool Continuing_complex(complex<double> x, complex<double> (*fx) (complex<double> x, int order) ,unsigned int iteration);

};


#endif //PCSC_PROJECT_COMPLEX_SOLVER_H
