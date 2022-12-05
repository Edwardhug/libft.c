/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 12:26:22 by lgabet            #+#    #+#             */
/*   Updated: 2022/12/05 18:19:14 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tamp;

	if (lst && *lst && del)
	{
		while (*lst)
		{
			tamp = *lst;
			(*del)((*lst)->content);
			*lst = tamp->next;
			free(tamp);
		}
		*lst = NULL;
	}
}
