/**
 * @file root.c
 * @author Dhyeya Patel (dhyeya.patel@ltts.com)
 * @brief Root Function
 * @version 0.1
 * @date 2021-05-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "root.h"
#include "input.h"
#include <limits.h>
#include "plotfunctions.h"
#include "runtimeMeasure.h"

double upp_lim=0;
double low_lim=0;

/**
 * @brief Function for finding upper limit
 * 
 * @return int 
 */
int interval_1()
{   startTime();        //Initializes timer for calculation of algorithm time
    float i=0;
    float pos,temp=0;
    float min = 99999,up=0;

    for(i=-32768;i<=32768;i++)
    {
            pos = calculatethree(i);        //Calculate function value

            //printf("%f\t",pos);
            
            if(pos>0)
            {
                if(pos<min)
                {
                    min = pos;
                    up=i;
                }
            }   
    }
    //printf("%f",min);
    return up;
}

/**
 * @brief Function for findning lower limit
 * 
 * @return int 
 */
int interval_2()
{   float i=0;
    float temp=0;
    float neg=0, max = -99999;
    float low=0;
    for(i=-32768;i<=32768;i++)
    {
            neg = calculatethree(i);       //Calculate function value
          
            if(neg<0)
            {
                if(neg>max)
                {
                    max = neg;
                    low=i;
                }
            }             
    }
    return low;
}


/**
 * @brief Function for Algebraic Equations using Bisection Method
 * 
 * @return double 
 */
double Algebraic()
{   //startTime();
    double r_o=0;
    
    accept_functhree();     //Function to accept user defined functions coefficients
    
    upp_lim = interval_1();     //Function to calculate upper limit
    low_lim = interval_2();     //Function to calculate low limit
   
   r_o = Bisection(upp_lim,low_lim);       //Bi-section Method Algorithm

    printf("Interval --> Upper Limit : %lf\t Lower Limit: %lf\n",upp_lim,low_lim);
    printf("THe value of the root for above function is %lf\n",r_o);
    endTime();              //stops timer for calculation of algorithm time

}

/**
 * @brief Function for Transcedental Equations using Bisection Method
 * 
 * @return double 
 */
double Transcedental()
{
    //startTime();
    double r_o=0;
    accept_functhree();
    trig_input();
    upp_lim = interval_1();
    low_lim = interval_2();
   
   r_o = Bisection(upp_lim,low_lim);

    printf("Interval --> Upper Limit : %lf\t Lower Limit: %lf\n",upp_lim,low_lim);
    printf("THe value of the root for above function is %lf\n",r_o);

    endTime();          //stops timer for calculation of algorithm time
}

