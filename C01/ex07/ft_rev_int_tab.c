/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 19:21:31 by bchabot           #+#    #+#             */
/*   Updated: 2022/02/03 11:44:10 by bchabot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	n;
	int	temp;

	i = 0;
	n = size - 1;
	while (i < size / 2)
	{
		temp = tab[n - i];
		tab[n - i] = tab[i];
		tab[i] = temp;
		i++;
	}
}

int	main(void)
{
	int	tab[6] = {40, 60, 70, 10, 150, 210};
	int size;
	int i;

	i = 0;
	size = 6;
	ft_rev_int_tab(tab, size);
	while (i < size)
	{
		printf("%d,", tab[i]);
		i++;
	}
	return (0);
}
