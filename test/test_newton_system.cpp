//
// Created by eecha on 25/11/2022.
//

#include "../src/Newton_System.h"
#include "test_functions.cpp"
#include <iostream>


int main() {
    std::cout << "Hello, World!" << std::endl;


    Newton_System example (2, (*g_system), (*g_jac));
    example.Result();


    return 0;
}
