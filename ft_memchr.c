/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 10:04:14 by lgabet            #+#    #+#             */
/*   Updated: 2022/11/10 13:43:23 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char		*str;

	while (n--)
	{
		str = (char *)s;
		if (*str == c)
			return (str);
		s++;
		n--;
	}
	return (NULL);
}
