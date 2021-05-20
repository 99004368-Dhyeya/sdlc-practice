#include "anm.h"

float funcNRM(float x){
  return x*log10(x)- 1.2;           // x*log10(x)-1.2
}

float dfuncNRM(float x){
   return log10(x) + 0.43429;       // log10(x) + 0.4329
}

float funcBM(float x){
    return x*x*x - 4*x - 9;         // x^3 - 4*x - 9
}

float funcRF(float x){
    return cos(x) - x*exp(x);       // cos(x) - x*e^x
}

void root_function(char choice){
    
    funcptr1 fptr1 = NULL;
    funcptr1 fptr2 = NULL;
   
    switch(choice){
        case 'a':
            fptr1 = funcNRM;
            fptr2 = dfuncNRM;
            printf("\nNewton Raphson Method\n");
            printf("Function is : x*log10(x)-1.2\n");
            printf("Root is : %f\n",newton_raphson(fptr1,fptr2));
            break;
        case 'b':
            fptr1 = funcBM;
            printf("\nBisection Method\n");
            printf("Function is : x^3 - 4*x - 9\n");
            printf("Root is : %f\n",bisection(fptr1));
            break;
        case 'c':
            fptr1 = funcRF;
            printf("\nRegula Falsi Method\n");
            printf("Function is : cos(x) - x*e^x\n");
            printf("Root is : %f\n",regula_falsi(fptr1));
            break;
        default:
            printf("Enter Valid Choice\n");
            break;
    }
}