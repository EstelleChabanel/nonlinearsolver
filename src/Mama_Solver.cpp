//
// Created by Antoine Salaün on 25.11.22.
//

#include "Mama_Solver.h"
#include <iostream>
#include <vector>
#include <cmath>
#include "exceptions/MaxIter.h"
#include "complex"
using namespace std;

/// Constructors
Mama_Solver::Mama_Solver(unsigned int iter, double tol) : tolerance(tol), max_iter(iter) {}
Mama_Solver::Mama_Solver() : tolerance(1e-5) , max_iter(100) {}

/// Destructor
Mama_Solver::~Mama_Solver() {}

/// Setters (à supprimer ?)
void Mama_Solver::SetTolerance(double tol){
    tolerance = tol;    };
void Mama_Solver::SetMaxIter(unsigned int iter){
    max_iter = iter;    };

/// Getters (à supprimer ?)
double Mama_Solver::GetTolerance(){
    return tolerance;   };
unsigned int Mama_Solver::GetMaxIter(){
    return max_iter;    };

/** \brief Overiding * operator as the scalar product
  * it multiplies the two vectors element-wise
  * @return a double that is the scalar product
  */
double operator* (vector<double> a, vector<double> b){
    unsigned int dim = a.size();
    assert(b.size()==dim);
    double resultat = 0;

    for (int j(0); j<dim; ++j) {resultat += a[j]*b[j];}
    return resultat;
}

/** \brief Stopping criterion for the solving algorithm
  * This method evaluates the value of the stopping criterion for all daughter classes solving algorithm
  * @return a boolean that assert if the algorithm should stop or continue
  */
template <typename T>
bool Mama_Solver::Continuing(T x, T (*fx) (T x) ,unsigned int iteration){
    bool continues = true;
    bool result_is_satisfying = sqrt(abs(fx(x)*fx(x)))<tolerance; // this line works both for double and vectors
    bool last_iteration = iteration>=max_iter;

    if (result_is_satisfying==true){
        std::cout<<"Computation converged within tolerance " << tolerance <<  " in " << iteration <<  " iterations " << std::endl;
        continues = false;
    }
    else if(iteration>=max_iter){
        std::cout<<"Computation did not converge in " << iteration << " iterations"<< std::endl;
        throw(MaxIter(max_iter));
    }
    return continues;
}

template bool Mama_Solver::Continuing<double> (double, double (*)(double), unsigned int );
template bool Mama_Solver::Continuing<vector<double>> (vector<double>, vector<double> (*)(vector<double>), unsigned int );
