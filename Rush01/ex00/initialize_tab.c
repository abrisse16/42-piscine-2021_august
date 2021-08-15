/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 19:14:28 by rmorel            #+#    #+#             */
/*   Updated: 2021/08/15 19:14:35 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		**ft_init_table(int size);
void	ft_fill_zero(int size, int **tab);
int		**ft_init_table_arg(int size);

int	**ft_fill_tab(int size)
{
	int	**tab;

	tab = ft_init_table(size);
	ft_fill_zero(size, tab);
	return (tab);
}

int	**ft_fill_tab_arg(int size, char *str)
{
	int	**tab;
	int	i;
	int	j;
	int	x;

	tab = ft_init_table_arg(size);
	i = 0;
	j = 0;
	x = 0;
	while (i < 4)
	{
		while (j < size)
		{
			tab[i][j] = str[x] - 48;
			x += 2;
			j++;
		}
		i++;
		j = 0;
	}
	return (tab);
}
