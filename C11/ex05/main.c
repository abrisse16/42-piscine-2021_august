/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_doop.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrisse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 17:08:03 by abrisse           #+#    #+#             */
/*   Updated: 2021/08/26 18:37:51 by abrisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	check_arg(int b, char **av)
{
	if ((ft_strcmp(av[2], "/") == 0) && b == 0)
	{
		write(1, "Stop : division by zero\n", 24);
		return (0);
	}
	if ((ft_strcmp(av[2], "%") == 0) && b == 0)
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (0);
	}
	return (1);
}

int	ft_calcul(int a, int b, char **av)
{
	int	result;

	if (ft_strcmp(av[2], "+") == 0)
		result = sum(a, b);
	else if (ft_strcmp(av[2], "-") == 0)
		result = minus(a, b);
	else if (ft_strcmp(av[2], "/") == 0)
		result = div(a, b);
	else if (ft_strcmp(av[2], "*") == 0)
		result = times(a, b);
	else if (ft_strcmp(av[2], "%") == 0)
		result = mod(a, b);
	else
		result = 0;
	return (result);
}

int	main(int ac, char **av)
{
	int	result;
	int	a;
	int	b;

	if (ac != 4)
		return (0);
	a = ft_atoi(av[1]);
	b = ft_atoi(av[3]);
	if (!check_arg(b, av))
		return (0);
	result = ft_calcul(a, b, av);
	ft_putnbr(result);
	ft_putchar('\n');
	return (0);
}
