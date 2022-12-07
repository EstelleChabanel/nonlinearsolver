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
#include <unistd.h>
#include <vector>


//==== inspired from: https://www.geeksforgeeks.org/getopt-function-in-c-to-parse-command-line-arguments/ ==//

int main(int argc, char **argv) {

    // == Default parameters: ==
    std::string method = "bisection";
    std::string function_name = "fx1";
    std::string derivate_name = "fprime1";
    bool acc = false;
    double starting_point = -200.0;
    double starting_point2 = 200.0;
    vector<double> starting_vec;
    int maxiter = 100;
    double tol = 1e-5;


    // == Parameters given in command line: ==
    int opt;

    while ((opt = getopt(argc, argv, ":f:d:m:a:b:i:t:q:")) != -1) {
        switch (opt) {
            case 'f':
                function_name = optarg;
                continue;
            case 'd':
                derivate_name = optarg;
                continue;
            case 'm':
                method = optarg;
                continue;
            case 'a':
                starting_point = std::stod(optarg);
                continue;
            case 'b':
                starting_point2 = std::stod(optarg);
                continue;
            case 'q':
                acc = optarg != "false";
                //aistringstream(optarg) >> std::boolalpha >> acc;
                continue;
            case 'i':
                maxiter = std::stoi(optarg);
                continue;
            case 't':
                tol = std::stod(optarg);
                continue;
        }
        break;
    }

    // optind is for the extra arguments which are not parsed
    for (; optind < argc; optind++) {
        std::cout << "extra arguments: \n" << argv[optind] << std::endl;
    }

    // == Initialize function == //
    double (*function)(double);
    double (*derivate)(double);
    vector<double> (*functions)(vector<double>);
    vector<vector<double>> (*inv_jaco)(vector<double>);

    if (function_name == "fx1") {
        function = fx1;
        derivate = fprime1;
    } else if (function_name == "fx2") {
        function = fx2;
        derivate = fprime2;
    } else if (function_name == "fx3") {
        function = fx3;
        derivate = fprime3;
    } else if (function_name == "fx4") {
        function = fx4;
        derivate = fprime4;
    } else if (function_name == "g_system" || method == "newton system") {
        functions = g_system;
        inv_jaco = g_jac;
    }


    // Create a pointer to the Mama_Solver abstract class
    Mama_Solver *solver = 0;

    // According to the method, instantiate the pointer to the right solver class
    // and print the result of the algorithm
    if(method=="bisection") {
        solver = new Bisection(*function, acc, starting_point, starting_point2, maxiter, tol);
    } else if (method=="chord") {
        solver = new Chord(*function, acc, starting_point, starting_point2, maxiter, tol);
    } else if (method=="NR") {
        solver = new NR(*function, *derivate, acc, starting_point, maxiter, tol);
    } /*else if (method=="newton system") {
        solver = new Newton_System(*functions, *inv_jaco, starting_point, maxiter, tol);
    }*/


    // Compute and present result
    solver->Result();
    delete solver;

    return 0;
}