/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 13:24:51 by selias            #+#    #+#             */
/*   Updated: 2018/11/14 15:38:23 by selias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*new;
	int			i;
	int			cpt;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	if (!(new = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (0);
	i = 0;
	while (s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	cpt = i;
	i = 0;
	while (s2[i])
	{
		new[cpt] = s2[i];
		cpt++;
		i++;
	}
	new[cpt] = '\0';
	return (new);
}
