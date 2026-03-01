#include <stdio.h>
#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

void enqueue(int x) {
    if((front == 0 && rear == SIZE-1) || (rear + 1 == front)) {
        printf("Queue Overflow\n");
    } else {
        if(front == -1) front = 0;
        rear = (rear + 1) % SIZE;
        queue[rear] = x;
    }
}

void dequeue() {
    if(front == -1) {
        printf("Queue Underflow\n");
    } else {
        printf("Dequeued element: %d\n", queue[front]);
        if(front == rear) { // last element
            front = rear = -1;
        } else {
            front = (front + 1) % SIZE;
        }
    }
}

void display() {
    if(front == -1) {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements: ");
    int i = front;
    while(1) {
        printf("%d ", queue[i]);
        if(i == rear) break;
        i = (i + 1) % SIZE;
    }
    printf("\n");
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50); // Queue full
    display();

    dequeue();
    dequeue();
    display();

    enqueue(60);
    display();

    return 0;
}
