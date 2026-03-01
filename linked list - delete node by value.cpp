#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* deleteNode(struct Node* head, int key) {
    struct Node* temp = head;
    struct Node* prev = NULL;

    if(temp != NULL && temp->data == key) {
        head = temp->next;
        free(temp);
        return head;
    }

    while(temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    if(temp == NULL) return head;

    prev->next = temp->next;
    free(temp);

    return head;
}

void printList(struct Node* head) {
    while(head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;

    head = (struct Node*)malloc(sizeof(struct Node));
    head->data = 10;
    head->next = (struct Node*)malloc(sizeof(struct Node));
    head->next->data = 20;
    head->next->next = (struct Node*)malloc(sizeof(struct Node));
    head->next->next->data = 30;
    head->next->next->next = NULL;

    printList(head);

    head = deleteNode(head, 20); // delete 20
    printList(head);

    return 0;
}
