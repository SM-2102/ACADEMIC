#include <stdio.h>

void max_act(int start[], int finish[], int n)
{
	int soln[n],i=0;
    soln[0]=1;
    printf("The solution vector : %d ",soln[0]);
	for (int j = 1; j < n; j++) 
    {
		if (start[j] >= finish[i]) 
        {
			soln[j]=1;
			i = j;
		}
        else
            soln[j]=0;
        printf("%d ",soln[j]);
	}
    printf("\n");
}

int main()
{
    int n;
	printf("Enter the number of activites : ");
    scanf("%d",&n);
    printf("Enter the start and finish time of the activities: \n");
    int start[n],finish[n];
    for(int i=0;i<n;i++)
        scanf("%d %d",&start[i],&finish[i]);
	max_act(start, finish, n);
}
