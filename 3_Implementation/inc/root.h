/**
 * @file root.h
 * @author Dhyeya Patel (dhyeya.patel@ltts.com)
 * @brief Root Function Related Global Variables and Functions defined here
 * @version 0.1
 * @date 2021-05-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>
#include <math.h>
#include <string.h>

#ifndef __Root_H__  //Header Guards
#define __Root_H__

/**
 * @brief Global Variable - Upper Limit 
 * 
 */
extern double upp_lim;

/**
 * @brief Global Variable - Lower Limit
 * 
 */
extern double low_lim;
/**
 * @brief Global Array for Differentiation
 * 
 */
extern int num_co[];

/**
 * @brief Bi-section method for solving algebraic equations 
 * 
 * @return double 
 */
double Algebraic();

/**
 * @brief Algebraic Test Function
 * 
 * @return double 
 */
double Algebraic_test();

/**
 * @brief Bisection method for solving transcedental equations
 * 
 * @return double 
 */
double Transcedental();

/**
 * @brief Transcedental Test Function
 * 
 * @return double 
 */
double Transcedental_test();


/**
 * @brief Function for finding lowest positive limit
 * 
 * @return int 
 */
int interval_1();

/**
 * @brief Function for finding greatest negative limit
 * 
 * @return int 
 */
int interval_2();

/**
 * @brief Bisection method of finding roots
 * 
 * @return double 
 */
double Bisection(float,float);


/**
 * @brief Selection of which method for Bi-Section and Newton-Raphson Method 
 * 
 * @return int 
 */
int choice();

#endif