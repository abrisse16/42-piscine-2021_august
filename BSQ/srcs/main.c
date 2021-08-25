/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrisse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 19:02:27 by abrisse           #+#    #+#             */
/*   Updated: 2021/08/25 19:02:29 by abrisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	main(int ac, char **av)
{
	int	fd;
	int	i;

	if (ac < 2)
	{
		if (ft_prog(0, 0))
			ft_puterror();
	}
	else
	{
		i = 0;
		while (++i < ac)
		{
			if (i != 1)
				ft_putchar('\n');
			fd = open(av[i], O_RDONLY);
			if (fd == -1)
				ft_puterror();
			else
				if (ft_prog(fd, i))
					ft_puterror();
			close(fd);
		}
	}
	return (0);
}
