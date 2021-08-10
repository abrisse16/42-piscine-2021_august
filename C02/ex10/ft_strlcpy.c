/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrisse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 12:38:30 by abrisse           #+#    #+#             */
/*   Updated: 2021/08/10 14:17:26 by abrisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size == 0)
	{
		dest[i] = 0;
		return (ft_strlen(src));
	}
	while (i < (size - 1) && *(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest +  i) = '\0';
	return (ft_strlen(src));
}

int main(int ac, char **qv)
{
	char	ui[64];
	char	ui2[64];

	printf("me ret => %d %s\n", ft_strlcpy(ui, qv[1], atoi(qv[2])), ui);
	printf("you ret => %lu %s\n", strlcpy(ui2, qv[1], atoi(qv[2])), ui2);
	return (0);
}
