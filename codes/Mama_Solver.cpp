//
// Created by Antoine Salaün on 25.11.22.
//

#include "Mama_Solver.h"


//
// Created by Antoine Salaün on 25.11.22.
//
#include "Mama_solver.h"
#include <vector>
#include <iostream>


/// Constructors
Mama_Solver::Mama_Solver(double iter, double tol) : tolerance(tol), max_iter(iter) {}
Mama_Solver::Mama_Solver() : tolerance(1e-5) , max_iter(100) {}

/// Destructor
Mama_Solver::~Mama_Solver() {}

/// Setters
void Mama_Solver::SetTolerance(double tol){
    tolerance = tol;    };
void Mama_Solver::SetMaxIter(unsigned int iter){
    max_iter = iter;    };

/// Getters
double Mama_Solver::GetTolerance(){
    return tolerance;   };
unsigned int Mama_Solver::GetMaxIter(){
    return max_iter;    };

#endif //NONLINEARSOLVER_MAMA_SOLVER_H
