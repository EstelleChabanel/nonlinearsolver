//
// Created by eecha on 27/11/2022.
//
#ifndef NONLINEARSOLVER_INTERVAL_H
#define NONLINEARSOLVER_INTERVAL_H

#include "Exceptions.h"


/// (Exception daughter class) for wrong initialization of the initial points for solving methods that requires 2 initial points
class Interval : public Exceptions {
private:

public:
    /// Constructor
    Interval();

    /// Destructor
    ~Interval();

    /// Print method
    void PrintError();
};

#endif //NONLINEARSOLVER_INTERVAL_H
