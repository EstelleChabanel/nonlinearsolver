//
// Created by eecha on 27/11/2022.
//
#include "Chord.h"
#include "test_functions.cpp"

#include<iostream>
#include<cstdlib>

double fx(double x) {
    return 3*(x);
}

int main(int argc, char *argv[]) {


    Chord ch(-1.0, 2.0, *fx2, 100, 1e-5);
    double res = ch.Solve();
    std::cout << "res = " << res << std::endl;
    std::cout << "f(res) = " << (*fx1)(res) << std::endl;

    return 0;
}