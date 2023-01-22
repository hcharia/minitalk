/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcharia <hcharia@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 10:07:28 by hcharia           #+#    #+#             */
/*   Updated: 2023/01/19 18:04:13 by hcharia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void    sendmsg (char *s, int pid)
{
    int i;
    int j;
    int save;

    j = 8;
    i = 0;
    
    while (s[i])
    {
        save = s[i];
        while (j-- > 0)
        {
            if (save % 2 == 0)
                kill(pid, SIGUSR1);
            else
                kill(pid, SIGUSR2);
            save /= 2;
        }
        i++;
    }
}

int main(int c, char **v)
{
    char    *msg;
    int     pid;
    int     i;
    
    if (c != 3)
        return (0);
    pid = ft_atoi(v[1]);
    msg = ft_strdup(v[2]);
    sendmsg(pid, msg);
}