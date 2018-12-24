/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 12:03:31 by selias            #+#    #+#             */
/*   Updated: 2018/11/13 17:02:48 by selias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*new;

	new = (unsigned char *)s;
	while (n)
	{
		if (*new == (unsigned char)c)
			return (new);
		new++;
		n--;
	}
	return (0);
}
