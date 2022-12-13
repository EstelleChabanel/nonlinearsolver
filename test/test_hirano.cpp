//
// Created by Antoine Salaün on 12.12.22.
//

#include "../src/Hirano.h"
#include "../src/exceptions/MaxIter.h"
#include "test_functions.h"
#include <gtest/gtest.h>


TEST(TestHirano, solver) {
    Hirano hira(*comp_fx1, 4., .3, .3, 1e-5, 100);
    ASSERT_NEAR(0, abs((*comp_fx1)(hira.Complex_Solve(),0)), 1e-5);
    Hirano hira2(*comp_fx2, -1.0, .3, .3, 1e-5, 100);
    ASSERT_NEAR(0, abs((*comp_fx2)(hira2.Complex_Solve(),0)), 1e-5);
    Hirano hira3(*comp_fx3, -1.0,.3, .3, 1e-5, 100);
    ASSERT_NEAR(0, abs((*comp_fx3)(hira3.Complex_Solve(),0)), 1e-5);
}