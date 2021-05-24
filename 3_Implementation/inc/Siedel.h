#include<stdio.h>
#include<conio.h>
#include<math.h>
/**
 * @brief solving the system of linear equations for 3 variables
 * 
 * @param x1 x value after solving
 * @param y1  y value after solving
 * @param z1  z value after solving
 * @return float* 1 d array after solving the equations
 */
float  *gauss_siedell(float *x1,float *y1,float *z1);
void user_choice();
#define f1(x,y,z)  (17-y+2*z)/20
#define f2(x,y,z)  (-18-3*x+z)/20
#define f3(x,y,z)  (25-2*x+3*y)/20

