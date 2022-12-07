//
// Created by eecha on 25/11/2022.
//

#include "../src/Bisection.h"
#include "../src/exceptions/Interval.h"
#include "test_functions.h"
#include <iostream>
#include <gtest/gtest.h>


TEST(TestBisection, solver){
    Bisection bi(*fx1);
    ASSERT_NEAR(0, (*fx1)(bi.Solve()), 1e-5);
    Bisection bi2(*fx2);
    ASSERT_NEAR(0, (*fx2)(bi2.Solve()), 1e-5);
    Bisection bi3(*fx3);
    ASSERT_NEAR(0, (*fx3)(bi3.Solve()), 1e-5);
    Bisection bi4(*fx4);
    ASSERT_NEAR(0, (*fx4)(bi4.Solve()), 1e-5);
}


TEST(TestBisection, acceleratesolver){
    Bisection bi(*fx1, true, -200, 200, 100, 1e-5);
    ASSERT_NEAR(0, (*fx1)(bi.Solve()), 1e-5);
    Bisection bi2(*fx2, true, -200, 200, 100, 1e-5);
    ASSERT_NEAR(0, (*fx2)(bi2.Solve()), 1e-5);
    Bisection bi3(*fx3, true, -200, 200, 100, 1e-5);
    ASSERT_NEAR(0, (*fx3)(bi3.Solve()), 1e-5);
    Bisection bi4(*fx4, true, -200, 200, 100, 1e-5);
    ASSERT_NEAR(0, (*fx4)(bi4.Solve()), 1e-5);
}


TEST(TestBisection, Interval){
    ASSERT_THROW(Bisection bi(*fx1, 5.0, 10.0, 100, 1e-5), Interval);
}


// YAY, tests passed !