#include "anm.h"
#include "input.h"
#include "runtimeMeasure.h"
#include "plotfunctions.h"

void numerical_integration(char choice){

    funcptr1 fptr1 = NULL;
    accept_func();
    fptr1 = calculate;
    functionPointer Function = calculate;
    switch(choice){
        case 'a':
            printf("\nSimpson's 1/3rd Rule\n");
            startTime();
            printf("Numerical Integration with limit 2 to 4 is : %f\n",simpson_1_3(fptr1));
            endTime();
            calculateTime();
            function_plot(Function);
            break;
        case 'b':
            printf("\nTrapezoidal Method\n");
            startTime();
            printf("Numerical Integration with limit 0 to 1 is : %f\n",trapezoidal(fptr1));
            endTime();
            calculateTime();
            function_plot(Function);
            break;
        case 'c':
            printf("\nSimpson's 3/8th Rule\n");
            startTime();
            printf("Numerical Integration with limit 0 to 1 is : %f\n",simpson_3_8(fptr1));
            endTime();
            calculateTime();
            function_plot(Function);
            break;
        default:
            printf("Enter Valid Choice\n");
            break;
    }
}