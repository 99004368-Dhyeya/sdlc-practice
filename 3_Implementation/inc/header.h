#include <stdio.h>
#include <math.h>
#include <string.h>

#ifndef __HEADER_H__
#define __HEADER_H__

extern int num_degree;
extern int den_degree;
extern int num_coeff[];
extern int den_coeff[];
extern int xdeg;
extern int ydeg;
extern int arr[][5];

void accept_func();
float power(float,int);
void calculate(float);
void trig_input();
void accept_functwo();
void calculatetwo(float,float);
float powertwo(int,int,float,float);


#endif