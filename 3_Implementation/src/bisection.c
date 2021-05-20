#include "anm.h"

float bisection(funcptr1 func){
    int itr=0, maxitr=20;
    float x,a,b,allowed_error;
    allowed_error=0.0005;
    a=3;
    b=2;
    x = (a+b)/2;
    itr++;
    do{
        float x1;
        if(func(a)*func(x)<0)
            b=x;
        else
            a=x;
        x1 = (a+b)/2; itr++;
        if(fabs(x1-x)<allowed_error)
            return x1;
        x=x1;
    } while(itr<maxitr);

    return FAILED_TO_CONVERGE;

}