/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 12:37:14 by anremiki          #+#    #+#             */
/*   Updated: 2021/08/22 23:32:40 by anremiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

# include <stdlib.h> 
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <stdio.h>
# include <unistd.h>

void					ft_print_domain(char *str, int len);
void					ft_mod_one(char *str, char *res, int len, int i);
int						ft_mod_two(char *str, char *res, int len, int i);
void					ft_mod_zero(char *str, char *res, int len, int i);
void					ft_put(char *str);
char					*ft_get_file(char *str);
char					*ft_litteral(char *str, char *charset, char *to_find);
char					*ft_parsing(char *av);
void					ft_error(int i);
void					ft_print(char *str, char *res);
void					ft_putstr(char *str);
int						ft_strlen(char *str);
void					ft_putchar(char c);
int						ft_asciilen(int nb);
int						ft_haystack(char c, char *charset);
int						ft_strstr(char *str, char *to_find);
int						ft_len_av(char *av);
char					*ft_itoa(int nb);
int						ft_loop_dico(char *str, int i, int count);
int						ft_check_dico(char *str);
unsigned long int		ft_i_p(unsigned long int nb, int power);

#endif
