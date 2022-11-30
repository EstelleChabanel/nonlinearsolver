//
// Created by eecha on 27/11/2022.
//
#ifndef NONLINEARSOLVER_DIVZERO_H
#define NONLINEARSOLVER_DIVZERO_H

#include "Exceptions.h"

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
