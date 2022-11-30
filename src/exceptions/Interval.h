//
// Created by eecha on 27/11/2022.
//
#ifndef NONLINEARSOLVER_INTERVAL_H
#define NONLINEARSOLVER_INTERVAL_H

#include "Exceptions.h"


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
