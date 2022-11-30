//
// Created by eecha on 27/11/2022.
//
#include<iostream>
#include<cmath>
#include<cstdlib>

// Simple linear function
double fx1(double x) {
    return 3*(x) + 4;
}

double fprime1(double x) {
    return 3;
}

//Simple trigonometric function
double fx2(double x) {
    return 3*sin(x);
}

double fprime2(double x) {
    return 3*cos(x);
}

//Polynome
double fx3(double x) {
    return 6*pow(x, 3) + 2*pow(x, 2) + x + 9;
}

double fprime3(double x) {
    return 18*pow(x, 2) + 4*x + 1;
}

//Exponential function
double fx4(double x) {
    return 3*exp(x) + 2;
}

double fprime4(double x) {
    return 3*exp(x);
}