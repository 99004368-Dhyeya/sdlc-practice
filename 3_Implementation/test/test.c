#include "plotfunctions.h"
#include "unity.h"
#include "unity_internals.h"
#include "input.h"
#include "anm.h"
#include "root.h"
#include "laplace.h"
#include "Siedel.h"
#include "PDE.h"
#include "odenm.h"

void test_gauss(void);
void test_laplace(void);
void test_PDE_heat(void);
void setUp(){
}

void tearDown(){
}

double FC(double x){
    return 5*sin(x/2/3.14);
}

double funcS13(double x){
  return (1/(1+x));           // 1/(1+x)
}

double functrap(double x){
   return (1/(1+pow(x,2)));       // 1/(1+x^2)
}

double funcS38(double x){
    return (1/(1+pow(x,3)));         // 1/(1+x^3)
}

void test_simpson_1_3(){
    funcptr1 fptr = funcS13;
    TEST_ASSERT_EQUAL(0.510847,simpson_1_3(fptr));
}

void test_trapezoidal(){
    funcptr1 fptr = functrap;
    TEST_ASSERT_EQUAL(0.834982,trapezoidal(fptr));
}

void test_simpson_3_8(){
    funcptr1 fptr = funcS38;
    TEST_ASSERT_EQUAL(0.835712,simpson_3_8(fptr));
}

void test_plot_function()
{
    functionPointer Function = FC;
    TEST_ASSERT_EQUAL(WRITE_SUCCESS, function_plot(Function));
}

void test_points_plot_function()
{
    functionPointer Function = FC;
    double x[2] = {1 , 2}, y[2] = {1 , 2};
    TEST_ASSERT_EQUAL(WRITE_SUCCESS, points_function_plot(Function,x,y,2));
}


void test_plot_pointer_function()
{
    double x[2] = {1 , 2}, y[2] = {1 , 2};
    TEST_ASSERT_EQUAL(WRITE_SUCCESS, plot_pointer_function(x,y,2));
}


/**
 * @brief Unit Testing Function for Bi-Section Method for Transcedental Equations
 * 
 * @param x 
 * @return double 
 */
void test_Bisection1()
{
    num_degree=3;
    num_coeff[3]=5;
    num_coeff[2]=-5;
    num_coeff[1]=6;
    num_coeff[0]=-2;

    double return_value=(Algebraic_test());
    TEST_ASSERT_EQUAL(0.418101,return_value);
}

/**
 * @brief Unit Testing Function for Bi-Section Method for Algebraic Equations
 * 
 * @param x 
 * @return double 
 */
void test_Bisection2()
{
    num_degree=3;
    num_coeff[3]=5;
    num_coeff[2]=-5;
    num_coeff[1]=6;
    num_coeff[0]=-2;
    funct = 2;
    nu = 1;
    double return_value=(Transcedental_test());
    //num_degree=0;num_coeff[0]=0;num_coeff[1]=0;num_coeff[2]=0;num_coeff[3]=0;
    //funct =0;nu=0;
    TEST_ASSERT_EQUAL(0.195452,return_value);
}

void test_gauss(void) {
    float aa,bb,cc;
    float *x;
    x=gauss_siedell(&aa,&bb,&cc);
   TEST_ASSERT_EQUAL_FLOAT(1,x[0]);
   TEST_ASSERT_EQUAL_FLOAT(-1,x[1]);
   TEST_ASSERT_EQUAL_FLOAT(1,x[2]);
}
void test_laplace(void){
    //float vall[20]={0,3.45,6,7.5,8,7,6,3.5,0,3.45,5.95,7.9500,7.45,5.95,3.45};
    float vall[20]={23,23,23,23,23,23,100,58.09091,40.42803,31.9053,27.41,25};
    float *abc;
    abc = laplace(23,23,100,25);
    
    for (int i=1;i<10;i++){
            //float q=vall[i][j];
            //float (*zz)[20]=abc[i][j];
           TEST_ASSERT_EQUAL_FLOAT(vall[i],abc[i]);

        }
        
       

        
    }

    void test_PDE_heat(void){
    float values_PDE[20]={0,3.5,6,7.5,8,7.5,6,3.5,0,3.45,5.95,7.9500,7.45,5.95,3.45};
    float *expected_PDE;
    expected_PDE = heat(4,0,0);
      for (int i=0;i<10;i++){
            //float q=vall[i][j];
            //float (*zz)[20]=abc[i][j];
           // printf("%f ",expected_PDE[i]);
           TEST_ASSERT_EQUAL_FLOAT(values_PDE[i],expected_PDE[i]);

        }
    }
    void test_singlevar_func()
{
    float x=0.5;
    TEST_ASSERT_EQUAL(0.125000,test_function(x));
}
void test_twovar_func()
{
    float x=1.5,y=2.5;
    TEST_ASSERT_EQUAL(20.000000,test_functiontwo(x,y));
}

void test_Euler_func1(){
    //reset_values();
    //set_val();
    TEST_ASSERT_EQUAL_DOUBLE(1.0,EulerFormulaTest(0,1,0.1));
    TEST_ASSERT_EQUAL_DOUBLE(1.003,EulerFormulaTest(0.1,1.0,0.1));
    TEST_ASSERT_EQUAL_DOUBLE(1.01504,EulerFormulaTest(0.2,1.003,0.1));
    TEST_ASSERT_EQUAL_DOUBLE(1.04245,EulerFormulaTest(0.3,1.01504,0.1));
    TEST_ASSERT_EQUAL_DOUBLE(1.09245,EulerFormulaTest(0.4,1.04245,0.1));
    TEST_ASSERT_EQUAL_DOUBLE(1.17443,EulerFormulaTest(0.5,1.09245,0.1));
    TEST_ASSERT_EQUAL_DOUBLE(1.30127,EulerFormulaTest(0.6,1.17443,0.1));
    TEST_ASSERT_EQUAL_DOUBLE(1.49256,EulerFormulaTest(0.7,1.30127,0.1));
    TEST_ASSERT_EQUAL_DOUBLE(1.77913,EulerFormulaTest(0.8,1.49256,0.1));
    TEST_ASSERT_EQUAL_DOUBLE(2.14182,EulerFormulaTest(0.9,1.77913,0.1));
    TEST_ASSERT_EQUAL_DOUBLE(2.71828,EulerFormulaTest(1,2.14182,0.1));
}
void test_Euler_Modified_func1(){
    //set_val();
    TEST_ASSERT_EQUAL_DOUBLE(1.00075,EulerModifiedFormulaTest(0,1,0.1));
    TEST_ASSERT_EQUAL_DOUBLE(1.0075,EulerModifiedFormulaTest(0.1,1.00075,0.1));
    TEST_ASSERT_EQUAL_DOUBLE(1.08352,EulerModifiedFormulaTest(0.2,1.0075,0.1));
    TEST_ASSERT_EQUAL_DOUBLE(1.12076,EulerModifiedFormulaTest(0.3,1.08352,0.1));
    TEST_ASSERT_EQUAL_DOUBLE(1.19050,EulerModifiedFormulaTest(0.4,1.12076,0.1));
    TEST_ASSERT_EQUAL_DOUBLE(1.30259,EulerModifiedFormulaTest(0.5,1.19050,0.1));
    TEST_ASSERT_EQUAL_DOUBLE(1.47661,EulerModifiedFormulaTest(0.6,1.30259,0.1));
    TEST_ASSERT_EQUAL_DOUBLE(1.74410,EulerModifiedFormulaTest(0.7,1.47661,0.1));
    TEST_ASSERT_EQUAL_DOUBLE(2.15842,EulerModifiedFormulaTest(0.8,1.74410,0.1));
    TEST_ASSERT_EQUAL_DOUBLE(2.81384,EulerModifiedFormulaTest(0.9,2.15842,0.1));
    TEST_ASSERT_EQUAL_DOUBLE(3.88412,EulerModifiedFormulaTest(1,2.81384,0.1));
}

void test_Runge_Kutta_func1(){
    //set_val();
    TEST_ASSERT_EQUAL_DOUBLE(1.001,RungeKuttaFormulaTest(0,1,0.1));
    TEST_ASSERT_EQUAL_DOUBLE(1.00802,RungeKuttaFormulaTest(0.1,1.001,0.1));
    TEST_ASSERT_EQUAL_DOUBLE(1.02730,RungeKuttaFormulaTest(0.2,1.00802,0.1));
    TEST_ASSERT_EQUAL_DOUBLE(1.06587,RungeKuttaFormulaTest(0.3,1.02730,0.1));
    TEST_ASSERT_EQUAL_DOUBLE(1.09345,RungeKuttaFormulaTest(0.4,1.06587,0.1));
    TEST_ASSERT_EQUAL_DOUBLE(1.19691,RungeKuttaFormulaTest(0.5,1.09345,0.1));
    TEST_ASSERT_EQUAL_DOUBLE(1.35754,RungeKuttaFormulaTest(0.6,1.19691,0.1));
    TEST_ASSERT_EQUAL_DOUBLE(1.60456,RungeKuttaFormulaTest(0.7,1.35754,0.1));
    TEST_ASSERT_EQUAL_DOUBLE(1.98746,RungeKuttaFormulaTest(0.8,1.60456,0.1));
    TEST_ASSERT_EQUAL_DOUBLE(3.58510,RungeKuttaFormulaTest(1,2.81384,0.1));   
}

int main(void){
    UNITY_BEGIN();
    RUN_TEST(test_Euler_func1);
    RUN_TEST(test_Euler_Modified_func1);
    RUN_TEST(test_Runge_Kutta_func1);
    RUN_TEST(test_singlevar_func);
    RUN_TEST(test_twovar_func);
    RUN_TEST(test_Bisection1);      
    RUN_TEST(test_Bisection2);
    RUN_TEST(test_simpson_1_3);
    RUN_TEST(test_trapezoidal);
    RUN_TEST(test_simpson_3_8);
    RUN_TEST(test_plot_function);
    RUN_TEST(test_points_plot_function);
    RUN_TEST(test_plot_pointer_function);
    RUN_TEST(test_gauss);
    RUN_TEST(test_laplace);
    RUN_TEST(test_PDE_heat);
    RUN_TEST(test_Euler_func1);
    RUN_TEST(test_Euler_Modified_func1);
    RUN_TEST(test_Runge_Kutta_func1);
    return UNITY_END();
}