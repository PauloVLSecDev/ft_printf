# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pvitor-l <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/11 19:39:20 by pvitor-l          #+#    #+#              #
#    Updated: 2024/11/11 21:07:29 by pvitor-l         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
FLAGS = -Wall -Wextra -Werror

STR = arquios.

OBS = ${STR:,o=.c)

all: $(NAME)

$(NAME); $(OBS)
	ar $(NAME) $(OBS)

%.o:%.c ft_printf.h
	$(CC) $(FLAGS) -o $< -c $@

clean:
	rm -f $(NAME)

fclean:
	rm $(NAME) $(OBS)

#end
