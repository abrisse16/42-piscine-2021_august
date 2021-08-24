# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abrisse <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/23 17:03:38 by abrisse           #+#    #+#              #
#    Updated: 2021/08/24 12:28:43 by abrisse          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

NAME	= libft.a

OBJS	=  ${SRCS:.c=.o}

HEADERS	= includes

.c.o	:
	gcc -Wall -Wextra -Werror -I ${HEADERS} -c $< -o ${<:.c=.o}

${NAME}	: ${OBJS}
	ar cr ${NAME} ${OBJS}

all	: ${NAME}

clean	:
	rm -f ${OBJS}

fclean	: clean
	rm -f ${NAME}

re	: fclean all

.PHONY : all clean fclean re
