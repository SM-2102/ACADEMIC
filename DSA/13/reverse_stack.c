// reverse a string using stack

#include<stdio.h>
#include<string.h>

int top=-1;
int max=50;
char stack[50];

void push(char value)
{
    if(top==max-1)
        printf("Stack Overflow.\n");
    else
    {
        top++;
        stack[top]=value;
    }
}   

void pop()
{
        while(top!=-1)
        {
            printf("%c",stack[top]);
            top--;
        }
}

int main()
{
    char arr[60];
    printf("Enter the string : ");
    gets(arr);
    for(int i=0;i<strlen(arr);i++)
        push(arr[i]);
    printf("The reverse string : ");
    pop();
    printf("\n");
}