# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fallouch <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/05 16:03:37 by fallouch          #+#    #+#              #
#    Updated: 2019/01/14 19:11:37 by ihbentha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = libftprintf.a
SRCS = srcs/basic_print.c srcs/ft_aux.c srcs/ft_lltoa.c srcs/ft_print.c \
	   srcs/ft_printf.c srcs/ft_putfloat.c srcs/parsing.c srcs/conv_d.c

OBJS = $(SRCS:.c=.o)

all: $(NAME) 

$(NAME):
		make -C libft
		@gcc -Wall -Werror -Wextra -c $(SRCS)
		@ar rc $(NAME) *.o libft/*.o

clean:
		@rm -rf *.o
		@make clean -C libft

fclean: clean
		@rm -rf $(NAME)
		@make fclean -C libft

re: fclean all
