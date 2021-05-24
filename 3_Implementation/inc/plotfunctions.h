/**
 * @file plotfunctions.h
 * @author Gobikumaar Sivagnanam    
 * @brief Header File for functions written to plot data
 * @version 0.1
 * @date 2021-05-22
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __PLOTFUNCTIONS_H__        // Header Guard
#define __PLOTFUNCTIONS_H__        // Header Definition beginning

/**
 * @brief Including pbPlots Headers 
 * 
 */
#include "pbPlots.h"
#include "supportLib.h"

#include <unistd.h>
#include <math.h>

/**
 * @brief Defining Function Pointer 
 * 
 */
typedef double (*functionPointer)(double);

typedef enum plot_check{
    WRITE_SUCCESS = 0,
    WRITE_FAILED = -1
}plot_check;

extern double *xpoints;
extern double *ypoints;

/**
 * @brief Function to test of the write is successful
 * 
 * @param [in] name Name of the file 
 * @return int To verify the file writing  
 */
int testWritePNG(char *name);

/**
 * @brief Function to plot the equation
 * 
 * @param Function [in] Function Pointer pointing to the equation to be plotted
 */
plot_check function_plot(functionPointer Function);

/**
 * @brief Function to plot equation with points
 * 
 * @param Function [in] Function Pointer pointing to the equation to be plotted
 * @param xCoordinates [in] Pointer to X Coordinates of points
 * @param yCoordinates [in] Pointer to Y Coordinates of points
 * @param dataPoints [in] Number of points to be plotted
 */
plot_check points_function_plot(functionPointer Function, double *xCoordinates, double *yCoordinates, int dataPoints);

//extern double *xpointer , *ypointer;

/**
 * @brief Function to plot equation from Pointer Data
 * 
 * @param dataCount [in] Number of points to be plotted
 */
plot_check plot_pointer_function(double *xCoordinates, double *yCoordinates, int dataCount);      //PointerxCoordinateFunction, PointeryCoordinateFunction

#endif                             // Header Definition end