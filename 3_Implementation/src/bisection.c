/**
 * @file Bisection.c
 * @author Dhyeya Patel (dhyeya.patel@ltts.com)
 * @brief 
 * @version 0.1
 * @date 2021-05-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "root.h"
#include "input.h"
#include <limits.h>

/**
 * @brief Bisection Iteration Function
 * 
 * @param upp_lim 
 * @param low_lim 
 * @return double 
 */
double Bisection(float upp_lim,float low_lim)
{   
    float x1=0, roots=0,b=0;
    int itr, max_itr=20 ;           //Maximum Iterations = 20
    for(itr=0;itr<=max_itr;itr++)
   {
       x1 = (upp_lim + low_lim)/2;
       roots = calculatethree(x1);

       {    
           if(roots>0)
            {
                upp_lim = x1;
            }
            else
            {
                low_lim = x1;
            }
       }

       if(roots-calculatethree((upp_lim+low_lim)/2)<=0.01)
       b = ((upp_lim+low_lim)/2);

       else 
       continue;

   } return b;
}