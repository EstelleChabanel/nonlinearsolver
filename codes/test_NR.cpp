//
// Created by Antoine Salaün on 27.11.22.
//

#include<iostream>
#include<cmath>
#include "NR.h"
#include "Equation_Solver.h"
#include "Mama_Solver.h"
#include "Newton.h"

double fx(double x) {
    return 3*x*x+4*x-10;
}

double fprimex(double x) {
    return 6*x + 4;
}

int main(int argc, char *argv[]) {

    NR nr(-1.0, *fx, *fprimex, 100, 1e-5);
    double res = nr.Solve();
    std::cout << "res = " << res << std::endl;

    return 0;
}