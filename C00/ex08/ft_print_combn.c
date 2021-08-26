/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrisse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 19:39:09 by abrisse           #+#    #+#             */
/*   Updated: 2021/08/26 18:21:40 by abrisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static void	ft_little_putnbr(int nb)
{
	if (nb <= 9)
		return (ft_putchar(nb + '0'));
	ft_little_putnbr(nb / 10);
	ft_little_putnbr(nb % 10);
}

static int	is_final(int val, int end, int triche)
{
	if (val % 10 != end || triche)
		return (0);
	if (val / 10 != 0)
		return (is_final(val / 10, end - 1, triche));
	return (1);
}

static void	ft_print_combn_aux(int n, int start, int val, int triche)
{
	int		i;

	if (n == 0)
	{
		if (triche && val != 0)
			ft_putchar('0');
		ft_little_putnbr(val);
		if (is_final(val, 9, triche))
			return ;
		ft_putchar(',');
		return (ft_putchar(' '));
	}
	i = start;
	while (++i <= 10 - n)
		ft_print_combn_aux(n - 1, i, (val * 10) + i, triche);
}

void	ft_print_combn(int n)
{
	int		i;

	if (n <= 0 || n >= 10)
		return ;
	i = -1;
	while (++i <= 10 - n)
		ft_print_combn_aux(n - 1, i, i, i == 0);
}
/*
int main(void)
{
	ft_print_combn(4);
	return 0;
}
*/
