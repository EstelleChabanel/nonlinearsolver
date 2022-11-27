//
// Created by eecha on 25/11/2022.
//

#include "Bisection.h"
#include "test_functions.cpp"

int main(int argc, char *argv[]) {

    Bisection bi(-10.0, 10.0, *fx1, 100, 1e-5);
    bi.Result();

    return 0;
}