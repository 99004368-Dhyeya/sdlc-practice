/**
 * @file trapezoidal.c
 * @author Gobikumaar Sivagnanam
 * @brief Trapezoidal Method Implementation
 * @version 0.1
 * @date 2021-05-25
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "anm.h"

double trapezoidal(funcptr1 func){
    double x0,xn,result=0,h;
    int i,interval;
    x0 = 0; xn = 1; 
    interval = 10;
    h = (xn-x0)/interval;
    result = func(x0) + func(xn);
    for(i=1;i<=interval;i++){
        double k;
        k = x0 + i*h;
        result += 2*func(k);
    }
    result *= h/2;
    return result;
}