#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int n;

void print(int mat[n][n])
{
	for(int i=0;i<n;i++)
    {
        for (int j =0;j<n;j++)
        	printf("%d ",mat[i][j]);
	    printf("\n");
    }
}

void strassen(int* a,int *b, int *c, int n)
{
    
}

int main()
{
	clock_t start, end;
    double total;
	printf("Enter the size of the matrix : ");
    scanf("%d",&n);
    int a[n][n],b[n][n],c[n][n];
	printf("Enter the 1st matrix (2 x 2): \n");
    for(int i=0;i<n;i++)
        for (int j =0;j<n;j++)
        	scanf("%d",&a[i][j]);
    printf("Enter the 2nd matrix (2 x 2): \n");
    for(int i=0;i<n;i++)
        for (int j =0;j<n;j++)
        	scanf("%d",&b[i][j]);
	printf("The 1st matrix : \n");
	print(a);
    printf("The 2nd matrix : \n");
	print(b);
	start = clock();
	int p1 = (*a+*(a+n+1))*(*b+*(b+n+1));
    int p2 = (*(a+n)+*(a+n+1))*(*b);
    int p3 = (*a)*(*(b+1)-*(b+n+1));
    int p4 = (*(a+n+1))*(*(b+n)-*b);
    int p5 = (*a+*(a+1))*(*(b+n+1));
    int p6 = (*(a+n)-*a)*(*b+*(b+1));
    int p7 = (*(a+1)-*(a+n+1))*(*(b+n)+*(b+n+1));
    *c = p1+p4-p5+p7;
    *(c+1) = p3+p5;
    *(c+n) = p2+p4;
    *(c+n+1) = p1+p3-p2+p6;
	end=clock();
	total = (double)(end-start)/CLOCKS_PER_SEC;
	printf("The resultant matrix : \n");
	print(c);
	printf("Duration in seconds : %lf\n",total);
}
