/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprime.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 13:38:33 by selias            #+#    #+#             */
/*   Updated: 2018/11/16 13:45:11 by selias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isprime(int nb)
{
	int		i;
	int		j;

	i = 2;
	j = 0;
	if (nb < 2)
		return (0);
	while (i < nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
