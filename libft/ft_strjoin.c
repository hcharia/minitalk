/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcharia < hcharia@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 10:08:47 by hcharia           #+#    #+#             */
/*   Updated: 2023/01/08 18:57:07 by hcharia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	size_t	i;
	size_t	j;

	i = -1;
	j = 0;
	if (!s1 || !s2)
		return ((char *)s1);
	s = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!s)
		return (0);
	while (s1[++i])
	{
		s[j] = s1[i];
		j++;
	}
	i = 0;
	while (s2[i])
	{
		s[j] = s2[i];
		j++;
		i++;
	}
	s[j] = 0;
	free (s1);
	return (s);
}
