/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcharia <hcharia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 14:49:59 by hcharia           #+#    #+#             */
/*   Updated: 2022/10/13 11:58:30 by hcharia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s11;
	unsigned char	*s22;

	s11 = (unsigned char *) s1;
	s22 = (unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (s11[i] != s22[i])
			return (s11[i] - s22[i]);
		else
			i++;
	}
	return (0);
}
