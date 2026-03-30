#include<stdio.h>
#include<stdlib.h>
struct node 
{
	struct node*prev;
	int data;
	struct node*next;
};
struct node *head =0,*tail = 0,*temp = 0 ;
void create()
{
	struct node * newnode;
	int i, n;
	printf("\n enter n size:");
	scanf("%d",&n);
for (i=0;i<n;i++)
{
	newnode =( struct node*) malloc (sizeof(struct node));
	printf("\n enter node %d data:");
	scanf("%d",&newnode->data);
	newnode ->prev = 0;
	newnode ->next=0;
	if(head==NULL){
		head = tail = newnode;
	}
	else {
		tail->next = newnode;
		newnode ->prev = tail;
		tail = newnode;
	}
}
}
void display()
{
	temp = head;
	while(temp !=0)
	{
		printf("%d",temp->data);
		temp = temp->next;
	}
}
int main()
{
	create();
	display();
	int i,pos;
	printf("\n enter position:");
	scanf("%d",&pos);
	if (head == NULL)
	{
		printf("\nlist is empty");
	}
	else if(pos==1)
	{
		head = head -> next;
		free(head -> prev);
		head -> prev =0;
	}
	else
	{
		temp = head;
		for(i =1;i<pos -1;i++)
		{
			temp = temp -> next;
		}
		temp -> next = temp -> next -> next;
		free(temp -> next -> prev);
		temp -> next -> prev = temp;
	}
	display();
	return 0;
	
}
