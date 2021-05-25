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
typedef double (*funcptr1)(double);

/**
 * @brief Function to implement the Simpson's 1/3rd Rule for numerical integration
 * 
 * @param [in] func Function pointer to the function which is to be integrated 
 * @return float Numerical integration result of the function with limits
 */
double simpson_1_3(funcptr1 func);

/**
 * @brief Function to implement Trapezoidal method for numerical integration
 * 
 * @param [in] func Function pointer to a given function 
 * @return float Result of the integration of the function within the limits
 */
double trapezoidal(funcptr1 func);

/**
 * @brief Function to implement Simpson's 3/8th Rule for numerical integration
 * 
 * @param [in] func Function pointer to a given function 
 * @return float Result of the integration of the function within the limits
 */
double simpson_3_8(funcptr1 func);

/**
 * @brief Function to call the method for numerical integration
 * 
 * @param [in] choice To select the method 
 */
void numerical_integration(char choice);


// FUNCTIONS USED FOR THE METHODS

double funcS13(double x);
double functrap(double x);
double funcS38(double x);

#endif                      ///End of Definition