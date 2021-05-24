#include <stdio.h>/**
 * @brief solves the laplce equation
 * 
 * @param l initial boundary condition for left  surface 
 * @param r  initial boundary condition for right surface 
 * @param b   initial boundary condition for bottom  surface 
 * @param t  initial boundary condition for top  surface 
 * @return float*  the values of x and y coordinate of surface 
 */
float *laplace(float l,float r ,float b,float t );