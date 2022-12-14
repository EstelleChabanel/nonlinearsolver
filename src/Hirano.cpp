//
// Created by Antoine Salaün on 12.12.22.
//

#include "Hirano.h"
#include <vector>
#include <cmath>
#include <complex>
#include <climits>

using namespace std;

// Constructors
Hirano::Hirano() : beta(0.3), delta(0.3), Complex_Solver(){}
Hirano::Hirano(complex<double> (*complex_fx)(complex<double>, int)) : beta(0.3), delta(0.3), Complex_Solver(complex_fx){}
Hirano::Hirano(complex<double> (*complex_fx)(complex<double>, int) , complex<double> starting_point, double b, double d, double tolerance, unsigned int iter) :
    Complex_Solver(complex_fx, starting_point, iter, tolerance ){
    beta = b;
    delta = d;
}

// Destructor
Hirano::~Hirano(){}

/* Factorial
 * useful in Solve
 * @return the factorial of an int
 */
double Hirano::Factorial(const int n)
{
    double f = 1;
    for (int i=1; i<=n; ++i)
        f *= i;
    return f;
}


// Overriden solving method
complex<double> Hirano::Solve(){

    unsigned int iteration = 0;
    unsigned int order = 4; // only works for up to order 4 (the other derivatives are not implemented)

do {
    // step 1 : computing the coefficients of the taylor polynomial
    vector<complex<double>> a_coef(order);
    for (unsigned int k = 0; k < a_coef.size(); k++) {
        a_coef[k] = complex_function(complex_x0, k) / Factorial(k);
    }

    // step 2
    double mu = 1;
    bool continuation_condition = true;
    complex<double> nu_m = 0;

    do {
        // step 3
        vector<complex<double>> nu(order);
        for (unsigned int k = 1; k < a_coef.size(); k++) {
            nu[k] = pow((-(mu) * a_coef[0] / a_coef[k]), 1.0 / k);
        }

        // step 4 : look for the min
        nu_m = (INT_MAX, INT_MAX);
        int index = -1;
        for (unsigned int j = 1; j < order; j++) {
            if (abs(nu[j]) < abs(nu_m)) {
                //If current value is less than min value
                // then replace it with min value
                nu_m = nu[j];
                index = j;
            }
        }

        // step 5 : condition on sub_loop
        complex<double> taylor_expension = 0;
        for (unsigned int k = 0; k < order; k++) {
            taylor_expension = taylor_expension + a_coef[k] * pow(nu_m, k);
        }
        double limit = (1 - (1 - beta) * mu) * abs(a_coef[0]);
        continuation_condition = (abs(taylor_expension) >= abs(limit));

        mu = mu / (1 + delta);
    } while(continuation_condition);

    complex_x0 = complex_x0 + nu_m;
    iteration += 1;

    }while(Continuing_complex(complex_x0,complex_function, iteration));

    return complex_x0;
}


