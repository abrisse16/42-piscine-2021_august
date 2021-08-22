/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_modulo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 22:56:39 by anremiki          #+#    #+#             */
/*   Updated: 2021/08/22 23:32:30 by anremiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	ft_mod_zero(char *str, char *res, int len, int i)
{
	char	*tmp;

	tmp = malloc(sizeof(char) * 3);
	if (len % 3 == 0 && res[i] != '0')
	{
		tmp[0] = res[i];
		tmp[1] = '\0';
		ft_putstr(ft_litteral(str, " :", tmp));
		ft_putchar(' ');
		ft_putstr(ft_litteral(str, " :", "100"));
		if (res[i + 1] != '\0')
			ft_putchar(' ');
	}
	free(tmp);
}

int	ft_mod_two(char *str, char *res, int len, int i)
{
	char	*tmp;

	tmp = malloc(sizeof(char) * 3);
	if (res[i] == '1')
	{
		tmp[0] = res[i];
		tmp[1] = res[i + 1];
		tmp[2] = '\0';
		ft_putstr(ft_litteral(str, " :", tmp));
		i++;
	}
	else
	{
		tmp[0] = res[i];
		tmp[1] = '0';
		tmp[2] = '\0';
		ft_putstr(ft_litteral(str, " :", tmp));
	}
	if (res[i + 1] != '0')
		ft_putchar(' ');
	free(tmp);
	if (res[i] == '1')
		return (i);
	return (0);
}

void	ft_mod_one(char *str, char *res, int len, int i)
{
	char	*tmp;

	tmp = malloc(sizeof(char) * 3);
	if (len % 3 == 1 && res[i] != 0)
	{
		tmp[0] = res[i];
		tmp[1] = '\0';
		if (res[i] != '0')
			ft_putstr(ft_litteral(str, " :", tmp));
		if (len > 1)
			ft_putchar(' ');
	}
	free(tmp);
}

void	ft_print_domain(char *str, int len)
{
	if (len % 3 == 1 && len > 3)
	{
		ft_putstr(ft_litteral(str, " :", ft_itoa(ft_i_p(10, len - 1))));
		ft_putchar(' ');
	}
}
