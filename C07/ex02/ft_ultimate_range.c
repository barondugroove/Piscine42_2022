/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:00:31 by bchabot           #+#    #+#             */
/*   Updated: 2022/02/01 18:36:10 by bchabot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;
	int	*tab;

	i = 0;
	size = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tab = malloc(sizeof(int) * size);
	if (tab == NULL)
		return (-1);
	while (min != max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	*range = tab;
	return (size);
}
