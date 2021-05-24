#include "PDE.h"
float fun_init(int a)
{
    return(4*a-(a*a)/2.0);
}
float* heat(float c,float us,float ue)
{
    float u[X+1][T+1], h=1.0, k=0.0125,al;
    int j,i;
   
    al=c*k/pow(h,2);
   
    for(i=0;i<=T;i++)
    u[0][i]=u[X][i]=us;
    for(j=1;j<=X-1;j++)
    u[j][0]=fun_init(j);
    for(i=0;i<=T-1;i++)
    for(j=1;j<=X-1;j++)
    u[j][i+1]=al*u[j-1][i]+(1-2*al)*u[j][i]+al*u[j+1][i];
    static float PDE_heat[30];
    int dummyy=0;
    for(i=0;i<T;i++)
    {
        for(j=0;j<X;j++)
        {
        PDE_heat[dummyy]= u[j][i];
       dummyy=dummyy+=1;
        }
    }
    return PDE_heat;
}