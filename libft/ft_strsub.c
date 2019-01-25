/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 13:21:26 by selias            #+#    #+#             */
/*   Updated: 2018/11/12 19:41:26 by selias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char		*new;
	int			i;

	if (s == NULL)
		return (NULL);
	if (!(new = malloc(sizeof(char) * (len + 1))))
		return (0);
	i = 0;
	while (len)
	{
		new[i] = s[start + i];
		i++;
		len--;
	}
	new[i] = '\0';
	return (new);
}
