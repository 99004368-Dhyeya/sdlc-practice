#include "anm.h"

float funcTPD(float x){
    return exp(x)*sin(x);
}

void printdata_NFD(){
    printf("\nDataset is :\n");
    printf(" x       f(x)\n");
    printf("-------------\n");
    printf("1.0  |  7.989\n");
    printf("1.1  |  8.403\n");
    printf("1.2  |  8.781\n");
    printf("1.3  |  9.129\n");
    printf("1.4  |  9.451\n");
    printf("1.5  |  9.750\n");
    printf("1.6  |  10.031\n");
}
void numerical_differentiation(char choice){

    funcptr1 fptr1 = NULL;

    switch(choice){
        case 'a':
            printf("\nNewton's Forward Difference Formula\n");
            printdata_NFD();
            printf("\nNumerical differentiation at point 1.1 is : %f\n",forward_difference());
            break;
        case 'b':
            printf("\nNewton's Backward Difference Formula\n");
            printdata_NFD();
            printf("\nNumerical differentiation at point 1.6 is : %f\n",backward_difference());
            break;
        case 'c':
            fptr1 = funcTPD;
            printf("\nTwo Point Difference Formula\n");
            printf("Function is : e^x*sin(x)\n");
            printf("Numerical differentiation at point 1.2 is : %f\n",two_point_difference(fptr1));
            break;
        default:
            printf("Enter Valid Choice\n");
            break;
    }
}