//
// Created by eecha on 25/11/2022.
//

#include "Bisection.h"
#include "Interval.h"
#include "test_functions.cpp"

int main(int argc, char *argv[]) {

    try {
        Bisection bi(*fx1, 5.0, 10.0, 100, 1e-5) ;
    }
    catch (Interval& inter) {
        inter.PrintError();
        std::cout << "Try another interval (new x0 and b) !" << std::endl;
        Bisection bi(*fx1, -10.0, 10.0, 100, 1e-5);
    }
    Bisection bi(*fx1);
    bi.Result();

    return 0;
}