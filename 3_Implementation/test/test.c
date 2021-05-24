#include "plotfunctions.h"
#include "unity.h"
#include "unity_internals.h"

void setUp(){
}

void tearDown(){
}

double FC(double x){
    return 5*sin(x/2/3.14);
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


int main(void){
    UNITY_BEGIN();
    RUN_TEST(test_plot_function);
    RUN_TEST(test_points_plot_function);
    RUN_TEST(test_plot_pointer_function);
    return UNITY_END();
}