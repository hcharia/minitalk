/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcharia < hcharia@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 15:32:52 by hcharia           #+#    #+#             */
/*   Updated: 2023/01/26 16:33:42 by hcharia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	power(int a, int e)
{
	int	result;

	result = 1;
	if (a < 0 || (a == 0 && e == 0) || e < 0 || (a < 0 && e < 0))
		return (0);
	if (e == 0)
		return (1);
	while (e > 0)
	{
		result *= a;
		e --;
	}
	return (result);
}

int	sumbin(int *a)
{
	int	i;
	int	result;

	result = 0;
	i = 0;
	while (i < 8)
	{
		result += a[i] * power(2, i);
		i++;
	}
	return (result);
}

void	print(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write (1, &s[i], 1);
		i++;
	}
	s[i] = 0;
}

void	handlefuction(int sig, siginfo_t *a, void *p)
{
	if (a->si_pid != array.pidclient)
	{
		array.i = 7;
		array.j = 0;
		array.pidclient = a->si_pid;
	}
	if (array.i > -1)
	{
		if (sig == SIGUSR1)
			array.s[array.i--] = 1;
		else if (sig == SIGUSR2)
			array.s[array.i--] = 0;
	}
	if (array.i == -1 && sumbin(array.s) != 0 \
		&& array.j < 4 && !ft_isascii(sumbin(array.s)))
	{
		array.v[array.j++] = sumbin(array.s);
		array.i = 7;
	}
	else if (array.i == -1 && sumbin(array.s) != 0 \
		&& ft_isascii(sumbin(array.s)))
	{
		ft_putchar_fd(sumbin(array.s), 1);
		array.i = 7;
	}
}

int	main(void)
{
	struct sigaction	sa;
	int					k;

	array.v[4] = '\0';
	k = 0;
	array.i = 7;
	sigemptyset(&sa.sa_mask);
	sa.sa_sigaction = &handlefuction;
	sa.sa_flags = 0;
	ft_putstr_fd (ft_itoa(getpid()), 0);
	ft_putchar_fd('\n', 0);
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	while (1)
	{
		if (array.j == 4)
		{
			array.j = 0;
			print (array.v);
		}
		else if (array.i == -1 && sumbin(array.s) == 0)
			write(1, "\nwsal😁\n", 10);
		pause();
	}
	return (0);
}
