//
// Created by Antoine Salaün on 27.11.22.
//

#include "../src/NR.h"
#include "../src/exceptions/DivZero.h"
#include "test_functions.cpp"
#include <gtest/gtest.h>


TEST(TestNR, solver) {
    NR nr(*fx1, *fprime1, -1.0, 100, 1e-5);
    ASSERT_NEAR(0, (*fx1)(nr.Solve()), 1e-5);
    NR nr2(*fx2, *fprime2, -1.0, 100, 1e-5);
    ASSERT_NEAR(0, (*fx2)(nr2.Solve()), 1e-5);
    NR nr3(*fx3, *fprime3, -1.0, 100, 1e-5);
    ASSERT_NEAR(0, (*fx3)(nr3.Solve()), 1e-5);
    //NR nr(*fx3, *fprime4, -1.0, 100, 1e-5);   // ToDo: qu'est ce qu'on fait du cas qui converge pas encore ?
    //ASSERT_THROW(nr.Solve(), DivZero);
}


TEST(TestNR, Acceleratedsolver) {
    NR nr(*fx1, *fprime1, true, -1.0, 100, 1e-5);
    ASSERT_NEAR(0, (*fx1)(nr.Solve()), 1e-5);
    NR nr2(*fx2, *fprime2, true, -1.0, 100, 1e-5);
    ASSERT_NEAR(0, (*fx2)(nr2.Solve()), 1e-5);
    NR nr3(*fx3, *fprime3, true, -1.0, 100, 1e-5);
    ASSERT_NEAR(0, (*fx3)(nr3.Solve()), 1e-5);
    //NR nr(*fx3, *fprime4, -1.0, 100, 1e-5);   // ToDo: qu'est ce qu'on fait du cas qui converge pas encore ?
    //ASSERT_THROW(nr.Solve(), DivZero);
}


// ToDo: Find a function for which we have a division by zero
//TEST(TestNR, Divbyzero) {}


// encore des choses à faire