/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrisse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 11:34:56 by abrisse           #+#    #+#             */
/*   Updated: 2021/08/18 22:47:22 by abrisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str);
int	valid_base( char *base);
int	char_in_base(char c, char *base);
int	ft_atoi_base(char *str, char *base);

char	*ft_zero(char *base_to)
{
	char	*ret;

	ret = malloc (2 * sizeof(char));
	ret[0] = base_to[0];
	ret[1] = 0;
	return (ret);
}

void	ft_rev_tab(char *tab, int size)
{
	int		i;
	char	tmp;

	i = 0;
	while (i < size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = tmp;
		i++;
	}
}

char	*ft_strdup(char *src)
{
	char	*copy;
	int		i;

	i = 0;
	copy = malloc((ft_strlen(src) + 1) * sizeof(char));
	if (!copy)
		return (NULL);
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = 0;
	return (copy);
}

char	*ft_itoa_base(int nbr, char *base)
{
	int			i;
	char		result[33];
	int			sign;
	long int	nb;
	char		*return_str;

	i = 0;
	sign = 1;
	nb = (long int)nbr;
	if (nb < 0)
	{
		sign = -1;
		nb = -nb;
	}
	while (nb)
	{
		result[i++] = base[nb % ft_strlen(base)];
		nb = nb / ft_strlen(base);
	}
	if (sign == -1)
		result[i++] = '-';
	result[i] = 0;
	ft_rev_tab(result, ft_strlen(result));
	return_str = ft_strdup(result);
	return (return_str);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		value_base10;
	char	*result;

	if (!valid_base(base_from) || !valid_base(base_to))
		return (NULL);
	value_base10 = ft_atoi_base(nbr, base_from);
	if (value_base10 == 0)
		return (ft_zero(base_to));
	result = malloc((ft_strlen(ft_itoa_base(value_base10, base_to)) + 1)
			* sizeof(char));
	if (!result)
		return (NULL);
	result = ft_itoa_base(value_base10, base_to);
	return (result);
}
