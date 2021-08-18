/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrisse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 17:24:46 by abrisse           #+#    #+#             */
/*   Updated: 2021/08/18 23:48:36 by abrisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	char_is_charset(char c, char *charset)
{
	int	i;

	i = -1;
	while (charset[++i])
		if (charset[i] == c)
			return (1);
	return (0);
}

int	get_word_count(char *str, char *charset)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (char_is_charset(str[i], charset))
			i++;
		if (!char_is_charset(str[i], charset) && str[i])
		{
			count++;
			while (!char_is_charset(str[i], charset) && str[i])
				i++;
		}
	}
	return (count);
}

char	*get_word(int *index, char *str, char *charset)
{
	int		lenght;
	char	*word;
	int		i;

	i = 0;
	lenght = 0;
	while (char_is_charset(str[*index], charset))
		(*index)++;
	while (!char_is_charset(str[*index + lenght], charset)
		&& str[*index + lenght])
		lenght++;
	word = malloc((lenght + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (i < lenght)
	{
		word[i++] = str[*index];
		*index = *index + 1;
	}
	word[i] = 0;
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		word_count;
	int		i;
	int		j;

	i = 0;
	j = 0;
	word_count = get_word_count(str, charset);
	result = malloc((word_count + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	while (i < word_count)
		result[i++] = get_word(&j, str, charset);
	result[i] = 0;
	return (result);
}
/*
int main(int ac, char **av)
{
	char	**tab;

	tab = ft_split(av[1], av[2]);
	for (;*tab;tab++)
		printf("%s\n", *tab);
	return 0;	
}
*/
