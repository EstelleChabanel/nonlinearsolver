//
// Created by eecha on 27/11/2022.
//
#include "Interval.h"

// Constructor
Interval::Interval()
    : Exceptions("Wrong interval", "The chosen starting points are not correct, you need to find an a and b such that f(a)*f(b) < 0") {}

// Destructor
Interval::~Interval() {}


// Print method
void Interval::PrintError() {
    std::cerr << "** Error ("<<tag<<") **\n";
    std::cerr << "Problem: " << problem << "\n\n" << std::endl ;
}