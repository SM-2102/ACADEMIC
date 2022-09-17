// insert an element in a list

#include<stdio.h>

int main()
{
	int a[20],n,pos,val;
	printf("Enter the length of array : ");
	scanf("%d",&n);
	printf("Enter the values : ");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("The original array : ");
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
	printf("Enter the position and value : ");
	scanf("%d%d",&pos,&val);
	for(int i=n-1;i>=pos-1;i--)
		a[i+1] = a[i];
	a[pos-1] = val;
	printf("The array after insertion : ");
	for(int i=0;i<=n;i++)
		printf("%d ",a[i]);
	printf("\n");	
}
