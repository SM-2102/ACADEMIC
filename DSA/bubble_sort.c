#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void print(int arr[],int n)
{
	for(int i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");
}

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int n;
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
	for(int i=0;i<n;i++)
		for(int j=0;j<n-i-1;j++)
			if (arr[j]>arr[j+1])
				swap(&arr[j],&arr[j+1]);
	end=clock();
	total = (double)(end-start)/CLOCKS_PER_SEC;
	printf("The sorted array : ");
	print(arr,n);
	printf("Duration in seconds : %lf\n",total);
}
