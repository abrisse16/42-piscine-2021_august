/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrisse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 18:59:52 by abrisse           #+#    #+#             */
/*   Updated: 2021/08/25 19:00:12 by abrisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(long n)
{
	if (n < 0)
	{
		ft_putchar('-');
		return (ft_putnbr(-n));
	}
	if (n < 10)
		return (ft_putchar(n + '0'));
	ft_putnbr(n / 10);
	ft_putnbr(n % 10);
}

void	ft_putstr(char *s)
{
	while (*s)
		ft_putchar(*(s++));
}

void	ft_putstr_nl(char *s)
{
	ft_putstr(s);
	ft_putchar('\n');
}

void	ft_puterror(void)
{
	ft_putstr_nl("map error");
}
