#ifndef STACK_H
#define STACK_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "../node.h"

#define msg_stack_initializing_error printf("Error to acess the stack, maybe not initialized\n")
#define msg_pop_empty_stack_error printf("Error to pop a element, empty stack\n");

typedef struct stack{
    node_single* top;
} stack;

stack* init_stack();
int stack_size();
void stack_push();
void stack_pop();
int stack_top();

#endif
