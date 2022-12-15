//
// Created by eecha on 07/12/2022.
//
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<vector>
#include<complex>

#ifndef PCSC_PROJECT_TEST_FUNCTIONS_H
#define PCSC_PROJECT_TEST_FUNCTIONS_H

/** \brief 1D functions
  * take as input a double
  * @return a double corresponding to the value of the function applied at the input point
  */
double fx1(double x) ;

/** \brief Derivatives of the 1D functions
  * take as input a double
  * @return a double corresponding to the value of the function applied at the input point
  */
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
/** \brief System
      * take as input the vector of the variables (x, y)
      * @return a vector of the values of each equation of the system (f1(x,y),f2(x,y)
      */
std::vector<double> g_system (std::vector<double> x) ; // system of two equations

std::vector<std::vector<double>> g_jac (std::vector<double> x) ; // jacobian of the g_system

/** \brief Complex functions
      * They are implemented differently than the regular functions
      * because a lot of derivative order are needed in Hirano
      * @return the k-th order derivative of the function
      */
std::complex<double> comp_fx1 (std::complex<double> x, int k);
std::complex<double> comp_fx2 (std::complex<double> x, int k);
std::complex<double> comp_fx3 (std::complex<double> x, int k);

#endif //PCSC_PROJECT_TEST_FUNCTIONS_H
