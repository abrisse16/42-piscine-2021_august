/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_file.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 18:39:57 by anremiki          #+#    #+#             */
/*   Updated: 2021/08/22 19:24:49 by anremiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

char	*ft_get_file(char *str)
{
	char	*file;
	int		len;
	char	c;
	int		fd;

	file = "../numbers.dict";
	len = 0;
	fd = open(file, O_RDONLY);
	while ((read(fd, &c, 1) > 0))
		len++;
	close(fd);
	fd = open(file, O_RDONLY);
	str = malloc(sizeof(char) * len + 1);
	read(fd, str, len);
	close(fd);
	return (str);
}
