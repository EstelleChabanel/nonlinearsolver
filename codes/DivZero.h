//
// Created by eecha on 27/11/2022.
//
#ifndef NONLINEARSOLVER_DIVZERO_H
#define NONLINEARSOLVER_DIVZERO_H


class DivZero : public Exceptions {
private:

public:
    /// Constructor
    DivZero();

    /// Destructor
    ~DivZero()

    /// Print method
    void PrintError() ;
};

#endif //NONLINEARSOLVER_DIVZERO_H
