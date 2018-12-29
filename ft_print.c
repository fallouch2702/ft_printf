/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fallouch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/24 23:10:59 by fallouch          #+#    #+#             */
/*   Updated: 2018/12/29 21:37:33 by fallouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_int(long long n, t_printf pf)
{
	char	*nbr;
	int		precision;

	precision = pf.precision;
	nbr = ft_lltoa(n);
	if (n > 0 && pf.space && !pf.plus)
	{
		ft_putc(' ');
		pf.width--;
	}
	!pf.moins ? ft_putwidth(pf.width - ft_strlen(nbr) - pf.precision, pf) : 1;
	if (n < 0)
		ft_putc('-');
	while (pf.precision-- > (int)ft_strlen(nbr))
		ft_putc('0');
	ft_puts(nbr);
	pf.moins ? ft_putwidth(pf.width - ft_strlen(nbr) - precision, pf) : 0;
	free(nbr);
}

void	ft_putnbr_octal(long long n, t_printf pf)
{
	char	*nbr;
	int		precision;

	precision = pf.precision;
	nbr = ft_lltoa_base(n, 8);
	!pf.moins ? ft_putwidth(pf.width - ft_strlen(nbr) - precision, pf) : 1;
	pf.sharp ? ft_putc('0') : 0;
	while (pf.precision-- > (int)ft_strlen(nbr))
		ft_putc('0');
	ft_puts(nbr);
	pf.moins ? ft_putwidth(pf.width - ft_strlen(nbr) - precision, pf) : 0;
	free(nbr);
}

void	ft_putnbr_address(void *address, t_printf pf)
{
	char	*nbr;
	long	n;
	int		precision;

	n = (long)address > 0 ? (long)address : (unsigned int)address;
	nbr = ft_lltoa_base(n, 16);
	precision = pf.precision - ft_strlen(nbr);
	precision = precision < 0 ? 0 : precision;
	pf.width += pf.sharp ? -1 : 0;
	!pf.moins ? ft_putwidth(pf.width - ft_strlen(nbr) - precision, pf) : 1;
	ft_puts("0x");
	while (pf.precision-- > (int)ft_strlen(nbr))
		ft_putc('0');
	ft_puts(to_lower(nbr));
	pf.moins == 1 ? ft_putwidth(pf.width - ft_strlen(nbr) - precision, pf) : 0;
	free(nbr);
}

void	ft_putnbr_hex(long long n, t_printf pf)
{
	char	*nbr;
	int		precision;

	nbr = ft_lltoa_base(n, 16);
	precision = pf.precision - ft_strlen(nbr);
	precision = precision < 0 ? 0 : precision;
	pf.width += pf.sharp ? -1 : 0;
	!pf.moins ? ft_putwidth(pf.width - ft_strlen(nbr) - precision, pf) : 1;
	if (pf.sharp)
	{
		if (pf.convertion == 5)
			ft_puts("0X");
		if (pf.convertion == 4)
			ft_puts("0x");
	}
	while (pf.precision-- > (int)ft_strlen(nbr))
		ft_putc('0');
	(pf.convertion == 5) ? ft_puts(nbr) : ft_puts(to_lower(nbr));
	pf.moins == 1 ? ft_putwidth(pf.width - ft_strlen(nbr) - precision, pf) : 0;
	free(nbr);
}

void	ft_putnbr_unsigned(long long n, t_printf pf)
{
	char	*nbr;
	int		precision;

	if (n > 0 && pf.space && !pf.plus)
	{
		ft_putc(' ');
		pf.width--;
	}
	precision = pf.precision;
	nbr = ft_lltoa(n);
	!pf.moins ? ft_putwidth(pf.width - ft_strlen(nbr) - precision, pf) : 1;
	while (pf.precision-- > (int)ft_strlen(nbr))
		ft_putc('0');
	ft_puts(nbr);
	pf.moins ? ft_putwidth(pf.width - ft_strlen(nbr) - precision, pf) : 0;
	free(nbr);
}
