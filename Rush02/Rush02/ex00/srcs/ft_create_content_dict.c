/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_content_dict.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafissie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 17:20:16 by mafissie          #+#    #+#             */
/*   Updated: 2022/01/30 00:16:24 by mafissie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../rush.h"

char	*ft_create_content_dict(char *files)
{
	int		fd;
	char	buff[2];
	int		check;
	char	*str[2];

	fd = open(files, O_RDONLY);
	if (fd == -1)
		return (NULL);
	check = read(fd, buff, 1);
	str[1] = ft_strdup(buff);
	if (str[1] == NULL)
		return (NULL);
	while (check)
	{
		check = read(fd, buff, 1);
		str[0] = ft_strjoin(str[1], buff, check);
		if (str[0] == NULL)
			return (NULL);
		free(str[1]);
		str[1] = ft_strdup(str[0]);
		if (str[1] == NULL)
			return (NULL);
		free(str[0]);
	}
	return (str[1]);
}
