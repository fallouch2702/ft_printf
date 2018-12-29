/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_print.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fallouch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/23 20:05:54 by fallouch          #+#    #+#             */
/*   Updated: 2018/12/29 21:48:10 by fallouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_putc(char c)
{
	counter();
	write(1, &c, 1);
}

void		ft_puts(char *str)
{
	while (*str)
		ft_putc(*str++);
}

void		ft_put_str(char *str, t_printf pf)
{
	pf.width -= ft_min(ft_strlen(str), pf.precision);
	!pf.moins ? ft_putwidth(pf.width, pf) : 1;
	if (pf.precision > 0 || pf.precision == -1)
	{
		while (*str && (pf.precision || pf.precision == -1))
		{
			ft_putc(*str++);
			pf.precision--;
		}
	}
	pf.moins ? ft_putwidth(pf.width, pf) : 1;
}

void		ft_putnc(char c, size_t n)
{
	while (n--)
		ft_putc(c);
}

void		ft_putwidth(int len, t_printf pf)
{
	if (pf.space || pf.plus)
		pf.width--;
	if (pf.zero && pf.moins && len > 0)
		ft_putnc(' ', len);
	else if (pf.zero && len > 0)
		ft_putnc('0', len);
	else if (len > 0)
		ft_putnc(' ', len);
}
