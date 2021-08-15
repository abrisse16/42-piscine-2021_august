/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 19:15:47 by rmorel            #+#    #+#             */
/*   Updated: 2021/08/15 22:28:45 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		ft_size_table(char *str);
int		ft_verif_arg(char **argv, int size);
int		**ft_fill_tab(int size);
int		**ft_fill_tab_arg(int size, char *str);
int		ft_is_valid(int **tab, int **tab_arg, int position, int size);
void	ft_print_tab(int **tab, int size);
void	ft_putchar(char c);
void	ft_free(int **tab, int **tab_arg, int size);

int	main(int argc, char **argv)
{
	int		**tab;
	int		**tab_arg;
	int		size;

	if (argc != 2)
	{
		write (1, "Error\n", 6);
		return (0);
	}
	size = ft_size_table(argv[1]);
	if (ft_verif_arg(argv, size) == 0)
	{
		write(1, "Error\n", 6);
		return (-1);
	}
	tab = ft_fill_tab(size);
	tab_arg = ft_fill_tab_arg(size, argv[1]);
	if (ft_is_valid(tab, tab_arg, 0, size))
		ft_print_tab(tab, size);
	else
		write(1, "Error\n", 6);
	ft_free(tab, tab_arg, size);
	return (0);
}

void	ft_print_tab(int **tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size)
	{
		while (j < size)
		{
			ft_putchar(tab[i][j] + 48);
			if (j != size - 1)
				write (1, " ", 1);
			j++;
		}
		write (1, "\n", 1);
		i++;
		j = 0;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_free(int **tab, int **tab_arg, int size)
{
	int		i;

	i = 0;
	while (i < size)
	{
		free (tab[i]);
		free (tab_arg[i]);
		i++;
	}
	free (tab);
	free (tab_arg);
}
