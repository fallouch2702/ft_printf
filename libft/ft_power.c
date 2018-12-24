/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 19:24:50 by selias            #+#    #+#             */
/*   Updated: 2018/12/06 19:26:58 by selias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long long		ft_power(int nb, int power)
{
	long long ret;

	if (power < 0)
		return (0);
	else if (power == 0)
	{
		return (1);
	}
	else
	{
		ret = nb * ft_power(nb, power - 1);
	}
	return (ret);
}
