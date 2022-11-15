/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:39:25 by lgabet            #+#    #+#             */
/*   Updated: 2022/11/10 15:18:01 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char	*s, int c)
{
	int		i;
	char	*p;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
		{
			p = (char *)s + i;
			return (p);
		}
		i++;
	}
	if (c == '\0')
	{
		p = (char *)s + i;
		return (p);
	}
	p = (NULL);
	return (NULL);
}
