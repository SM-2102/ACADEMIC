/* print the pattern upto n 
    1
    1 1 
    1 2 1
    1 2 3 1   */

#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of rows : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<i;j++)
            printf("%d ",j);
        printf("1 ");
        printf("\n");
    }
}