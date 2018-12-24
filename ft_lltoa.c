/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lltoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fallouch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/24 23:09:52 by fallouch          #+#    #+#             */
/*   Updated: 2018/12/24 23:10:45 by fallouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*g_tab_base = "0123456789ABCDEF";

char	*ft_reverse_nbr(char *nbr)
{
	char	*ret;
	int		i;
	int		j;

	j = 0;
	i = 0;
	if (!(ret = ft_strnew(ft_strlen(nbr) + 1)))
		return (NULL);
	while (nbr[j])
		j++;
	j--;
	while (j >= 0)
		ret[i++] = nbr[j--];
	return (ret);
}

char	*ft_lltoa(long long n)
{
	char	ret[100];
	int		i;

	i = 0;
	n = n < 0 ? -n : n;
	while (n || !i)
	{
		ret[i++] = '0' + n % 10;
		n = n / 10;
	}
	ret[i] = 0;
	return (ft_reverse_nbr(ret));
}

char	*ft_lltoa_base(long long n, size_t base)
{
	char	ret[100];
	int		i;

	i = 0;
	ft_bzero(ret, 100);
	while (n || !i)
	{
		ret[i++] = g_tab_base[n % base];
		n = n / base;
	}
	ret[i] = 0;
	return (ft_reverse_nbr(ret));
}

int		pf_ft_atoi(char *str)
{
	int		ret;

	ret = (*str <= '9' && *str >= '0') ? 0 : -1;
	while (*str && *str <= '9' && *str >= '0')
	{
		ret = ret * 10 + (*str % '0');
		str++;
	}
	return (ret);
}
