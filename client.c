/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcharia < hcharia@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 10:07:28 by hcharia           #+#    #+#             */
/*   Updated: 2023/01/26 19:48:29 by hcharia          ###   ########.fr       */
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
}

int	main(int c, char **v)
{
	int	pid;

	if (c != 3)
		return (0);
	pid = ft_atoi(v[1]);
	sendmsg(v[2], pid);
}
