// implement linear queue using array
// insertion, deletion, display

#include<stdio.h>

int front = -1;
int max = 10;
int queue[10];
int rear = -1;

void insert()
{
	if (rear==max-1)
		printf("Queue Overflow\n");
	else
	{
		if(front==-1 && rear ==-1)
			front=rear=0;
		else
			rear++;
	}
	printf("Enter the value : ");
	scanf("%d",&queue[rear]);
}

void delete()
{
	if(front==-1 || front>rear)
		printf("Queue Underflow\n");
	else if (front==rear)
		front=rear=-1;
	else
		front++;
}

void display()
{
	if(front==-1 || front>rear)
		printf("Queue is Empty\n");
	else
	{
		printf("The queue : ");
		for(int i=front;i<=rear;i++)
			printf("%d ",queue[i]);
		printf("\n");
	}

}

int main()
{
	int choice;
	do
	{
		printf("Enter 1 to insert, 2 to delete, 3 for display, 4 to exit : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				insert();
				break;
			case 2:
				delete();
				break;
			case 3:
				display();
				break;
			case 4:
				break;						
			default:
				printf("Wrong Input\n");
		}
	} while(choice!=4);
}
