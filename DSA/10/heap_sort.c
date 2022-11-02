#include <stdio.h>

void swap(int *a,int *b)
{
	int temp=*a;
	*a = *b;
	*b = temp;
}

void print(int arr[],int n)
{
	for(int i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");
}

void heapify(int arr[],int i, int n)
{
	int largest=i;
	int left=2*i+1;
	int right=2*i+2;
	if(left<n && arr[left]>arr[largest])
		largest=left;
	if(right<n && arr[right]>arr[largest])
		largest=right;
	if(largest != i)
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
	int arr[20],n;
	printf("Enter the length of array : ");
	scanf("%d",&n);
	printf("Enter the values: ");
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("The original array : ");
	print(arr,n);
	heapsort(arr,n);
	printf("The array after heap sort : ");
	print(arr,n);
}
