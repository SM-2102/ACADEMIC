#include <stdio.h>
#include<stdlib.h>
#include <time.h>

void print(int arr[], int n)
{
	for(int i =0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");
}

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int partition(int arr[],int p,int r)
{
	int x = arr[p];
	int i = r+1;
	for(int j = r;j>p;j--)
		if(arr[j]>x)
		{
			i=i-1;
			swap(&arr[j],&arr[i]);
		}
	swap(&arr[i-1],&arr[p]);
	return i-1;
}

void quicksort(int arr[],int p,int r)
{
	if(p<r)
	{
		int q = partition(arr,p,r);
		quicksort(arr,p,q-1);
		quicksort(arr,q+1,r);
	}
}

int main()
{
	clock_t start, end;
	double total;
	int n;
	printf("Enter the length of the array : ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
		arr[i] = rand()%100;
	printf("The original array : ");
	print(arr,n);
	start = clock();
	quicksort(arr,0,n-1);
	end = clock();
	printf("The sorted array : ");
	print(arr,n);
	total = (double)(end-start)/CLOCKS_PER_SEC;
	printf("Duration in seconds : %lf\n",total);
}
	
