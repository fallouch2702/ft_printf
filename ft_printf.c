/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fallouch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 14:24:13 by fallouch          #+#    #+#             */
/*   Updated: 2018/12/24 23:44:19 by fallouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

long long	mod(t_printf pf, va_list arg)
{
	if (pf.modifier == MOD_L)
		return (va_arg(arg, long));
	if (pf.modifier == MOD_LL)
		return (va_arg(arg, long long));
	if (pf.modifier == MOD_H)
		return ((short)va_arg(arg, int));
	if (pf.modifier == MOD_HH)
		return ((unsigned char)va_arg(arg, int));
	else
		return (va_arg(arg, long long));
}

void		ft_printer(char **format, va_list arg)
{
	t_printf		pf;

	pf = parsing_flags(format);
	if (pf.convertion < 0)
		return ;
	if (pf.convertion == 0 || pf.convertion == 1)
		ft_putnbr_int(pf.modifier ? mod(pf, arg) : va_arg(arg, int), pf);
	if (pf.convertion == 2)
		ft_putnbr_octal(pf.modifier ? mod(pf, arg) : va_arg(arg, unsigned int), pf);
	if (pf.convertion == 3)
		ft_putnbr_unsigned(pf.modifier ? mod(pf, arg) : va_arg(arg, unsigned int), pf);
	if (pf.convertion == 4)
		ft_putnbr_hex(pf.modifier ? mod(pf, arg) : va_arg(arg, unsigned int), pf);
	if (pf.convertion == 5)
		ft_putnbr_hex(pf.modifier ? mod(pf, arg) : va_arg(arg, unsigned int), pf);
	if (pf.convertion == 6)
		ft_putc(va_arg(arg, int));
	if (pf.convertion == 7)
		ft_put_str(va_arg(arg, char *), pf);
	if (pf.convertion == 8)
		ft_putnbr_address(va_arg(arg, void *), pf);
	if (pf.convertion == 9)
		ft_putnbr_float(va_arg(arg, double), pf);
}

int			ft_printf(char *format, ...)
{
	va_list		arg;

	va_start(arg, format);
	while (*format)
	{
		if (*format == '%' && *(format + 1) == '%')
		{
			ft_putc('%');
			format += 2;
		}
		else if (*format == '%')
		{
			format++;
			ft_printer(&format, arg);
		}
		else
			ft_putc(*format++);
	}
	return (ft_putc(0));
}
