#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* top = NULL;

void push(int x) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = x;
    newNode->next = top;
    top = newNode;
}

void pop() {
    if(top == NULL) {
        printf("Stack Underflow\n");
    } else {
        struct Node* temp = top;
        printf("Popped: %d\n", top->data);
        top = top->next;
        free(temp);
    }
}

void peek() {
    if(top != NULL) {
        printf("Top element: %d\n", top->data);
    } else {
        printf("Stack is empty\n");
    }
}

int main() {
    push(5);
    push(10);
    push(15);

    peek();
    pop();
    peek();

    return 0;
}
