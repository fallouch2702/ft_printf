# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: selias <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/05 16:03:37 by selias            #+#    #+#              #
#    Updated: 2018/12/25 00:26:02 by fallouch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRC = ft_printf.c \
	  basic_print.c \
	  ft_aux.c \
	  ft_lltoa.c \
	  parsing.c \
	  ft_print.c \
	  ft_putfloat.c
CFLAGS = -Wall -Wextra -Werror
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar -r $(NAME) $<
	@echo ./$(NAME)
	@ranlib $(NAME)

%.o: %.c
	@gcc -o $@ -c $< $(CFLAGS)
	@echo "\033[0;32m [COMPILE] \033[0m" $<

clean : 
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)


