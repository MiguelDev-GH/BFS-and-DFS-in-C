#include "view.h"

queue* init_queue(){
    queue* q = (queue*) malloc(sizeof(queue));
    if(q == NULL) printf("Error to initialize the queue");
    q->front = NULL;
    q->back = NULL;
    return q;
}

int queue_size(queue* q){
    if(q == NULL){
        msg_queue_initializing_error;
        return -1;
    }

    if(q->front == NULL) return 0;
    else if(q->front == q->back) return 1;
    
    node* front = q->front;
    int cont = 1;

    while(front->next != NULL){
        front = front->next;
        cont++;
    }

    return cont;
}

void queue_push(queue* q, int v){
    if(q == NULL){
        msg_queue_initializing_error;
        return;
    }

    node* new_node = (node*) malloc(sizeof(node));
    if(new_node == NULL){
        msg_node_initializing_error;
        return;
    }

    new_node->next = NULL;
    new_node->value = v;
    new_node->prev = q->back;

    if(q->front == NULL){
        q->front = new_node;
        q->back = new_node;
    } else {
        node* last = q->back;
        last->next = new_node;
        q->back = new_node;
    }
}

void queue_pop(queue* q){
    if(q == NULL) msg_queue_initializing_error;
    else if(queue_size(q) <= 0){
        msg_pop_empty_queue_error;
        return;
    }

    node* toPop = q->back;

    if(queue_size(q) == 1){
        q->back = toPop->prev;
    } else {
        toPop->prev->next = NULL;
    }

    free(toPop);
}
