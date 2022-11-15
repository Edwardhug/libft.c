/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 10:17:17 by lgabet            #+#    #+#             */
/*   Updated: 2022/11/10 14:42:13 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int		i;
	char	*str1;
	char	*str2;

	i = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	while (str1[i] == str2[i] && n)
	{
		i++;
		n--;
	}
	if (n == 0)
		return (0);
	if (str1[i] < 0 || str2[i] < 0)
		return ((str1[i] - str2[i]) * -1);
	return (str1[i] - str2[i]);
}
