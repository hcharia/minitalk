/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcharia <hcharia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 16:53:46 by hcharia           #+#    #+#             */
/*   Updated: 2022/10/03 14:37:42 by hcharia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*memory;

	memory = b;
	while (len > 0)
	{
		*memory = c;
		len --;
		memory ++;
	}
	return (b);
}
