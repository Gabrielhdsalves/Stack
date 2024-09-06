#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

typedef struct tStruct {
    int data;
    struct tStruct *next;
} elementStack;

typedef struct tP {
    elementStack *topElement;
    int elementCount;
} stack;

stack *allocateMemory() {
    stack *newStack = (stack *)malloc(sizeof(stack));
    if (!newStack) {
        printf("Memory allocation failed for stack!\n");
        return NULL;
    }
    newStack->topElement = NULL;
    newStack->elementCount = 0;
    return newStack;
}

elementStack *allocateMemoryForElement() {
    elementStack *newElement = (elementStack *)malloc(sizeof(elementStack));
    if (!newElement) {
        printf("Memory allocation failed for element!\n");
        return NULL;
    }
    newElement->next = NULL;
    return newElement;
}

void push(stack *stack, int element) {
    elementStack *newElement = allocateMemoryForElement();
    if (!newElement) {
        return;
    }

    newElement->data = element;
    newElement->next = stack->topElement;
    stack->topElement = newElement;
    stack->elementCount++;
}

void popAll(stack *stack) {
    elementStack *aux;

    if (stack->elementCount != 0) {
        printf("\n");
        while (stack->elementCount != 0) {
            aux = stack->topElement;
            printf("Element: %d\n", aux->data);
            stack->topElement = aux->next;
            stack->elementCount--;
            free(aux);
        }
        free(stack);
        printf("Stack fully emptied!\n");
    } else {
        printf("empty stack!\n");
    }
}

int pop(stack *stack) {
    if (stack->elementCount == 0) {
        printf("\nempty stack!\n");
        return -1;
    }

    elementStack *aux = stack->topElement;
    int data = aux->data;
    stack->topElement = aux->next;
    free(aux);
    stack->elementCount--;
    return data;
}

void freeStack(stack *stack) {
    if (stack) {
        elementStack *aux;
        while (stack->topElement != NULL) {
            aux = stack->topElement;
            stack->topElement = aux->next;
            free(aux);
        }
        free(stack);
    }
}
