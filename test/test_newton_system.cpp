//
// Created by eecha on 25/11/2022.
//

#include "../src/Newton_System.h"
#include "../src/exceptions/WrongDim.h"
#include "../src/exceptions/MaxIter.h"
#include "test_functions.h"
#include <gtest/gtest.h>
#include <iostream>


TEST(TestNS, solver) {
    Newton_System Ns (2, (*g_system), (*g_jac));
    //std::vector<double> expected(2, 0.0);
    ASSERT_NEAR(0, (*g_system)(Ns.Solve()).at(0), 1e-5);
    ASSERT_NEAR(0, (*g_system)(Ns.Solve()).at(1), 1e-5);
}

TEST(TestNS, wrongdimensions) {
    ASSERT_THROW(Newton_System Ns(3, (*g_system), (*g_jac), std::vector<double> {3, 0.0}, 100, 1e-5), WrongDim);
}


TEST(TestNS, NoConvergence) {
    Newton_System Ns(2, (*g_system), (*g_jac), std::vector<double> {3.0, 0.0}, 1, 1e-5);
    ASSERT_THROW(Ns.Solve(), MaxIter);
}



// YaY, tests passsed !
