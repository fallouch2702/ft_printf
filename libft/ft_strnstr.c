/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 18:10:22 by selias            #+#    #+#             */
/*   Updated: 2018/11/14 15:39:22 by selias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t size)
{
	size_t		i;
	int			pos;
	int			len;

	i = 0;
	pos = 0;
	len = ft_strlen(s2);
	if (len == 0)
		return ((char *)s1);
	while (i < size && s1[i] != 0)
	{
		while (s2[pos] == s1[i + pos] && (i + pos) < size)
		{
			if (pos == len - 1)
				return ((char *)s1 + i);
			pos++;
		}
		pos = 0;
		i++;
	}
	return (0);
}
