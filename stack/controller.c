#include "view.h"

stack* init_stack(){
    stack* s = (stack*) malloc(sizeof(stack));
    if(s == NULL){
        printf("Error to initialize stack\n");
        return NULL;
    }
    s->top = NULL;
    return s;
}

int stack_size(stack* s){
    if(s == NULL){
        msg_stack_initializing_error;
        return -1;
    } else if(s->top == NULL){
        return 0;
    }

    node* top = s->top;
    int cont = 1;

    while(top->next != NULL){
        top = top->next;
        cont++;
    }

    return cont;
}

void stack_push(stack* s, int v){
    if(s == NULL){
        msg_stack_initializing_error;
        return;
    }

    node* new_node = (node*) malloc(sizeof(node));
    if(new_node == NULL){
        msg_node_initializing_error;
        return;
    }

    new_node->next = s->top;
    new_node->value = v;
    s->top = new_node;

    return;

}

void stack_pop(stack* s){
    if(s == NULL){
        msg_stack_initializing_error;
        return;
    }else if(stack_size(s) <= 0){
        msg_pop_empty_stack_error;
        return;
    }
    
    node* toPop = s->top;
    s->top = toPop->next;

    free(toPop);
}

int stack_top(stack* s){
    if(s == NULL){
        msg_stack_initializing_error;
        return -1;
    } else if(stack_size(s) <= 0) return -1;

    return s->top->value;
}
