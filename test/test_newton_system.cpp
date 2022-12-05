//
// Created by eecha on 25/11/2022.
//

#include "../src/Newton_System.h"
#include "../src/exceptions/WrongDim.h"
#include "test_functions.cpp"
#include <gtest/gtest.h>
#include <iostream>


TEST(TestNS, solver) {
    Newton_System Ns (2, (*g_system), (*g_jac));
    std::vector<double> expected(2, 0.0);
    ASSERT_NEAR(0, (*g_system)(Ns.Solve()).at(0), 1e-5);
    ASSERT_NEAR(0, (*g_system)(Ns.Solve()).at(1), 1e-5);
}

TEST(TestNS, wrongdimensions) {
    ASSERT_THROW(Newton_System Ns(2, (*g_system), (*g_jac), std::vector<double> (3, 0.0), 100, 1e-5), WrongDim);
}


// YaY, tests passsed !
// ToDo: add and check exceptions !
// ToDo: implement more system functions to test

/*
int main() {
    std::cout << "Hello, World!" << std::endl;


    //Newton_System example (2, (*g_system), (*g_jac));
    //example.Result();

    std::vector<double> ex(2, 0.0);

    std::cout << (*g_system)(ex).size() << std::endl;

    return 0;
}
*/