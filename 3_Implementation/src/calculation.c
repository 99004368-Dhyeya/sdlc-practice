/**
 * @file calculation.c
 * @author Ayushman (ayushman.ranu@ltts.com)
 * @brief Calculation functions for returning value at a point
 * @version 0.1
 * @date 2021-05-25
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "input.h"

double power(float x, int deg)
{
    if(deg==0)
        return 1;
    else
    {
        double value=1;
        for(int i=1;i<=deg;i++)
        value=value*x;
        return value;
    }
}
double calculate(double x)
{
    double num_val=0,den_val=0;
    for(int i=num_degree;i>=0;i--)
    {
        //printf("%d\n",num_coeff[i]);
        num_val=num_val+(num_coeff[i]*power(x,i));
        //printf("%f\n",num_val);
    }
    for(int i=den_degree;i>=0;i--)
    {
        den_val=den_val+(den_coeff[i]*power(x,i));
    }
    num_val=num_val+trig_val(x);
    double fun_val=num_val/den_val;
    //printf("%f\n",fun_val);
    return fun_val;
}

double powertwo(int xd,int yd,float x,float y)
{
    double value=1;
    while(xd>0)
    {
        value=value*x;
        xd--;
    }
    while(yd>0)
    {
        value=value*y;
        yd--;
    }
    return value;
}
double calculatetwo(float x,float y)
{
    float func_val=0;
    for(int i=xdeg;i>=0;i--)
    {
        for(int j=ydeg;j>=0;j--)
        {
            func_val=func_val+(arr[i][j]*powertwo(i,j,x,y));
        }
    }
    func_val=func_val+trig_val2(x,y);
    return func_val;
    //printf("%f\n",func_val);
}

double calculatethree(double x)
{
    double num_val=0;
    for(int i=num_degree;i>=0;i--)
    {
        //printf("%d\n",num_coeff[i]);
        num_val=num_val+(num_coeff[i]*power(x,i));
        //printf("%f\n",num_val);
    }
    
    num_val=num_val+trig_val(x);
    return num_val; 

}
