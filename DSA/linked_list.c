/* menu driven program to implement linked list 
   1. new node in the beginning
   2. new node at the end
   3. calculate the number of nodes
   4. add node at specified position
   5. display the linked list */

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

struct node *start = NULL;

struct node *create_list(struct node *start)
{
	struct node *new_node, *ptr;
	int num;
	printf("Enter -1 to stop.\n");
	printf("Enter data : ");
	scanf("%d",&num);
	while(num!=-1)
	{
		new_node=(struct node *)malloc(sizeof(struct node));
		new_node->data=num;
		if(start==NULL)
		{
			new_node -> next= NULL;
			start=new_node;
		}
		else
		{
			ptr=start;
			while(ptr->next !=NULL)
				ptr = ptr->next;
			ptr->next = new_node;
			new_node->next=NULL;
		}
		printf("Enter data : ");
		scanf("%d",&num);
	}
	return start;
}

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

void *ins_beg()
{
	struct node *new_node;
	new_node=(struct node *)malloc(sizeof(struct node));
	printf("Enter the value : ");
	scanf("%d",&new_node->data);
	new_node->next = start;
	start = new_node;
}

void ins_last()
{
	struct node *new_node,*ptr;
	ptr=start;
	if(ptr==NULL)
	{
		ins_beg();
		return;
	}
	new_node=(struct node *)malloc(sizeof(struct node));
	new_node->next=NULL;
	printf("Enter the value : ");
	scanf("%d",&new_node->data);
	while(ptr->next!=NULL)
		ptr=ptr->next;
	ptr->next = new_node;
}

void ins_pos()
{
	struct node *new_node,*ptr;
	ptr=start;
	int pos,i=1;
	printf("Enter the position : ");
	scanf("%d",&pos);
	if(ptr==NULL)
	{		
		ins_beg();		
		return;
	}
	if (pos>count())
	{
		ins_last();
		return;
	}
	new_node=(struct node *)malloc(sizeof(struct node));
	new_node->next=NULL;
	printf("Enter the value : ");
	scanf("%d",&new_node->data);
	while(i<pos-1)
	{
		ptr=ptr->next;
		i++;		
	}
	new_node->next = ptr->next;
	ptr->next = new_node;
}

void display()
{
	struct node *ptr;
	ptr=start;
	if(ptr==NULL)
	{
		printf("The linked list is empty.\n");
		return;
	}
	printf("The linked list : ");
	while(ptr!=NULL)
	{
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}
	printf("\n");
}

int main()
{
	start = create_list(start);
	printf("Enter :\n1 to insert a node in the beginning\n2 to insert a node in the end\n3 to calculate the number of nodes\n4 to insert a node at specified position\n5 to display the list\n6 to exit.\n");
	int choice;
	do
	{
		printf("Enter choice : ");	
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				ins_beg();
				break;
			case 2:
				ins_last();
				break;
			case 3:
				printf("The number of nodes : %d\n",count());
				break;
			case 4:
				ins_pos();
				break;
			case 5:
				display();
				break;
			case 6:
				break;
			default:
				printf("Wrong Input.\n");
		}
	} while(choice!=6);
}
