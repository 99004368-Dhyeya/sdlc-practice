/**
 * @file trigo_calc.c
 * @author Ayushman (ayushman.ranu@ltts.com)
 * @brief Calculates value of trigo function
 * @version 0.1
 * @date 2021-05-25
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "input.h"
#include <math.h>

double trig_val(float x)
{
    if(nu==0)
    return 0;
    else if(nu==1)
    {
        double trigo_val=0;
        trigo_val=ret_val(funct,x);
        return trigo_val;
    }
    else if(nu==2)
    {
        int funct1=funct/10;int funct2=funct%10;
        double trigo_val=0;
        trigo_val=ret_val(funct1,x);
        if(ari==1)
        {
            trigo_val=trigo_val+ret_val(funct2,x);
        }
        else if(ari==2)
        {
            trigo_val=trigo_val-ret_val(funct2,x);
        }
        else if(ari==3)
        {
            trigo_val=trigo_val*ret_val(funct2,x);
        }
        else if(ari==4)
        {
            trigo_val=trigo_val/ret_val(funct2,x);
        }
        return trigo_val;

    }
}
double ret_val(int a,float x)
{
    if(a==1)
            return sin(x);
    if (a==2)
            return cos(x);
    if (a==3)
            return tan(x);
    if (a==4)
            return log(x);
}

double trig_val2(float x,float y)
{
    if(nu==0)
        return 0;
    else if(nu==1)
    {
        double trigo_val=0;
        if(str[4]=='x')
        {
            trigo_val=ret_val(funct,x);
        }
        else if(str[4]=='y')
        {
            trigo_val=ret_val(funct,y);
        }
        return trigo_val;
    }
    else if(nu==2)
    {
        int funct1=funct/10;int funct2=funct%10;
        double trigo_val=0;
        if(str[4]=='x')
        {
            trigo_val=ret_val(funct1,x);
        }
        else if(str[4]=='y')
        {
            trigo_val=ret_val(funct1,y);
        }
        if(ari==1)
        {
            if(str[11]=='x')
            trigo_val=trigo_val+ret_val(funct2,x);
            else if(str[11]=='y')
            trigo_val=trigo_val+ret_val(funct2,y);
        }
        else if(ari==2)
        {
            if(str[11]=='x')
            trigo_val=trigo_val-ret_val(funct2,x);
            else if(str[11]=='y')
            trigo_val=trigo_val-ret_val(funct2,y);
        }
        else if(ari==3)
        {
            if(str[11]=='x')
            trigo_val=trigo_val*ret_val(funct2,x);
            else if(str[11]=='y')
            trigo_val=trigo_val*ret_val(funct2,y);
        }
        else if(ari==4)
        {
            if(str[11]=='x')
            trigo_val=trigo_val/ret_val(funct2,x);
            else if(str[11]=='y')
            trigo_val=trigo_val/ret_val(funct2,y);
        }
        return trigo_val;

    }
}