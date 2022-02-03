/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 18:54:26 by bchabot           #+#    #+#             */
/*   Updated: 2022/02/01 18:15:11 by bchabot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*tab;

	i = 0;
	size = max - min;
	tab = NULL;
	if (min >= max)
		return (tab);
	tab = malloc(sizeof(int) * size);
	if (!tab)
		return (0);
	while (min != max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
