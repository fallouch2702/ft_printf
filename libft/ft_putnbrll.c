/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrll.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 03:21:56 by selias            #+#    #+#             */
/*   Updated: 2018/12/07 03:23:31 by selias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbrll(long long n)
{
	if (n < 0)
	{
		ft_putchar('-');
		ft_putnbrll(-n);
	}
	else if (n >= 10)
	{
		ft_putnbrll(n / 10);
		ft_putchar(n % 10 + '0');
	}
	else
		ft_putchar(n + '0');
}
