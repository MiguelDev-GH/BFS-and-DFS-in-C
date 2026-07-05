#ifndef VIEW_H
#define VIEW_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define msg_queue_initializing_error printf("Error to acess the queue, maybe not initialized\n")
#define msg_node_initializing_error printf("Error to create a new node\n")

#define msg_pop_empty_queue_error printf("Error to pop a element, empty queue\n");

typedef struct node{
    int value;
    struct node* next;
    struct node* prev;
} node;

typedef struct queue{
    node* front;
    node* back;
} queue;

queue* init_queue();
int queue_size();
void queue_push();
void queue_pop();
int queue_front();
int queue_back();

#endif
