/* menu driven program to implement stack using linked list
   1. push
   2. pop
   3. display */

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

struct node *start = NULL;

int count(struct node *start)
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

struct node *ins_beg(struct node *start,int max)
{
	if(max==count(start))
	{
		printf("Stack Overflow.\n");
		return start;
	}
	struct node *new_node;
	new_node=(struct node *)malloc(sizeof(struct node));
	printf("Enter data : ");
	scanf("%d",&new_node->data);
	if(start==NULL)
	{
		new_node->next = NULL;
		start = new_node;
	}
	else
	{
	
		new_node->next = start;
		start = new_node;
	}
	return start;
}

struct node *del_beg(struct node *start)
{
	struct node *ptr;
	ptr = start;
	if(start==NULL)
	{
		printf("Stack Underflow.\n");
		return start;
	}
	start = start->next;
	free(ptr);
	return start;
}

void display()
{
	struct node *ptr;
	ptr=start;
	if(ptr==NULL)
	{
		printf("Stack Empty.\n");
		return;
	}
	printf("The stack : ");
	while(ptr!=NULL)
	{
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}
	printf("\n");
}

int main()
{
	int max;
	printf("Enter the max value : ");
	scanf("%d",&max);
	printf("Enter :\n1 to push\n2 to pop\n3 to display\n4 to exit\n");
	int choice;
	do
	{
		printf("Enter choice : ");	
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				start = ins_beg(start,max);
				break;
			case 2:
				start = del_beg(start);
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
