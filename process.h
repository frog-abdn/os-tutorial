# ifndef PROCESS_H
# define PROCESS_H

// Process Control Block
typedef struct pcb {
int id ; // process identifier
int processing_time ; // processing time
int start_time ; // start time
int total_time ; // total time used
} PCB ;

// Process Entry
typedef struct process_entry {
int ID ;
int arrival_time ;
int processing_time ;
} ProcessEntry ;

# endif
