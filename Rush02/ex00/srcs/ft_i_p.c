/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 17:54:09 by anremiki          #+#    #+#             */
/*   Updated: 2021/08/22 23:17:05 by anremiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned long int	ft_i_p(unsigned long int nb, int power)
{
	unsigned long int	res;

	res = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power != 1)
	{
		res = res * nb;
		power--;
	}
	return (res);
}
