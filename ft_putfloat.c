/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putfloat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fallouch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 14:25:30 by fallouch          #+#    #+#             */
/*   Updated: 2018/12/25 00:11:31 by fallouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_putnbr_float(double n, t_printf pf)
{
	char		*nb;
	int			tmp;

	if (n > 0 && pf.space && !pf.plus)
	{
		ft_putc(' ');
		pf.width--;
	}
	nb = ft_lltoa((long long)n);
	pf.width = pf.precision ? pf.width - 1 : pf.width;
	!pf.moins ? ft_putwidth(pf.width - ft_strlen(nb) - pf.precision, pf) : 1;
	if (n < 0)
		ft_putc('-');
	ft_puts(nb);
	if (pf.precision)
		ft_putc('.');
	n -= ft_atoll(nb);
	while (pf.precision && pf.precision--)
	{
		n = n * 10;
		tmp = (long long)n % 10;
		tmp >= 0 ? ft_putc('0' + tmp) : ft_putc('0');
	}
	pf.moins ? ft_putwidth(pf.width - ft_strlen(nb) - pf.precision, pf) : 1;
}
