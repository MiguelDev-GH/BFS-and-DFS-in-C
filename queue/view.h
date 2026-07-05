#ifndef QUEUE_H
#define QUEUE_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "../node.h"

#define msg_queue_initializing_error printf("Error to acess the queue, maybe not initialized\n")
#define msg_pop_empty_queue_error printf("Error to pop a element, empty queue\n");

typedef struct queue{
    node_double* front;
    node_double* back;
} queue;

queue* init_queue();
int queue_size();
void queue_push();
void queue_pop();
int queue_front();
int queue_back();

#endif
