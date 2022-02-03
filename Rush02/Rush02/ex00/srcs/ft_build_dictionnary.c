/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_build_dictionnary.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johrober <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 19:15:55 by johrober          #+#    #+#             */
/*   Updated: 2022/01/30 17:45:52 by pmailly          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../rush.h"

t_dico_entry	**ft_build_dictionnary(char *dico, int max_size)
{
	int				i;
	int				j;
	t_dico_entry	**tab_dico;

	tab_dico = ft_allocate_memory(max_size);
	if (tab_dico == NULL)
		return (NULL);
	i = 0;
	j = -1;
	while (dico[i] != '\0' && j + 1 < max_size)
	{
		if (ft_is_line_ok(dico, i))
		{
			if (!ft_register_entry(tab_dico[++j], dico, &i))
			{
				ft_free_dictionnary(tab_dico, max_size);
				return (NULL);
			}
		}
		else
			ft_skip_line(dico, &i);
	}
	return (tab_dico);
}

int	ft_register_entry(t_dico_entry *entry, char *dico, int *i)
{
	char	*str;
	int		length;

	length = ft_str_len_until(dico, *i, ':');
	str = ft_get_str_until(i, dico, length, ':');
	if (str == NULL || str[0] == '\0')
		return (0);
	entry->num = ft_atoi(str);
	free(str);
	if (dico[*i])
		*i += 1;
	length = ft_str_len_until(dico, *i, '\n');
	str = ft_get_str_until(i, dico, length, '\n');
	if (str == NULL || str[0] == '\0')
		return (0);
	entry->text = str;
	if (dico[*i])
		*i += 1;
	return (1);
}

int	ft_is_line_ok(char *dico, int i)
{
	unsigned int	nbr;

	while (dico[i] && dico[i] == ' ')
		i++;
	if (!dico[i] || dico[i] == '\n')
		return (0);
	nbr = 0;
	while (dico[i] && dico[i] != ':' && dico[i] != ' ' && dico[i] != '\n')
	{
		if (dico[i] < '0' || dico[i] > '9')
			return (0);
		nbr = (nbr * 10) + (dico[i] - 48);
		i++;
	}
	while (dico[i] == ' ')
		i++;
	if ((nbr > 20 && (nbr > 100 || nbr % 10 != 0) && nbr != 100 && nbr != 1000
			&& nbr != 1000000 && nbr != 1000000000) || dico[i] != ':')
		return (0);
	return (1);
}
