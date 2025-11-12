# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pfff <pfff@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/08 08:20:16 by pfff              #+#    #+#              #
#    Updated: 2025/10/08 09:02:38 by pfff             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    := libft.a
CC      := cc
CFLAGS  := -Wall -Wextra -Werror
AR      := ar rcs
RM      := rm -f

SRCS    := ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
            ft_toupper.c ft_tolower.c ft_strlen.c ft_strdup.c ft_calloc.c ft_bzero.c \
            ft_memset.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
            ft_strchr.c ft_strrchr.c ft_strncmp.c ft_substr.c ft_strjoin.c ft_strtrim.c \
            ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c\
            ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
            ft_memcmp.c ft_memchr.c ft_strnstr.c
            
BSRCS   := ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
            ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
            ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS    := $(SRCS:.c=.o)
BOBJS   := $(BSRCS:.c=.o)

ifeq ($(BONUS),1)
	ALL_OBJS := $(OBJS) $(BOBJS)
else
	ALL_OBJS := $(OBJS)
endif

.PHONY: all clean fclean re bonus

all: $(NAME)

$(NAME): $(ALL_OBJS)
	$(AR) $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

bonus:
	$(MAKE) BONUS=1 all

clean:
	$(RM) $(OBJS) $(BOBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all