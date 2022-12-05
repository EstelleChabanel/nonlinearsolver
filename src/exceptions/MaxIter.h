//
// Created by eecha on 30/11/2022.
//

#ifndef PCSC_PROJECT_MAXITER_H
#define PCSC_PROJECT_MAXITER_H

#include "Exceptions.h"


/// (Exception daughter class) for all solving methods, to throw when the computation did not converge but reached the maximal number of iterations
class MaxIter : public Exceptions {
private:
    double maxiter;

public:
    /// Constructor
    MaxIter(double iter);

    /// Destructor
    ~MaxIter();

    /// Print method
    void PrintError();
};


#endif //PCSC_PROJECT_MAXITER_H
