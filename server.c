/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcharia < hcharia@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 10:07:36 by hcharia           #+#    #+#             */
/*   Updated: 2023/01/22 17:26:31 by hcharia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int ft_pow (int num, int ft_pow)
{
    int result;

    result = 1;
    if ((num == 0 && ft_pow == 0) || ft_pow < 0)
        return (-1);
    if (ft_pow == 0)
        return (1);
    while (ft_pow >= 1)
    {
        result *= num;
        ft_pow --;
    }
    return (result); 
}

int sum (int *s)
{
    int j;
    int result;

    result = 0;
    j = 7;
    while (j >= 0)
    {
        result += ft_pow(2, j);
		j--;
    }
    return (result);
}

void handlefuction(int sig, siginfo_t *i, void *p)
{
    static int s[8];
	int	j;
    
	j = 7;
    if (sig == SIGUSR1)
        s[j] = 0;
    else if (sig == SIGUSR2)
        s[j] = 1;
    j --;
    if (j == -1)
    {
        
        ft_putchar_fd(sum(s), 0);
        j = 7;
    }
}

int main(void)
{
	struct sigaction sa;
	
    // sa.sa_handler = &handlefuction;
	sigemptyset(&sa.sa_mask);
	sa.sa_sigaction = &handlefuction;
	sa.sa_flags = 0;
	int s[] = {1, 0, 0, 0, 0, 0, 0, 0};
	printf ("%d\n", getpid());
	sigaction(SIGUSR1, &sa, NULL);
    sigaction(SIGUSR2, &sa, NULL);
	while (1)
		pause();
	return (0);
}
