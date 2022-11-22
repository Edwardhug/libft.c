/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 13:31:45 by lgabet            #+#    #+#             */
/*   Updated: 2022/11/22 13:51:14 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstnew(void *content)
{
    t_list  *list;

    list = (t_list*)malloc(sizeof(*list));
    if (!list)
        return(NULL);
    list->content = content;
    list->next = (NULL);
    return (list);
}