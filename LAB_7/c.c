#include <stdio.h>
int length(char a[]);
int compare_wcase(char[], char[]);
int main()
{
    char a1[20], a2[20];
    printf("Enter two strings: \n");
    gets(a1);
    gets(a2);
    printf("%d",compare_wcase(a1,a2));
    return 0;
}
int compare_wcase(char a1[], char a2[])
{
    int a1_len=length(a1);
    int a2_len=length(a2);
    if(a1_len != a2_len)
    {
        if(a1_len<a2_len)
            return -1;
        if(a1_len>a2_len)
            return 1;
    }
    for(int i = 0; i < a1_len; i++ )
    {
        if ((int)a1[i]>=97 && (int)a1[i]<=122)
        a1[i] = (char)((int)a1[i]-32);
        if ((int)a2[i]>=97 && (int)a2[i]<=122)
        a2[i] = (char)((int)a2[i]-32);
        if(a1[i]!=a2[i])
        {
            if(a1[i] < a2[i])
                return -1;
            if(a1[i] > a2[i])
                return 1;
        }
    }
    return 0;
}
int length(char a[])
{
    int count=0;
    for(int i=0;a[i]!='\0';i++)
    count++;
    return count;
}