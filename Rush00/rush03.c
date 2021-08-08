/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrisse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 09:57:28 by abrisse           #+#    #+#             */
/*   Updated: 2021/08/08 18:41:11 by abrisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush_aux(int x, int y)
{
	int		i;
	int		j;

	i = 1;
	while (i <= y)
	{
		j = 1;
		while (j <= x)
		{
			if ((j == 1 && i == 1) || (j == 1 && i == y && y != 1))
				ft_putchar('A');
			else if ((j == x && i == 1 && x != 1) || (j == x && i == y))
				ft_putchar('C');
			else if ((j > 1 && j < x) && (i == 1 || i == y))
				ft_putchar('B');
			else if ((i > 1 && i < y) && (j == 1 || j == x))
				ft_putchar('B');
			else
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
		return ;
	rush_aux(x, y);
}
