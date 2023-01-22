/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcharia <hcharia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 14:22:16 by hcharia           #+#    #+#             */
/*   Updated: 2022/10/17 16:30:16 by hcharia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*s1;

	s1 = (char *) s;
	i = 0;
	while (i < n)
	{
		if ((char)c == s1[i])
		{
			return (&s1[i]);
		}
		i++;
	}
	return (0);
}
