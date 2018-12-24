/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 19:08:14 by selias            #+#    #+#             */
/*   Updated: 2018/11/09 19:08:44 by selias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, const char *src)
{
	int		i;
	int		cpt;

	i = 0;
	cpt = 0;
	while (dest[cpt])
		cpt++;
	while (src[i])
	{
		dest[cpt] = src[i];
		cpt++;
		i++;
	}
	dest[cpt] = '\0';
	return (dest);
}
