/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrisse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 16:07:24 by abrisse           #+#    #+#             */
/*   Updated: 2021/08/09 18:57:06 by abrisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static int	ft_char_is_printable(char c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	return (0);
}

static void	ft_print_hexa(unsigned char str)
{
	int		d;
	int		u;
	char	*hex;

	hex = "0123456789abcdef";
	d = str / 16;
	u = str % 16;
	ft_putchar('\\');
	ft_putchar(hex[d]);
	ft_putchar(hex[u]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != 0)
	{
		if (ft_char_is_printable(*(str + i)) == 0)
			ft_print_hexa(*(str + i));
		else
			ft_putchar(*(str + i));
		i++;
	}
}
