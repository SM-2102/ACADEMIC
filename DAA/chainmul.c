#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int matrix(int *p, int n)
{
	int **m = (int **)malloc(n*sizeof(int));
	for(int i=0; i<n; i++)
       	m[i] = (int *)malloc(n*sizeof(int));
	for(int i=0; i<n; i++)
		m[i][i]=0;
	for(int l=2; l<n; l++)
		for(int i=1; i<n-l+1; i++)
		{
			int j = i+l-1;
			m[i][j]=INT_MAX;
			for(int k=i; k<=j-1; k++)
			{
				int q = m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j];
				if (q<m[i][j])
					m[i][j] = q;
			}
		}
	return m[1][n-1];
}

int main()
{
	printf("Enter the number of matrices : ");
	int n;
    scanf("%d", &n);
    int *p = (int *)malloc((n+1)*sizeof(int));
    printf("Enter the dimensions : \n");
    for(int i = 0; i < n + 1; i++)
       	scanf("%d", &p[i]);
	int min = matrix(p, n+1);
    printf("The minimum number of multiplications required : %d\n",min);
}
