#include<stdio.h>
#define Max 5
int queue [Max];
int rear = -1;
int front = -1;
void enqueue()
{
	int a;
	if(rear == Max -1)
	{
		printf("\n overflow");
	}
	else
	{
		printf("\n enter element:");
		scanf("%d",&a);
		if (rear == -1 && front == -1)
		{
			rear = front = 0;
			queue [rear] = a;
		}
		else {
			rear ++ ;
			queue[rear] = a;
		}
	}
}
	void dequeue()
	{
		int temp ;
		if(front == -1)
		{
			printf("\n underflow");
		}
		else if (rear == front)
		{
			temp = queue[front];
			printf("\n the dequeued element %d",temp);
			rear = front = -1;			
		}
		else
		{
			temp = queue[front];
			printf("\n the dequeued element = %d", temp);
			front ++;	
				}
		
	}
void peek()
{
	if (front == -1)
	{
		printf("\n underflow");
		
	}
	else
	{
		printf("the front element = %d",queue[front]);
	}
	}
void display()
{
	int i;
	if (front == -1)
	{
		printf("\n underflow");
	}
	else
	{
		for(i = front;i <= rear; i++)
		{
			printf("\n %d",queue[i]);
				}		
	}
}
int main()
{
	int choice,ch = 1;
	while(ch)
	{
		printf("\n1.enqueue() \n2.dequeue()\n3.peek()\n4.display()");
		printf("\n enter your choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				enqueue ();
			   break;
			case 2:
				enqueue();
				break;
			case 3:
				peek();
				break;
			case4:
				display();
				break;
			default:
				printf("\n Invalid option");
				
		}
		printf("\n Do you want another option :");
		scanf("%d",&ch);
			}
			return 0;
}

