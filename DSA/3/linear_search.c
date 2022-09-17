#include<stdio.h>

int main()
{
	int a[20],n,num,c=0;
	printf("Enter the length of array : ");
	scanf("%d",&n);
	printf("Enter the values : ");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter the number to be searched : ");
	scanf("%d",&num);
	for(int i=0;i<n;i++)
		if(a[i]==num)
		{
			c++;
			break;
		}
	if(c==0)
		printf("The number is not present.\n");
	else
		printf("The number is present.\n");
}
