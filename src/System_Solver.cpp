//
// Created by Antoine Salaün on 25.11.22.
//

#include "System_Solver.h"
#include "exceptions/WrongDim.h"
#include <iostream>
#include <vector>
#include <cassert>
using namespace std;


/// Constructors
System_Solver::System_Solver() : Mama_Solver(), x0(), functions(nullptr) {}
System_Solver::System_Solver(unsigned int dimension, vector<double> (*fx)(vector<double> x ),vector<vector<double>> (*inv_J)(vector<double> x)) : Mama_Solver() {
    dim = dimension;
    functions = fx;
    inv_jaco = inv_J;
    x0.resize(dim);
    fill(x0.begin() , x0.end() , 0.0);
    if (dim != x0.size() || dim != functions(x0).size() || dim != inv_jaco(x0).size()){
        throw(WrongDim());
    }
}
System_Solver::System_Solver(unsigned int dimension, vector<double> (*fx)(vector<double> x ),vector<vector<double>> (*inv_J)(vector<double> x), vector<double> starting_points, double iter, double tol) : Mama_Solver(iter, tol), x0(starting_points) {
    dim = dimension;
    functions = fx;
    inv_jaco = inv_J;
    if (dim != x0.size() || dim != functions(x0).size() || dim != inv_jaco(x0).size()){
        throw(WrongDim());
    }
}


/// Destructor
System_Solver::~System_Solver(){}


/** \brief Pretty method to compute and print the results
      * This method computes and displays the results in a clear and comprehensive way
      */
void System_Solver::Result(){
    vector <double> res = Solve();
    cout << "------------------RESULTS------------------" << endl;
    cout << "The finale estimation of the roots are x_f=" << endl;
    for (int i = 0; i < res.size(); i++) {cout << res.at(i) << ' ';}
    cout << "Verification : f(x_f)="  << endl;
    for (int i = 0; i < res.size(); i++) {cout << (*functions)(res).at(i) << ' ';}
}





/// Overwritten operator * for matrix multiplication
vector<double> operator* (vector<vector<double>> M, vector<double> x){

    unsigned int dim = x.size();
    assert(M.size()==dim);
    vector<double> resultat(dim, 0.);

    for (int j(0); j<dim; ++j) {
        assert(M[j].size()==dim);
        for (int k(0); k<dim; ++k) {
            resultat[j] += M[j][k]*x[k];
        }
    }
    return resultat;
}


/// Overwritten operator - for matrix substraction
vector <double> operator- (vector <double> a, vector <double> b)
{
    assert(a.size()==b.size());
    vector <double> resultat(a.size());

    for (int j(0); j<a.size(); ++j)
    {
        resultat[j] = a[j] - b[j];
    }

    return resultat;
}