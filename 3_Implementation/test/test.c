#include "anm.h"
#include "unity.h"
#include "unity_internals.h"

void setUp(){
}

void tearDown(){
}

void test_newton_raphson(){
    funcptr1 fptr_t1 = funcNRM;
    funcptr2 fptr_t2 = dfuncNRM;
    TEST_ASSERT_EQUAL(2.740646,newton_raphson(fptr_t1,fptr_t2));
}

void test_bisection(){
    funcptr1 fptr = funcBM;
    TEST_ASSERT_EQUAL(2.706543,bisection(fptr));
}

void test_regula_falsi(){
    funcptr1 fptr = funcRF;
    TEST_ASSERT_EQUAL(0.517727,regula_falsi(fptr));
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

void test_forward_difference(){
    TEST_ASSERT_EQUAL(3.775502,forward_difference());
}

void test_backward_difference(){
    TEST_ASSERT_EQUAL(2.811621,backward_difference());
}

void test_two_point_difference(){
    funcptr1 fptr = funcTPD;
    TEST_ASSERT_EQUAL(4.297853,two_point_difference(fptr));
}

int main(void){
    UNITY_BEGIN();
    RUN_TEST(test_newton_raphson);
    RUN_TEST(test_bisection);
    RUN_TEST(test_regula_falsi);
    RUN_TEST(test_simpson_1_3);
    RUN_TEST(test_trapezoidal);
    RUN_TEST(test_simpson_3_8);
    RUN_TEST(test_forward_difference);
    RUN_TEST(test_backward_difference);
    RUN_TEST(test_two_point_difference);
    return UNITY_END();
}