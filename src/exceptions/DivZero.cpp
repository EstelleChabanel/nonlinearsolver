//
// Created by eecha on 27/11/2022.
//
#include "DivZero.h"

// Constructor
DivZero::DivZero() : Exceptions("Division by zero", "The computation failed due to a division by zero") {}
DivZero::DivZero(std::string pb) : Exceptions("Division by zero", pb) {}

// Destructor
DivZero::~DivZero() {}


// Print method
void DivZero::PrintError() {
    std::cerr << "** Error ("<<tag<<") **\n";
    std::cerr << "Problem: " << problem << "\n\n" << std::endl ;
}

