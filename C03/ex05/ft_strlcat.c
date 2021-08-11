/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrisse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 12:29:47 by abrisse           #+#    #+#             */
/*   Updated: 2021/08/11 16:08:36 by abrisse          ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	lenght;

	lenght = 0;
	if (size <= (unsigned int) ft_strlen(dest))
		return (ft_strlen(src) + size);
	while (dest[lenght] && lenght < size)
		lenght++;
	i = 0;
	while (src[i] && size && lenght + i < size - 1)
	{
		dest[lenght + i] = src[i];
		i++;
	}
	dest[lenght + i] = 0;
	i = 0;
	while (src[i])
		i++;
	return (lenght + i);
}
