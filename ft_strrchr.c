/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:32:52 by lgabet            #+#    #+#             */
/*   Updated: 2022/11/10 15:19:33 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlenmax(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strrchr(const char	*s, int c)
{
	int		i;
	char	*p;

	i = ft_strlenmax(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
		{
			p = (char *)s + i;
			return (p);
		}
		i--;
	}
	p = (NULL);
	return (NULL);
}
