/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcharia <hcharia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:07:46 by hcharia           #+#    #+#             */
/*   Updated: 2022/10/17 18:07:07 by hcharia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	exist(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	end(char const *s1, char const *set)
{
	int	end;
	int	i;
	int	len;

	len = ft_strlen(s1);
	i = 0;
	end = len - 1;
	while (len > 0)
	{
		if (exist(s1[len - 1], set))
		{
			end--;
		}
		else
			break ;
		len--;
	}
	return (end);
}

static int	big(char const *s1, char const *set)
{
	int	bgn;
	int	i;

	i = 0;
	bgn = 0;
	while (s1[i])
	{
		if (exist(s1[i], set))
			bgn ++;
		else
			break ;
		i ++;
	}
	return (bgn);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s;
	int		i;
	int		bign;

	if (!s1)
		return (ft_calloc(1, 1));
	if (big(s1, set) > end(s1, set))
		return (ft_calloc(1, 1));
	i = 0;
	bign = big(s1, set);
	s = malloc (end(s1, set) - big(s1, set) + 2);
	if (!s)
		return (0);
	while (bign <= end(s1, set))
	{
		s[i] = s1[bign];
		i++;
		bign++;
	}
	s[i] = 0;
	return (s);
}
