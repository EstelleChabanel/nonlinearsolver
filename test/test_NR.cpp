//
// Created by Antoine Salaün on 27.11.22.
//

#include "../src/NR.h"
#include "../src/exceptions/DivZero.h"
#include "../src/exceptions/MaxIter.h"
#include "test_functions.h"
#include <gtest/gtest.h>


TEST(TestNR, solver) {
    NR nr(*fx1, *fprime1, -1.0, 100, 1e-5);
    ASSERT_NEAR(0, (*fx1)(nr.Solve()), 1e-5);
    NR nr2(*fx2, *fprime2, -1.0, 100, 1e-5);
    ASSERT_NEAR(0, (*fx2)(nr2.Solve()), 1e-5);
    NR nr3(*fx3, *fprime3, -1.0, 100, 1e-5);
    ASSERT_NEAR(0, (*fx3)(nr3.Solve()), 1e-5);
    NR nr4(*fx4, *fprime4, -1.0, 100, 1e-5);
    ASSERT_NEAR(0, (*fx4)(nr4.Solve()), 1e-5);
}


TEST(TestNR, Acceleratedsolver) {
    NR nr(*fx1, *fprime1, true, -1.0, 100, 1e-5);
    ASSERT_NEAR(0, (*fx1)(nr.Solve()), 1e-5);
    NR nr2(*fx2, *fprime2, true, -1.0, 100, 1e-5);
    ASSERT_NEAR(0, (*fx2)(nr2.Solve()), 1e-5);
    NR nr3(*fx3, *fprime3, true, -1.0, 100, 1e-5);
    ASSERT_NEAR(0, (*fx3)(nr3.Solve()), 1e-5);
    NR nr4(*fx4, *fprime4, -1.0, 100, 1e-5);
    ASSERT_NEAR(0, (*fx4)(nr4.Solve()), 1e-5);
}


TEST(TestNR, NoConvergence) {
    NR nr(*fx2, *fprime2, -1.0, 2, 1e-5);
    ASSERT_THROW(nr.Solve(), MaxIter);
}
s

