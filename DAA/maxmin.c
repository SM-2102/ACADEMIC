#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void maxmin(int arr[],int x, int y, int *max, int *min)
{
	int mid,max1,min1,max2,min2;
	if(x==y)
	{
		*max = arr[x];
		*min = arr[x];
	}
	else if (x+1 == y)
	{	
		if(arr[x]>arr[y])
		{
			*max = arr[x];
			*min = arr[y];
		}
		else
		{
			*max = arr[y];
			*min = arr[x];
		}
	}
	else
	{
            mid=(x+y)/2;
            maxmin(arr,x,mid,&max1,&min1);
            maxmin(arr,mid+1,y,&max2,&min2);
            if(max1>max2)      
                  *max=max1;
            else
                  *max=max2;
            if(min1<min2)
                  *min=min1;
            else
                  *min=min2;
        }
}
	

void print(int arr[],int n)
{
	for(int i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");
}

int main()
{
	int n,j,key,max,min;
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
	maxmin(arr, 0,n-1,&max,&min);
	end=clock();
	total = (double)(end-start)/CLOCKS_PER_SEC;
	printf("The maximum number : %d\n",max);
	printf("The minimum number : %d\n",min);
	printf("Duration in seconds : %lf\n",total);
}
