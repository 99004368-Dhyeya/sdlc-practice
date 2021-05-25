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
        

        printf("Enter 1a to use the bisection method to find the solution for algebraic and transcendental equations\n");
        printf("Enter 2a if you want to solve any one of the following problems - a system of equations, Laplace equation and PDE equation\n");
        printf("Enter \"3 a\" to find the solution for a first order differential equation using Euler method\n");
        printf("Enter \"3 b\" to find the solution for a first order differential equation using Modified Euler method\n");
        printf("Enter \"3 c\" to find the solution for a first order differential equation using Runge-Kutta method\n");
        printf("Enter \"4 a\" To Find the numerical integration of a function with limits using Simpson's 1/3 Method \n");
        printf("Enter \"4 b\" To Find the numerical integration of a function with limits using Trapezoidal Method \n");
        printf("Enter \"4 c\" To Find the numerical integration of a function with limits using Simpson's 3/8 Method \n");
        
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
            case 4:
                numerical_integration(choice1);
                break;
            default:
                printf("Enter Valid option");   
                break;
        }
    } 
    return 0;
}