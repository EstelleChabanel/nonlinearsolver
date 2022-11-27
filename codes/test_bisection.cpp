//
// Created by eecha on 25/11/2022.
//
#include "Bisection.h"
#include "Equation_Solver.h"
#include "Mama_Solver.h"

#include<iostream>
#include<cmath>

double fx(double x) {
    return 3*(x);
}

int main(int argc, char *argv[]) {


    Bisection bi(-1.0, 2.0, *fx, 100, 1e-5);
    double res = bi.Solve();
    std::cout << "res = " << res << std::endl;

    return 0;
}