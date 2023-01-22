/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcharia <hcharia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:27:32 by hcharia           #+#    #+#             */
/*   Updated: 2022/10/12 11:53:03 by hcharia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_of_num(int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
	{
		n *= -1;
		len = 1;
	}	
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	result;
	char	*s;
	size_t	len;
	size_t	i;

	i = 0;
	result = (long)n;
	len = len_of_num((long) n);
	s = malloc(len + 1);
	if (!s)
		return (0);
	if (result < 0)
	{
		result *= -1;
		s[0] = '-';
		i = 1;
	}
	s[len] = '\0';
	while (i < len)
	{
		s[len - 1] = result % 10 + 48;
		result = result / 10;
		len--;
	}
	return (s);
}
