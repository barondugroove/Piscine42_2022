/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 21:36:26 by bchabot           #+#    #+#             */
/*   Updated: 2022/02/03 16:34:58 by bchabot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (dest[x])
		x++;
	while (src[y])
	{
		dest[x + y] = src[y];
		y++;
	}
	dest[x + y] = '\0';
	return (dest);
}

char	*ft_empty(void)
{
	char	*vide;

	vide = malloc(sizeof(char) * 1);
	vide[0] = '\0';
	return (vide);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		longueur;
	int		x;

	x = -1;
	longueur = 0;
	if (size == 0)
		return (ft_empty());
	while (++x < size)
	{
		longueur += ft_strlen(strs[x]);
	}
	longueur += ft_strlen(sep) * (size - 1);
	tab = malloc(sizeof(char) * longueur + 1);
	tab[0] = '\0';
	if (!tab)
		return (0);
	x = -1;
	while (++x < size)
	{
		if (x != 0)
			tab = ft_strcat(tab, sep);
		tab = ft_strcat(tab, strs[x]);
	}
	return (tab);
}

/*int	main(int argc, char **argv)
{
	printf("%s", ft_strjoin(argc - 1, argv + 1, "||"));
	return (0);
}*/
