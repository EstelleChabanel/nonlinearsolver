//
// Created by eecha on 27/11/2022.
//
#include "Chord.h"
#include "test_functions.cpp"
#include<iostream>
#include<cstdlib>

int main(int argc, char *argv[]) {

    Chord ch(-100.0, 200.0, *fx2, 100, 1e-5);
    ch.Result();
    // checked : it works !

    return 0;
}