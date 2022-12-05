//
// Created by eecha on 27/11/2022.
//
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<vector>

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
    return 3*exp(x) - 2;
}

double fprime4(double x) {
    return 3*exp(x);
}

// size 2
std::vector<double> g_system (std::vector<double> x){
    double a = x.at(0);
    double b = x.at(1);

    double f1 = 6*a + 3*b*b;
    double f2 = b + 3;

    std::vector<double> resultat{ f1, f2 };

    return resultat;
}

std::vector<std::vector<double>> g_jac (std::vector<double> x){
std::vector<double> df1 ={ 1.0/6.0, -x.at(1) };
std::vector<double> df2 ={ 0, 1 };

    std::vector<std::vector<double>> jac = {df1,df2};
    return jac;

}