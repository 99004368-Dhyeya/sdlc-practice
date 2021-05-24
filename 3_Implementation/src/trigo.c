#include "input.h"
int nu=0,fun=0;
int ari=0;
char str[20];
void trig_input()
{
    printf("Enter any trigonometric/logarithmic function to be appended, if not then type None\n");
    scanf("%s",str);
    char *pos_ptr;
    int count=0;
    while(count!=4)
    {
        if(strchr(str,'+')!=NULL)
        {
            ari=1;
           // printf("plus\n");
            break;
        }
        else
        count++;
        if(strchr(str,'-')!=NULL)
        {
            ari=2;
            //printf("min\n");
            break;
        }
        else
        count++;
        if(strchr(str,'*')!=NULL)
        {
            ari=3;
           // printf("mul\n");
            break;
        }
        else
        count++;
        if(strchr(str,'/')!=NULL)
        {
            ari=4;
            //printf("div\n");
            break;
        }
        else
        count++;
    }
    if(count==4)
    {
        //printf("Hey");
        if(str[0]=='s')
        {fun=1;nu=1;}
        else if(str[0]=='c')
        {fun=2;nu=1;}
        else if(str[0]=='t')
        {fun=3;nu=1;}
        else if(str[0]=='l')
        {fun=4;nu=1;}
    }
    else
    {
        nu=2;
        if(str[0]=='s')
        fun=1;
        else if(str[0]=='c')
        fun=2;
        else if(str[0]=='t')
        fun=3;
        else if(str[0]=='l')
        fun=4;

        if(str[7]=='s')
        fun=fun*10+1;
        else if(str[7]=='c')
        fun=fun*10+2;
        else if(str[7]=='t')
        fun=fun*10+3;
        else if(str[7]=='l')
        fun=fun*10+4;
    }
    //printf("%d\n%d\n%d\n",nu,ari,fun);
}