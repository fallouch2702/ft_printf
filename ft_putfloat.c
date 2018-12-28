/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putfloat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fallouch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 14:25:30 by fallouch          #+#    #+#             */
/*   Updated: 2018/12/28 18:40:05 by fallouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_putnbr_float(double n, t_printf pf)
{
	char		*nb;
	int			precision;

	precision = pf.precision;
	nb = ft_lltoa((long long)n);
	pf.width = pf.precision ? pf.width - 1 : pf.width;
	pf.width = n < 0 ? pf.width - 1 : pf.width;
	!pf.moins ? ft_putwidth(pf.width - ft_strlen(nb) - pf.precision, pf) : 1;
	if (pf.space || pf.plus)
		if (n >= 0)
			pf.plus ? ft_putc('+') : ft_putc(' ');
	if (n < 0)
		ft_putc('-');
	ft_puts(nb);
	if (pf.precision)
		ft_putc('.');
	n -= ft_atoll(nb);
	while (precision--)
	{
		n = n < 0 ? -n : n;
		n = n * 10;
		ft_putc('0' + ((long long)n % 10));
	}
	pf.moins ? ft_putwidth(pf.width - ft_strlen(nb) - pf.precision, pf) : 1;
}
