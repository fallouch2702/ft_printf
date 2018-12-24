/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fdline.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 15:37:29 by selias            #+#    #+#             */
/*   Updated: 2018/11/26 15:42:16 by selias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include "libft.h"

int		ft_fdline(char *to_open)
{
	int		fd;
	char	*line;
	int		i;

	i = 0;
	fd = open(to_open, O_RDONLY);
	while (get_next_line(fd, &line) > 0)
	{
		i++;
	}
	return (i);
	close(fd);
}
