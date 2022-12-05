# **Non Linear System Solver**
* * MATH-458 - Programming Concepts in Scientific Computing * *
Estelle Chabanel, Antoine Salaün
  
   
This repository contains the implementation of a numerical non linear systems solver. Several numerical methods are implemented in C++: the bisection method, the chord method, the classic Newton and the modified Newton for simple non linear equations. The Newton method is also implemented for systems of equations. Finally, the Aitken acceleration method for the equation solver algorithms is also proposed.

First, the user can find a brief guide to install and use the program. Then, the architecture choices and the different methods used in the implementation are presented more precisely.


## Installation

## How-to-use

## Flow of the program


## Architecture

The different implemented solving methods are connected  through a big super-class, \textit{Mama\_Solver}, that is a pure virtual class, implemented to increase the efficiency of our architecture. From that, two daughters, but also virtual class are derived, the \textit{Equation\_Solver} to gather simple non linear equation solving algorithms, and the \textit{System\_Solver}, for systems of equations. Finally, the inheritors daughter classes each implement a different solving method.



## Tests


## Limitations and problems
