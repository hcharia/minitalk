/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcharia <hcharia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 15:34:11 by hcharia           #+#    #+#             */
/*   Updated: 2022/10/11 16:35:16 by hcharia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	j;

	j = 0;
	if (haystack == 0 && len == 0)
		return (0);
	else if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[j] && j < len)
	{
		if (ft_strncmp(&haystack[j], needle, ft_strlen(needle)) == 0)
			if (ft_strlen(needle) + j <= len)
				return ((char *)&haystack[j]);
		j++;
	}
	return (0);
}
