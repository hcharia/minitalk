/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcharia < hcharia@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:17:27 by hcharia           #+#    #+#             */
/*   Updated: 2022/12/27 14:49:39 by hcharia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstdelone(stack *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free (lst);
	return ;
}
