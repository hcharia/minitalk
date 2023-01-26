/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcharia < hcharia@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:41:43 by hcharia           #+#    #+#             */
/*   Updated: 2023/01/26 16:27:15 by hcharia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstclear(t_stack **lst, void (*del)(void *))
{
	t_stack	*save;

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
