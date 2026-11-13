#ifndef DISPATCHER_H
#define DISPATCHER_H

#include <stdio.h>
#include "process.h"

#define RUNNINGTIME 1000 // Set an upper limit for the total running time

typedef enum {
FCFS // First - Come - First - Served
} SchedulingAlgorithm ;

void dispatcher ( SchedulingAlgorithm sa , ProcessEntry test_data [] , int length ) ;

#endif
