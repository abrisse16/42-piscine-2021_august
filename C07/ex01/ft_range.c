/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrisse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 14:37:35 by abrisse           #+#    #+#             */
/*   Updated: 2021/08/19 01:54:40 by abrisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
		return (NULL);
	tab = malloc((max - min) * sizeof(int));
	if (!tab)
		return (NULL);
	i = 0;
	while (i < max - min)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
/*
int	main(int argc, char **argv)
{
	int *tab;
	int i;

	if (argc != 3)
		return 0;
	tab = ft_range(atoi(argv[1]), atoi(argv[2]));
	i = 0;
	while (i < (atoi(argv[2]) - atoi(argv[1])))
	{
		printf("%d\n", tab[i++]);
	}
	return 0;
}
*/
