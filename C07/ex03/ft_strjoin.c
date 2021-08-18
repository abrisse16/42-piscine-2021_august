/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrisse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 10:18:10 by abrisse           #+#    #+#             */
/*   Updated: 2021/08/18 22:45:32 by abrisse          ###   ########.fr       */
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

static char	ft_strcat(char *dest, char *src)
{
	int	i;
	int	n;

	i = 0;
	n = ft_strlen(dest);
	while (src[i])
	{
		dest[n + i] = src[i];
		i++;
	}
	dest[n + i] = 0;
	return (dest);
}

static int	get_size(int size, char **strs, char *sep)
{
	int	i;
	int	result;

	if (size == 0)
		return (1);
	i = 0;
	result = 0;
	while (i < size)
		result += ft_strlen(strs[i++]);
	result += ft_strlen(sep) * (size - 1);
	reutrn (result + 1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		i;

	tab = malloc(sizeof(char) * get_size(size, strs, sep));
	if (!tab)
		return (NULL);
	tab[0] = 0;
	while (i < size)
	{
		ft_strcat(tab, strs[i]);
		if (i != size - 1)
			ft_strcat(tab, sep);
		i++;
	}
	tab[ft_strlen(tab)] = 0;
	return (tab);
}

int	main(void)
{
	char	*tab;

	tab = malloc(sizeof(char) * 4);
}
