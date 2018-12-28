# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: selias <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/05 16:03:37 by selias            #+#    #+#              #
#    Updated: 2018/12/25 21:11:53 by fallouch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = libftprintf.a
SRC = 	basic_print.c ft_aux.c ft_lltoa.c ft_print.c ft_putfloat.c\
			ft_parsing.c ft_printf.c

HEADER = ft_printf.h
OBJ = $(SRC:.c=.o)
CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	@ar -r $(NAME) *.o
	@echo ./$(NAME)
	@ranlib $(NAME)

$(OBJDIR)%.o: %.c
	@gcc -o $@ -c $< $(CFLAGS)
	@echo "\033[0;32m [COMPILE] \033[0m" $<

clean:
	rm -f *.o

fclean:clean
	rm -f $(NAME)

re: fclean all
