#include " queue . h "
#include " process . h "

Queue * create_queue ()
{
// Create a new Queue
// TODO ( Hint : Malloc )

return q ;
}

void enqueue ( Queue * q , PCB * process )
{
// Create a new Node
// TODO ( Hint : Malloc )

// If the queue is empty , the new node becomes both the first and
// the last node
// TODO

// Add the new node at the end and update last node
// TODO
}

PCB * dequeue ( Queue * q )
{
// If the queue is empty , return NULL
// TODO

// Remove the first node from the queue
// TODO

// If first becomes NULL , set last to NULL as well
// TODO

return pcb ;
}
