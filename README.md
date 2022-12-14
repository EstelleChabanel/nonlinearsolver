# **Non Linear System Solver**
### *MATH-458 - Programming Concepts in Scientific Computing*
### Estelle Chabanel, Antoine Salaün
  
   
This repository contains the implementation of a numerical non linear systems solver. Several numerical methods are implemented in C++: the bisection method, the chord method, the classic Newton and the Hirano methode (modified Newton) for simple non linear equations. The Newton method is also implemented for systems of equations. Finally, the Aitken acceleration method for the equation solver algorithms is also proposed.

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

The user can use the code to solve a nonlinear equation or system of equations of the following form: f(x) = 0, with f and x scalar or vector.
Chosen parameters and methods can be given in the command line.
Thee solving method can be specified by putting -m followed by the right typo of the method: bisection, chord, newton-raphson and modified newton for 1D system and newton-system for multidimensional systems. The other parameters can also be specified, according to the chosen method, followed by the corresponding prefix:
* -f : for the name of the chosen function, to choose in the file *test/function_test.cpp
* -m : for the method
* -a : for the starting point (first one if bisection or chord method is chosen)
* -b : for the second starting point when bisection or chord method is chosen
* -q : to be filled with true to apply the Aitken acceleration, false for no acceleration
* -i : maximal number of iterations
* -t : tolerance

The ability to choose the right parameters according to the method is left to the user. An initialization of a unnecessary parametr won't throw any error as it will just as no effect and not prevent the solver for working right. Moreover, not initialized parameters are set to default values in the code.

An example call to the code is presented below:

````
./main -m Chord -f fx3 -a -10.0 -b 10.0 -q true -i 200 -t 10e-7
````

The above command as to be run in the folder ``cmake-build-debug``.


## Flow of the program

After running the program with the methods presented above, the program follows the below routine.

INSERER DIAGRAM DU FLOW AVEC : initialization des paramètres et appel de la fonction dans separate file  >  Initialization d'un pointeru vers l'abstract class Mama_Solver puis vers la classe correspondant à la methode choisie    >    solve   >   print result    >     est-ce qu'on rajoute sauvegarde param et résultats dans un txt file ?



## List of features 

This program does the following :
- it asks the user to choose the method and enter all of the relevant methods in a didactic and user-friendly way.
- It declares the corresponding class and uses its Solve method to promt the roots.
- It returns the root or an error. Prompted errors are always meaningful and usually correspond to the entry of wrong imputs by the user.

## Architecture

The different implemented solving methods are connected  through a big super-class, \textit{Mama\_Solver}, that is a pure virtual class, implemented to increase the efficiency of our architecture. From that, two daughters, but also virtual class are derived, the \textit{Equation\_Solver} to gather simple non linear equation solving algorithms, and the \textit{System\_Solver}, for systems of equations. Finally, the inheritors daughter classes each implement a different solving method.

INSERER DIAGRAMME CLASSES SOLVER


PARLER AUSSI DES EXCEPTIONS ET METTRE DIAGRAMME CLASSES EXCEPTIONS



## Tests

During the all implementation of this project, solving methods, exceptions and other features were tested using the GoogleTest library. For each solving method (or third line solving class), a test file is stored in the ``/test`` folder, corresponding to test of the solving method, to see if the algorithm is well implemented but also to test the different class constructors and the excpetions that should be thrown in case of bad initialization or impossible computation.

To run all the tests at once, go in the ``cmake-build-debug`` folder and run
````
./test_pcsc
````


## Limitations and problems

One of the main limitation of this implementation is the modularity with complex numbers. Hence, Hirano's method is able to solve equations with complex roots. However, a lot of the attributes and methods inherited by Hirano's method could not be re-used because they do not fonction with complex numbers (Such as starting points, the Solve methode or the mathematical function).

Also, complex functions are implemented in a different way than the classial functions (and its derivatives) or the systems (and its jacobian). Complex functions take two arguments : the input of the function and the order of the derivative (0-th derivative is the function itself).

An improvement for this implementation could be to re-code all of these attributes and methods as templates (the same way that the Continuing function works both for simple equations or systems).
