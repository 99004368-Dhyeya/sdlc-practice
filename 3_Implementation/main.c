#include "anm.h"
#include "input.h"
#include "laplace.h"
#include "odenm.h"
#include "plotfunctions.h"
#include "root.h"
#include "runtimeMeasure.h"
#include "Siedel.h"
#include "supportLib.h"

int main(){
    int option,check;
    char choice1;
    while(1){
        printf("\n\n___________________________________________________\n");
        printf("\nEnter \"-1\" to quit program or Enter \"1\" to Continue\n");
        printf("Enter choice as described above: ");
        scanf("%d",&check);
        if(check == -1){
            break;
        }
        printf("\nEnter 1 To Find Roots of a Equations: \n");
        printf("Enter \"1 b\" To Find Roots of a Non Linear Function using Bisection Method \n");
        printf("Enter \"1 c\" To Find Roots of a Non Linear Function using Regula Falsi Method \n");
        printf("Enter \"2 a\" To Find the numerical integration of a function with limits using Simpson's 1/3 Method \n");
        printf("Enter \"2 b\" To Find the numerical integration of a function with limits using Trapezoidal Method \n");
        printf("Enter \"2 c\" To Find the numerical integration of a function with limits using Simpson's 3/8 Method \n");
        printf("Enter \"3 a\" To Find the numerical differentiation of a function at a point using Newton's Forward Difference \n");
        printf("Enter \"3 b\" To Find the numerical differentiation of a function at a point using Newton's Backward Difference \n");
        printf("Enter \"3 c\" To Find the numerical differentiation of a function at a point using Two Point Difference \n");

        printf("\nEnter choice as described above: ");
        scanf("%d %c",&option,&choice1);
        switch(option){
            case 1:
                //DHYEYA FUNCTION DONE
                choice();

                break;
            case 2:
            // SAI FUNCTION
                //numerical_integration(choice1);
                user_choice();
                break;
            case 3:
                // JAYSRI FUNCTION
                //numerical_differentiation(choice1);
                accept_functwo();
                numerical_ode(choice1);

                break;
            default:
                printf("Enter Valid option");   
                break;
        }
    } 
    return 0;
}