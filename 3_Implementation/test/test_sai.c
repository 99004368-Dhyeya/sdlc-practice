#include "unity.h"
#include "unity_internals.h"
#include "laplace.h"
#include "Siedel.h"
#include "PDE.h"

void test_gauss(void);
void test_laplace(void);
void test_PDE_heat(void);
void setUp(){
}

void tearDown(){
}
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_gauss);
   RUN_TEST(test_laplace);
   RUN_TEST(test_PDE_heat);


  /* Close the Unity Test Framework */
  return UNITY_END();
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