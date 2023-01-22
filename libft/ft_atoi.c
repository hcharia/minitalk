/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcharia < hcharia@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 10:28:56 by hcharia           #+#    #+#             */
/*   Updated: 2023/01/08 16:49:15 by hcharia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long long	ft_atoi(const char *str)
{
	long long		i;
	long long		sign;
	long long		result;

	sign = 1;
	i = 0;
	result = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		i ++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i ++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - 48);
		i++;
	}
	result = sign * result;
	return (result);
}
