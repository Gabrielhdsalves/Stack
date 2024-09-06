#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main(void) {
    stack *stacks;
    stacks = allocateMemory();

    if (!stacks) {
        return 0;
    }

    push(stacks, 5);
    push(stacks, 6);
    push(stacks, 7);
    push(stacks, 10);
    push(stacks, 15);
    push(stacks, 25);
    push(stacks, 35);
    
    printf("\n%d", pop(stacks));
    printf("\n%d", pop(stacks));
    printf("\n%d", pop(stacks));
    printf("\n%d", pop(stacks));
    printf("\n%d", pop(stacks));
    printf("\n%d", pop(stacks));
    printf("\n%d", pop(stacks));
    printf("\n%d", pop(stacks));
    printf("\n%d", pop(stacks));
    printf("\n%d", pop(stacks));

    return 1;
}
