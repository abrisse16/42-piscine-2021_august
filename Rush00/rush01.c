/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrisse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 09:37:19 by abrisse           #+#    #+#             */
/*   Updated: 2021/08/08 19:01:21 by abrisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	first(int i, int x)
{
	if (i == 1)
		ft_putchar('/');
	else if (i == x)
		ft_putchar('\\');
	else
		ft_putchar('*');
}

void	last(int i, int x)
{
	if (i == 1)
		ft_putchar('\\');
	else if (i == x)
		ft_putchar('/');
	else
		ft_putchar('*');
}

void	mid(int i, int x)
{
	if (i == 1 || i == x)
		ft_putchar('*');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int		i;
	int		j;

	i = 1;
	j = 1;
	if (x <= 0 || y <= 0)
		return ;
	while (j <= y)
	{
		i = 1;
		while (i <= x)
		{
			if (j == 1)
				first(i, x);
			else if (j == y)
				last(i, x);
			else
				mid(i, x);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
