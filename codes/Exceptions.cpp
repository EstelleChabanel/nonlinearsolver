//
// Created by eecha on 27/11/2022.
//
#include "Exceptions.h"
#include <iostream>

/// Constructor
Exceptions::Exceptions(std::string tag_, std::string problem_) : tag(tag_), problem(problem_) {}

/// Destructor
Exceptions::~Exceptions() {}


/// Print method
void Exceptions::PrintError() override {
std::cerr << "** Error ("<<tag<<") **\n";
std::cerr << "Problem: " << problem << "\n\n"
}