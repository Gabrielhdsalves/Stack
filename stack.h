typedef struct tStruct elementStack;
typedef struct tP stack;

stack *allocateMemory();
elementStack *allocateMemoryForElement();
void push(stack *stack, int element);
void printStack(stack *stack);
void freeStack(stack *stack);
int pop(stack *stack);
