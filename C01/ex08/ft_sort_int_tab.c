/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 13:03:04 by bchabot           #+#    #+#             */
/*   Updated: 2022/01/20 17:21:43 by bchabot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	n;

	i = 0;
	n = 1;
	while (i < size - 1)
	{
		while (n < size)
		{
			if (tab[i] > tab[n])
			{
				ft_swap(&tab[n], &tab[i]);
			}	
			n++;
		}
		i++;
		n = i + 1;
	}
}
