#include<stdio.h>
#include<stdlib.h>

void matrix(int *p, int n, int **m, int**s)
{
	int i;
    	int row = n + 1;
    	for(i = 1; i <= n; i++)
        	*((int*) m + row * i + i) = 0;
    	for(int l = 2; l <= n; l++)               
       		for(i = 1; i <= (n - l + 1); i++)
		{       
            		int j = i + l - 1;                 
            		*((int*) m + row * i + j) = -1;         
           		for(int k = i; k <= j - 1; k++)
			{
                		int tmp1 = *((int*) m + row * i + k);
                		int tmp2 = *((int*) m + row * (k + 1) + j);
                		int q = tmp1 + tmp2 + p[i - 1] * p[k] * p[j];
                		int old = *((int*) m + row * i + j);
                		if(q < old || old == -1)
				{
                    			*((int*) m + row * i + j) = q;
                    			*((int*) s + row * i + j) = k;
                		}
            		}
        	} 
}

int main()
{
	printf("Enter the number of matrices : ");
	int n;
    	scanf("%d", &n);
    	int p[n + 1];
    	printf("Enter the dimensions : \n");
    	for(int i = 0; i < n + 1; i++)
        	scanf("%d", &p[i]);
	int m[n + 1][n + 1], s[n + 1][n + 1];
	matrix(p, n, (int**)m, (int**)s);
    	for(int i = 1; i <= n; i++)
	{
        	for(int j = i; j <= n; j++)
            		printf("%d ", m[i][j]);
        	printf("\n");
	}
}
