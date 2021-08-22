/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 15:36:37 by anremiki          #+#    #+#             */
/*   Updated: 2021/08/22 23:33:32 by anremiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	ft_print(char *str, char *res)
{
	int		len;
	int		i;
	int		count;

	i = 0;
	len = ft_strlen(res);
	if (res[0] == '0' && res[1] == '\0')
		ft_putstr(ft_litteral(str, " :", res));
	while (res[i])
	{
		count = 0;
		if (len % 3 == 0 && res[i] != '0')
			ft_mod_zero(str, res, len, i);
		else if (len % 3 == 2 && res[i] != '0')
			count = ft_mod_two(str, res, len, i);
		else if ((len % 3 == 1 && res[i] != 0) && count == 0)
			ft_mod_one(str, res, len, i);
		ft_print_domain(str, len);
		i++;
		len--;
	}
	ft_putchar('\n');
	free(res);
}
