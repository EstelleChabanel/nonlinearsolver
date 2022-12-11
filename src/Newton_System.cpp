//
// Created by Antoine Salaün on 27.11.22.
//

#include "Newton_System.h"
#include "exceptions/DivZero.h"
#include <iostream>
#include "../test/test_functions.h"

using namespace std;


/// Constructors
Newton_System::Newton_System(unsigned int dimension, vector<double> (*fx)(vector<double> x), vector<vector<double>> (*inv_jaco)(vector<double> x)) : System_Solver(dimension, *fx, *inv_jaco) {};
Newton_System::Newton_System(unsigned int dimension, vector<double> (*fx)(vector<double> x), vector<vector<double>> (*inv_jaco)(vector<double> x), vector<double> starting_points, double iter, double tol) : System_Solver(dimension,*fx, *inv_jaco , starting_points,  iter, tol) {};


/// Destructor
Newton_System::~Newton_System(){}

vector<double> Newton_System::Solve() {
    cout << "NR not instanced" << endl;
    NR nr(*fx1, *fprime1, false, -1.0, 100, 1e-5);
    cout << "NR instantiated" << endl;
    vector<double> a (dim,0);
    vector<double> b (dim);
    b = nr.Solve_template(a);
    return b ;
}




/** \brief Overrided solving method
  * This method implements the Newton solving algorithm for non linear system
  * @return the guessed root
  */
  /*
vector<double> Newton_System::Solve() {
    unsigned int i = 0;
    cout << "size (x0) " << x0.size() << endl;
    cout << "size of functions(x0) " << functions(x0).size() << endl;


    do{
        // For debugging
        cout<<"Iteration : "<< i << endl;
        cout << "x0 = ";
        for (int j(0); j<x0.size(); ++j){
            cout << x0.at(j) << " ";}
        cout << endl;

        cout << "functions(x0) = ";
        for (int j(0); j<functions(x0).size(); ++j){
            cout << functions(x0).at(j) << " ";}
        cout << endl;
        // end of debugging

        x0 = x0 - inv_jaco(x0)*functions(x0);
        i+=1;


        //-> guess = "<< x0 <<" and f(guess) = "<< function(x0)

    }while(Continuing(x0, i));

    return x0;
}
*/

