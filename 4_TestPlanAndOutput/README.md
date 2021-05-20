# Test Plan

## Table 1: High Level Test Plan

| **Test ID** | **Description** | **Exp I/P** | **Exp O/P** | **Actual O/P** | **Type Of Test** |
|-----|-----|-----|----|-----|------|
| H_01 | To test the functions that find the root of a function | Function Pointer | Root of the function | Correct root of the function | Scenario Based | 
| H_02 | To test the functions that find the numerical integration of a function at a point  | Function Pointer | Numerical Intergation at a point | Correct numerical integration value | Scenario Based | 
| H_03 | To test the functions that find the numerical differentiation of a function at a point | Dataset/Function Pointer | Numerical Differentiation of a function at a point | Correct numerical differentiation value | Scenario Based | 

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
