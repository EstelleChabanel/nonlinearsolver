//
// Created by eecha on 27/11/2022.
//
#include "Chord.h"
#include "Interval.h"
#include "test_functions.cpp"
#include<iostream>
#include<cstdlib>

int main(int argc, char *argv[]) {

    try {
        Chord ch(*fx2, 100.0, 200.0, 100, 1e-5);
    }
    catch (Interval& inter) {
        inter.PrintError();
        std::cout << "Try another interval (new x0 and b) !" << std::endl;
        Chord ch(*fx2);
    }
    Chord ch(*fx2);
    //Chord ch(*fx2,-100.0, 200.0, 100, 1e-5);
    ch.Result();
    // checked : it works !

    return 0;
}