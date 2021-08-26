/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrisse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 22:50:53 by abrisse           #+#    #+#             */
/*   Updated: 2021/08/25 15:23:16 by abrisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	i;
	int	*result;

	result = malloc(sizeof(int) * lenght);
	if (!result)
		return (NULL);
	i = 0;
	while (i < lenght)
	{
		result[i] = (*f)(tab[i]);
		i++;
	}
	return (result);
}
