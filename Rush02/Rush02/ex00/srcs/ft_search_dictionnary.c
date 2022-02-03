/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_dictionnary.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johrober <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 18:34:01 by johrober          #+#    #+#             */
/*   Updated: 2022/01/30 13:34:26 by pmailly          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../rush.h"

void	ft_search_for_number(t_dico_entry **tab, int size, int num)
{
	int	count;

	count = 0;
	while (count < size)
	{
		if (tab[count]->num == num)
		{
			ft_putstr(tab[count]->text);
			return ;
		}
		count++;
	}
}
