#include "root.h"
#include "input.h"
#include <limits.h>
#include "runtimeMeasure.h"

int num_co[10]={0};
double power1(double z, int deg)
{
    int pow = num_degree;

}
double calculate1(double x)
{   int y = num_degree;
    int z = num_degree;
    for(int i=0;i<=num_degree;i++)
    {
        num_co[i] = y * num_coeff[i];
        y--;
        printf("%d\n",num_co[i]);
    }
    
    double num_val=0;
    z--;
    for(int i=num_degree;i>=0;i--)
    {
        //printf("%d\n",num_coeff[i]);
        num_val=num_val+(num_co[i]*power(z,i));         //CUSTOM POWER FUNCTION TO BE IMPLEMENTED!
        //printf("%f\n",num_val);
    } 
    num_val=num_val+trig_val(x);
    return num_val;
}


double NR()
{   double val=0;
    int i=0,itr=0;
    for(itr=0;itr<num_degree;itr++)
   {   
       if(calculate1(val)!=0)
       {
       val = val - (calculatethree(val)/calculate1(val));
       }   
       //printf("%lf",val);      
   }
   return val;
}
double Newton_raphson()
{
    startTime();
    double r_o=0;
    accept_functhree();
    //trig_input();

    r_o = NR();
    printf("%lf\n",r_o);
    endTime();
}