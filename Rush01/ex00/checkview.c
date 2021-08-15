/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkview.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 19:12:48 by rmorel            #+#    #+#             */
/*   Updated: 2021/08/15 19:12:50 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_view_row_left(int **tab, int **tab_arg, int i, int size)
{
	int		x;
	int		view;
	int		max;

	max = 0;
	view = 0;
	x = 0;
	while (x < size)
	{
		if (tab[i][x] == 0)
			return (1);
		if (max < tab[i][x])
		{
			max = tab[i][x];
			view++;
		}
		x++;
	}
	if (view != tab_arg[2][i])
		return (0);
	return (1);
}

int	ft_check_view_row_right(int **tab, int **tab_arg, int i, int size)
{
	int		x;
	int		view;
	int		max;

	max = 0;
	view = 0;
	x = size - 1;
	while (x >= 0)
	{
		if (tab[i][x] == 0)
			return (1);
		if (max < tab[i][x])
		{
			max = tab[i][x];
			view++;
		}
		x--;
	}
	if (view != tab_arg[3][i])
		return (0);
	return (1);
}

int	ft_check_view_col_up(int **tab, int **tab_arg, int j, int size)
{
	int		x;
	int		view;
	int		max;

	max = 0;
	view = 0;
	x = 0;
	while (x < size)
	{
		if (tab[x][j] == 0)
			return (1);
		if (max < tab[x][j])
		{
			max = tab[x][j];
			view++;
		}
		x++;
	}
	if (view != tab_arg[0][j])
		return (0);
	return (1);
}

int	ft_check_view_col_down(int **tab, int **tab_arg, int j, int size)
{
	int		x;
	int		view;
	int		max;

	max = 0;
	view = 0;
	x = size - 1;
	while (x >= 0)
	{
		if (tab[x][j] == 0)
			return (1);
		if (max < tab[x][j])
		{
			max = tab[x][j];
			view++;
		}
		x--;
	}
	if (view != tab_arg[1][j])
		return (0);
	return (1);
}
