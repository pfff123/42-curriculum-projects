# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pfff <pfff@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/18 12:54:22 by pfff              #+#    #+#              #
#    Updated: 2025/10/19 10:17:26 by pfff             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= libftprintf.a
CC		:= cc
FLAGS	:= -Wall -Wextra -Werror
AR		:= ar rcs
RM		:= rm -f

SRC := ft_putptr.c ft_putstr.c ft_puthexlow.c ft_putunbr.c \
		ft_printf.c ft_putchar.c ft_puthexup.c ft_putnbr.c

OBJ := $(SRC:.c=.o)

.PHONY: all clean fclean re

all:$(NAME)

$(NAME): $(OBJ)
	$(AR) $@ $^

%.o : %.c
	$(CC) $(FLAGS)  -c $< -o $@

clean: 
	$(RM) $(OBJ)

fclean:clean 
	$(RM) $(NAME)

re: fclean all