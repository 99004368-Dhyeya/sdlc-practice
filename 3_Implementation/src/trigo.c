/**
 * @file trigo.c
 * @author Ayushman (ayushman.ranu@ltts.com)
 * @brief Accepts trigo function from user
 * @version 0.1
 * @date 2021-05-25
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "input.h"
int nu=0,funct=0;
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
        {funct=1;nu=1;}
        else if(str[0]=='c')
        {funct=2;nu=1;}
        else if(str[0]=='t')
        {funct=3;nu=1;}
        else if(str[0]=='l')
        {funct=4;nu=1;}
    }
    else
    {
        nu=2;
        if(str[0]=='s')
        funct=1;
        else if(str[0]=='c')
        funct=2;
        else if(str[0]=='t')
        funct=3;
        else if(str[0]=='l')
        funct=4;

        if(str[7]=='s')
        funct=funct*10+1;
        else if(str[7]=='c')
        funct=funct*10+2;
        else if(str[7]=='t')
        funct=funct*10+3;
        else if(str[7]=='l')
        funct=funct*10+4;
    }
    //printf("%d\n%d\n%d\n",nu,ari,funct);
}