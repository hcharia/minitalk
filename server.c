/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcharia <hcharia@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 10:07:36 by hcharia           #+#    #+#             */
/*   Updated: 2023/01/19 19:06:08 by hcharia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static int i;

int pow (int num, int pow)
{
    int result;

    result = 1;
    if ((num == 0 && pow == 0) || pow < 0)
        return (0);
    if (pow == 0)
        return (1);
    while (pow >= 1)
    {
        result *= num;
        pow --;
    }
    return (result); 
}

int sum (int *s)
{
    int i;
    int result;

    result = 0;
    i = 7;
    while (i >= 0)
    {
        result += pow(2, i);
    }
    return (result);
}

void handlefuction(int sig)
{
    static int i;
    static int s[8];

    
    if (sig == SIGUSR1)
        s[i] = 1;
    else if (sig == SIGUSR2)
        s[i] = 0;
    i --;
    if (i == -1)
    {
        
        write(1, ,1);
        i = 7;
    }
}


int main(void)
{
    i = 7;
    struct sigaction sa;

    sa.sa_handler = &handlefuction;
    while (1)
    {
        sigaction(SIGUSR1, &sa, NULL);
        sigaction(SIGUSR2, &sa, NULL);
    }
}
