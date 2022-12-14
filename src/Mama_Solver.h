//
// Created by Antoine Salaün on 25.11.22.
//

#ifndef NONLINEARSOLVER_MAMA_SOLVER_H
#define NONLINEARSOLVER_MAMA_SOLVER_H



/** \brief Mother super class for any kind of method and system to solve
  * This class is the mother class of every possible solving methods for both the equation and systems solving of type
  * f(x) = 0, with f and x 1D or 3D
  */
class Mama_Solver {
protected:
    double tolerance;
    unsigned int max_iter;

public:
    /// Constructors
    Mama_Solver();
    Mama_Solver(unsigned int iter, double tol);

    /// Destructor
    virtual ~Mama_Solver();

    // ToDo: NORMALEMENT ON DEVRAIT POUVOIR S'EN DEBARASSER
    /// Setters
    void SetTolerance(double tol);
    void SetMaxIter(unsigned int iter);

    /// Getters
    double GetTolerance();
    unsigned int GetMaxIter();

    /** \brief Pretty method to compute and print the results
      * This method computes and displays the results in a clear and comprehensive way
      */
    virtual void Result() = 0;

    /** \brief Stopping criterion for the solving algorithm
      * This method evaluates the value of the stopping criterion for all daughter classes solving algorithm
      * @return a boolean that assert if the algorithm should stop or continue
      */
    template <typename T> bool Continuing(T x, T (*fx)(T x), unsigned int iteration);

};


#endif //NONLINEARSOLVER_MAMA_SOLVER_H
