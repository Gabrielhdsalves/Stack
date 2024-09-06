# Stack

## This repository was created for study purposes. I tested methods for creating the stack data structure.

---

- It is recommended to have a C compiler to run this code. It was tested and compiled using the **GNU Compiler Collection (GCC)**.

- If you have the same compiler, the command used in the terminal is:

```bash
gcc -Wall -o exec main.c stack.c
```


### Wall:
This option enables the display of warnings during compilation, which helps identify potential issues in the code. The -Wall flag activates a set of common warnings useful for detecting bugs or unexpected behavior.

### o:
The -o option specifies the name of the output file. In this case, the executable generated after compilation will be named exec. If this option is not used, GCC will generate an executable with the default name a.out.

---

## Functions

```c
typedef struct tStruct {
    int data;
    struct tStruct *next;
} elementStack;
```

```c
typedef struct tP {
    elementStack *topElement;
    int elementCount;
} stack;
```

### Push:

```c
void push(stack *stack, int element)
```
This function inserts an element at the top of the stack. It takes two parameters:

- stack *stack: The stack structure represented by typedef struct tP.
int element: The element to be pushed onto the stack.


### popAll:

```c
void popAll(stack *stack) 
```

This function removes all elements from the stack, starting from the top until the stack is empty. It takes the following parameter:

- stack *stack: The stack from which elements will be removed.

### pop:

```c
int pop(stack *stack)
```

This function removes only the top element from the stack. Each time it's called, it removes the current top element. It takes the following parameter:

- stack *stack: The stack from which the top element will be removed.