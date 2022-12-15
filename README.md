# **Non Linear System Solver**
### *MATH-458 - Programming Concepts in Scientific Computing*
### Estelle Chabanel, Antoine Salaün
  
   
This repository contains the implementation of a numerical non linear systems solver. Several numerical methods are implemented in C++: the bisection method, the chord method, the classic Newton and the Hirano method (modified Newton) for simple non linear equations. The Newton method is also implemented for systems of equations. Finally, the Aitken acceleration method for the equation solver algorithms is also proposed.

First, the user can find a brief guide to install and use the program. Then, the architecture choices and the different methods used in the implementation are presented more precisely.


## Installation

The code requires C++17. To compile it, you should first install the prerequisites:
* GoogleTest 
* Eigen

````
git submodule update --init
````

The building is done with CLion or in the terminal:

````
mkdir build
cd build
cmake ..
make
````


## How-to-use

The user can use the code to solve a nonlinear equation or system of equations of the following form: f(x) = 0, with f and x scalar, complex or vector. The functions to solve need to be provided in the ``test/test_functions.cc`` file. For convenience and rapidity of use adn check, several random functions of each type are already provided. However, the user familiar with basic C++ can redifined one of the given functions to another one of its choice, to solve any kind of equation. For that, be careful to define the function under the right "names": "f..." for simple 1D functions, "comp_f..." for complex functions, and "g_system..." for multidimensional functions.

The user can use the program in two different ways:
* by running, in the `cmake-build-debug/` folder:
````
./main 0
````
the user is then asked to type the name of the function he wants to use. The corresponding possible methods to solve the problem are displayed and the user can choose one of them by typing its name in the terminal. The program will then display default parameters that it uses to solve the problem.

* by running, agian in the `cmake-build-debug/` folder:
````
./main
````
as in the previous version, the user is aked to enter the name of the function and the name of the methods he wants to use. however this time, the all freedom of choosing the parameters is left to the user: according to the chosen methods, the user is asked to enter the parameters that are used by the solving algorithm.

In both cases, the results are displayed in the terminal, along with a verification.


## Flow of the program

After running the program with the methods presented above, the program follows the below routine.

<p align="center">
  <img src="https://github.com/EstelleChabanel/nonlinearsolver/tree/main/doxygen_output/Program_flow.jpg?raw=true" alt="Sublime's custom image" width="100"/>
</p>


## List of features 

This program does the following :
- it asks the user to choose the method and enter all the relevant methods in a didactic and user-friendly way.
- It declares the corresponding class and uses its Solve method to promt the roots.
- It returns the root or an error. Prompted errors are always meaningful and usually correspond to the entry of wrong inputs by the user.

## Architecture

The different implemented solving methods are connected  through a big super-class, ``Mama_Solver``, that is a pure virtual class, implemented to increase the efficiency of our architecture. From that, three daughters, but also virtual classes are derived, the ``Equation_Solver`` to gather simple non linear equation solving algorithms, the ``Complex_Solver`` to gather 1D complex equation solving algorithms and the ``System_Solver``, for systems of equations. Finally, the inheritors daughter classes each implement a different solving method.

The overall architecture is visbile on the scheme below. The final solving methdos are implemented in the "last lines" classes.

<p align="center">
  <img src="https://github.com/EstelleChabanel/nonlinearsolver/blob/main/doxygen_output/html/class_mama___solver.png?raw=true" alt="Sublime's custom image"/>
</p>

PARLER PLUS DE L'ARCHITECTURE

Moreover, another virtual super-class, ``Exceptions`` is implemented to gather all the possible exceptions that could be encountered during the solving of different equations. Each daugther class represents a different type of error that could prevent the algorithm to work well. The implemented exceptions are listed below, there are then thrown and catch in the concerned methods or in themain function. A scheme of these classes is visible below.

<p align="center">
  <img src="https://github.com/EstelleChabanel/nonlinearsolver/blob/main/doxygen_output/html_excpetion/class_exceptions.png?raw=true" alt="Sublime's custom image"/>
</p>

* ``DivZero`` prevents the algorithm from possible error due to a division by zero
* ``Interval`` prevents a wrong initialization of the solving methods ``Chord`` and ``Bisection`` that requires two initial points a and b, with f(a)* f(b) < 0
* ``MaxIter`` is thrown when the solving algorithm reaches the meximum number of iteration without converging to an acceptable solution
* ``WrongDim`` is thrown when ones try to initialize an instance of ``System_Solver`` with an initial point of different dimensions than the given attribute dimensions 


## Tests

During the all implementation of this project, solving methods, exceptions and other features were tested using the GoogleTest library. For each solving method (or third line solving class), a test file is stored in the ``/test`` folder, corresponding to test of the solving method, to see if the algorithm is well implemented but also to test the different class constructors and the excpetions that should be thrown in case of bad initialization or impossible computation.

To run all the tests at once, go in the ``cmake-build-debug`` folder and run
````
./test_pcsc
````


## Limitations and problems

* One of the main limitation of this implementation is the modularity with complex numbers. Hence, Hirano's method is able to solve equations with complex roots. However, a lot of the attributes and methods inherited by Hirano's method could not be re-used because they do not work with complex numbers (Such as starting points, the ``Solve()`` method or the mathematical function).
Also, complex functions are implemented in a different way than the classical functions (and its derivatives) or the systems (and its jacobian). Complex functions take two arguments: the input of the function and the order of the derivative (0-th derivative is the function itself).

* Another limitation encountered is in the passing of the function to solve. Indeed, in the current implementation, only functions chosen by the coders can be solved, the user need to redefine some functions in the ``test/test_functions.cpp`` file to be able to solve its own equation. This could be improved by integrating a way to read ``.cpp`` file in the *main* function (not as a include, but by opening and reading a file in the program), or by including libraries to be able to translate functions entered in the terminal in C++ language. However, both solutions were considered quite complex outside of this course's spetrum.

* For the user, the choice of the method to use to solve the problem is only limited to the dimensionnality and type of the function chosen (1D, complex 1D or 2D+), even if it is known that some method do not work for all the functions: some methods requires the functions to be continuous and the research interval for example. An improvment could be to code a verification of the validity conditions of the choosen method on the chosen function.

* Another improvement for this implementation could be to re-code all of these attributes and methods as templates (the same way that the Continuing function works both for simple equations, complex equations or systems).
