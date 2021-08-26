/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrisse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 14:29:38 by abrisse           #+#    #+#             */
/*   Updated: 2021/08/25 15:27:25 by abrisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;
	int	tri_croiss;
	int	tri_decroiss;

	i = 1;
	tri_croiss = 1;
	tri_decroiss = 1;
	if (length <= 1)
		return (1);
	while (i < length)
	{
		if (f(tab[i - 1], tab[i]) < 0)
			tri_decroiss = 0;
		i++;
	}
	i = 1;
	while (i < lenght)
	{
		if (f(tab[i - 1], tab[i]) > 0)
			tri_croiss = 0;
		i++;
	}
	if (tri_croiss || tri_decroiss)
		return (1);
	return (0);
}
