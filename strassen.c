#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void print(int mat[2][2])
{
	for(int i=0;i<2;i++)
    {
        for (int j =0;j<2;j++)
        	printf("%d ",mat[i][j]);
	    printf("\n");
    }
}

int main()
{
	clock_t start, end;
    double total;
	int a[2][2],b[2][2],c[2][2];
	printf("Enter the 1st matrix (2 x 2): \n");
    for(int i=0;i<2;i++)
        for (int j =0;j<2;j++)
        	scanf("%d",&a[i][j]);
    printf("Enter the 2nd matrix (2 x 2): \n");
    for(int i=0;i<2;i++)
        for (int j =0;j<2;j++)
        	scanf("%d",&b[i][j]);
	printf("The 1st matrix : \n");
	print(a);
    printf("The 2nd matrix : \n");
	print(b);
	start = clock();
	int p1 = (a[0][0]+a[1][1])*(b[0][0]+b[1][1]);
    int p2 = (a[1][0]+a[1][1])*b[0][0];
    int p3 = a[0][0]*(b[0][1]-b[1][1]);
    int p4 = a[1][1]*(b[1][0]-b[0][0]);
    int p5 = (a[0][0]+a[0][1])*b[1][1];
    int p6 = (a[1][0]-a[0][0])*(b[0][0]+b[0][1]);
    int p7 = (a[0][1]-a[1][1])*(b[1][0]+b[1][1]);
    c[0][0] = p1+p4-p5+p7;
    c[0][1] = p3+p5;
    c[1][0] = p2+p4;
    c[1][1] = p1+p3-p2+p6;
	end=clock();
	total = (double)(end-start)/CLOCKS_PER_SEC;
	printf("The resultant matrix : \n");
	print(c);
	printf("Duration in seconds : %lf\n",total);
}
