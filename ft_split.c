/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 09:44:20 by lgabet            #+#    #+#             */
/*   Updated: 2022/11/16 12:42:06 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count(char *str, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			while (str[i] != c && str[i])
				i++;
			count++;
		}
		else
			i++;
	}
	return (count);
}

void	ft_free(char **str, char *tamp)
{
	int	i;

	i = 0;
	while (str[i] != (NULL))
	{
		free(str[i]);
		i++;
	}
	free(str);
	free(tamp);
}

int	ft_size(char *str, int i, char c)
{
	int	count;

	count = 0;
	while (str[i] && str[i] != c)
	{
		count++;
		i++;
	}
	return (count);
}

char	**ft_algo(char *str, char c, char **ret, int i)
{
	int	j;
	int	k;

	k = 0;
	while (str[i])
	{
		j = 0;
		if (str[i] != c)
		{
			ret[k] = malloc(sizeof(char) * ft_size(str, i, c) + 1);
			if (!ret)
			{
				ft_free(ret, str);
				return (NULL);
			}
			while (j < ft_size(str, i, c))
			{
				ret[k][j] = str[i + j];
				j++;
			}
			i = i + j;
			ret[k++][j] = '\0';
		}
		else
			i++;
	}
	return (ret);
}

char	**ft_split(char const *s, char c)
{
	char	**ret;
	char	*tamp;
	int		i;

	i = 0;
	tamp = ft_strtrim(s, &c);
	ret = malloc(sizeof(char *) * (ft_count(tamp, c) + 1));
	if (!ret)
	{
		ft_free(ret, tamp);
		return (NULL);
	}
	ret = ft_algo(tamp, c, ret, i);
	ret[ft_count(tamp, c)] = 0;
	free(tamp);
	return (ret);
}
