// sort each row of the matrix

#include <stdio.h>

void print(int mat[10][10], int row,int col)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
            printf("%d\t",mat[i][j]);
        printf("\n"); 
    }
}

void insertionsort(int arr[], int n)
{
    int j,key;
    for(int i=1;i<n;i++)
    {
        key = arr[i];
        for(j =i-1;j>=0 && arr[j] > key;j--)
            arr[j+1]=arr[j];
        arr[j+1]=key;
    }
}

int main()
{
    int mat[10][10], a[10], row, col;
    printf("Enter the number of rows and columns : ");
    scanf("%d %d",&row,&col);
    printf("Enter the values :\n");
    for(int i=0;i<row;i++)
        for(int j=0;j<col;j++)
            scanf("%d",&mat[i][j]);
    printf("The original matrix :\n");
    print(mat,row,col);
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
            a[j]=mat[i][j];
        insertionsort(a,col);
        for(int j=0;j<col;j++)
            mat[i][j]=a[j];
    }
    printf("The original matrix :\n");
    print(mat,row,col);
}