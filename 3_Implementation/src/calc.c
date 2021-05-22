#include "header.h"

float power(float x, int deg)
{
    if(deg==0)
        return 1;
    else
    {
        float value=1;
        for(int i=1;i<=deg;i++)
        value=value*x;
        return value;
    }
}
void calculate(float x)
{
    float num_val=0,den_val=0;
    for(int i=num_degree;i>=0;i--)
    {
        //printf("%d\n",num_coeff[i]);
        num_val=num_val+(num_coeff[i]*power(x,i));
        //printf("%f\n",num_val);
    }
    for(int i=den_degree;i>=0;i--)
    {
        den_val=den_val+(den_coeff[i]*power(x,i));
    }
    float fun_val=num_val/den_val;
    printf("%f\n",fun_val);
}

float powertwo(int xd,int yd,float x,float y)
{
    float value=1;
    while(xd>0)
    {
        value=value*x;
        xd--;
    }
    while(yd>0)
    {
        value=value*y;
        yd--;
    }
    return value;
}
void calculatetwo(float x,float y)
{
    float func_val=0;
    for(int i=xdeg;i>=0;i--)
    {
        for(int j=ydeg;j>=0;j--)
        {
            func_val=func_val+(arr[i][j]*powertwo(i,j,x,y));
        }
    }
    printf("%f\n",func_val);
}