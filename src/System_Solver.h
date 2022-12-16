//
// Created by Antoine Salaün on 25.11.22.
//

#ifndef NONLINEARSOLVER_SYSTEM_SOLVER_H
#define NONLINEARSOLVER_SYSTEM_SOLVER_H

#include "Mama_Solver.h"

#include <vector>
using namespace std;


/// Overwritten operator * for matrix multiplication
vector<double> operator* (vector<vector<double>> A, vector <double> b);
/// Overwritten operator - for vector substraction
vector<double> operator- (vector<double>  a, vector<double> b);


/** \brief Virtual class for any king of methods for non liner system solving
  * This class is for every possible solving methods for non linear system solving of type
  * f(x) = 0, with f and x multidimensional
  */
class System_Solver : public Mama_Solver {
protected :
    unsigned int dim;
    vector<double> x0;
    vector<double> (*functions)(vector<double>);
    vector<vector<double>> (*inv_jaco)(vector<double>);


public :
    /// Default constructor
    System_Solver();
    /// Constructor with function and its jacobian and default values
    System_Solver(unsigned int dimension, vector<double> (*fx)(vector<double> x ), vector<vector<double>> (*inv_J)(vector<double> x));
    /// Constructor with all attributes
    System_Solver(unsigned int dimension, vector<double> (*fx)(vector<double> x ), vector<vector<double>> (*inv_J)(vector<double> x), vector<double> starting_points, double iter, double tol);

    /// Destructor
    virtual ~System_Solver();

    /** \brief Pure virtual method for solving algorithm
      * This pure virtual method should be overriden with daughter classes specific solving algorithm
      * @return the guessed root, which is a vector
      */
    virtual vector<double> Solve() = 0;

    /** \brief Pretty method to compute and print the results
      * This method computes and displays the results in a clear and comprehensive way
      */
    void Result() final;

};


#endif //NONLINEARSOLVER_SYSTEM_SOLVER_H
