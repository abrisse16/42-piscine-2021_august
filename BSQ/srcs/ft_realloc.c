/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrisse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 19:00:34 by abrisse           #+#    #+#             */
/*   Updated: 2021/08/25 19:01:08 by abrisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	ft_realloc(char **realdest, char *src)
{
	char	*dest;
	char	*tmp;
	int		len;
	int		i;

	len = ft_strlen(*realdest) + ft_strlen(src);
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (0);
	tmp = *realdest;
	i = 0;
	while (*realdest && *tmp)
		dest[i++] = *(tmp++);
	while (*src)
		dest[i++] = *(src++);
	dest[i] = 0;
	if (*realdest)
		free(*realdest);
	*realdest = dest;
	return (1);
}
