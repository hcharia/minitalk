/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcharia < hcharia@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 15:34:11 by hcharia           #+#    #+#             */
/*   Updated: 2023/01/26 16:27:15 by hcharia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hayt_stack, const char *needle, size_t len)
{
	size_t	j;

	j = 0;
	if (hayt_stack == 0 && len == 0)
		return (0);
	else if (*needle == '\0')
		return ((char *)hayt_stack);
	while (hayt_stack[j] && j < len)
	{
		if (ft_strncmp(&hayt_stack[j], needle, ft_strlen(needle)) == 0)
			if (ft_strlen(needle) + j <= len)
				return ((char *)&hayt_stack[j]);
		j++;
	}
	return (0);
}
