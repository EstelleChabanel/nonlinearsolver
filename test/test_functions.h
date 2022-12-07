//
// Created by eecha on 07/12/2022.
//
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<vector>

#ifndef PCSC_PROJECT_TEST_FUNCTIONS_H
#define PCSC_PROJECT_TEST_FUNCTIONS_H

double fx1(double x) ;

double fprime1(double x) ;

//Simple trigonometric function
double fx2(double x) ;

double fprime2(double x) ;

//Polynome
double fx3(double x) ;

double fprime3(double x) ;

//Exponential function
double fx4(double x) ;

double fprime4(double x) ;

// size 2
std::vector<double> g_system (std::vector<double> x) ;

std::vector<std::vector<double>> g_jac (std::vector<double> x) ;


#endif //PCSC_PROJECT_TEST_FUNCTIONS_H
