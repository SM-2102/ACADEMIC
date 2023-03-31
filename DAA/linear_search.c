#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int n,num,c=0;
	clock_t start,end;
	double total;
	printf("Enter the length of the array : ");
	scanf("%d",&n);
	int arr[n];
	printf("The array : ");
	for(int i=0;i<n;i++)
	{
		arr[i] = rand()%1000;
		printf("%d ",arr[i]);
	}
	printf("\n");
	num = rand()%1000;
	printf("The number to be found : %d\n",num);
	start = clock();
	for (int i=0;i<n;i++)
		if(arr[i] == num)
		{
			c=1;
			break;
		}			
	end =clock();
	if(c==0)
		printf("Number not found.\n");
	else
		printf("Number found.\n");
	total = (double)(end-start)/CLOCKS_PER_SEC;
	printf("Duration in seconds : %lf\n",total);
}
