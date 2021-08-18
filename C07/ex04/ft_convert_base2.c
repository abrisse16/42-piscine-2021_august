/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrisse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 11:39:45 by abrisse           #+#    #+#             */
/*   Updated: 2021/08/18 22:49:00 by abrisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	valid_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[i + 1])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j]
				|| base[i] == '+' || base[i] == '-'
				|| base[j] == '+' || base[j] == '-'
				|| base [i] <= ' ' || base[j] <= ' '
				|| base[i] > '~' || base [j] > '~')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	char_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	char_is_whitespace(char c)
{
	return (c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r' || c == ' ');
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	value;
	int	lenght;
	int	sign;

	i = 0;
	lenght = ft_strlen(base);
	sign = 1;
	if (valid_base(base) == 0)
		return (0);
	while (char_is_whitespace(str[i]))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	value = 0;
	while (char_in_base(str[i], base) >= 0)
	{
		value = value * lenght + char_in_base(str[i], base);
		i++;
	}
	return (sign * value);
}
