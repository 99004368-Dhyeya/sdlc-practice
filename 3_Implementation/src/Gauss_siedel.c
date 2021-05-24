#include "Siedel.h"
float*  gauss_siedell(float *x1,float *y1,float *z1)
{
 float x0=0, y0=0, z0=0, e1, e2, e3, e;
 int count=1;
 static float arrr[4];

e=0.0001; //error 

 do
 {
  /* Calculation */
  *x1 = f1(x0,y0,z0);
  *y1 = f2(*x1,y0,z0);
  *z1 = f3(*x1,*y1,z0);

  /* Error */
  e1 = fabs(x0-*x1);
  e2 = fabs(y0-*y1);
  e3 = fabs(z0-*z1);

  count++;

  /* Set value for next iteration */
  x0 = *x1;
  y0 = *y1;
  z0 = *z1;

 }while(e1>e && e2>e && e3>e);
 arrr[0]=*x1;
  arrr[1]=*y1;
 arrr[2]=*z1; 
return  arrr;
 //return x1,y1,z1;

}