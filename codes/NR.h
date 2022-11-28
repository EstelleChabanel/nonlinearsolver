//
// Created by Antoine Salaün on 27.11.22.
//

#ifndef NONLINEARSOLVER_NR_H
#define NONLINEARSOLVER_NR_H
#include "Newton.h"

class NR : public Newton {
protected :
    // variables en commun des Newton Classic et Newton Alternatif

public :
    /// Constructors
    NR();
    NR(double (*fx)(double x), double (*fprime)(double x));
    NR(double (*fx)(double x), double (*fprime)(double x), double starting_point, double iter, double tol);
    NR(double (*fx)(double x), double (*fprime)(double x), bool acc, double starting_point, double iter, double tol);

    /// Destructor
    virtual ~NR();

    double Solve();

};




#endif //NONLINEARSOLVER_NR_H
