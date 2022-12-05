//
// Created by eecha on 05/12/2022.
//

#ifndef PCSC_PROJECT_WRONGDIM_H
#define PCSC_PROJECT_WRONGDIM_H

#include "Exceptions.h"


/// WrongDim (Exception daughter class) for wrong initialization of the solver for systems of equations, when the dimensions of the input are different
class WrongDim : public Exceptions {
private:

public:
    /// Constructor
    WrongDim();

    /// Destructor
    ~WrongDim();

    /// Print method
    void PrintError();
};


#endif //PCSC_PROJECT_WRONGDIM_H
