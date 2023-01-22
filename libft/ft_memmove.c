/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcharia <hcharia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 15:08:32 by hcharia           #+#    #+#             */
/*   Updated: 2022/10/13 11:59:36 by hcharia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dst_st;
	char	*src_st;
	size_t	i;

	i = 0;
	dst_st = (char *) dst;
	src_st = (char *) src;
	if (!dst && !src)
		return (0);
	if (dst < src)
		ft_memcpy(dst, src, len);
	else
	{
		while (0 < len)
		{
			dst_st[len - 1] = src_st[len - 1];
			len --;
		}
	}
	return (dst);
}
