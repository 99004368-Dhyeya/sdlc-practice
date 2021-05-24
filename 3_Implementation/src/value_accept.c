#include "input.h"

int num_degree=0,den_degree=0;
int num_coeff[10];
int den_coeff[10];

void accept_func()
{
    printf("Enter max degree of variable 'x' in the numerator and denominator\n");
    scanf("%d%d",&num_degree,&den_degree);

    printf("Enter numerator function coefficients, starting from the max degree term and ending with the constant\n");
    char temp;
    int i=num_degree;
    do
    {
        scanf("%d%c",&num_coeff[i],&temp);
        i--;
    } while (temp!='\n');
    
    printf("Enter denominator function coefficients, starting from the max degree term and ending with the constant\n");
    i=den_degree;
    do
    {
        scanf("%d%c",&den_coeff[i],&temp);
        i--;
    } while (temp!='\n');
}

int xdeg=0,ydeg=0;
int arr[5][5];
void accept_functwo()
{
    printf("Enter max degree of x and y\n");
    scanf("%d%d",&xdeg,&ydeg);
    for(int i=xdeg;i>=0;i--)
    {
        for(int j=ydeg;j>=0;j--)
        {
            printf("Enter coefficient for x^%dy^%d\n",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
}

void accept_functhree()
{
    printf("Enter max degree of variable 'x'\n");
    scanf("%d",&num_degree);

    printf("Enter function coefficients, starting from the max degree term and ending with the constant\n");
    char temp;
    int i=num_degree;
    do
    {
        scanf("%d%c",&num_coeff[i],&temp);
        i--;
    } while (temp!='\n');
    
}

double test_function(float x)
{
    num_degree=2;den_degree=1;
    num_coeff[2]=1;
    den_coeff[1]=2;den_coeff[0]=1;
    double return_value=(calculate(x));
    return return_value;
}

double test_functiontwo(float x,float y)
{
    xdeg=2;ydeg=2;
    arr[2][0]=1; arr[0][2]=1;arr[1][1]=2;arr[0][0]=4;
    double return_value=calculatetwo(x,y);
    return return_value;
}