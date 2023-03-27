#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void binary(int arr[],int lp, int up,int num)
{
	if (lp>up)
		printf("Number not found.\n");
	else
	{	
		int mid = (lp+up)/2;
		if(arr[mid]==num)	
			printf("Number found.\n");
		else if (arr[mid]>num)
			binary(arr,lp,mid-1,num);
		else
			binary(arr,mid+1,up,num);
	}
}

int main()
{
	int n,num;
	clock_t start,end;
	double total;
	printf("Enter the length of the array : ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
		arr[i] = rand() %100;
	for(int i=0;i<n;i++)
		for(int j=0;j<n-i-1;j++)
			if(arr[j]>arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
	printf("The array : ");
	for(int i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");
	num = rand()%10;
	printf("The number to be found : %d\n",num);
	start = clock();
	binary(arr,0,n-1,num);	
	end =clock();
	total = (double)(end-start)/CLOCKS_PER_SEC;
	printf("Duration in seconds : %lf\n",total);
}
