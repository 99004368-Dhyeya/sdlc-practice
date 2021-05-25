/**
 * @file input.h
 * @author Ayushman Ranu (ayushman.ranu@ltts.com)
 * @brief Header file for Function definitions required for input of
 * function from the user
 * @version 0.1
 * @date 2021-05-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
#include <math.h>
#include <string.h>

#ifndef __INPUT_H__
#define __INPUT_H__

extern int num_degree;
extern int den_degree;
extern int num_coeff[];
extern int den_coeff[];
extern int xdeg;
extern int ydeg;
extern int arr[][5];
extern int nu;
extern int ari;
extern int funct;
extern char str[];

/**
 * @brief Function to accept coefficients into the extern variables
 * 
 */
void accept_func();

/**
 * @brief Returns value of higher order variables
 * depending on the power and x value
 * 
 * @return double 
 */
double power(float,int);

/**
 * @brief Returns the value of the function at the value passed to it
 * 
 * @return double 
 */
double calculate(double);

/**
 * @brief Accepts input of the trigonometric or log function
 * to be added
 */
void trig_input();

/**
 * @brief Accepts the function of two variables from user
 * 
 */
void accept_functwo();

/**
 * @brief Returns value of function of two variables at the specified points
 * 
 * @return double 
 */
double calculatetwo(float,float);

/**
 * @brief Returns value of xy terms of equation based on degree and value
 * 
 * @return double 
 */
double powertwo(int,int,float,float);

/**
 * @brief Calculates value of special function entered
 * 
 * @return double 
 */
double trig_val(float);

/**
 * @brief Returns individual sin,cos,tan or log values
 * 
 * @return double 
 */
double ret_val(int,float);

/**
 * @brief Calculates values for different x and y present in the special functions,
 * eg. sin(x)*cos(y)
 * 
 * @return double 
 */
double trig_val2(float,float);

/**
 * @brief Test function 1
 * 
 * @return double 
 */
double test_function(float);

/**
 * @brief Test function 2
 * 
 * @return double 
 */
double test_functiontwo(float,float);

/**
 * @brief Function for accepting values for root function
 * 
 */
void accept_functhree();

/**
 * @brief Calculate function value
 * 
 * @param x 
 * @return double 
 */
double calculatethree(double x);

/**
 * @brief Resets coefficients
 * 
 */
void reset_values();


#endif