//
// Created by Antoine Salaün on 27.11.22.
//

#include "Newton_System.h"
#include "exceptions/WrongDim.h"
#include "../test/test_functions.h"

using namespace std;


// Constructors
Newton_System::Newton_System(unsigned int dimension, vector<double> (*fx)(vector<double> x), vector<vector<double>> (*inv_J)(vector<double> x))
    : System_Solver(dimension, *fx, *inv_J) {
    if (dim != x0.size()) { // || dim != functions(x0).size() || dim != inv_jaco(x0).size()){
        throw(WrongDim());
    }
};
Newton_System::Newton_System(unsigned int dimension, vector<double> (*fx)(vector<double> x), vector<vector<double>> (*inv_J)(vector<double> x), vector<double> starting_points, double iter, double tol)
    : System_Solver(dimension,*fx, *inv_J , starting_points,  iter, tol) {
    if (dim != x0.size()) { // || dim != functions(x0).size() || dim != inv_jaco(x0).size()){
        throw(WrongDim());
    }
};


// Destructor
Newton_System::~Newton_System(){}


// Overriden solving method
vector<double> Newton_System::Solve() {
    unsigned int i = 0;
    vector<double> next;
    do{
        x0 = x0 - inv_jaco(x0)*functions(x0);
        i+=1;
    }while(Mama_Solver::Continuing(x0, functions, i));

    return x0;
}
