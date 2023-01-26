/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcharia < hcharia@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 15:34:08 by hcharia           #+#    #+#             */
/*   Updated: 2023/01/26 16:22:27 by hcharia          ###   ########.fr       */
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

int	main(int c, char **v)
{
	int	pid;
	int	i;

	if (c != 3)
		return (0);
	pid = ft_atoi(v[1]);
	sendmsg(v[2], pid);
}
