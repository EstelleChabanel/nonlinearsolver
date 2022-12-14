//
// Created by eecha on 27/11/2022.
//
#include "../src/Chord.h"
#include "../src/exceptions/Interval.h"
#include "../src/exceptions/MaxIter.h"
#include "test_functions.h"
#include <iostream>
#include <gtest/gtest.h>



TEST(TestChord, solver) {
    //Chord ch(*fx1);
    Chord ch(*fx1, -200.0, 200.0, 100, 1e-9);
    ASSERT_NEAR(0, (*fx1)(ch.Solve()), 1e-9);
    Chord ch1(*fx2);
    ASSERT_NEAR(0, (*fx2)(ch1.Solve()), 1e-5);
    //Chord ch2(*fx3, -100.0, 200.0, 500, 1e-5);
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


TEST(TestChord, NoConvergence) {
    Chord ch(*fx3, -100.0, 200.0, 500, 1e-5);
    ASSERT_THROW(ch.Solve(), MaxIter);
    Chord ch2(*fx4, -100.0, 200.0, 500, 1e-5);
    ASSERT_THROW(ch2.Solve(), MaxIter);
}


// YaY, tests passsed ! Exceptions when not convergent
// ToDo: could modify this exception to propose solutions (when functions are not fulfilling the criteria)