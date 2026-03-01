#include <stdio.h>
#define SIZE 5

int stack[SIZE];
int top = -1;

void push(int x) {
    if(top == SIZE - 1) {
        printf("Stack Overflow\n");
    } else {
        stack[++top] = x;
    }
}

void pop() {
    if(top == -1) {
        printf("Stack Underflow\n");
    } else {
        printf("Popped element: %d\n", stack[top--]);
    }
}

int main() {
    push(10);
    push(20);
    push(30);
    
    pop();
    pop();
    
    return 0;
}
