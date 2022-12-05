//
// Created by eecha on 05/12/2022.
//
#include "../test/test_functions.cpp"
#include "Bisection.h"
#include "Chord.h"
#include "NR.h"
#include "Newton_System.h"
#include <iostream>


void user_interface() {
    // Which function ?
    std::cout << "Which function would you like to solve ? Choose between the following:" << std::endl;
    std::cout << "fx1, fx2, fx3, fx4" << std::endl;
    double (*fx)(double x);
    //std::cin >> fx;
    std::cout << std::endl;

    // Which method ?
    std::string method;
    std::cout << "Which method would you like to use ?" << std::endl;
    std::cout << "Be careful: methods specification:" << std::endl;
    std::cout << "-For systems of equations, choose 'Newton_System'; " << std::endl;
    std::cout << "-For equation, choose between Chord, Bisection, Newton-Raphson and Modified_Newton" << std::endl;
    std::cout << "               -'Chord' requires continuous functions, with negative and non negative values" << std::endl;
    std::cout << "               -'Bisection' requires continuous functions, with negative and non negative values" << std::endl;
    std::cout << "               -'Newton-Raphson' requires non zero derivative of the functions" << std::endl;
    std::cout << "               -'Modified Newton' requires non zero derivative of the functions" << std::endl;

    std::cin >> method;
    std::cout << std::endl;

    // Parameters
    std::cout << "'yes' to choose parameters or 'no' to use default parameters:" ;
    std::string def;
    std::cin >> def;

    if (def=="yes") {
        std::cout
                << "Enter the following parameters"
                << std::endl;
        std::cout << "maximal number of iteration:";
        int maxiter;
        std::cin >> maxiter;
        std::cout << std::endl;
        std::cout << "Desired tolerance:";
        double tol;
        std::cin >> tol;
        std::cout << std::endl;
        std::cout << "Aitken acceleration ? true for Aitken acceleration, false for no acceleration:";
        bool acc;
        std::cin >> acc;
        std::cout << std::endl;

        double x0, b;
        unsigned int dim;

        if (method=="Bisection"){
            std::cout << "Starting points a and b, f(a) and f(b) must have different signs !";
            std::cin >> x0;
            std::cin >> b;
            Bisection bi(*fx, acc, x0, b, maxiter, tol);
            bi.Result();
        } else if (method=="Chord") {
            std::cout << "Starting points a and b, f(a) and f(b) must have different signs !";
            std::cin >> x0;
            std::cin >> b;
            Chord ch(*fx1, acc, x0, b, maxiter, tol);
            ch.Result();
        } else if (method=="NR") {
            std::cout << "Starting point: ";
            std::cin >> x0;
            NR nr(*fx1, *fprime1, acc, x0, maxiter, tol);
            nr.Result();
        } /*else if (method=="Newton system"){
            std::vector<double> x00 ;
            std::cout << "starting point:" ;
            std::cin >> x00 ;
            Newton_System NS(dim, *g_system, *g_jac, x00, maxiter, tol);
            NS.Result();
        }*/
    }

    /*if (method == "Newton-Raphson" || method == "Modified Newton") {
        std::cout << "derivative of the function:" << std::endl;
    }*/
}


int main() {
    user_interface();

    return 0;
}