/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 19:17:48 by anremiki          #+#    #+#             */
/*   Updated: 2021/08/22 23:35:37 by anremiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	main(int argc, char **argv)
{
	char	*str;
	char	*res;

	str = ft_get_file(str);
	res = ft_parsing(argv[1]);
	ft_print(str, res);
	free(str);
	return (0);
}
