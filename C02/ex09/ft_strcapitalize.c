/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 12:53:58 by bchabot           #+#    #+#             */
/*   Updated: 2022/01/20 12:54:21 by bchabot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

int	ft_is_alphanum(char str)
{
	if (str >= 'a' && str <= 'z')
		return (0);
	if (str >= 'A' && str <= 'Z')
		return (0);
	if (str >= '0' && str <= '9')
		return (0);
	else
		return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	i++;
	while (str[i])
	{
		if (((ft_is_alphanum(str[i])) && \
		(str[i + 1] >= 'a' && str[i + 1] <= 'z')))
			str[i + 1] -= 32;
		i++;
	}
	return (str);
}
