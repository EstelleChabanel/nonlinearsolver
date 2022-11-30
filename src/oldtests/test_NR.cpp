//
// Created by Antoine Salaün on 27.11.22.
//

#include "NR.h"
#include "DivZero.h"
#include "test_functions.cpp"


int main(int argc, char *argv[]) {

    try {
        NR nr(*fx3, *fprime3, -1.0, 100, 1e-5);
        nr.Result();
    }
    //catch (DivZero& div("Division by zero, the derivative must be non zero on the all interval, try another function!")) {
    catch (DivZero& div) {
        div.PrintError();
        std::cout << "The derivative must be negative, try another function" << std::endl;
        NR nr(*fx3, *fprime3, -1.0, 100, 1e-5);
        nr.Result();
    }
    // checked : it works !

    return 0;
}