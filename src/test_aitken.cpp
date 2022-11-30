//
// Created by Antoine Salaün on 27.11.22.
//

//
// Created by eecha on 25/11/2022.
//
#include "Aitken.h"
#include "Equation_Solver.h"
#include "Mama_Solver.h"

#include<iostream>
#include<cmath>

double fx(double x) {
    return 4*sin(x+2) ;
}

int main(int argc, char *argv[]) {


    Aitken Ai(-0.45, *fx, 100, 1e-6, 1e-9);
    double res = Ai.Solve();
    std::cout << "res = " << res << std::endl;
    std::cout << "f(res) = "<< fx(res);

    return 0;
}