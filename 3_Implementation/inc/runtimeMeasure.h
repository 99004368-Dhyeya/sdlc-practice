/**
 * @file runtimeMeasure.h
 * @author Gobikumaar Sivagnanam    
 * @brief Function to calculate run time between any two points
 * @version 0.1
 * @date 2021-05-25
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __RUNTIMEMEASURE_H__
#define __RUNTIMEMEASURE_H__

// Includes Needed
#include <stdio.h>
#include <time.h>

/**
 * @brief Setting global begin and end time to calculate anywhere in the program 
 * 
 */
extern clock_t begin;
extern clock_t end;

/**
 * @brief Function to intialize begin time
 * 
 */
void startTime();

/**
 * @brief Function to intialize end time
 * 
 */
void endTime();

/**
 * @brief Using the previously defined begin and end to calculate time in seconds
 * 
 */
void calculateTime();

#endif