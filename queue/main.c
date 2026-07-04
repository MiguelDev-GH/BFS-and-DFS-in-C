#include "controller.c"

int main(){
    printf("yo\n");

    queue* q = init_queue();

    printf("%d\n",queue_size(q));

    queue_push(q,1);
    queue_push(q,2);
    queue_push(q,3);

    printf("%d\n",queue_size(q));

    queue_pop(q);;

    printf("%d\n",queue_size(q));

    free(q);

    return 0;
}
