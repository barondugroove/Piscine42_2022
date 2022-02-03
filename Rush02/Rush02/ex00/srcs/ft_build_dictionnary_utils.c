/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_build_dictionnary_utils.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johrober <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 15:21:51 by johrober          #+#    #+#             */
/*   Updated: 2022/01/30 19:15:08 by johrober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../rush.h"

int	ft_str_len_until(char *dico, int i, char sep)
{
	int	length;

	length = 0;
	while (dico[i] && dico[i] == ' ')
		i++;
	while (dico[i] && dico[i] != sep)
	{
		if (dico[i] != ' ' || (length == 0 || dico[i - 1] != ' '))
			length++;
		i++;
	}
	if (dico[i - 1] == ' ')
		length--;
	return (length);
}

char	*ft_get_str_until(int *i, char *dico, int length, char sep)
{
	char	*num_char;
	int		j;

	num_char = malloc(sizeof(char) * (length + 1));
	if (num_char == NULL)
		return (NULL);
	j = 0;
	while (dico[*i] && dico[*i] == ' ')
		*i += 1;
	while (dico[*i] && dico[*i] != sep && j < length)
	{
		if (dico[*i] != ' ' || (j == 0 || num_char[j - 1] != ' '))
		{
			num_char[j] = dico[*i];
			j++;
		}
		*i += 1;
	}
	num_char[j] = '\0';
	while (dico[*i] == ' ')
		*i += 1;
	return (num_char);
}

void	ft_skip_line(char *dico, int *i)
{
	while (dico[*i] != '\n' && dico[*i] != '\0')
		*i += 1;
	if (dico[*i] == '\n')
		*i += 1;
}
