#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#include "odenm.h"
#include "plotfunctions.h"
#include "input.h"

odesolvevar details1; //initializing a variable of type odeplotvar
odeplotvar details2; //initializing a variable of type odesolvevar

double *xpoints = NULL;
double *ypoints = NULL;

//dummy calculate function, to be commented out while integration
/*double calculatetwo(double x, double y){
    //double val;
    //val = (5*x*x - y)/(exp(x+y));
    //return val;
    return y;
}*/

int userChoice()
{
    int choice;
        printf("\nUser Choice\n");
        printf("1. Do you want to find the value of the first order ODE's solution at a particular point?\n");
        printf("2. Do you want to plot the solution of the first order ODE?\n");
        printf("Enter the choice 1 or 2\n");
        scanf("%d",&choice);
    return choice;
}

void userInput(int choice)
{
    double xo, yo;
    printf("\nEnter the initial condition x0 for the differential equation\n");
    scanf("%lf",&xo);
    printf("Enter the initial condition y0 for the differential equation\n");
    scanf("%lf",&yo);

    switch(choice){
        case 1:
            details1.xic = xo;
            details1.yic = yo;
            printf("Enter the value of the x for which y(x) has to be found\n");
            scanf("%lf",&details1.xgiv);
            printf("Enter the number of steps the interval between the x0 and the x at which y(x) should be calculated should have\n");
            scanf("%d",&details1.numOfPoints);
            details1.stepsize = (details1.xgiv-xo)/(details1.numOfPoints); 
            printf("The stepsize is %d\n",details1.stepsize);
            break;
        case 2:
            details2.xic = xo;
            details2.yic = yo;
            printf("Enter the desired step size\n");
            scanf("%lf",&details2.stepsize);
            printf("Enter the number of data points to be generated\n");
            scanf("%lf",&details2.numOfdataPoints);
            break;
    }
    return;
}

void numerical_ode(char choice)
{
    int typeOfSolution;

    do{
        typeOfSolution = userChoice();
    }while((typeOfSolution!=1)&&(typeOfSolution!=2));
    
    userInput(typeOfSolution);

    switch(choice){
        case 'a': //Euler method
            printf("\nUsing Euler method for finding the solution of first order differential equation\n");
            odeSolver(typeOfSolution,choice);
            break;
        case 'b': //Euler modified
            printf("Using Modified Euler method for finding the solution of the first order differential equation\n");
            odeSolver(typeOfSolution,choice);
            break;
        case 'c': //Runge Kutta
            printf("Using the Runge Kutta method for finding the solution of the first order differential equation\n");
            odeSolver(typeOfSolution, choice);
            break;
    }
}

double EulerFormula(double xn, double yn, double stepsize)
{
    double ynew;
    ynew = yn + stepsize*calculatetwo(xn,yn);
    return ynew;
}

double EulerModifiedFormula(double xn, double yn, double stepsize)
{
    double ytemp, ynew, xn1;
    xn1 = xn + stepsize;
    ytemp = yn + stepsize*calculatetwo(xn,yn);
    ynew = yn + (stepsize/2.0)*(calculatetwo(xn,yn)+calculatetwo(xn1,ytemp));
    return ynew;
}

double RungeKuttaFormula(double xn, double yn, double stepsize)
{
    double k1, k2, k3, k4, k, ynew, intermediateX, intermediateY;
    k1 = stepsize*calculatetwo(xn,yn);
    intermediateX = xn + (stepsize/2.0);
    intermediateY = yn + (k1/2.0);
    k2 = stepsize*calculatetwo(intermediateX,intermediateY);
    intermediateY = yn + (k2/2.0);
    k3 = stepsize*calculatetwo(intermediateX,intermediateY);
    intermediateY = xn + stepsize;
    intermediateY = yn + k3;
    k4 = stepsize*calculatetwo(intermediateX,intermediateY);
    k = (k1 + k2 + k3 + k4)/6.0;
    ynew = yn + k;
    return ynew;
}

void odeSolver(int choice, char method)
{
    int i, iterations;
    double xcurr, ycurr, ynew, stepsize;

    double (*whichfunction)(double, double, double) = NULL;

    switch (method)
    {
    case 'a':
        whichfunction = EulerFormula;
        break;
    case 'b': 
        whichfunction = EulerModifiedFormula;
        break;
    case 'c':
        whichfunction = RungeKuttaFormula;
        break;
    }

    if(choice == 1)
    {
        xcurr = details1.xic;
        ycurr = details1.yic;
        stepsize = details1.stepsize;
        iterations = details1.numOfPoints;

        for(i=0;i<iterations;i++){
            ynew = whichfunction(xcurr,ycurr,stepsize);
            if(isnan(ynew)||isinf(ynew)){
                printf("\nValue of y(%lf) is infinity, hence y(%lf) can't be calculated\n",xcurr,details1.xgiv);
                break;
            }
            xcurr += stepsize;
            ycurr = ynew;
        }
        printf("\nThe solution of the ODE at y(%lf), is %lf\n",xcurr,ycurr);
    }
    else{
        xcurr = details2.xic;
        ycurr = details2.yic;
        stepsize = details2.stepsize;
        iterations = details2.numOfdataPoints;

        xpoints = (double *)malloc((iterations+1)*sizeof(double));
        ypoints = (double *)malloc((iterations+1)*sizeof(double));

        *(xpoints + 0) = xcurr;
        *(ypoints + 0) = ycurr;

        for(i=0;i<iterations;i++){
            ynew = whichfunction(xcurr,ycurr,stepsize);
            if(isnan(ynew)||isinf(ynew)){
                printf("\nValue of y(%lf) is infinity, hence further calculation can't proceed\n",xcurr);
                iterations = i;
                break;
            }
            xcurr += stepsize;
            ycurr = ynew;

            *(xpoints + i + 1) = xcurr;
            *(ypoints + i + 1) = ycurr;
        }
        printf("\nPrinting some of the data points generated for the solution of the ODE\n");
        print(iterations);
        plot_pointer_function(xpoints,ypoints,(iterations+1));
    }
}

void print(int numOfPoints)
{
    int numToBePrinted, i;
    printf("\nEnter the number of data points to be printed\n");
    scanf("%d",&numToBePrinted);
    if(numToBePrinted>numOfPoints)
    numToBePrinted = numOfPoints;
    printf("Number of points to be printed\n");
    for(i=0;i<=numToBePrinted;i++)
    printf("x%d = %lf    y%d = %lf\n",i,*(xpoints + i),i,*(ypoints + i));
}
