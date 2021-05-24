/**
 * @file choice.c
 * @author Dhyeya Patel (dhyeya.patel@ltts.com)
 * @brief 
 * @version 0.1
 * @date 2021-05-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "input.h"
#include "root.h"
#include "plotfunctions.h"
#include "runtimeMeasure.h"

/**
 * @brief User Choice for Method Selection
 * 
 * @return int 
 */
int choice()
{
    startTime();

int choice=0;
    printf("Enter choice for types of equations:\n");
    printf("Enter 1 for Algebraic Equations:\n");
    printf("Enter 2 for Transcedental Equations:\n");
    printf("Enter 3 for Newton Raphson:\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        Algebraic();
        break;

        case 2:
        Transcedental();
        break;

        case 3:
        Newton_raphson();
    }
    functionPointer function = calculatethree;
     function_plot(function);                       //Plotting Function
     calculateTime();                               //Algorithm Time Calculation
}