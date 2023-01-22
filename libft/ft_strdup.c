/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcharia <hcharia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 17:00:52 by hcharia           #+#    #+#             */
/*   Updated: 2022/10/02 18:01:22 by hcharia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s;
	size_t	i;

	i = 0;
	s = malloc(ft_strlen(s1) + 1);
	if (!s)
		return (0);
	s = ft_memcpy(s, s1, ft_strlen(s1) + 1);
	return (s);
}
