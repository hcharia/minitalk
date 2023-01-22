/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcharia <hcharia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:13:29 by hcharia           #+#    #+#             */
/*   Updated: 2022/10/12 12:59:08 by hcharia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	num_of_strings(char const *s, char c)
{
	int		i;
	int		result;

	result = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == 0))
			result++;
		i++;
	}
	return (result);
}

static char	**super_func(char const *s, char c)
{
	char	**s1;
	int		i;
	int		j;
	int		res;

	s1 = (char **) malloc (sizeof(char *) * (num_of_strings(s, c) + 1));
	if (!s1)
		return (0);
	i = 0;
	res = 0;
	j = 0;
	while (j < num_of_strings(s, c))
	{
		while (s[i] && s[i] == c)
			i++;
		res = i;
		while (s[i] != c && s[i])
			i++;
		s1[j] = ft_substr(s, res, i - res);
		j++;
	}
	s1[j] = NULL;
	return (s1);
}

char	**ft_split(char const *s, char c)
{
	char	**s1;

	if (s == 0)
		return (0);
	s1 = super_func(s, c);
	return (s1);
}
