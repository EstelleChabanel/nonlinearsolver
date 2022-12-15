//
// Created by eecha on 30/11/2022.
//
#include "pcsc.h"
#include "Bisection.h"
#include "Chord.h"
#include "NR.h"
#include "Hirano.h"
#include "Newton_System.h"
#include "exceptions/Interval.h"
#include "exceptions/WrongDim.h"
#include "../test/test_functions.h"

#include <iostream>
#include <unistd.h>
#include <vector>


int main(int argc, char **argv) {

    // ================================= Enter Parameters =============================== //

    // Which function ?
    std::string f;
    std::cout << "Which function would you like to solve ? Choose between the following:" << std::endl;
    std::cout << "fx1, fx2, fx3, fx4, g_system, comp_fx1, comp_fx2, comp_fx3" << std::endl;
    std::cin >> f;
    std::cout << std::endl;

    // Which method ?
    std::string method;

    double (*function)(double);
    double (*derivate)(double);
    vector<double> (*functions)(vector<double>);
    vector<vector<double>> (*inv_jaco)(vector<double>);
    complex<double>  (*complex_function)(complex<double> , int);

    if (f == "fx1" || f == "fx2" || f == "fx3" || f == "fx4"){
        std::cout << "Which method would you like to use ?" << std::endl;
        std::cout << "Be careful: methods specification:" << std::endl;
        std::cout << "-For 1D equation, choose between Chord, Bisection, Newton-Raphson" << std::endl;
        std::cout << "               -'Chord' requires continuous functions, with negative and non negative values"
                  << std::endl;
        std::cout << "               -'Bisection' requires continuous functions, with negative and non negative values"
                  << std::endl;
        std::cout << "               -'Newton-Raphson' requires non zero derivative of the functions" << std::endl;
        std::cin >> method;
        if (method != "Bisection" && method != "Chord" && method != "Newton-Raphson"){
            std::cerr << "This method is not compatible with the chosen function, try again!" << std::endl;
        }
        if (f == "fx1") {
            function = fx1;
            derivate = fprime1;
        } else if (f == "fx2") {
            function = fx2;
            derivate = fprime2;
        } else if (f == "fx3") {
            function = fx3;
            derivate = fprime3;
        } else if (f == "fx4") {
            function = fx4;
            derivate = fprime4;
        }

    } else if (f == "g_system") {
        std::cout << "Which method would you like to use ?" << std::endl;
        std::cout << "-For systems of equations, the only available method is 'Newton_System'; " << std::endl;
        method = "Newton system";
        if (f == "g_system") {
            functions = g_system;
            inv_jaco = g_jac;
        }
    } else if (f == "comp_fx1"){
        std::cout << "Which method would you like to use ?" << std::endl;
        std::cout << "-For complex 1D equation, the only available method is 'Hirano'; " << std::endl;
        method = "Hirano";
        if (f == "comp_fx1"){
            complex_function = comp_fx1;
        }
    } else {
        std::cerr << "This function was not implemented, please try again !" << std::endl;
        return 1;
    }

    // Create a pointer to the Mama_Solver abstract class
    Mama_Solver *solver = 0;


    // If the user used the argument 0, put default parameters
    if(argc == 2 and argv[1] == '0') {
        std::cout << "We are using the following default parameter:" << std::endl ;
        std::cout << "Maximal number of iterations : 100 " << std::endl ;
        std::cout << "Tolerance : 1e-5" << std::endl;

        if(method == "Bisection" || method == "Chord") {
            std::cout << "Aitken acceleration = 0 for false " << std::endl;
            std::cout << "Left starting point: -200.0 " << std::endl;
            std::cout << "Enter right starting point:  200.0 " << std::endl;
            if(method == "Bisection") {
                solver = new Bisection(*function);
            } else {
                solver = new Chord(*function);
            }
        } else if (method == "Newton-Raphson") {
            std::cout << "Aitken acceleration = 0 for false " << std::endl;
            std::cout << "Starting point: -200.0 ";
            solver = new NR(*function, *derivate);
        }
        else if(method == "Hirano"){
            std::cout << "Enter starting point: -0.5 + 2i " << std::endl;
            std::cout << "Coefficient beta: 0.3" << std::endl;
            std::cout << "Enter coefficient delta: 0.3" << std::endl;
            solver = new Hirano(*complex_function);
        } else if (method=="Newton system"){
            unsigned int dim;
            if(f == "g_system"){
                dim = 2;
            }
            std::cout << "Dim (2 or 3): " << dim << std::endl;
            std::cout << "Starting point: (-2.0, 4.0)" << std::endl;
            solver = new Newton_System(2, *functions, *inv_jaco);
        }

    // if no argument were used in the call of the main function, let the user choose all the arguments
    } else {

        unsigned int iter;
        std::cout << "Maximal number of iterations :";
        std::cin >> iter;
        std::cout << std::endl;
        double tol;
        std::cout << "Tolerance :";
        std::cin >> tol;
        std::cout << std::endl;

        bool acc;
        double a;
        double b;
        double ci;
        double cr;
        complex<double> c;
        double beta;
        double delta;
        unsigned int dim;
        vector<double> x0;

        if (method == "Bisection" || method == "Chord") {
            std::cout << "Aitken acceleration? (0 for false, 1 for true): ";
            std::cin >> acc;
            std::cout << endl;
            std::cout << "Enter left starting point: ";
            std::cin >> a;
            std::cout << endl;
            std::cout << "Enter right starting point: ";
            std::cin >> b;
            std::cout << std::endl;
        } else if (method == "Newton-Raphson") {
            std::cout << "Aitken acceleration? (0 for false, 1 for true): ";
            std::cin >> acc;
            std::cout << endl;
            std::cout << "Enter starting point: ";
            std::cin >> a;
            std::cout << endl;
            std::cout << "a = " << a << std::endl;
        } else if (method == "Hirano") {
            std::cout << "Enter starting point: real part: ";
            std::cin >> cr;
            std::cout << endl;
            std::cout << "Enter starting point: imaginary part: ";
            std::cin >> ci;
            std::cout << endl;
            c = (cr, ci);
            std::cout << "Enter coefficient beta: ";
            std::cin >> beta;
            std::cout << endl;
            std::cout << "Enter coefficient delta: ";
            std::cin >> delta;
            std::cout << endl;
        } else if (method == "Newton system") {
            std::cout << "Enter dim (2 or 3): ";
            std::cin >> dim;
            std::cout << endl;
            if (dim != 2 || dim != 3){
                std::cerr << "Wrong dimensions, should be 2 or 3" << std::endl;
                return 1;
            }
            std::cout << "Enter starting point: ";
            for (int i = 0; i < dim; ++i) {
                std::cin >> a;
                x0.push_back(a);
            }
        }

        // Try to instantiate the pointer to the right solver class, catch errors if bad initialisation are attempted
        try {
            // According to the method, instantiate the pointer to the right solver class
            if (method == "Bisection") {
                solver = new Bisection(*function, acc, a, b, iter, tol);
            } else if (method == "Chord") {
                solver = new Chord(*function, acc, a, b, iter, tol);
            } else if (method == "Newton-Raphson") {
                solver = new NR(*function, *derivate, acc, a, iter, tol);
            } else if (method == "Hirano") {
                solver = new Hirano(*complex_function, c, beta, delta, tol, iter);
            } else if (method == "Newton system") {
                solver = new Newton_System(dim, *functions, *inv_jaco, x0, iter, tol);
            }

        } catch (Interval &e) {
            e.PrintError();
        } catch (WrongDim &w) {
            w.PrintError();
        }

    }


    // Compute and present results
    solver->Result();
    delete solver;


    return 0;

}
