/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 19:16:36 by rmorel            #+#    #+#             */
/*   Updated: 2021/08/15 19:16:39 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_is_not_on_column(int k, int **tab, int j, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (tab[i][j] == k)
			return (0);
		i++;
	}
	return (1);
}

int	ft_is_not_on_row(int k, int **tab, int i, int size)
{
	int	j;

	j = 0;
	while (j < size)
	{
		if (tab[i][j] == k)
			return (0);
		j++;
	}
	return (1);
}
