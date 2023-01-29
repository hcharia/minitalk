/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcharia < hcharia@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 15:34:08 by hcharia           #+#    #+#             */
/*   Updated: 2023/01/29 16:03:44 by hcharia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	sendmsg(char *s, int pid)
{
	int	i;
	int	j;

	i = 0;
	while (s[i])
	{
		j = 7;
		while (j >= 0)
		{
			if (s[i] >> j & 1)
				kill (pid, SIGUSR1);
			else
				kill (pid, SIGUSR2);
			usleep (100);
			j--;
		}
		i++;
	}
	j = 7;
	while (j >= 0)
	{
		kill (pid, SIGUSR2);
		usleep (100);
		j--;
	}
}

void	handlefuction(void)
{
	write (1, "wsal\n", 6);
	exit(0);
}

int	main(int c, char **v)
{
	struct sigaction	sa;
	int					pid;

	sigemptyset(&sa.sa_mask);
	sa.sa_sigaction = (void *)handlefuction;
	sigaction(SIGUSR1, &sa, NULL);
	sa.sa_flags = 0;
	if (c != 3)
		return (0);
	pid = ft_atoi(v[1]);
	sendmsg(v[2], pid);
	while (1)
		pause ();
	return (0);
}
