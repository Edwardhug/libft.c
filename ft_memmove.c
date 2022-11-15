/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:48:50 by lgabet            #+#    #+#             */
/*   Updated: 2022/11/10 13:32:43 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char		*cdst;
	const char	*csrc;

	cdst = dst;
	csrc = src;
	if (dst < src)
	{
		while (n--)
		{
			*cdst = *csrc;
			cdst++;
			csrc++;
		}
	}
	else
	{
		cdst = dst + n - 1;
		csrc = src + n - 1;
		while (n--)
			*cdst-- = *csrc--;
	}
	return (dst);
}
