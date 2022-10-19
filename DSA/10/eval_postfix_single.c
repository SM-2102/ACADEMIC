//evaluation of postfix for single-digit

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int stack[20];
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

int eval_postfix(char exp[])
{
	int num,n1,n2,n3,n;
	for(int i=0;i<strlen(exp);i++)
	{
		if(isdigit(exp[i]))
		{
			num = exp[i]-48;
			push(num);
		}
		else
		{
			n1=pop();
			n2=pop();
			switch(exp[i])
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
					break;
			}
			push(n3);	
		}
	}
	return stack[0];						
}

int main()
{
	char exp[20];
	printf("Enter the postfix expression : \n");
	scanf("%s",exp);
	printf("The answer : %d\n",eval_postfix(exp));
}
