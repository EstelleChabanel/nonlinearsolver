//
// Created by eecha on 27/11/2022.
//
#include "Interval.h"

/// Constructor
Interval::Interval() {
    tag = "Wrong interval";
    problem = "The chosen starting points are not correct, you need to find an x0 and b such that f(x0)*f(b) < 0";
}

/// Destructor
Interval::~Interval() {}
