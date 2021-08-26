# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abrisse <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/25 18:17:45 by abrisse           #+#    #+#              #
#    Updated: 2021/08/26 18:19:12 by abrisse          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.c ft_op.c ft_atoi.c tools.c

NAME	= do-op

OBJS	= ${SRCS:.c.o}

.c.o	:
	gcc -c $< -o ${<:.c.o}

${NAME}	: 
	gcc -Wall -Wextra -Werror ${SRCS} -o ${NAME}

all	: ${NAME}

clean :
	rm -f ${OBJS}

fclean : clean
	rm -f ${NAME}

re : fclean all

.PHONY : all clean fclean re
