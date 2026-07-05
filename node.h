#ifndef NODE_H
#define NODE_H

typedef struct node_double{
    int value;
    struct node_double* next;
    struct node_double* prev;
} node_double;

typedef struct node_single{
    int value;
    struct node_single* next;
} node_single;

#define msg_node_initializing_error printf("Error to create a new node\n")

#endif