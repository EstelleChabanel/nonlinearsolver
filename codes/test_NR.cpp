//
// Created by Antoine Salaün on 27.11.22.
//

#include "NR.h"
#include "test_functions.cpp"


int main(int argc, char *argv[]) {

    NR nr(*fx3, *fprime3, -1.0, 100, 1e-5);
    nr.Result();
    // checked : it works !

    return 0;
}