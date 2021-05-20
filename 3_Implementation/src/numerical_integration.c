#include "anm.h"

float funcS13(float x){
  return (1/(1+x));           // 1/(1+x)
}

float functrap(float x){
   return (1/(1+pow(x,2)));       // 1/(1+x^2)
}

float funcS38(float x){
    return (1/(1+pow(x,3)));         // 1/(1+x^3)
}

void numerical_integration(char choice){

    funcptr1 fptr1 = NULL;

    switch(choice){
        case 'a':
            fptr1 = funcS13;
            printf("\nSimpson's 1/3rd Rule\n");
            printf("Function is : 1/(1+x)\n");
            printf("Numerical Integration with limit 2 to 4 is : %f\n",simpson_1_3(fptr1));
            break;
        case 'b':
            fptr1 = functrap;
            printf("\nTrapezoidal Method\n");
            printf("Function is : 1/(1+x^2)\n");
            printf("Numerical Integration with limit 0 to 1 is : %f\n",trapezoidal(fptr1));
            break;
        case 'c':
            fptr1 = funcS38;
            printf("\nSimpson's 3/8th Rule\n");
            printf("Function is : 1/(1+x^3)\n");
            printf("Numerical Integration with limit 0 to 1 is : %f\n",simpson_3_8(fptr1));
            break;
        default:
            printf("Enter Valid Choice\n");
            break;
    }
}