#include "anm.h"

float two_point_difference(funcptr1 func){
    float f1, f2, h = 0.001, x = 1.2, result;
    f1 = func(x+h);
    f2 = func(x-h);
    result = (f1 -f2)/(2*h);
    return result;
}