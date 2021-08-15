/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_tab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 19:15:04 by rmorel            #+#    #+#             */
/*   Updated: 2021/08/15 22:31:10 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);

int	ft_verif_arg(char **argv, int size)
{
	int	i;

	if (size < 4)
		return (0);
	if ((ft_strlen(argv[1]) + 1) % 4 != 0)
		return (0);
	i = 0;
	while (argv[1][i])
	{
		if (i % 2 == 0 && (argv[1][i] < '1' || argv[1][i] > size + 48))
			return (0);
		else if (i % 2 == 1 && argv[1][i] != ' ')
			return (0);
		i++;
	}
	return (1);
}

int	**ft_init_table(int size)
{
	int	**tab;
	int	l;

	tab = malloc(sizeof(int *) * size);
	if (tab)
	{
		l = 0;
		while (l < size)
		{
			tab[l] = malloc(sizeof(int *) * size);
			if (!tab[l])
				return (0);
			l++;
		}
	}
	else
		return (0);
	return (tab);
}

int	**ft_init_table_arg(int size)
{
	int	**tab;
	int	l;

	tab = malloc(sizeof(int *) * size);
	if (tab)
	{
		l = 0;
		while (l < size)
		{
			tab[l] = malloc(sizeof(int *) * size);
			if (!tab[l])
				return (0);
			l++;
		}
	}
	else
		return (0);
	return (tab);
}

void	ft_fill_zero(int size, int **tab)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size)
	{
		while (j < size)
		{
			tab[i][j] = 0;
			j++;
		}
		i++;
		j = 0;
	}
}

int	ft_size_table(char *str)
{
	int	len;
	int	size;

	len = ft_strlen(str);
	size = (len + 1) / 8;
	return (size);
}
