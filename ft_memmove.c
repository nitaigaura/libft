/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngaurama <ngaurama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 08:50:30 by ngaurama          #+#    #+#             */
/*   Updated: 2024/11/05 19:48:41 by ngaurama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// memmove copies a specified number of bytes from one memory location to another, 
//handling overlapping regions correctly by ensuring that the source and destination are safely copied.
void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *d = (unsigned char *)dest;
    const unsigned char *s = (const unsigned char *)src;
    size_t i;

    i = 0;
    if (d < s)
    {
        while (i < n)
        {
            d[i] = s[i];
            i++;
        }
    }
    else
    {
        i = n;
        while (i > 0)
        {
            d[i - 1] = s[i - 1];
            i--;
        }
    }

    return dest;
}
