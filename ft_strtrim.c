/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngaurama <ngaurama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 20:01:35 by ngaurama          #+#    #+#             */
/*   Updated: 2024/11/04 20:29:11 by ngaurama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    int start = 0;
    int end = ft_strlen(s1);
    int i = 0;
    char *result;

    while (s1[start] && ft_strchr(set, s1[start]))
        start++;
    
    while (end > start && ft_strchr(set, s1[end - 1]))
        end--;

    result = (char *)malloc(sizeof(char) * (end - start + 1));
    if (!result)
        return NULL;

    while (start < end)
        result[i++] = s1[start++];
    result[i] = '\0';

    return result;
}
