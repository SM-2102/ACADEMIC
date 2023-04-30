#include<stdio.h>
#include<stdlib.h>

void swap(float *a, float *b)
{
	float temp = *a;
	*a = *b;
	*b = temp;
}

void knapsack(int n, float weight[], float profit[], float capacity, float ratio[],float ratio_copy[]) 
{
	float soln_vector[n];
	int i;
	for (i = 0; i < n; i++)
      		soln_vector[i] = 0.0;
   	float total_profit = 0;
	for (i = 0; i < n; i++) 
		if (weight[i] > capacity)
            		break;
         	else 
		{
                	soln_vector[i] = 1.0;
                  	total_profit += profit[i];
                  	capacity -= weight[i];
		}
	if (i < n)
		soln_vector[i] = capacity / weight[i];
 	total_profit = total_profit + (soln_vector[i] * profit[i]);
 	printf("Maximum profit is : %f\n", total_profit);
	printf("The solution vector is : ");
   	for (int i = 0; i < n; i++)
        	for(int j = 0; j < n; j++)
            		if(ratio_copy[i] == ratio[j])
                		printf("%f ", soln_vector[j]);
     	printf("\n");
}
 
int main() 
{	
	int n;	
 	printf("Enter the number of items : ");
   	scanf("%d", &n);
	float weight[n], profit[n], ratio[n],ratio_copy[n], capacity;
	printf("Enter the capacity of knapsack : ");
   	scanf("%f", &capacity);
	printf("Enter the profit and weight of each item : \n");
   	for (int i= 0; i < n; i++)
	{
        scanf("%f %f", &profit[i], &weight[i]);
		ratio[i] = profit[i] / weight[i];
        ratio_copy[i] = ratio[i];
	}
   	for (int i = 0; i < n; i++) 
        	for (int j = i + 1; j < n; j++)
                	if (ratio[i] < ratio[j]) 
					{
                    	swap(&ratio[i], &ratio[j]);
                        swap(&weight[i], &weight[j]);
                        swap(&profit[i], &profit[j]);
                    } 
   	knapsack(n, weight, profit, capacity,ratio,ratio_copy);
}
