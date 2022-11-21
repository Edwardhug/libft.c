/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 12:42:16 by lgabet            #+#    #+#             */
/*   Updated: 2022/11/14 14:10:37 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		size;
	int		i;

	i = 0;
	if (start > ft_strlen(s))
	{
		str = malloc(sizeof(char));
		str[0] = '\0';
		return (str);
	}
	if (len < ft_strlen(s))
		size = len;
	else
		size = ft_strlen(s);
	str = malloc(sizeof(char) * size + 1);
	if (!str)
		return (NULL);
	while (i < size && s[start])
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
