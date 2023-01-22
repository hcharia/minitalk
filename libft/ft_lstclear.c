/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcharia < hcharia@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:41:43 by hcharia           #+#    #+#             */
/*   Updated: 2022/12/27 14:49:39 by hcharia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstclear(stack **lst, void (*del)(void *))
{
	stack	*save;

	save = 0;
	if (!lst || !del)
		return ;
	while (*lst)
	{
		del((*lst)->content);
		save = (*lst)->next;
		free (*lst);
		*lst = save;
	}
	free(*lst);
}
