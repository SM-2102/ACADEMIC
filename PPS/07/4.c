/* search a pattern of characters within a given string */

#include<stdio.h>
#include<string.h>

int main()
{
    char arr[50],pat[10],a[10]={'\0'};
    printf("Enter the string :\n");
    gets(arr);
    printf("Enter the pattern :\n");
    gets(pat);
    int flag=0;
    for(int i=0;i<strlen(arr);i++)
    {
        for(int j=0,k=i;j<strlen(pat);j++,k++)
            a[j]=arr[k];
        if(strcmp(a,pat)==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("The pattern is not present in the string.\n");
    else
        printf("The pattern is present in the array.\n");
}