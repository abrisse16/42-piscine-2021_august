/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrisse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 14:55:03 by abrisse           #+#    #+#             */
/*   Updated: 2021/08/05 15:36:21 by abrisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_aux(long nb)
{
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
	}
	if (nb < 10)
		return (ft_putchar(nb + '0'));
	ft_putnbr_aux(nb / 10);
	ft_putnbr_aux(nb % 10);
}

void	ft_putnbr(int nb)
{
	ft_putnbr_aux(nb);
}
