/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verif.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 11:10:41 by bchabot           #+#    #+#             */
/*   Updated: 2022/01/30 18:22:00 by johrober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../rush.h"

int	ft_verif(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc < 2 || argc > 3)
		return (1);
	if (argc == 2)
	{
		if (argv[1][0] == '\0')
			return (1);
		while (argv[1][i])
		{
			if (argv[1][i] < '0' || argv[1][i] > '9')
				return (1);
			i++;
		}
		return (0);
	}
	if (argc == 3 && ft_verif_argc3(argv))
		return (1);
	return (0);
}

int	ft_verif_argc3(char **argv)
{
	int	i;

	i = 0;
	if (argv[1][0] == '\0' || argv[2][0] == '\0')
		return (1);
	while (argv[2][i])
	{
		if (argv[2][i] < '0' || argv[2][i] > '9')
			return (1);
		i++;
	}
	return (0);
}

int	ft_verif_dico(t_dico_entry **tab_dico, int max_size)
{
	int	i;
	int	j;

	i = 0;
	while (i < max_size)
	{
		j = 0;
		if (!tab_dico[i])
			return (1);
		while (j < max_size)
		{
			if (i != j && tab_dico[i]->num == tab_dico[j]->num)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
