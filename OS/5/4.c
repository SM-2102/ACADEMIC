#include<stdio.h>
#include<unistd.h>
#include<signal.h>

void sig(int sig_int)
{
    printf("Pressed Ctrl + C\n");
}

int main()
{
    signal(SIGINT, sig);
    signal(SIGINT, sig);
    signal(SIGINT, SIG_DFL);
}