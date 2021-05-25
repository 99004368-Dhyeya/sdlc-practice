/**
 * @file calculateTime.c
 * @author Gobikumaar Sivagnanam
 * @brief Function for calculating time spent on each method
 * @version 0.1
 * @date 2021-05-25
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "runtimeMeasure.h"

void calculateTime(){
    double timeMeasured = 0;
    timeMeasured += (double)(end - begin) / CLOCKS_PER_SEC;
    printf("The elapsed time is %f seconds", timeMeasured);
}