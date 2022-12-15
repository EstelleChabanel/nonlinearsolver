//
// Created by Antoine Salaün on 3.12.22.
//

#ifndef NONLINEARSOLVER_NEWTON_SYSTEM_H
#define NONLINEARSOLVER_NEWTON_SYSTEM_H
#include "System_Solver.h"
#include "NR.h"



/** \brief Daughter class for the  Newton method for non liner system solving
  * This class implements the Newton solving method for non linear system of type
  * f(x) = 0, with f and x multidimensional
  */
class Newton_System : public System_Solver {
public :
    /// Constructors
    Newton_System(unsigned int dimension, vector<double> (*fx)(vector<double> x), vector<vector<double>> (*inv_J)(vector<double> x));
    Newton_System(unsigned int dimension, vector<double>  (*fx)(vector<double> x), vector<vector<double>> (*inv_J)(vector<double> x), vector<double> starting_points, double iter, double tol);

    /// Destructor
    virtual ~Newton_System();

    /** \brief Overriden solving method
      * This method implements the Newton solving algorithm for non linear system
      * @return the guessed root
      */
    vector<double> Solve() final;

};

#endif //NONLINEARSOLVER_NEWTON_SYSTEM_H
