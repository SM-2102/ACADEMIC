// implement circular queue using array
// insertion, deletion, display

#include <stdio.h>

int queue[10];
int max=10;
int front = -1, rear = -1;

void insert() 
{
    if ((front == rear + 1) || (front == 0 && rear == max - 1)) 
        printf("Queue Overflow.\n");
    else 
    {
        if (front == -1) 
            front = 0;
        rear = (rear + 1) % max;
        printf("Enter the item : ");
        scanf("%d",&queue[rear]);
    }
}

void delete()
{
    if (front == -1) 
        printf("Queue Underflow\n");
    else 
    {
        if (front == rear) 
            front=rear=-1;
        else
            front = (front + 1) % max;
    }
}

void display() 
{
    int i;
    if (front==-1)
        printf("Queue Empty\n");
    else 
    {
        printf("Th queue : ");
        for (i = front; i != rear; i = (i + 1) % max)
            printf("%d ", queue[i]);
        printf("%d\n", queue[i]);
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
