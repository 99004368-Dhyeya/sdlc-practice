#ifndef __RUNTIMEMEASURE_H__
#define __RUNTIMEMEASURE_H__

#include <stdio.h>
#include <time.h>
extern clock_t begin;
extern clock_t end;
void startTime();
void endTime();
void calculateTime();

#endif