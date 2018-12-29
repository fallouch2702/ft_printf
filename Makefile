# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: selias <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/05 16:03:37 by selias            #+#    #+#              #
#    Updated: 2018/12/29 20:56:58 by fallouch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = libftprintf.a
TEST = ft_printf.out
SRCS = basic_print.c ft_aux.c ft_lltoa.c ft_print.c ft_printf.c ft_putfloat.c \
	   parsing.c
OBJS = $(SRCS:.c=.o)

all: $(NAME) 

$(NAME):
		@gcc -c -Wall -Werror -Wextra libft/*.c -I libft/libft.h
		@gcc -c $(SRCS)
		@ar rc $(NAME) *.o

test:
		@gcc -g -L. -lftprintf $(SRCS) main.c -o $(TEST)
clean:
		@rm -rf *.o libft/*.o

fclean: clean
		@rm -rf $(NAME)

re: fclean all
