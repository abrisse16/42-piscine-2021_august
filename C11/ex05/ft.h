/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrisse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 16:50:50 by abrisse           #+#    #+#             */
/*   Updated: 2021/08/26 18:16:49 by abrisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include <unistd.h>

int		check_arg(int b, char **av);
int		ft_calcul(int a, int b, char **av);
int		char_is_whitespace(char c);
int		ft_atoi(char *str);
int		ft_strcmp(char *s1, char *s2);
void	ft_putchar(char c);
void	ft_putnbr_aux(int nb);
void	ft_putnbr(int nb);
int		sum(int x, int y);
int		minus(int x, int y);
int		div(int x, int y);
int		times(int x, int y);
int		mod(int x, int y);

#endif
