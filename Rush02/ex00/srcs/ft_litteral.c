/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_litteral.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 19:11:42 by anremiki          #+#    #+#             */
/*   Updated: 2021/08/22 20:08:26 by anremiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	ft_haystack(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (i + j);
			j++;
		}
		i++;
	}
	return (0);
}

char	*ft_litteral(char *str, char *charset, char *to_find)
{
	int	i;

	i = ft_strstr(str, to_find);
	while (!ft_haystack(str[i], charset))
		i++;
	while (ft_haystack(str[i], charset))
		i++;
	return (&str[i]);
}
