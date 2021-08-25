/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrisse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 18:59:03 by abrisse           #+#    #+#             */
/*   Updated: 2021/08/25 18:59:06 by abrisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	ft_countchr(char *s, char c)
{
	int	ret;

	ret = 0;
	while (*s)
		if (*(s++) == c)
			ret++;
	return (ret);
}
