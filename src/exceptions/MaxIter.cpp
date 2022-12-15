//
// Created by eecha on 30/11/2022.
//

#include "MaxIter.h"

// Constructor
MaxIter::MaxIter(double iter) : maxiter(iter), Exceptions("Maximum number of iteration reached", "The computation did not converge in ") {}

// Destructor
MaxIter::~MaxIter() {}


// Print method
void MaxIter::PrintError() {
    std::cerr << "** Error (" << tag << ") **\n";
    std::cerr << "Problem: " << problem << maxiter << " iterations. \n\n" << std::endl;
}