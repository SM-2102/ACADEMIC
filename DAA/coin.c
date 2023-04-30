#include<stdio.h>

void findmin(int cost,int n,int coins[],int soln_vector[],int copy_coins[])
{
	int arr[100],k=0;
	for(int i = 0;i <n; i++)
		while(cost >= coins[i])
		{
			cost -= coins[i];
			arr[k] = coins[i];
			k++;
		}
	for(int i=0;i<k;i++)
		for(int j=0;j<n;j++)
			if(arr[i]==copy_coins[j])
			{	
				soln_vector[j] +=1;
				break;
			}
	printf("The solution vector : ");
	for(int i=0;i<n;i++)
		printf("%d ",soln_vector[i]);
	printf("\n");
}

int main()
{
	int cost, n;
	printf("Enter cost: ");
	scanf("%d", &cost);
	printf("Enter the number of coin designations : ");
	scanf("%d",&n);	
	int coins[n],soln_vector[n],copy_coins[n];
	printf("Enter the coin designation vector: \n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&coins[i]);
		soln_vector[i] = 0;
		copy_coins[i] = coins[i];
	}
	for(int i=0;i<n;i++)
        	for(int j=i+1;j<n;j++)
                	if(coins[i]<coins[j])
					{
                        	int temp=coins[i];
                        	coins[i]=coins[j];
                        	coins[j]=temp;
               		 }
	findmin(cost,n,coins,soln_vector,copy_coins);
}
