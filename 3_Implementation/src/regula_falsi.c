#include "anm.h"

void process(float *x, float x0, float x1, float fx0, float fx1, int *itr){
    *x = x0 - ((x1-x0)/(fx1-fx0))*fx0;
    (*itr)++;
}

float regula_falsi(funcptr1 func){

    int itr = 0,maxitr = 20;
    float x0,x1,x2,x3,allowed_error;
    x0 = 0; x1 = 1;
    allowed_error = 0.0005;
    process(&x2, x0, x1, func(x0), func(x1), &itr);
    do{
        if(func(x0)*func(x1)<0)
            x1=x2;
        else
            x0=x2;
        process(&x3, x0, x1, func(x0), func(x1), &itr);
        if(fabs(x3-x2)<allowed_error)
            return x3;
        x2 = x3;
    } while(itr<maxitr);
    return FAILED_TO_CONVERGE;
}