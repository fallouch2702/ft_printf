/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_print.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fallouch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/23 20:05:54 by fallouch          #+#    #+#             */
/*   Updated: 2018/12/25 00:27:02 by fallouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_putc(char c)
{
	static int n = 0;

	write(1, &c, 1);
	n++;
	return (n);
}

void		ft_puts(char *str)
{
	while (*str)
		ft_putc(*str++);
}

void		ft_put_str(char *str, t_printf pf)
{
	int			i;
	int			width;

	if (pf.precision == 0)
	{
		ft_putwidth(pf.width, pf);
		return ;
	}
	width = (int)ft_strlen(str) < pf.precision ? ft_strlen(str) : pf.precision;
	i = 0;
	!pf.moins ? ft_putwidth(pf.width - width, pf) : 1;
	if (pf.precision > 0 || pf.precision == -1)
	{
		while (*str && (pf.precision || pf.precision == -1))
		{
			ft_putc(*str++);
			pf.precision--;
		}
	}
	pf.moins ? ft_putwidth(pf.width - width, pf) : 1;
}

void		ft_putnc(char c, size_t n)
{
	while (n--)
		ft_putc(c);
}

void		ft_putwidth(int len, t_printf pf)
{
	if (pf.zero && pf.moins && len > 0)
		ft_putnc(' ', len);
	else if (pf.zero && len > 0)
		ft_putnc('0', len);
	else if (len > 0)
		ft_putnc(' ', len);
}
