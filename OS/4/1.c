#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
	int p=fork();
	if(p==0)
		printf("Child process\n");
	else if(p>0)
    {
		printf("Parent Process\n");
        sleep(5);
		printf("Zombie process\n");
		while(1) {}
	}
}