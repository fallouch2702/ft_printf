/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoll.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 03:54:47 by selias            #+#    #+#             */
/*   Updated: 2019/01/03 19:37:53 by fallouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static void		ft_initi(int *i, int *j, int *neg)
{
	*i = 0;
	*j = 0;
	*neg = 1;
}

char			*ft_itoll(long long n)
{
	char	ret[100];
	char	*r;
	int		neg;
	int		i;
	int		j;

	ft_initi(&i, &j, &neg);
	if (n < 0)
		neg = -1;
	while (neg * n > 9 || neg * n < 0)
	{
		ret[i] = '0' + neg * (n % 10);
		n = n / 10;
		i++;
	}
	ret[i++] = '0' + neg * n;
	if (neg < 0)
		ret[i++] = '-';
	if ((r = (char *)malloc(sizeof(char) * i + 1)) == NULL)
		return (NULL);
	r[i] = '\0';
	while (i--)
		r[i] = ret[j++];
	return (r);
}
