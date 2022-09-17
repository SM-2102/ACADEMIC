// binary search with and without recursion

#include<stdio.h>

int binary(int a[20],int lp, int up,int num)
{
	while(lp<=up)
	{
		int mid = (lp+up)/2;
		if(num==a[mid])
			return 1;
		else if (num>a[mid])
			lp=mid+1;
		else
			up=mid-1;
	}
	return 0;
}

int binary_recur(int a[20],int lp,int up,int num)
{
	if(lp<=up)
	{
		int mid = (lp+up)/2;
		if(num==a[mid])
			return 1;
		else if (num>a[mid])
			binary_recur(a,mid+1,up,num);
		else
			binary_recur(a,lp,mid-1,num);
	}
	else
		return 0;
}	

int main()
{
	int a[20],n,num,c,choice;
	printf("Enter the length of array : ");
	scanf("%d",&n);
	printf("Enter the values : ");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter the number to be searched : ");
	scanf("%d",&num);
	printf("Enter 1 for recursive and 2 for non-recursive : ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			c = binary_recur(a,0,n-1,num);
			break;
		case 2:
			c = binary(a,0,n-1,num);
			break;
		default:
			printf("Wrong Input.\n");
	}
	if(c==0)
		printf("The number is not present.\n");
	else
		printf("The number is present.\n");
}
