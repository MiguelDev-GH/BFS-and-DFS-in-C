#include "controller.c"

int main(){

    stack* s = init_stack();

    for(int i = 1; i <= 5; i++) stack_push(s,i);

    printf("%d\n", stack_size(s) > 0);

    while(stack_size(s) > 0){
        printf("%d ", stack_top(s));
        stack_pop(s);
    }

    printf("\n%d\n", stack_size(s) > 0);

    free(s);
    return 0;
}
