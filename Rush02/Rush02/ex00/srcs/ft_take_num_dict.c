/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_take_num_dict.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmailly <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 18:13:04 by pmailly           #+#    #+#             */
/*   Updated: 2022/01/30 00:12:22 by pmailly          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../rush.h"

void	ft_take_num_dict_m(unsigned int nbr, t_dico_entry **tab, int size)
{
	int	centaine;
	int	dizaine;
	int	unite;

	centaine = (nbr % 1000000000) / 1000000;
	dizaine = centaine % 100;
	unite = dizaine % 10;
	ft_centaine(centaine, tab, size);
	ft_dizaine(dizaine, unite, tab, size);
	write(1, " ", 1);
	ft_search_for_number(tab, size, 1000000);
}

void	ft_take_num_dict_t(unsigned int nbr, t_dico_entry **tab, int size)
{
	int	centaine;
	int	dizaine;
	int	unite;

	centaine = (nbr % 1000000) / 1000;
	dizaine = centaine % 100;
	unite = dizaine % 10;
	ft_centaine(centaine, tab, size);
	ft_dizaine(dizaine, unite, tab, size);
	write(1, " ", 1);
	ft_search_for_number(tab, size, 1000);
}

void	ft_take_num_dict_h(unsigned int nbr, t_dico_entry **tab, int size)
{
	int	centaine;
	int	dizaine;
	int	unite;

	centaine = (nbr % 1000);
	dizaine = centaine % 100;
	unite = dizaine % 10;
	ft_centaine(centaine, tab, size);
	ft_dizaine(dizaine, unite, tab, size);
}

void	ft_dizaine(int dizaine, int unite, t_dico_entry **tab, int size)
{
	if ((dizaine < 20) && (dizaine > 0))
		ft_search_for_number(tab, size, dizaine);
	else if (dizaine >= 20)
	{
		dizaine = (dizaine / 10) * 10;
		ft_search_for_number(tab, size, dizaine);
		if (unite > 0)
		{
			write(1, " ", 1);
			ft_search_for_number(tab, size, unite);
		}
	}
}

void	ft_centaine(int centaine, t_dico_entry **tab, int size)
{
	int	modcent;

	modcent = centaine % 100;
	if (centaine > 99)
	{
		centaine = (centaine / 100);
		ft_search_for_number(tab, size, centaine);
		write(1, " ", 1);
		ft_search_for_number(tab, size, 100);
		if (modcent > 0)
			write(1, " ", 1);
	}
}
