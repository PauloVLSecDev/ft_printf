# **************************************************************************** # #                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pvitor-l <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/11 19:39:20 by pvitor-l          #+#    #+#              #
#    Updated: 2024/11/15 15:52:34 by pvitor-l         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
FLAGS = -Wall -Wextra -Werror

STR = ft_putchar.c\
      ft_putstr.c\
      ft_printf.c\
      ft_putnbr.c

OBS = $(STR:%.c=%.o)

all: $(NAME)

$(NAME): $(OBS)
	ar rcs $(NAME) $(OBS)

%.o:%.c ft_printf.h
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBS)

fclean: clean
	rm $(NAME)

re: fclean all	

.PHONY: all fclean clean re
