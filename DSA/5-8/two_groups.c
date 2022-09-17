/*  divide an array into two groups depending on
    the each members' proximity with the group members */

#include<stdio.h>
#include<math.h>

void print(int arr[], int n)
{
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n"); 
}

int main()
{
    int a[20], b[20], n, arr[20],j=1,k=1;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("Enter the values : ");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Enter the group members : ");
    scanf("%d %d",&a[0],&b[0]);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==a[0] || arr[i]==b[0])
            continue;
        int d1 = abs(a[0]-arr[i]);
        int d2 = abs(b[0]-arr[i]);
        if(d1>d2)
            b[k++] = arr[i];
        else
            a[j++] = arr[i];
    }
    printf("Group 1 : ");
    print(a,j);
    printf("Group 2 : ");
    print(b,k);

}