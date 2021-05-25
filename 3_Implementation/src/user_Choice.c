#include "laplace.h"
#include "PDE.h"
#include "Siedel.h"

void user_choice(){
    float *solved_gauss;
     float *solved_heat;
      float *solved_laplace;
       float x111,x222,x333;
    int uchoice =0;
  printf("Enter choice for solving below \n");
    printf("Enter 1 for solving system of equations\n ");
    printf("Enter 2 for solving PDE Heat Equation\n");
    printf("Enter 3 for solving Laplace Equation\n");
    scanf("%d",&uchoice);
    switch(uchoice){
        case 1:
       
        
        solved_gauss=gauss_siedell(&x111,&x222,&x333);
        
        for (int ii=0;ii<3;ii++){
            printf("%f",solved_gauss[ii]);

        }
        break;



        case 2:
       
       
        printf("Enter the specific heat and boundary values with space");
         int coefficient_heat , extreme1,extreme2;
        scanf ("%d %d %d",&coefficient_heat,&extreme1,&extreme2);
        solved_heat =heat(coefficient_heat,extreme1,extreme2);
        printf("The values after solving withrespect to time and space \n");
        for (int ii=0;ii<32;ii++){
            printf("%f ",solved_heat[ii]);

        }
        break;
        case 3:
         printf("Enter the boundary values for lower , upper  left , right");
         float leftt,rightt,upp,downn;
        scanf ("%f %f %f % f",&leftt,&rightt,&upp,&downn);
         solved_laplace=laplace(leftt,rightt,downn,upp);
         printf("The values of x and y after solving  \n");
        for (int ii=0;ii<30;ii++){
            printf("%f ",solved_laplace[ii]);

        }
        break;



    }

}
