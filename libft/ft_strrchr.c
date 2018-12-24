/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 19:12:08 by selias            #+#    #+#             */
/*   Updated: 2018/11/12 15:43:24 by selias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*new;

	i = 0;
	new = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			new = (((char *)s + i));
		i++;
		if (s[i] == (unsigned char)c)
			new = (((char *)s + i));
	}
	return (new);
}
