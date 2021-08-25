# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abrisse <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/25 18:57:24 by abrisse           #+#    #+#              #
#    Updated: 2021/08/25 19:16:56 by abrisse          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# VARIABLES
CC		=	gcc
EXEC	=	bsq
CFLAGS	=	-Wall \
			-Wextra \
			-Werror
SRC_PATH=	srcs/
INC_PATH=	includes/
SRC		=	main.c \
			ft_atoi.c \
			ft_prog.c \
			ft_realloc.c \
			ft_strichr.c \
			ft_strlen.c \
			ft_print.c \
			ft_countchr.c \
			ft_init_var.c \
			ft_convert_map.c \
			ft_useful.c \
			ft_free_tab.c
OBJ_PATH=	obj/
OBJ		=	$(addprefix $(OBJ_PATH), $(SRC:.c=.o))
vpath %.c $(SRC_PATH)
INCLUDE	=	$(addprefix $(INC_PATH), bsq.h)

# COMPILATION
$(EXEC)	:	$(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

$(OBJ)	:	$(INCLUDE)

$(OBJ_PATH)%.o	:	%.c
	@mkdir -p $(OBJ_PATH)
	$(CC) $(CFLAGS) -o $@ -c $< -I $(INC_PATH)

# RULES
all		:	$(EXEC)

clean	:
	rm -rf $(OBJ) $(OBJ_PATH)

fclean	:	clean
	rm -rf $(EXEC)

re		:	fclean all

.PHONY	:	all clean fclean re
