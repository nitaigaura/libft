/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngaurama <ngaurama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 08:38:49 by ngaurama          #+#    #+#             */
/*   Updated: 2024/11/04 08:49:25 by ngaurama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stddef.h> // for size_t

char *ft_strnstr(const char *haystack, const char *needle, size_t len) {
    size_t needle_len;
    size_t i;
    
    needle_len = ft_strlen(needle);
    i = 0;

    if (!*needle)
        return (char *)haystack;
    if (needle_len > len)
        return (NULL);

    while (i <= len - needle_len) {
        if (haystack[i] == needle[0] && !ft_memcmp(haystack + i, needle, needle_len))
            return ((char *)(haystack + i));
        i++;
    }
    return (NULL);
}
