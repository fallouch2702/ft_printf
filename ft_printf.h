/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fallouch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 14:25:05 by fallouch          #+#    #+#             */
/*   Updated: 2018/12/24 22:37:58 by fallouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include "libft/libft.h"

# define MOD_L  1
# define MOD_LL 2
# define MOD_H  3
# define MOD_HH 4

# define FLAGS "# 0+-"
# define CONVERTER "diouxXcspf"

typedef struct			s_printf
{
	int			sharp;
	int			zero;
	int			space;
	int			plus;
	int			moins;
	int			width;
	int			precision;
	int			modifier;
	int			convertion;
}						t_printf;

int				ft_printf(char *format, ...);
char			*ft_lltoa(long long n);
char			*ft_lltoa_base(long long n, size_t base);
int				ft_putc(char c);
void			ft_putnc(char c, size_t n);
void			ft_puts(char *str);
void			ft_put_str(char *str, t_printf pf);
void			ft_putnbr_float(double n, t_printf pf);
void			ft_putnbr_int(long long n, t_printf pf);
void			ft_putnbr_octal(long long n, t_printf pf);
void			ft_putnbr_hex(long long n, t_printf pf);
void			ft_putnbr_unsigned(long long n, t_printf pf);
void			ft_putnbr_address(void *address, t_printf pf);
void			ft_putwidth(int len, t_printf pf);
char			*to_lower(char *str);
int				pf_ft_atoi(char *str);
int				is_in(char *str, char c);
void			pf_initialize(t_printf *pf);
int				ft_index(char *str, char c);
t_printf		parsing_flags(char **format);
t_printf		parsing_width(char **format, t_printf pf);
t_printf		parsing_precision(char **format, t_printf pf);
t_printf		parsing_modifier(char **format, t_printf pf);
t_printf		parsing_convertion(char **format, t_printf pf);

#endif