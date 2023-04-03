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

void heapify(int arr[], int i,int n)
{
	int largest =i;
	int left = 2*i+1;
	int right = 2*i+2;
	if(left<n && arr[left]>arr[largest])
		largest = left;
	if(right<n && arr[right]>arr[largest])
		largest = right;
	if(largest!=i)
	{
		swap(&arr[i],&arr[largest]);
		heapify(arr,largest,n);
	}
}

void heapsort(int arr[],int n)
{
	for(int i=(n/2)-1;i>=0;i--)
		heapify(arr,i,n);
	for(int i=n-1;i>=0;i--)
	{
		swap(&arr[0],&arr[i]);
		heapify(arr,0,i);
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
	heapsort(arr,n);
	end = clock();
	printf("The sorted array : ");
	print(arr,n);
	total = (double)(end-start)/CLOCKS_PER_SEC;
	printf("Duration in seconds : %lf\n",total);
}
	
