#include<stdio.h>
#include <stdlib.h>
#include <unistd.h>
  
int main()
{
    int p = fork();
    if (p > 0)
        printf("Parent Process.\n");
    else if (p == 0)
    {
        printf("Child Process.\n");
        sleep(5);
        printf("Orphan Process.\n");
    }
}