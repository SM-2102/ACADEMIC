//evaluating the postfix expression using multidigit operands

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

int stack[20];
int top=-1;
int max=20;

int isoperator(char ch)
{
	if(ch=='/' || ch=='*' || ch=='%' || ch=='-' || ch=='+')
		return 1;
	else
		return 0;
}

int pop()
{
	if(top==-1)
	{
		printf("Stack Underflow.\n");
		exit(1);
	}
	else
	{
		int value = stack[top];
		top--;
		return value;
	}
}

void push(int value)
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

int eval(int n1, int n2,char op)
{
	int n3,n;
	switch(op)
	{
		case '-':
			n3=n2-n1;
			break;
		case '+':
			n3=n2+n1;
			break;
		case '/':
			n3=n2/n1;
			break;
		case '*':
			n3=n2*n1;
			break;
		case '%':
			n = n2/n1;
			n3 = n2 - (n1*n);
			break;
		deafult:
			printf("Invalid input.\n");
			exit(1);
			break;
	}
	return n3;

}	

int main()
{
	char exp[20];
	int n1,n2,num,n;
	printf("Enter the postfix expression : \n");
	printf("Note: Use space after each operand and operator.\n");
	gets(exp);	
	for(int i=0;i<strlen(exp);i++)
	{
		char c = exp[i];
		if(isoperator(c))
		{
			n1 = pop();
			n2 = pop();
			n = eval(n1,n2,c);
			push(n);
		}
		else if(c==' ')
			continue;
		else
		{
			num=0;
			while(isdigit(c))
			{
				num=num*10+(c-'0');
				i++;
				c = exp[i];
			}
			i--;	
			push(num);
		}
	}
	printf("The answer : %d\n",pop());
}
	
