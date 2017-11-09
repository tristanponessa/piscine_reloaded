# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: trponess <trponess@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 20:46:50 by trponess          #+#    #+#              #
#    Updated: 2017/11/09 12:14:23 by trponess         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all: display_file.a

display_file.a:
	gcc -Wall -Wextra -Werror -c main.c
	ar rc display_file.a main.o
	gcc -Wall -Wextra -Werror -o display_file main.c display_file.a

clean:
	rm -f main.o

fclean: clean
	rm -f display_file.a
