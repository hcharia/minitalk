/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcharia <hcharia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 13:21:14 by hcharia           #+#    #+#             */
/*   Updated: 2022/10/17 18:34:35 by hcharia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int			i;
	size_t		j;
	size_t		dst_len;
	size_t		src_len;

	i = 0;
	if (!dst && !dstsize)
		return (dstsize);
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	j = dst_len;
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	else
	{
		while (src[i] != '\0' && j < dstsize - 1)
		{
			dst[j] = src [i];
			i++;
			j++;
		}
		dst[j] = 0;
		return (dst_len + src_len);
	}
}
