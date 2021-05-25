/**
 * @file simpson_1_3.c
 * @author Gobikumaar Sivagnanam
 * @brief Simpson's 3/8 method implementation
 * @version 0.1
 * @date 2021-05-25
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "anm.h"

double simpson_3_8(funcptr1 func){
    double x0,xn,result=0,h;
    int i,interval;
    x0 = 0; xn = 1;
    interval = 6;
    h = (xn-x0)/interval;
    result = func(x0) + func(xn);
    for(i=1;i<=interval-1;i++){
        double k;
        k = x0 + i*h;
        if(i%3==0)
            result += 2*func(k);
        else
            result += 3*func(k);
    }
    result *= h*3/8;
    return result;
}