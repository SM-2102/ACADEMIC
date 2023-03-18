#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
        num = rand()%100;
	printf("The number to be found : %d",num);
	start = clock();
	int c,lp,up,mid;
	lp=0,up=n,c=0;
	while(lp<=up)
	{	
		mid = (lp+up)/2;
		if(arr[mid]==num)
		{
			c=1;
			break;
		}
		else if (arr[mid]>num)
			up = mid-1;
		else
			lp = mid+1;
	}	
	end =clock();
	if (c==0)
		printf("Number not found.\n");
	else
		printf("Number found.\n");
	total = (double)(end-start)/CLOCKS_PER_SEC;
	printf("Duration in seconds : %lf\n",total);
}
