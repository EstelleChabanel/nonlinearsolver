//
// Created by eecha on 27/11/2022.
//

#include "Chord.h"
#include "Interval.h"
#include <cstdlib>
#include <iostream>


/// Constructors
Chord::Chord() : Equation_Solver(), acceleration(false), b(200.0){}
Chord::Chord(double (*fx)(double x)) : Equation_Solver(*fx), b(200.0){}
Chord::Chord(double (*fx)(double x), double starting_point, double b_, double iter, double tol)
    : b(b_), Equation_Solver(*fx, starting_point, iter, tol)
    {
    // ToDo: catch exception pour vérifier que f(a) bien < f(b)
    if(fx(x0)*fx(b) > 0){
        throw(Interval());
    }
    }
Chord::Chord(double (*fx)(double x), bool acc, double starting_point, double b_, double iter, double tol)
    : b(b_), Equation_Solver(*fx, acc, starting_point, iter, tol)
    {
    // ToDo: catch exception pour vérifier que f(a) bien < f(b)
    if(fx(x0)*fx(b) > 0){
        throw(Interval());
    }
    }


/// Desctructor
Chord::~Chord() {}


/** \brief Overrided solving method
  * This method implements the Chord solving algorithm
  * @return the guessed root
  */
double Chord::Solve() {
    //std::cout<<(*function)(0)<<std::endl;
    double next = x0 - (*function)(x0)*(b - x0)/((*function)(b) - (*function)(x0));
    unsigned int i = 0;
    //std::cout << "(abs(next-previous)) = " << (abs(next-previous)) << std::endl;

    while(Continuing(next,i)) {
        if((*function)(next) == 0) {
            // ToDo: peut pas arriver normalement si ??
            std::cout << "f(next) = " << (*function)(next) << " break !" << std::endl;
            break;
        } else if((*function)(next)*(*function)(x0) < 0) {
            b = next;
        } else {
            x0 = next;
        }
        //std::cout << "current guess at " << i << " : " << next << std::endl;
        double next1 = x0 - (*function)(x0) * (b - x0) / ((*function)(b) - (*function)(x0));

        if(acceleration==true){
            if((*function)(next1)*(*function)(x0) < 0) {
                b = next;
            } else {
                x0 = next;
            }
            double next2 = x0 - (*function)(x0) * (b - x0) / ((*function)(b) - (*function)(x0));
            next = Accelerate(next, next1, next2);
        } else {
            next = next1;
        }
        i += 1;
        std::cout << "f(next) = " << (*function)(next) << std::endl;
        std::cout << "abs(f(next)) = " << abs((*function)(next)) << std::endl;
    }
    return next;
}
