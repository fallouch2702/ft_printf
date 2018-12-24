/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 12:00:20 by selias            #+#    #+#             */
/*   Updated: 2018/11/14 15:37:05 by selias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*new_dest;
	unsigned char	*new_src;

	new_dest = (unsigned char *)dest;
	new_src = (unsigned char *)src;
	while (n)
	{
		*new_dest = *new_src;
		new_dest++;
		new_src++;
		n--;
		if (*(new_src - 1) == (unsigned char)c)
			return (new_dest);
	}
	return (0);
}
