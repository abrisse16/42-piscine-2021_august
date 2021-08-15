/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 19:16:14 by rmorel            #+#    #+#             */
/*   Updated: 2021/08/15 19:16:19 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_view_col_up(int **tab, int **tab_arg, int j, int size);
int		ft_check_view_col_down(int **tab, int **tab_arg, int j, int size);
int		ft_check_view_row_left(int **tab, int **tab_arg, int i, int size);
int		ft_check_view_row_right(int **tab, int **tab_arg, int i, int size);
int		ft_is_not_on_column(int k, int **tab, int j, int size);
int		ft_is_not_on_row(int k, int **tab, int i, int size);

int	ft_check_view_row(int **tab, int **tab_arg, int i, int size)
{
	if (ft_check_view_row_left(tab, tab_arg, i, size)
		&& ft_check_view_row_right(tab, tab_arg, i, size))
		return (1);
	else
		return (0);
}

int	ft_check_view_col(int **tab, int **tab_arg, int j, int size)
{
	if (ft_check_view_col_up(tab, tab_arg, j, size)
		&& ft_check_view_col_down(tab, tab_arg, j, size))
		return (1);
	else
		return (0);
}

int	ft_is_valid(int **tab, int **tab_arg, int position, int size)
{
	int		i;
	int		j;
	int		k;

	if (position == (size) * (size))
		return (1);
	i = position / size;
	j = position % size;
	k = 1;
	while (k <= size)
	{
		if (ft_is_not_on_column(k, tab, j, size)
			&& ft_is_not_on_row(k, tab, i, size))
		{
			tab[i][j] = k;
			if (ft_check_view_row(tab, tab_arg, i, size)
				&& ft_check_view_col(tab, tab_arg, j, size))
				if (ft_is_valid(tab, tab_arg, position + 1, size))
					return (1);
		}
		k++;
	}
	tab[i][j] = 0;
	return (0);
}
