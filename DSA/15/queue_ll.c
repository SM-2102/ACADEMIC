/* menu driven program to implement queue using linked list
   1. insert
   2. delete
   3. display */

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

struct node *start = NULL;
struct node *last = NULL;

int max=5;
int count()
{
	struct node *ptr;
	ptr=start;
	int count=0;
	while(ptr!=NULL)
	{
		count++;
		ptr=ptr->next;
	}
	return count;
}

void ins_last()
{
	if(max==count(start))
	{
		printf("Queue Overflow.\n");
		return;
	}
	struct node *new_node;
	new_node=(struct node *)malloc(sizeof(struct node));
	printf("Enter data : ");
	scanf("%d",&new_node->data);
	new_node->next=NULL;
	if(start==NULL)
		start = last = new_node;		
	else
	{
		last->next = new_node;
		last = new_node;
	}
}


void del_beg()
{
	struct node *ptr;
	ptr = start;
	if(start==NULL)
	{
		printf("Queue Underflow.\n");
		return;
	}
	else if(start->next==NULL)
	{
		start = last = NULL;
		return;
	}
	start = start->next;
	free(ptr);
}

void display()
{
	struct node *ptr;
	ptr=start;
	if(ptr==NULL)
	{
		printf("Queue Empty.\n");
		return;
	}
	printf("The queue : ");
	while(ptr!=NULL)
	{
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}
	printf("\n");
}

int main()
{
	printf("Enter :\n1 to insert\n2 to delete\n3 to display\n4 to exit\n");
	int choice;
	do
	{
		printf("Enter choice : ");	
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				ins_last();
				break;
			case 2:
				del_beg();
				break;
			case 3:
				display();
				break;
			case 4:
				break;
			default:
				printf("Wrong Input.\n");
		}
	} while(choice!=4);
}
