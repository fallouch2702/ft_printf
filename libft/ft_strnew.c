/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 17:44:52 by selias            #+#    #+#             */
/*   Updated: 2018/11/12 16:47:59 by selias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char	*new;
	size_t	i;

	if (!(new = malloc(size + 1)))
		return (0);
	i = 0;
	while (i <= size)
	{
		new[i] = 0;
		i++;
	}
	return (new);
}
