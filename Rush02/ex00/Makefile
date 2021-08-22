# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anremiki <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/19 16:01:20 by anremiki          #+#    #+#              #
#    Updated: 2021/08/22 23:37:50 by anremiki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02

SRCS = ./srcs/ft_check_dico.c ./srcs/ft_error.c ./srcs/ft_get_file.c 
./srcs/ft_i_p.c ./srcs/ft_itoa.c ./srcs/ft_litteral.c
./srcs/ft_parsing.c ./srcs/ft_print.c ./srcs/ft_put.c
./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strlen.c ./srcs/ft_modulo.c
./srcs/main.c

OBJ = ${SRCS:.c=.o}

RM = rm -f

FLAGS = -Wall -Wextra -Werror

INCLUDES = ./includes/rush.h

.c.o:
	gcc $(FLAGS) -I $(INCLUDES) -c $< -o $(<:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re:
	fclean all

.PHONY: 
	all clean fclean re
