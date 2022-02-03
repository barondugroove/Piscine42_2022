/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmailly <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 22:54:59 by pmailly           #+#    #+#             */
/*   Updated: 2022/01/29 23:52:16 by mafissie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../rush.h"

void	ft_take_num_dict(unsigned int nbr, t_dico_entry **tab, int size)
{
	if (nbr == 0)
		ft_search_for_number(tab, size, 0);
	if (nbr > 999999999)
	{
		ft_take_num_dict_b(nbr, tab, size);
		nbr = nbr % 1000000000;
		if (nbr > 0)
			write(1, " ", 1);
	}
	if (nbr > 999999)
	{
		ft_take_num_dict_m(nbr, tab, size);
		nbr = nbr % 1000000;
		if (nbr > 0)
			write(1, " ", 1);
	}
	if (nbr > 999)
	{
		ft_take_num_dict_t(nbr, tab, size);
		nbr = nbr % 1000;
		if (nbr > 0)
			write(1, " ", 1);
	}
	if (nbr > 0)
		ft_take_num_dict_h(nbr, tab, size);
}

void	ft_take_num_dict_b(unsigned int nbr, t_dico_entry **tab, int size)
{
	ft_search_for_number(tab, size, nbr / 1000000000);
	write(1, " ", 1);
	ft_search_for_number(tab, size, 1000000000);
}
