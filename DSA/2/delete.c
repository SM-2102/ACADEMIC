// delete an element in a list

#include<stdio.h>

int main()
{
	int a[20],n,pos;
	printf("Enter the length of array : ");
	scanf("%d",&n);
	printf("Enter the values : ");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("The original array : ");
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
	printf("Enter the position : ");
	scanf("%d",&pos);
	for(int i=pos-1;i<n-1;i++)
		a[i] = a[i+1];
	printf("The array after deletion : ");
	for(int i=0;i<n-1;i++)
		printf("%d ",a[i]);
	printf("\n");	
}
