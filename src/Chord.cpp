//
// Created by eecha on 27/11/2022.
//

#include "Chord.h"
#include "exceptions/Interval.h"


/// Constructors
Chord::Chord() : Equation_Solver(), acceleration(false), b(200.0){}
Chord::Chord(double (*fx)(double x)) : Equation_Solver(*fx), b(200.0){}
Chord::Chord(double (*fx)(double x), double starting_point, double b_, unsigned int iter, double tol)
    : b(b_), Equation_Solver(*fx, starting_point, iter, tol)
    {
    if(fx(x0)*fx(b) > 0){
        throw(Interval());
    }
    }
Chord::Chord(double (*fx)(double x), bool acc, double starting_point, double b_, unsigned int iter, double tol)
    : b(b_), Equation_Solver(*fx, acc, starting_point, iter, tol)
    {
    if(fx(x0)*fx(b) > 0){
        throw(Interval());
    }
    }


/// Desctructor
Chord::~Chord() {}


/** \brief Overriden solving method
  * This method implements the Chord solving algorithm
  * @return the guessed root
  */
double Chord::Solve() {
    double next = x0 - (*function)(x0)*(b - x0)/((*function)(b) - (*function)(x0));
    unsigned int i = 0;

    while(Continuing(next,function,i)) {
        if((*function)(next)*(*function)(x0) < 0) {
            b = next;
        } else {
            x0 = next;
        }
        double next1 = x0 - (*function)(x0) * (b - x0) / ((*function)(b) - (*function)(x0));

        if(acceleration==true){
            if((*function)(next1)*(*function)(x0) < 0) {
                b = next1;
            } else {
                x0 = next1;
            }
            double next2 = x0 - (*function)(x0) * (b - x0) / ((*function)(b) - (*function)(x0));
            next = Accelerate(next, next1, next2);
        } else {
            next = next1;
        }
        i += 1;
    }
    return next;
}
