# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: trponess <trponess@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 20:46:50 by trponess          #+#    #+#              #
#    Updated: 2017/11/07 20:58:53 by trponess         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = all_together.a

SRC = ex06/ft_print_alphabet.c\
ex07/ft_print_numbers.c\
ex08/ft_is_negative.c

LIBFILES = 	ft_print_alphabet.o\
ft_print_numbers.o\
ft_is_negative.o

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRC)
	ar rc $(NAME) $(LIBFILES)
	rm *.o
	gcc test_all_functions.c all_together.a

clean:
	rm -f $(LIBFILES) *.a a.out

reboot: clean all
