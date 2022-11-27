//
// Created by eecha on 27/11/2022.
//

#include "Chord.h"
#include <cstdlib>
#include <iostream>


/// Constructors
Chord::Chord() : Equation_Solver(), b(100){}
Chord::Chord(double starting_point, double b_, double (*fx)(double x), double iter, double tol)
        :  b(b_), Equation_Solver(starting_point, *fx, iter, tol)
{
    // catch exception pour vérifier que f(a) bien < f(b)

}


/// Desctructor
Chord::~Chord() {}


/// Solving method
double Chord::Solve() {
    std::cout<<(*function)(0)<<std::endl;
    float next = x0 - (*function)(x0)*(b - x0)/((*function)(b) - (*function)(x0));
    //float previous = next*10;
    unsigned int i = 0;
    //std::cout << "(abs(next-previous)) = " << (abs(next-previous)) << std::endl;
    while((abs((*function)(next)) > tolerance) && (i < max_iter)) {
        if((*function)(next) == 0) {
            std::cout << "f(next) = " << (*function)(next) << " break !" << std::endl;
            break;
        } else if((*function)(next)*(*function)(x0) < 0) {
            b = next;
        } else {
            x0 = next;
        }
        i += 1;
        //previous = next;
        std::cout << "current guess at " << i << " : " << next << std::endl;
        next = x0 - (*function)(x0)*(b - x0)/((*function)(b) - (*function)(x0));
        std::cout << "f(next) = " << (*function)(next) << std::endl;
        std::cout << "abs(f(next)) = " << abs((*function)(next)) << std::endl;
    }
    return next;
}
