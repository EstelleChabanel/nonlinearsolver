//
// Created by eecha on 30/11/2022.
//
#include "pcsc.h"
#include "Bisection.h"
#include "Chord.h"
#include "NR.h"
#include "Newton_System.h"
#include "../test/test_functions.h"

#include <iostream>
#include <sstream>
#include <stdio.h>
#include <unistd.h>
#include <vector>


//==== inspired from: https://www.geeksforgeeks.org/getopt-function-in-c-to-parse-command-line-arguments/ ==//

int main(int argc, char **argv) {

    // == Default parameters: ==
    std::string method = "bisection";
    std::string function_name = "../test/test_functions.cpp";
    std::string derivate_name = "../test/test_functions.cpp";
    bool acc = false;
    double starting_point = -200.0;
    double starting_point2 = 200.0;
    int maxiter = 100;
    double tol = 1e-5;


    // == Parameters given in command line: ==
    int opt;

    while((opt = getopt(argc, argv, ":if:lrx")) != -1) {

        switch(opt){
            case 'f':
                function_name = optarg;
                break;
            case 'd':
                derivate_name = optarg;
                break;
            case 'm':
                method = optarg;
                break;
            case 'a':
                starting_point = std::stod(optarg);
                break;
            case 'b':
                starting_point2 = std::stod(optarg);
                break;
            case 'q':
                acc = optarg != "false";
                //aistringstream(optarg) >> std::boolalpha >> acc;
                break;
            case 'i':
                maxiter = std::stoi(optarg);
                break;
            case 't':
                tol = std::stod(optarg);
                break;
        }
    }

    // According to the method, instantiate an object of the right solver class
    // and print the result of the algorithm
    if(method=="bisection") {
        Bisection bi(*fx1, acc, starting_point, starting_point2, maxiter, tol);
        bi.Result();
    } else if (method=="chord") {
        Chord ch(*fx1, acc, starting_point, starting_point2, maxiter, tol);
        ch.Result();
    } else if (method=="NR") {
        NR nr(*fx1, *fprime1, acc, starting_point, maxiter, tol);
        nr.Result();
    } /*else if (method=="newton system") {
        Newton_System ns(*g_system, *g_jac, starting_point, maxiter, tol);
        ns.Result();
    }*/





    return 0;
}