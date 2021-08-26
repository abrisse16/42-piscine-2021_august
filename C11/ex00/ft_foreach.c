/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrisse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 16:59:56 by abrisse           #+#    #+#             */
/*   Updated: 2021/08/24 19:54:59 by abrisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
}

void	ft_putchar(char c)
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
*/

void	ft_foreach(int *tab, int length, void(*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		(*f)(tab[i]);
		i++;
	}
}
/*
int main(void)
{
	int tab[3] = {1,2,3};

	ft_foreach(tab, 3, &ft_putnbr);
	return 0;
}
*/
