/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcharia <hcharia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 12:54:30 by hcharia           #+#    #+#             */
/*   Updated: 2022/10/03 18:21:23 by hcharia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dst_st;
	char	*src_st;
	size_t	i;

	i = 0;
	dst_st = (char *) dst;
	src_st = (char *) src;
	if (!dst && !src)
		return (0);
	while (i < n)
	{
		dst_st[i] = src_st[i];
		i++;
	}
	return (dst);
}
