// multiply two numbers using recursion

# include<stdio.h>

int multiply(int a, int b)
{
    if(b==0||a==0)
        return 0;
    if(b<0)
        return -a + multiply(a,b+1);
    else
        return a + multiply(a,b-1); 
}

int main()
{
    int a,b;
    printf("Enter the two numbers : ");
    scanf("%d%d",&a,&b);
    printf("The answer is %d.\n",multiply(a,b));
}