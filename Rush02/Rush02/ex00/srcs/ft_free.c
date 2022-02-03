/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johrober <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 22:38:36 by johrober          #+#    #+#             */
/*   Updated: 2022/01/30 17:40:20 by pmailly          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../rush.h"

void	ft_free_dictionnary(t_dico_entry **tab_dico, int size)
{
	int	count;

	count = 0;
	if (tab_dico != NULL)
	{
		while (count < size)
		{
			if (tab_dico[count] != NULL && tab_dico[count]->text != NULL)
				free(tab_dico[count]->text);
			if (tab_dico[count] != NULL)
				free(tab_dico[count]);
			count++;
		}
		free(tab_dico);
	}
}

t_dico_entry	**ft_allocate_memory(int max_size)
{
	int				count;
	t_dico_entry	**tab_dico;

	count = 0;
	tab_dico = malloc(sizeof(tab_dico) * max_size);
	if (tab_dico == NULL)
		return (NULL);
	while (count < max_size)
	{
		tab_dico[count] = malloc(sizeof(tab_dico[count]));
		if (tab_dico[count] == NULL)
		{
			ft_free_dictionnary(tab_dico, max_size);
			return (NULL);
		}
		count++;
	}
	return (tab_dico);
}
