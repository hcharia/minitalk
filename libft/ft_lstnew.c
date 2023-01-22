/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcharia < hcharia@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 13:17:03 by hcharia           #+#    #+#             */
/*   Updated: 2023/01/07 15:11:44 by hcharia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

stack	*ft_lstnew(int number)
{
	stack	*list;

	list = malloc(sizeof(stack));
	if (!list)
		return (0);
	list->content = number;
	list->rank = 1;
	list->next = 0;
	return (list);
}
