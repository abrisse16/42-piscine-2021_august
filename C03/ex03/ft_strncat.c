/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrisse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 11:50:02 by abrisse           #+#    #+#             */
/*   Updated: 2021/08/11 13:20:34 by abrisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	n;

	i = 0;
	n = ft_strlen(dest);
	while (src[i] && nb > 0)
	{
		dest[n + i] = src[i];
		i++;
		nb--;
	}
	dest[n + i] = 0;
	return (dest);
}
