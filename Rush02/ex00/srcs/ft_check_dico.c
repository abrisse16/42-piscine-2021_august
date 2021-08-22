/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_dico.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 18:49:04 by anremiki          #+#    #+#             */
/*   Updated: 2021/08/22 22:29:33 by anremiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_loop_dico(char *str, int i, int count)
{
	while (str[++i] != '\0')
	{
		while (str[i++] >= '0' && str[i] <= '9')
			if (count == 0)
				count++;
		while (str[i] == ' ')
			i++;
		if (str[i] != ' ' || str[i] != ':')
			return (0);
		if (str[i++] == ':')
			if (count == 1)
				count++;
		while (str[i++] == ' ')
			while (str[i++] >= 32 && str[i] <= 127)
				if (count == 2)
					count++;
		if (str[i] == '\n')
			count++;
		if (count != 4)
			return (0);
		count = 0;
	}
	return (1);
}

int	ft_check_dico(char *str)
{
	return (ft_loop_dico(str, -1, 0));
}
