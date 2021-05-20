/**
 * @file anm.h
 * @author Gobikumaar-Sivagnanam    
 * @brief Headerfile for declaring the functions being implememnted
 * @version 0.1
 * @date 2021-04-10
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

#ifndef __ANM_H__           ///Header Guard
#define __ANM_H__           ///Header file definition beginning 

/**
 * @brief enum to hold values for status of the program
 * 
 * @SUCCESS To show the program has run successfully
 * @FAILED_TO_CONVERGE To show the function doesn't converge
 */
typedef enum error_t{
    SUCCESS = 0,
    FAILED_TO_CONVERGE = -1
}error_t;

/**
 * @brief Defining function pointers
 * 
 * Taking Float values as arguement
 * Returning Float values
 */
typedef float (*funcptr1)(float);
typedef float (*funcptr2)(float);

/**
 * @brief Function to implement Newton Raphson Method for finding roots.
 * 
 * @param [in] function Points to the function for which the root is being calculated
 * @param [in] dfunction Points to the derivative of the above function
 * @return float Returing the root of the function.
 */
float newton_raphson(funcptr1 function, funcptr2 dfunction);

/**
 * @brief Function to implement Bisection Method for finding roots.
 * 
 * @param [in] function Points to the function for which the root is being calculated
 * @return float Returing the root of the function.
 */
float bisection(funcptr1 function);

/**
 * @brief Function to implement Regula Falsi Method for finding roots.
 * 
 * @param [in] function Points to the function for which the root is being calculated
 * @return float Returing the root of the function.
 */
float regula_falsi(funcptr1 function);

/**
 * @brief Function to call the different findig root functions
 * 
 * @param [in] choice To Select the method 
 */
void root_function(char choice);

/**
 * @brief Function to implement the Simpson's 1/3rd Rule for numerical integration
 * 
 * @param [in] func Function pointer to the function which is to be integrated 
 * @return float Numerical integration result of the function with limits
 */
float simpson_1_3(funcptr1 func);

/**
 * @brief Function to implement Trapezoidal method for numerical integration
 * 
 * @param [in] func Function pointer to a given function 
 * @return float Result of the integration of the function within the limits
 */
float trapezoidal(funcptr1 func);

/**
 * @brief Function to implement Simpson's 3/8th Rule for numerical integration
 * 
 * @param [in] func Function pointer to a given function 
 * @return float Result of the integration of the function within the limits
 */
float simpson_3_8(funcptr1 func);

/**
 * @brief Function to call the method for numerical integration
 * 
 * @param [in] choice To select the method 
 */
void numerical_integration(char choice);

/**
 * @brief Function to implement the Newton's Forward Difference rule on a data given
 * 
 * @return float Result of numerical differentiation at a point.
 */
float forward_difference();

/**
 * @brief Function to implement the Newton's Backward Difference rule on given dataset.
 * 
 * @return float Result of numerical differentiation at a point
 */
float backward_difference();

/**
 * @brief Function to implement Two point Difference formula
 * 
 * @param [in] func Function pointer to a given function 
 * @return float Result of numerical differentiation at a point
 */
float two_point_difference(funcptr1 func);

/**
 * @brief Function to call the method for numerical differentiation
 * 
 * @param [in] choice To select the method 
 */
void numerical_differentiation(char choice);

// FUNCTIONS USED FOR THE METHODS

float funcRF(float x); 
float funcNRM(float x);
float dfuncNRM(float x);
float funcBM(float x);
float funcS13(float x);
float functrap(float x);
float funcS38(float x);
float funcTPD(float x);

#endif                      ///End of Definition