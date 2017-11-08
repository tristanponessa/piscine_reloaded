# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: trponess <trponess@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/08 12:46:00 by trponess          #+#    #+#              #
#    Updated: 2017/11/08 12:46:03 by trponess         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

LIBFILES = ft_putchar.o \
		   ft_putstr.o \
		   ft_strcmp.o \
		   ft_strlen.o \
		   ft_swap.o

FLAG = -Wall -Wextra -Werror

HEADER = includes

SRC = srcs/ft_putchar.c \
	  srcs/ft_putstr.c \
	  srcs/ft_strcmp.c \
	  srcs/ft_strlen.c \
	  srcs/ft_swap.c

all: $(NAME)

$(NAME):
	gcc $(FLAG) -c $(SRC) -I $(HEADER)
	ar rc $(NAME) $(LIBFILES)

clean:
	rm -f $(LIBFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all
