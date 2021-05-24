#include "runtimeMeasure.h"

void calculateTime(){
    double timeMeasured = 0;
    timeMeasured += (double)(end - begin) / CLOCKS_PER_SEC;
    printf("The elapsed time is %f seconds", timeMeasured);
}