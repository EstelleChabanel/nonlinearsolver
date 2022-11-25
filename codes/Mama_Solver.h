//
// Created by Antoine Salaün on 25.11.22.
//

#ifndef NONLINEARSOLVER_MAMA_SOLVER_H
#define NONLINEARSOLVER_MAMA_SOLVER_H


class Mama_Solver {
protected:
    double tolerance;
    unsigned int max_iter;

public:
    /// Constructors
    Mama_Solver();
    Mama_Solver(double iter, double tol);
    virtual ~Mama_Solver();

    /// Setters
    void SetTolerance(double tol);
    void SetMaxIter(unsigned int iter);

    /// Getters
    double GetTolerance();
    unsigned int GetMaxIter();
};


#endif //NONLINEARSOLVER_MAMA_SOLVER_H
