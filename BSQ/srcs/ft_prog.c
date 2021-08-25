/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prog.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrisse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 19:00:23 by abrisse           #+#    #+#             */
/*   Updated: 2021/08/25 19:18:48 by abrisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	ft_first_line(char *buf, t_tab *map, int *index)
{
	int	i;
	int	j;

	map->nb_line = ft_atoi(buf, index);
	if (map->nb_line < 1)
		return (1);
	i = 0;
	while (buf[*index + i] && buf[*index + i] != '\n')
		i++;
	if (i != 3 || buf[*index + i] != '\n')
		return (1);
	j = -1;
	while (++j < i)
		map->cel[j] = buf[*index + j];
	map->cel[j] = 0;
	*index += 4;
	return (0);
}

void	ft_size_column(char *buf, int *nb_column)
{
	static int	count = 0;

	while (*buf && *buf != '\n')
	{
		count++;
		buf++;
	}
	if (*buf == '\n')
	{
		*nb_column = count;
		count = 0;
	}
}

int	ft_good_buf(char *buf, t_tab *map, int i)
{
	static int	col = 0;
	static int	fdtmp = -1;

	if (fdtmp != i)
		ft_init_var(&col, &fdtmp, i);
	while (*buf)
	{
		if (*buf == '\n')
		{
			if (map->nb_column != -1 && map->nb_column != col)
				return (0);
			col = -1;
		}
		else
			if (ft_strichr(map->cel, *buf) == -1)
				return (0);
		col++;
		buf++;
	}
	return (1);
}

char	*ft_parse(int fd, t_tab *map, int index, int line)
{
	int		size;
	int		i;
	char	*cnt_file;
	char	buf[BUF_SIZE + 1];

	size = ft_before_read(fd, buf, &i, map);
	if (size == -1)
		return (NULL);
	cnt_file = NULL;
	while (size)
	{
		if (size == -1)
			return (NULL);
		buf[size] = 0;
		line += ft_countchr(buf, '\n');
		if (ft_exec_parse(&buf[i], &cnt_file, map, index))
			return (NULL);
		size = read(fd, buf, BUF_SIZE);
		i = 0;
	}
	if (line != map->nb_line)
		return (NULL);
	return (cnt_file);
}

int	ft_prog(int fd, int i)
{
	t_tab	map;
	t_memo	memo;
	char	*cnt_file;

	cnt_file = ft_parse(fd, &map, i, -1);
	if (!cnt_file)
		return (1);
	if (ft_convert_map(&map, cnt_file))
		return (1);
	ft_solve(&map, &memo);
	ft_deconvert_tab(&map, memo);
	ft_free_tab(&map);
	free(cnt_file);
	return (0);
}
