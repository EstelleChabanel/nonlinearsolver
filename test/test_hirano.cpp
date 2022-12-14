//
// Created by Antoine Salaün on 12.12.22.
//

#include "../src/Hirano.h"
#include "../src/exceptions/MaxIter.h"
#include "test_functions.h"
#include <gtest/gtest.h>


TEST(TestHirano, solver) {
    Hirano hira(*comp_fx1, 4., .3, .3, 1e-5, 100);
    ASSERT_NEAR(0, abs((*comp_fx1)(hira.Solve(),0)), 1e-5);
    Hirano hira2(*comp_fx2, 3.0, .3, .3, 1e-5, 100);
    ASSERT_NEAR(0, abs((*comp_fx2)(hira2.Solve(),0)), 1e-5);
    Hirano hira3(*comp_fx3, 2.0,.3, .3, 1e-5, 100);
    ASSERT_NEAR(0, abs((*comp_fx3)(hira3.Solve(),0)), 1e-5);
}