//
// Created by Antoine Salaün on 25.11.22.
//

#ifndef NONLINEARSOLVER_SYSTEM_SOLVER_H
#define NONLINEARSOLVER_SYSTEM_SOLVER_H
#include "Mama_Solver.h"
#include <vector>
using namespace std;


vector<double> operator* (vector<vector<double>> A, vector <double> b);
vector<double> operator- (vector<double>  a, vector<double> b);



class System_Solver : public Mama_Solver {
protected :
    unsigned int dim;
    vector<double> x0;
    vector<double> (*functions)(vector<double>);
    vector<vector<double>> (*inv_jaco)(vector<double>);



    //bool acceleration;

public :
    /// Constructors
    System_Solver();
    System_Solver(unsigned int dimension, vector<double> (*functions)(vector<double> x ), vector<vector<double>> (*inv_jaco)(vector<double> x));
    System_Solver(unsigned int dimension, vector<double> (*functions)(vector<double> x ), vector<vector<double>> (*inv_jaco)(vector<double> x), vector<double> starting_points, double iter, double tol);
    /// Destructor
    virtual ~System_Solver();

   
    virtual vector<double> Solve() = 0;

    void Result();

    bool Continuing(vector<double> guess, unsigned int iteration);


};


#endif //NONLINEARSOLVER_SYSTEM_SOLVER_H
