# Requirements

## Introduction

*   Applied Numerical Methods (ANM) is an important subject that is a part of the undegraduate engineering syllabus. It contains many techniques to find numerical solutions for problems that can not be solved otherwise. The techniques demonstrated in numerical methods can be applied to solve problems like finding the roots of a non-linear function, finding the value of an integral or differential at a point, solving a system of linear equations and finding the solution of an ordinary or partial differential equation that can't be solved using classical techniques.
*   These algorithms are tedious to solve by hand as they involve repetitive calculations that generate large numbers or unweildy decimals. However, a modern day computer is extremely suited to performing such calculations and hence the idea is to develop a tool that can solve such problems.
*   This is the motivation behind this project. Here, we will implement different numerical methods that find the numerical solutions of ODEs, PDEs, integrals, differentials and other mathematical problems.
*  We will also plot the solution obtained and allow the user to input complex functions.

## Research

### Need and Importance of Numerical Methods

*   Numerical methods are being used in computations performed by computers as the algorithms are iterative and many programming languages define the datatypes for performing these algorithms.
*   Hence numerical methods have become important and have their own importance in the modern world due to the rise in computational capabilities.
*   They are able to produce useful results, this is because problems which cannot be solved can be cleverly approximated using numerical methods.
*   This is the reason why numerical methods are being used to solve real-world mathematical problems, as the direct solution for such problems might not be possible or is time consuming. Yet we can get a result close to the real solution with a margin of error which is acceptable.
*   The numerical approach enables solution of complex problem with a great number of smaller but simpler operations, which make it ideal to implement using computers.

### Implementation with Programming Language C

*   C defines datatypes like double which have high precision and can be used to implement the algorithms with high accuracy. 
*   The loops and precision can be used to iterate the algorithms in an efficient manner. 

## Identifying Features

* In this project we have implemented numerical methods that solve integrals, perform differentiation, solve ODEs, solve PDEs.
* We have also plotted the obtained solution in many cases graphically.
* In our project the user can give complex input functions to be solved.

## Ageing

### Time
* Numerical methods have been used by human beings for calculations from time immemorial
* There is evidence that Egyptions used a numerical methods to find the roots of a simple equation
* Progressively, many great Greek mathematicians such as Archimedes also developed numerical methods to calculate the areas and volumes of a geometric figure.
* It was also the forerunner for the field of calculus
* Consequently many of the great names in the field of mathematics further developed numerical methods to solve more advanced problems
* These include Newton, Gauss, Leibniz and Euler. Today many of the numerical methods taught bear their name.
* As mentioned earlier, with the advent of computers, it became easier to obtain numerical solutions as tedious calculations could be performed by computers easily.

### Feature evolution

* With the advent of computers several tools have been created to perform numerical analysis
* The Netlib library contains the code for many numerical problems that are written in C or FORTRAN
* The GNU-Scientific library is another open source alternative.
* Today, several tools like MATLAB, NumPy, SciPy, Octave, R etc. make it easy to perform numerical analysis although they don't have predfined libraries that already contain routines that implement numerical methods.
* In this project we seek to create routines that directly implement numerical methods.

## Cost and Features

### Cost
*   Cost of the program depends on the input function and complexity of the algorithm. 
*   Cost can be calculated in terms of the computation performed and/or based on the plaform where the progam is being executed. 

### Features
*   The input can be improved by taking input as an abstract data type and then parsing this as a string for identification and performing the needed function on top of this string.
*   Functions can be expanded to run on any function.
*   Root Functions can be designed to find all the roots of the given non-linear function.
*   Integration and differentiation can be made to be analytical with intensive designing.

## Defining The System

![Basic System Overview](https://github.com/GENESIS2021Q1/sdlc-team-4/blob/main/1_Requirements/Images/SystemDesign.png)
*   Creating individual functions to implement the different algorithms for each of the tasks e.g., Newton Raphson Method, Bisection Method, Regula Falsi Method, Gauss-Seidel, Euler, Runge-Kutta etc.
*   Creating a function which calls the methods implemented based on an option.
*   Creating a main driver program to select the functionality, i.e. Finding root of a Non-linear Function, Numerical Differentiation, Numercial Integration, solving a system of linear equations, solving ODEs and PDEs.
  
## SWOT Analysis
![SWOT Analysis](https://github.com/GENESIS2021Q1/sdlc-team-4/blob/main/1_Requirements/Images/SWOT%20Analysis.png)

## 4W&#39;s and 1&#39;H

## Who
*   Students facing difficulty with implementation.
*   People curious on how numerical algorithms work;

## What
*   Using C programming to implement the numerical algorithms.

## When
*   The thought came mind after studying Applied Numerical Methods in our engineering curricula.

## Where
*   Open source so anyone can use it, and help in improving it.

## How
*   Thinking about how the computations involved in finding the numerical solution can be easily implemented programmatically.

## Detailed Requirements

## High Level Requirements

| ID   | Description                                                                                   | Category  | Status      |
|------|-----------------------------------------------------------------------------------------------|-----------|-------------|
| HR01 | Menu of selection for finding roots, numerical differentiation, numerical integration and finding the solution of a first order differential equation | Technical | Implemented |
| HR02 | Creating Functions for implementing the individual algorithms                                 | Technical | Implemented |
| HR03 | Accepting function to be evaluated for roots, integration or differentiation from user        | Technical | Ongoing     |
| HR04 | Functions to plot the function and associated results | Technical | Ongoing |
| HR05 | Functions to solve the Partial Differential Equations  | Technical | Ongoing |
| HR06 | Functions to solve the roots pf the equations | Technical | Ongoing |


## Low Level Requirements

| ID   | Description                                                    | HLR ID | Status      |
|------|----------------------------------------------------------------|--------|-------------|
| LR01 | Function for selecting method for finding roots of an equation | HR06   | Ongoing |
| LR02 | Function for selecting method for Numerical Integration        | HR01   | Implemented |
| LR03 | Function for selecting method for Numerical Differentiation    | HR01   | Implemented |
| LR04 | Function for selecting method for solving first order ODE      | HR01   | Ongoing     |
| LR05 | Implementing Newton Raphson method to find roots               | HR02   | Implemented |
| LR06 | Implementing Bisection method to find roots                    | HR02   | Implemented |
| LR07 | Implementing Regula Falsi method to find roots                 | HR02   | Implemented |
| LR08 | Implementing Simpson's 1/3 method for integration              | HR02   | Implemented |
| LR09 | Implementing Trapezoidal method for integration                | HR02   | Implemented |
| LR10 | Implementing Simpson's 3/8 method for integration              | HR02   | Implemented |
| LR11 | Implementing Forward difference method for differentiation     | HR02   | Implemented |
| LR12 | Implementing Backward difference method for differentiation    | HR02   | Implemented |
| LR13 | Implementing Two point difference method for differentiation   | HR02   | Implemented |
| LR14 | Implementing the Euler method for finding the solution of a first order ODE | HR02 | Ongoing |
| LR15 | Implementing the Euler-Modified method for finding the solution of a first order ODE | HR02 | Ongoing |
| LR16 | Implementing the Runge-Kutta method for finding the solution of a first order ODE | HR02 | Ongoing |
| LR16 | Accepting coefficients for numerator and denominator functions | HR03   | Ongoing     |
| LR17 | Appending logarithmic and trigonometric functions              | HR03   | Ongoing     |
| LR18 | Forming the function with all coefficients and special functions | HR03  | Ongoing    |
| LR19 | Finding values of function for given variable values           | HR03   | Ongoing     |
| LR20 | Plotting the function input from user | HR04 | Ongoing |
| LR21 | Plotting the function input from user with it's result | HR04 | Ongoing |
| LR22 | Finding the initial values from the function  | HR05 | Ongoing |
| LR23 | Take the Conductivity and step size for solving Heat Equation | HR05 | Ongoing |
| LR24 | Take the Boundary conditions and step size to solve the laplce equation | HR05 | Ongoing |
| LR25 | Implementing a function for finding the interval between which roots are present | HR06 | Ongoing |
| LR26 | Plotting of roots | HR04 &  HR06 | Ongoing |
