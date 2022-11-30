//
// Created by eecha on 30/11/2022.
//

#ifndef PCSC_PROJECT_MAXITER_H
#define PCSC_PROJECT_MAXITER_H

#include "Exceptions.h"


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
