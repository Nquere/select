# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nquere <nquere@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/05/04 16:31:34 by nquere            #+#    #+#              #
#    Updated: 2014/05/04 16:31:38 by nquere           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_select
SRC =	main.c \
		ft_init_list.c \
		term_no_canon.c \
		term_canon.c \
		ft_int_putchar.c \
		ft_ins_circ_list.c \
		ft_strcpy.c \
		ft_putstr.c \
		ft_putnbr.c \
		ft_strlen.c \
		ft_putchar.c \
		display_list.c

OBJ = $(SRC:.c=.o)
CC = gcc
CFLAGS = -Wall -Werror -Wextra

.PHONY: all clean fclean re

all : $(NAME)

$(NAME) : $(OBJ)
	@($(CC) $(CFLAGS) -c $(SRC))
	@($(CC) -o $(NAME) $(OBJ) -L /usr/bin -ltermcap)
	@echo "\033[35m$(NAME) created !\033[0m"

%.o:%.c
	@($(CC) -c $(SRC) $(CFLAGS))

clean :
	@(rm -f $(OBJ))
	@echo "\033[31mObject files deleted !\033[0m"

fclean : clean
	@(rm -f $(NAME))
	@echo "\033[31m$(NAME) deleted !\033[0m"

re : fclean all
