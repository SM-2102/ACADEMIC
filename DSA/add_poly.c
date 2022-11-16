// add two polynomials using linked list

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int coeff;
	int pow;
	struct node *next;
};

void read(struct node **poly)
{
	int flag;
	struct node *temp = (struct node *)malloc(sizeof(struct node ));
	*poly=temp;
	do
	{
		printf("Coefficient : ");
		scanf("%d",&temp->coeff);
		printf("Exponent : ");
		scanf("%d",&temp->pow);
		temp->next=NULL;
		printf("1 to continue, 0 to stop : ");
		scanf("%d",&flag);
		if(flag)
		{
			temp->next = (struct node *)malloc(sizeof(struct node));
			temp = temp->next;
		}
	} while(flag);
}

void display(struct node *poly)
{
	while(poly!=NULL)
	{
		printf("%dx^%d",poly->coeff,poly->pow);
		poly = poly->next;
		if(poly!=NULL)
			printf(" + ");
	}
	printf("\n");
}

void add(struct node *first, struct node *second, struct node **answer)
{
	struct node *temp = (struct node*)malloc(sizeof(struct node));
	temp->next = NULL;
	*answer = temp;
	while(first && second)
	{
		if(first->pow > second->pow)
		{
			temp->coeff = first->coeff;
			temp->pow = first ->pow;
			first = first->next;
		}
		else if (first->pow < second->pow)
		{
			temp -> coeff = second->coeff;
			temp -> pow = second -> pow;
			second = second -> next;
		}
		else
		{
			temp -> coeff = first->coeff + second -> coeff;
			temp->pow = first->pow;
			first = first->next;
			second = second->next;
		}
		if(first&&second)
		{
			temp->next = (struct node *)malloc(sizeof(struct node));
			temp = temp->next;
			temp->next = NULL;
		}
	}
	while(first || second)
	{
		temp->next = (struct node*)malloc(sizeof(struct node));
		temp = temp->next;
		temp -> next = NULL;
		if(first)
		{
			temp->coeff = first->coeff;
			temp->pow = first->pow;
			first = first->next;
		}
		else if(second)
		{
			temp->coeff = second->coeff;
			temp->pow = second->pow;
			second = second -> next;
		}
	}
}
	

int main()
{
	struct node *first,*second,*answer = NULL;
	printf("The 1st expression : \n");
	read(&first);
	printf("The 2nd expression : \n");
	read(&second);
	printf("The first expression : ");
	display(first);
	printf("The second expression :");
	display(second);
	add(first,second,&answer);
	printf("The final expression :");
	display(answer);
}
