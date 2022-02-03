/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 18:36:33 by bchabot           #+#    #+#             */
/*   Updated: 2022/01/28 10:36:19 by bchabot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

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

int	main(int argc, char **argv)
{
	printf("%s", ft_strstr(argv[1], argv[2]));
	return (0);
}
