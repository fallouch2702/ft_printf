/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 19:10:06 by selias            #+#    #+#             */
/*   Updated: 2018/11/14 15:38:38 by selias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	const char		*tmpsrc;
	char			*tmpdst;
	size_t			dsize;
	size_t			length;

	tmpsrc = src;
	tmpdst = dst;
	length = size;
	while (length-- && *tmpdst)
		tmpdst++;
	dsize = tmpdst - dst;
	length = size - dsize;
	if (!length)
		return (dsize + ft_strlen(src));
	while (*tmpsrc)
	{
		if (length != 1)
		{
			*tmpdst++ = *tmpsrc;
			length--;
		}
		tmpsrc++;
	}
	*tmpdst = '\0';
	return (dsize + (tmpsrc - src));
}
