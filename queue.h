#ifndef QUEUE_H
#define QUEUE_H

#include < stdio .h >
#include < stdlib .h >
#include " process . h "

// Node
typedef struct Node {
PCB *pcb ; // Process Control Block
struct Node * next ; // Next Node
} Node ;

// Queue
typedef struct queue {
Node* first ; // First Node in the queue
Node* last ; // Last Node in the queue
} Queue ;

// NOTE : You can use the ArrayList from Exercise 2.2.

// Create a new queue
// Returns a pointer to the queue
Queue *create_queue () ;

// Add a Node to the end of the queue
void enqueue ( Queue* queue , PCB * process ) ;

// Remove the first Node from the queue
// Returns the PCB of the Node
PCB * dequeue ( Queue* queue ) ;

# endif
