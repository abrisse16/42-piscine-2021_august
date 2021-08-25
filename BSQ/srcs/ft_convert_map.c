/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_map.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrisse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 18:58:52 by abrisse           #+#    #+#             */
/*   Updated: 2021/08/25 18:58:54 by abrisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	ft_low_value(int a, int b, int c)
{
	if (a > b)
	{
		if (c > b)
			return (b);
		return (c);
	}
	if (a > c)
		return (c);
	return (a);
}

void	ft_add_memo(t_memo *memo, int i, int j, int val)
{
	if (memo->value < val)
	{
		memo->line = i;
		memo->column = j;
		memo->value = val;
	}
}

void	ft_solve(t_tab *map, t_memo *memo)
{
	int	i;
	int	j;
	int	val;

	i = -1;
	memo->value = -1;
	while (++i < map->nb_line)
	{
		j = -1;
		while (++j < map->nb_column)
		{
			if (map->map[i][j])
			{
				if (j == 0)
					val = 0;
				else if (i == 0)
					val = 0;
				else
					val = ft_low_value(map->map[i - 1][j - 1],
							map->map[i - 1][j], map->map[i][j - 1]);
				map->map[i][j] = val + 1;
				ft_add_memo(memo, i, j, map->map[i][j]);
			}
		}
	}
}

void	ft_deconvert_tab(t_tab *map, t_memo memo)
{
	int	i;
	int	j;

	i = -1;
	while (++i < map->nb_line)
	{
		j = -1;
		while (++j < map->nb_column)
		{
			if (i > memo.line - memo.value && i <= memo.line
				&& j > memo.column - memo.value && j <= memo.column)
				ft_putchar(map->cel[2]);
			else
				ft_putchar(map->cel[map->map[i][j] == 0]);
		}
		ft_putchar('\n');
	}
}

int	ft_convert_map(t_tab *map, char *cnt_file)
{
	int	i;
	int	j;

	map->map = (int **)malloc(sizeof(int *) * map->nb_line);
	if (!map->map)
		return (1);
	i = -1;
	while (++i < map->nb_line)
	{
		map->map[i] = (int *)malloc(sizeof(int) * map->nb_column);
		if (!map->map[i])
			return (1);
		j = -1;
		while (++j < map->nb_column)
			map->map[i][j] = -(ft_strichr(map->cel, *(cnt_file++)) - 1);
		if (*cnt_file && *cnt_file == '\n')
			cnt_file++;
	}
	return (0);
}
