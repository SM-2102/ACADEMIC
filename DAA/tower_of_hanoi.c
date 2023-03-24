#include <stdio.h>
#include<stdlib.h>
#include <time.h>

void tower(int n,char from, char to, char use)
{
	if(n==0)
		return;
	else
	{
		tower(n-1,from,use,to);
		printf("Move %d disk from %c to %c.\n",n,from,to);
		tower(n-1,use,to,from);
	}
}

int main()
{
	clock_t start, end;
	double total;
	int n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	start = clock();
	tower(n,'A','C','B');
	end = clock();
	total = (double)(end-start)/CLOCKS_PER_SEC;
	printf("Duration in seconds : %lf\n",total);
}
	
