# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yafu <yafu@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/18 12:54:22 by pfff              #+#    #+#              #
#    Updated: 2025/11/25 14:17:40 by yafu             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= pushswap.a
CC		:= cc
FLAGS	:= -Wall -Wextra -Werror
AR		:= ar rcs
RM		:= rm -f

SRC := chunk.c lib_function.c find_min_max.c listarray.c \
		push.c reverse.c rotate.c sort_small.c swap.c

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