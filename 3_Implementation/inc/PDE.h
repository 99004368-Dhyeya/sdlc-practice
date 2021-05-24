#include<stdio.h>
#include<math.h>
#define X 8
#define T 5
#define T 5
/**
 * @brief it solves the PDE Equation
 * 
 * @param c Thermal Coedffiecent
 * @param us Tempurature of the heat source
 * @param ue tempurature of other source
 * @return float* Tempurature change with time and space
 */
float* heat(float c,float us,float ue);
/**
 * @brief initial tempuarture charecteristics of surface
 * 
 * @param a space coordinate
 * @return float the tempuarture at time t=0;
 */
float fun(int a);
