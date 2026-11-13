#include "dispatcher.h"
#include "process.h"
#include "queue.h"

void dispatcher ( SchedulingAlgorithm scheduling_algorithm ,
ProcessEntry test_data [] ,
int processes )
{
Queue * ready_queue = create_queue () ; // Ready queue
PCB * running_process = NULL ; // Currently running process

int process_counter = 0;
int tick = 0;

// Dispatcher loop
while ( tick < RUNNINGTIME ) {
// Check whether a new process has arrived
for ( int i = 0; i < processes ; i ++) {
if ( test_data [ i ]. arrival_time == tick ) {
// Create a Process Control Block
// TODO ( Hint : Malloc )

// Initialise the PCB
pcb - > id = process_counter ++;
// TODO

// Append the process to Ready queue
enqueue ( ready_queue , pcb ) ;
// Print info message
printf ( " Time : %d , Process ID : % d \ n " , tick , pcb - > id ) ;
}
}

// If there is a process running ..
if ( running_process != NULL ) {
// Print info message
printf ( " [ Running ] Time : %d , Process ID : % d \ n " , tick ,
running_process - > id ) ;k
// .. check whether the simulation time is used up for this process
if ( running_process - > total_time <
running_process - > processing_time ) {
// Make scheduling decision based on selected algorithm
switch ( scheduling_algorithm ) {
case FCFS :
// TODO
break ;
default :
// TODO : Error handling
}
} else {
// Process finished
printf ( " [ Finished ] Time : %d , Process ID : % d \ n " ,
tick , running_process - > id ) ;
free ( running_process ) ;
running_process = NULL ;
}
} else {
// Schedule a new process
running_process = dequeue ( ready_queue ) ;
}
tick ++;
}
free ( ready_queue ) ;
}
