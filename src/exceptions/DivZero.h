//
// Created by eecha on 27/11/2022.
//
#ifndef NONLINEARSOLVER_DIVZERO_H
#define NONLINEARSOLVER_DIVZERO_H

#include "Exceptions.h"


/// (Exception daughter class) to throw when the computation of the solution ends up in a division by zero
class DivZero : public Exceptions {
private:

public:
    /// Constructor
    DivZero();
    DivZero(std::string pb);

    /// Destructor
    ~DivZero();

    /// Print method
    void PrintError();
};

#endif //NONLINEARSOLVER_DIVZERO_H
