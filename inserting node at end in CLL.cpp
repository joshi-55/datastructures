 #include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *next;
};

struct node *head = NULL, *tail = NULL, *temp = NULL;

void create()
{
    struct node *newnode;
    int i, n;

    printf("\nEnter size: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        newnode = (struct node*) malloc(sizeof(struct node));
        
        printf("Enter data for node %d: ", i+1);
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        if(head == NULL)
        {
            head = tail = newnode;
            tail->next = head;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
            tail->next = head;
        }
    }
}

void display()
{
    if(head == NULL)
    {
        printf("List is empty");
        return;
    }

    temp = head;

    do
    {
        printf("%d ", temp->data);
        temp = temp->next;
    } 
    while(temp != head);
}

int main()
{
    create();
    
    printf("\nOriginal list: ");
    display();

    struct node *enode;
    enode = (struct node*) malloc(sizeof(struct node));

    printf("\nEnter new node data: ");
    scanf("%d", &enode->data);

    enode->next = NULL;

    tail->next = enode;
    tail = enode;
    tail->next = head;

    printf("\nAfter inserting: ");
    display();

    printf("\nHead data (tail->next): %d", tail->next->data);

    return 0;
}
