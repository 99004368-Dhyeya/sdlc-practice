/**
 * @file startTime.c
 * @author Gobikumaar Sivagnanam
 * @brief Function for ending timer so that time spent on algorithm can be measured
 * @version 0.1
 * @date 2021-05-25
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "runtimeMeasure.h"

clock_t end = 0;
void endTime(){
    end = clock();
    //printf("%f\n",(double)end);
}