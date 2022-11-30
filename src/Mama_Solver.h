//
// Created by Antoine Salaün on 25.11.22.
//

#ifndef NONLINEARSOLVER_MAMA_SOLVER_H
#define NONLINEARSOLVER_MAMA_SOLVER_H


/** \brief Mother super class for any kind of method and system to solve
  * This class is the mother class of every possible solving methods for both the equation and systems solving of type
  * f(x) = 0, with f and x 1D or 3D
  */
class Mama_Solver {
protected:
    double tolerance;
    unsigned int max_iter;

public:
    /// Constructors
    Mama_Solver();
    Mama_Solver(double iter, double tol);

    /// Destructor
    virtual ~Mama_Solver();

    // ToDo: NORMALEMENT ON DEVRAIT POUVOIR S'EN DEBARASSER
    /// Setters
    void SetTolerance(double tol);
    void SetMaxIter(unsigned int iter);

    /// Getters
    double GetTolerance();
    unsigned int GetMaxIter();
};


#endif //NONLINEARSOLVER_MAMA_SOLVER_H
