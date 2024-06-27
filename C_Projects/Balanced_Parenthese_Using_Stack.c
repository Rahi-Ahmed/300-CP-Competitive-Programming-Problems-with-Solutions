#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char *items;
    int top;
    int max_size;
} Stack;

// Initialize stack
Stack *create_stack(int size){
    Stack *stack = (Stack *)malloc(sizeof(Stack));
    stack->items = (char *)malloc(size * sizeof(char)); // Allocate memory for 'size' characters
    stack->top = -1;
    stack->max_size = size;
    return stack;
}

int is_empty(Stack *stack){
    return stack->top == -1;
}

int is_full(Stack *stack){
    return stack->top == stack->max_size - 1;
}

char pop(Stack *stack){
    if(is_empty(stack)){
        printf("Stack Underflow, cannot pop\n");
        return '\0'; // Return null character for error
    }
    return stack->items[stack->top--];
}

void push(Stack *stack, char data){
    if(is_full(stack)){
        printf("Stack Overflow, cannot push\n");
        return;
    }
    stack->items[++stack->top] = data;
}

void free_stack(Stack *stack){
    free(stack->items);
    free(stack);
}

int main(){
    Stack *stack = create_stack(50); // Create stack with a max size of 50

    char a[50];
    scanf("%s", a); // Read the input string

    for(int i = 0; a[i] != '\0'; i++){ // Iterate over the input string
        if(a[i] == '('){
            push(stack, a[i]); // Push '(' onto the stack
        } else if(a[i] == ')'){
            if(is_empty(stack)) { // If stack is empty, it's unbalanced
                printf("Unbalanced\n");
                free_stack(stack);
                return 0;
            }
            pop(stack); // Pop from the stack for ')'
        }
    }

    if(is_empty(stack)){
        printf("Balanced\n");
    } else {
        printf("Unbalanced\n");
    }

    free_stack(stack);
    return 0;
}
