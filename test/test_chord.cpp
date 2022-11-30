//
// Created by eecha on 27/11/2022.
//
#include "../src/Chord.h"
#include "../src/exceptions/Interval.h"
#include "test_functions.cpp"
#include <iostream>
#include <gtest/gtest.h>



TEST(TestChord, solver) {
    Chord ch(*fx1);
    ASSERT_NEAR(0, (*fx1)(ch.Solve()), 1e-5);
    Chord ch1(*fx2);
    ASSERT_NEAR(0, (*fx2)(ch1.Solve()), 1e-5);    // ToDo: quand ça converge des 1er guess, 0 ou 1 itération ??
    //Chord ch2(*fx3, -100.0, 200.0, 500, 1e-5);  // ToDo: qu'est ce qu'on fait pour quand ça converge pas ??
    //ASSERT_NEAR(0, (*fx3)(ch2.Solve()), 1e-5);
    //Chord ch3(*fx4);
    //ASSERT_NEAR(0, (*fx4)(ch3.Solve()), 1e-5);
}

TEST(TestChord, Acceleratedsolver) {
    Chord ch(*fx1, true, -200, 200, 100, 1e-5);
    ASSERT_NEAR(0, (*fx1)(ch.Solve()), 1e-5);
    Chord ch1(*fx2, true, -200, 200, 100, 1e-5);
    ASSERT_NEAR(0, (*fx2)(ch1.Solve()), 1e-5);
}


TEST(TestChord, Interval) {
    ASSERT_THROW(Chord ch(*fx2, 100.0, 200.0, 100, 1e-5), Interval);
}


// Encore des choses à voir