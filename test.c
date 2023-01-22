
#include "minitalk.h"


int main(int c, char **v)
{
    (void)c;
    int i;
    
    i = atoi(v[1]);
    kill (i, SIGUSR1);
}