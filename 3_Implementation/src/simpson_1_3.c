/**
 * @file simpson_1_3.c
 * @author Gobikumaar Sivagnanam
 * @brief Simpson's 1/3 method implementation
 * @version 0.1
 * @date 2021-05-25
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "anm.h"

double simpson_1_3(funcptr1 func){
    int i,n;
    double x0,xn,h,so = 0,se = 0,result;
    double x[20],y[20];
    x0 = 2; xn = 4; h = 0.5; 
    n = (xn-x0)/h;
    n = (n%2==0) ? n : n+1;
    h = (xn-x0)/n;
    for(i=0;i<n+1;i++){
        x[i] = x0+i*h;
        y[i] = func(x[i]);
    }
    for(i=1;i<n;i++){
        if(i%2==0)
            se += y[i];
        else
            so += y[i];
    }
    result = (h/3) * (y[0]+y[n]+4*so+2*se);
    return result;
}