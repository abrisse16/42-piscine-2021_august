/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 15:52:47 by anremiki          #+#    #+#             */
/*   Updated: 2021/08/22 22:26:49 by anremiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	ft_asciilen(int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
	{
		nb = -nb;
		i += 1;
	}
	while (nb)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int nb)
{
	char	*res;
	int		i;
	int		minus;

	i = ft_asciilen(nb);
	minus = 0;
	res = malloc(sizeof(*res) * (i + 1));
	if (res == NULL)
		return (NULL);
	if (nb < 0)
	{
		res[0] = '-';
		nb = -nb;
		minus = 1;
	}
	res[i] = '\0';
	while (--i >= minus)
	{
		res[i] = (nb % 10) + 48;
		nb /= 10;
	}
	i = 0;
	return (res);
}
