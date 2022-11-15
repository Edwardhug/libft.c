/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 09:44:20 by lgabet            #+#    #+#             */
/*   Updated: 2022/11/15 12:32:24 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_size(char const *s, char c, int i)
{
	while (s[i] != c && s[i])
		i++;
	return (i);
}

int	ft_countseg(char const *s, char c)
{
	int	ret;
	int	i;

	i = 0;
	ret = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			while (s[i] != c)
				i++;
			ret++;
		}
		i++;
	}
	if (s[0] != c)
		ret--;
	if (s[ft_strlen(s)] == c)
		ret--;
	//printf("%d\n", ret);
	return (ret);
}

char	**ft_algo(char const *s, char c, char **ret, int i)
{
	int	j;
	int	k;

	j = 0;
	while (i < ft_countseg(s, c) && s[j])
	{
		k = 0;
		while (s[j] == c)
			j++;
		if (s[j] != c || s[j] != '\0')
		{
			ret[i] = malloc(sizeof(char) * ft_size(s, c, i));
			if (!ret[i])
				return (NULL);
		}
		while (s[j] != c && s[j])
		{
			ret[i][k] = s[j];
			j++;
			k++;
		}
		ret[i][k] = '\0';
		i++;
	}
	return (ret);
}

char	**ft_split(char const *s, char c)
{
	char	**ret;
	int		i;

	i = 0;
	ret = malloc(sizeof(char *) * (ft_countseg(s, c) + 1));
	if (!ret)
		return (NULL);
	ft_algo(s, c, ret, i);
	ret[ft_countseg(s, c)] = (NULL);
	printf("%s\n", ret[1]);
	return (ret);
}
