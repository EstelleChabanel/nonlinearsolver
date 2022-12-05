//
// Created by eecha on 27/11/2022.
//
#ifndef NONLINEARSOLVER_EXCEPTIONS_H
#define NONLINEARSOLVER_EXCEPTIONS_H

#include <iostream>


/// Exceptions mother class for all kind of errors and exceptions that can rise in the code
class Exceptions {
protected:
    std::string tag;
    std::string problem;

public:
    /// Constructor
    //Exceptions();
    Exceptions(std::string tag_, std::string problem_);

    /// Destructor
    ~Exceptions();

    /// Print method to describe error
    void PrintError();

};

#endif //NONLINEARSOLVER_EXCEPTIONS_H
