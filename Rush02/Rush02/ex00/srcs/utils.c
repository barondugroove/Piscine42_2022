/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafissie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 16:42:14 by mafissie          #+#    #+#             */
/*   Updated: 2022/01/29 23:47:26 by bchabot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../rush.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*new_str;

	new_str = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (new_str == NULL)
		return (NULL);
	return (ft_strcpy(new_str, src));
}

char	*ft_strjoin(char *s1, char *s2, int check)
{
	int		i;
	int		sizes1;
	int		sizes2;
	char	*str;

	if (s1 && s2)
	{
		sizes1 = strlen(s1);
		sizes2 = strlen(s2);
		str = malloc(sizeof(char) * (sizes1 + sizes2 + 1));
		if (str == NULL)
			return (NULL);
		i = -1;
		while (s1[++i])
			str[i] = s1[i];
		i = -1;
		while (s2[++i] && sizes1 < (check + sizes1))
		{
			str[sizes1] = s2[i];
			sizes1++;
		}
		str[sizes1] = '\0';
		return (str);
	}
	return (NULL);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	if (*to_find == '\0')
		return (str);
	while (str[x])
	{
		if (str[x] == to_find[0])
		{
			y = 0;
			while (str[x + y] == to_find[y])
			{
				y++;
				if (to_find[y] == '\0')
					return (str + x);
			}
		}
		x++;
	}
	return (0);
}
