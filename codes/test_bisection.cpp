//
// Created by eecha on 25/11/2022.
//
#include "Bisection.h"

#include<iostream>
#include<cmath>

int main(int argc, char *argv[]) {

    double fx(double x) {
        return sin(x);
    }
    Bisection bi(-1.0, 2.0, *fx, 50, 1e-5);
    res = bi.Solve();
    std::cout << res << std::endl;

    return 0;
}