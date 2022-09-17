/*  divide an array into groups depending on
    the each members' proximity with the group members */

#include<stdio.h>
#include<math.h>
#include<limits.h>

void print(int arr[], int n)
{
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n"); 
}

int minimum(int arr[], int n,int k)
{
    int min=INT_MAX;
    int min_pos;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
            min_pos = i;
        }
    }
    if (min_pos==k)
        return 1;
    else
        return 0;
}

int main()
{
    int grpmem[10], grpmem_n, arr_n, arr[50],diff[10],grp_no,k=0, grps[50];
    printf("Enter the size of array : ");
    scanf("%d",&arr_n);
    printf("Enter the values : ");
    for(int i=0;i<arr_n;i++)
        scanf("%d",&arr[i]);
    printf("Enter the number of groups : ");
    scanf("%d",&grpmem_n);
    printf("Enter the values : ");
    for(int i=0;i<grpmem_n;i++)
        scanf("%d",&grpmem[i]);
    for(int p=0;p<grpmem_n;p++)
    {
        int m=0;
        for(int i=0;i<arr_n;i++)
        {
            for(int j=0;j<grpmem_n;j++)
                diff[j] = abs(grpmem[j]-arr[i]); 
            if(minimum(diff,grpmem_n,k)==1)
            {
                grps[m] = arr[i];
                m++;
            }
        } 
        printf("Group %d : ",k+1);     
        print(grps,m);
        k++;
    }
}
