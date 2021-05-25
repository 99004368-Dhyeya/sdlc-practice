# Test Plan

## Table 1: High Level Test Plan

| **Test ID** | **Description** | **Exp I/P** | **Exp O/P** | **Actual O/P** | **Type Of Test** |
|-----|-----|-----|----|-----|------|
| H_01 | To test the functions that find the root of a function | Function Pointer | Root of the function | Correct root of the function | Scenario Based | 
| H_02 | To test the functions that find the numerical integration of a function at a point  | Function Pointer | Numerical Intergation at a point | Correct numerical integration value | Scenario Based | 
| H_03 | To test the functions that find the numerical differentiation of a function at a point | Dataset/Function Pointer | Numerical Differentiation of a function at a point | Correct numerical differentiation value | Scenario Based | 
| H_04 | To test the functions that find the numerical solution of the first order ODE | Input Function | generation of correct point solution or graphical solution | Correct point solution or graphical solution | Scenario based |
| H_05 | To test functionality of code that is used to find the function value for the given variable values | Variable Values | Function Value at that particular point | Correct Value of the Overall Function at a Point | Scenario Based |
| H_06 | Testing the plot functions by checking the correct result representation | Function and it's associated results | PNG Image | Correct PNG Image | Scenario Based |
| H_07 | Solution for PDE Heat Equation and Laplace equation | Boundary Conditions and Step size | Variable values at different time | Values after solving analytically | Scenario Based |

## Table 2: Low Level Test Plan

| **Test ID** | **Description** | **Exp I/P** | **Exp O/P** | **Actual O/P** | **Type Of Test** |
|-----|-----|-----|----|-----|------|
| L_01 | To test the Newton Raphson method implementation to find the root of a function | Two Function pointers, one to the function and other to it's derivative | 2.740646 | 2.740646 | Scenario/Technical |
| L_02 | To test the Bisection method implementation to find the root of a function | Function Pointer to a given function | 2.706543 | 2.706543 | Scenario/Technical |
| L_03 | To test the Regula Falsi method implementation to find the root of a function | Function Pointer to a given function | 0.517727 | 0.517727 | Scenario/Technical |
| L_04 | To test the Simpson's 1/3rd Rule implementation to find the numerical integration of a function at a point | Function Pointer to a given function | 0.510847 | 0.510847 | Scenario/Technical |
| L_05 | To test the Trapezoidal method implementation to find the numerical integration of a function at a point | Function Pointer to a given function | 0.834982 | 0.834982 | Scenario/Technical |
| L_06 | To test the Simpson's 3/8th Rule implementation to find the numerical integration of a function at a point | Function Pointer to a given function | 0.835712 | 0.835712 | Scenario/Technical |
| L_07 | To test the Newton's Forward Difference formula implementation to find the numerical differentiation of a function at a point | Dataset Array | 3.775502 | 3.775502 | Scenario/Technical |
| L_08 | To test the Newton's Backward Difference formula implementation to find the numerical differentiation of a function at a point | Dataset Array | 2.811621 | 2.811621 | Scenario/Technical |
| L_09 | To test the Two Point Difference formula implementation to find the numerical differentiation of a function at a point | Function Pointer to a given function | 4.297853 | 4.297853 | Scenario/Technical |
| L_10 | To test function value calculated in case of a single variable function | Function Coefficients | 0.125 | 0.125 | Scenario/Technical |
| L_11 | To test function value calculated in case of a Dual variable function | Function Coefficients | 20.0 | 20.0 | Scenario/Technical |
| L_12 | To test the code that plots an equation | Function | PNG Image | Correct Function in PNG Image | Screnario |
| L_13 | To test the code that plots an equation with the result | Function and it's results | PNG Image | Correct Function in PNG Image | Screnario |
| L_14 | To test whether the Euler method is able to obtain y(x) for a given x where y(x), is the solution of the given first order ODE | Function and the initial conditions along with x at which y(x) is to be found (given dy/dx = 3* x * x *y, find y(0.4)) | 1.04244 | 1.024244 | Scenario |
| L_15 | To test whether the Euler method is able to plot y(x) where y(x) is the solution of a first order ODE | Function, initial conditions and step size (given dy/dx = 3* x * x *y) | generation of the values of x and y | x and y values were generated correctly | Scenario |
| L_16 | To test whether the Euler-Modified method is able to obtain y(x) for a given x, where y(x) is the soltuion of the given first order ODE | Function and the initial conditions along with x at which y(x) is to be found (given dy/dx = 3* x * x *y, find y(0.6)) | 1.244249 | 1.244249 | Scenario |
| L_17 | To test whether the Euler-Modified method is able to plot y(x) where y(x) is the solution of a first order ODE | Function, initial conditions and step size (given dy/dx = 3* x * x *y) | generation of the values of x and y | x and y values were generated correctly | Scenario |
| L_18 | To test whether the Runge-Kutta method is able to obtain y(x) for a given x, where y(x) is the soltuion of the given first order ODE | Function and the initial conditions along with x at which y(x) is to be found (given dy/dx = 3* x * x *y, find y(0.9)) | 1.611935 | 1.611935 | Scenario |
| L_19 | To test whether the Runge-Kutta is able to plot y(x) where y(x) is the solution of a first order ODE | Function, initial conditions and step size (given dy/dx = 3* x * x *y) | generation of the values of x and y | x and y values were generated correctly | Scenario |
| L_20 | To test whether the Gauss Siedel method for solving system of linear equations | Function, initial conditions and coefficients of equations | 1,-1,1 | 1,-1,1 | Scenario/Technical |
| L_21 | To test whether the second order PDE heat equation solving and resultant values | Boundary Conditions , step size  | 58.09 | 58.09 | Scenario/Technical |
| L_22 | To test whether the working of function for  initial conditions | Functional coefficients  | 3.45| 3.45 | Scenario/Technical |
