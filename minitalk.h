/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcharia < hcharia@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 10:14:43 by hcharia           #+#    #+#             */
/*   Updated: 2023/01/27 17:14:40 by hcharia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <unistd.h>
# include <stdlib.h>
# include <signal.h>
# include <sys/types.h>
# include "libft/libft.h"

static struct s_list1
{
	int		s[8];
	int		i;
	char	v[5];
	int		j;
	int		pidclient;
}array;

#endif