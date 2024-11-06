/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngaurama <ngaurama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 08:35:59 by ngaurama          #+#    #+#             */
/*   Updated: 2024/11/05 19:48:00 by ngaurama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// memchr searches for the first occurrence of a specified character in a block of memory 
//and returns a pointer to that character if found, or NULL if not.

void *ft_memchr(const void *s, int c, size_t n) {
    const unsigned char *p;
    size_t i;

    p = (const unsigned char *)s;
    i = 0;
    while (i < n) {
        if (p[i] == (unsigned char)c)
            return ((void *)(p + i));
        i++;
    }
    return NULL;
}
