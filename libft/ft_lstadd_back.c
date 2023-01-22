/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcharia < hcharia@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 18:37:54 by hcharia           #+#    #+#             */
/*   Updated: 2022/12/27 14:49:39 by hcharia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstadd_back(stack **lst, stack *new)
{
	stack	*tmp;

	if (!lst || !new)
		return ;
	if (*lst)
	{
		tmp = ft_lstlast (*lst);
		tmp->next = new;
	}
	else
		*lst = new;
}
