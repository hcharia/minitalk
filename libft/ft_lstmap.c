/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcharia < hcharia@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:35:39 by hcharia           #+#    #+#             */
/*   Updated: 2023/01/26 16:27:15 by hcharia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_stack	*ft_lstmap(t_stack *lst, void *(*f)(void *), void (*del)(void *))
{
	t_stack	*lst2;
	t_stack	*start;

	if (!lst || !f || !del)
		return (NULL);
	start = ft_lstnew(f(lst->content));
	lst2 = start;
	while (lst && lst->next)
	{
		if (!lst2)
			return (NULL);
		lst2->next = ft_lstnew(f(lst->next->content));
		lst2 = lst2 -> next;
		lst = lst -> next;
	}
	return (start);
}
