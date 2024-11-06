/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngaurama <ngaurama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:06:32 by ngaurama          #+#    #+#             */
/*   Updated: 2024/11/05 18:17:48 by ngaurama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *new_list;
    t_list *new_node;
    t_list *original;
    t_list *last;

    original = lst;
    new_list = NULL;
    while (original)
    {
        new_node = malloc(sizeof(t_list));
        if (!new_node)
        {
            ft_lstclear(&new_list, del);
            return NULL;
        }
        new_node->content = f(original->content);
        new_node->next = NULL;
        if (!new_list)
            new_list = new_node;
        else
        {
            last = new_list;
            while (last->next)
                last = last->next;
            last->next = new_node;
        }
        original = original->next;
    }
    return new_list;
}
