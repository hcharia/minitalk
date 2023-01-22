#include "minitalk.h"



void handlefuction(int sig)
{
    write (1, "hey\n", 4);
}

int main()
{
    struct sigaction sig;
    sig.sa_handler = &handlefuction;
    printf ("%d\n", getpid());
    sigaction(SIGINT, &sig, NULL);
    while (1);
}