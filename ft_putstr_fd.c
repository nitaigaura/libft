/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngaurama <ngaurama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:23:36 by ngaurama          #+#    #+#             */
/*   Updated: 2024/11/05 16:30:51 by ngaurama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
    unsigned int i;

    i = 0;
    if (!s)
        return;
    while(s[i])
    {
        ft_putchar_fd(s[i], fd);
        i++;
    }
}