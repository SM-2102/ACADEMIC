//conversion from infix to postfix using stack

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

char stack[20];
int top=-1;
int max=20;
	
void push(char value)
{
	if(top==max-1)
	{
		printf("Stack Overflow.\n");
		exit(1);
	}
	else
	{
		top++;
		stack[top]= value;
	}
}

char pop()
{
	if(top==-1)
	{
		printf("Stack Underflow.\n");
		exit(1);
	}
	else
	{
		char value = stack[top];
		top--;
		return value;
	}
}

int is_operator(char ch)
{
	if(ch=='^' || ch=='/' || ch=='*' || ch=='%' || ch=='-' || ch=='+')
		return 1;
	else
		return 0;
}

int precedence(char ch)
{
	switch(ch)
	{
		case '+':
		case '-':
			return 1;
		case '%':
			return 2;
		case '*':
		case '/':
			return 3;
		case '^':
			return 4;
		default:
			return 0;
	}	
}

void in_to_post(char infix[], char postfix[])
{
	int i=0,j=0;
	char x;
	push('(');
	strcat(infix,")");
	char ch = infix[i];
	while(ch!='\0')
	{
		if(ch=='(')
			push(ch);
		else if(isalnum(ch))
		{
			postfix[j]=ch;
			j++;
		}
		else if(is_operator(ch)==1)
		{
			x=pop();
			while(is_operator(x)==1 && precedence(x) >= precedence(ch))
			{
				postfix[j] = x;
				j++;
				x=pop();
			}
			push(x);
			push(ch);
		}
		else if(ch==')')
		{
			x = pop();
			while(x!='(')
			{
				postfix[j] =x;
				j++;
				x=pop();
			}
		}
		else
		{
			printf("Invalid Expression.\n");
			exit(1);
		}
		i++;
		ch = infix[i];
	}
	if(top>0)
	{
		printf("Invalid Expression.\n");
		exit(1);
	}
	postfix[j]='\0';
}

int main()
{
	char infix[25],postfix[25];
	printf("Enter the infix expression : \n");
	scanf("%s",infix);
	in_to_post(infix,postfix);
	printf("The postix expression : \n%s\n",postfix);
}	

