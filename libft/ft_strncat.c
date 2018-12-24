/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 19:09:33 by selias            #+#    #+#             */
/*   Updated: 2018/11/09 19:11:08 by selias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t		i;
	size_t		cpt;

	i = 0;
	cpt = 0;
	while (dest[cpt])
		cpt++;
	while (src[i] && i < n)
	{
		dest[cpt] = src[i];
		cpt++;
		i++;
	}
	dest[cpt] = '\0';
	return (dest);
}
