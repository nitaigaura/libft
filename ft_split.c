/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngaurama <ngaurama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 20:31:39 by ngaurama          #+#    #+#             */
/*   Updated: 2024/11/05 15:34:10 by ngaurama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int no_words(char const *str, char c)
{
    int i = 0;
    int count = 0;

    while (str[i])
    {
        while (str[i] == c) 
            i++;
        if (str[i])
        {
            count++;
            while (str[i] && str[i] != c)
                i++;
        }
    }
    return count;
}

char **ft_split(char const *s, char c)
{
    char **arr;
    int i = 0;
    int k = 0;
    int start;

    if (!s)
        return NULL;

    arr = (char **)malloc(sizeof(char *) * (no_words(s, c) + 1));
    if (!arr)
        return NULL;
    while (s[i])
    {
        while (s[i] == c)
            i++;
        if (s[i])
        {
            start = i;
            while (s[i] && s[i] != c)
                i++;
            arr[k] = (char *)malloc(sizeof(char) * (i - start + 1));
            if (!arr[k])
                return NULL;
            ft_strlcpy(arr[k], s + start, i - start + 1);
            k++;
        }
    }
    arr[k] = NULL;
    return arr;
}
