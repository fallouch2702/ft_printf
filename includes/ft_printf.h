/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fallouch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 14:25:05 by fallouch          #+#    #+#             */
/*   Updated: 2018/12/17 14:30:40 by fallouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft.h"

char		*g_tab_base = "0123456789ABCDEF";

char		*ft_lltoa(long long n);
int			ft_putc(char c);
void		ft_puts(char *str);
void		ft_putnbr_float(double n, int precision);
void		ft_putnbr_int(long long n, int precision);
void		ft_putnbr_octal(long long n, int precision);
void		ft_putnbr_hex(long long n, int precision, int maj);
void		ft_putnbr_unsigned(long long n, int precision);



#endif
