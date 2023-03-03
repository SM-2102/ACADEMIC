#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void print(int arr[],int n)
{
	for(int i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");
}

int main()
{
	int n,j,key;
	clock_t start, end;
	double total;
	printf("Enter the length of the array : ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
		arr[i] = rand()%100;
	printf("The original array : ");
	print(arr,n);
	start = clock();
	for(int i=1;i<n;i++)
	{
		key = arr[i];
		for(j=i-1;j>=0 && arr[j]>key;j--)
			arr[j+1] = arr[j];
		arr[j+1]=key;
	}
	end=clock();
	total = (double)(end-start)/CLOCKS_PER_SEC;
	printf("The sorted array : ");
	print(arr,n);
	printf("Duration in seconds : %lf\n",total);
}
