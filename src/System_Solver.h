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


/** \brief 2nd line super class for any king of methods for non liner system solving
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
    /// Constructors
    System_Solver();
    System_Solver(unsigned int dimension, vector<double> (*functions)(vector<double> x ), vector<vector<double>> (*inv_jaco)(vector<double> x));
    System_Solver(unsigned int dimension, vector<double> (*functions)(vector<double> x ), vector<vector<double>> (*inv_jaco)(vector<double> x), vector<double> starting_points, double iter, double tol);
    /// Destructor
    virtual ~System_Solver();

    /** \brief Pure virtual method for solving method
      * This pure virtual method should be overriden with daughter classes specific solving algorithm
      * @return the guessed root, which is a vector for systems
      */
    virtual vector<double> Solve() = 0;

    /** \brief Pretty method to compute and print the results
      * This method computes and displays the results in a clear and comprehensive way
      */
    void Result() final;

    /** \brief Stopping criterion for the solving algorithm
      * This method evaluates the value of the stopping criterion for all daughter classes solving algorithm
      * @return a boolean that assert if the algorithm should stop or continue
      */
    bool Continuing(vector<double> guess, unsigned int iteration);
};


#endif //NONLINEARSOLVER_SYSTEM_SOLVER_H
