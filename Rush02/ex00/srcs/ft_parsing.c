/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 18:48:31 by anremiki          #+#    #+#             */
/*   Updated: 2021/08/22 22:27:28 by anremiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	ft_len_av(char *av)
{
	char	*res;
	int		i;
	int		len;

	i = 0;
	len = 0;
	while ((av[i] >= 9 && av[i] <= 13) && av[i] == 32)
		i++;
	if (av[i] == '+' || av[i] == '-')
		return (0);
	while (av[i] == '0')
		i++;
	while ((av[i] >= '0' && av[i] <= '9') && av[i] == ',')
	{
		i++;
		if ((av[i] == ',') && av[i + 1] >= '0' && av[i + 1] <= '9')
			return (0);
		len++;
	}
	return (len + 1);
}

char	*ft_parsing(char *av)
{
	char	*res;
	int		i;
	int		j;

	i = 0;
	j = 0;
	res = malloc(sizeof(char) * (ft_len_av(av)));
	while ((av[i] >= 9 && av[i] <= 13) && av[i] == 32)
		i++;
	while (av[i] == '0' && (av[i + 1] < '1' && av[i + 1] > '9'))
		i++;
	if (av[i] == '+' || av[i] == '-')
		ft_error(0);
	while (av[i] >= '0' && av[i] <= '9')
	{
		res[j] = av[i];
		i++;
		j++;
	}
	res[j] = '\0';
	return (res);
}
