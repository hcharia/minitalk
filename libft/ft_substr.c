/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcharia < hcharia@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 08:58:57 by hcharia           #+#    #+#             */
/*   Updated: 2023/01/27 17:15:00 by hcharia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s1;
	size_t	i;

	if (s == 0)
		return (0);
	i = 0;
	if (start >= ft_strlen(s))
		return (ft_calloc(1, 1));
	if (len >= ft_strlen(s) - start)
		return (ft_strdup(s + start));
	s1 = malloc(len + 1);
	if (!s1)
		return (0);
	while (s[start] != 0 && i < len)
	{
		s1[i] = s[start];
		i++;
		start++;
	}
	s1[i] = 0;
	return (s1);
}
