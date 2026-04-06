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
	display();
	if (head ==0 )
	{
		printf("\n list is empty");
	}
	else if (head == tail )
	{
		free(head);
		head =tail =0;
	}
	else
	{
		temp = head;
		head = head ->next;
		free(temp);
tail -> next = head ;
}
printf("\n after deletion :");
display();
printf("\n %d",tail -> next -> data);
return 0;
}
