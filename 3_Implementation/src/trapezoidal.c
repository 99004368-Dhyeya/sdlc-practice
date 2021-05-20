#include "anm.h"

float trapezoidal(funcptr1 func){
    float x0,xn,result=0,h;
    int i,interval;
    x0 = 0; xn = 1; 
    interval = 10;
    h = (xn-x0)/interval;
    result = func(x0) + func(xn);
    for(i=1;i<=interval;i++){
        float k;
        k = x0 + i*h;
        result += 2*func(k);
    }
    result *= h/2;
    return result;
}