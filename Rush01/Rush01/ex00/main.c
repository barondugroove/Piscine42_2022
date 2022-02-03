/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clorcery <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 18:26:23 by clorcery          #+#    #+#             */
/*   Updated: 2022/01/23 20:11:06 by alprival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int		ft_verif_deux(char **argv);
int		ft_verif(int argc, char **argv);
void	ft_putstr(char *str);
void	ft_appel_fonction(char **argv, char **tab);

int	main(int argc, char **argv)
{
	int		i;
	char	**tab;
	char	*error;

	error = "Error";
	i = 0;
	tab = malloc(6 * sizeof(char *));
	while (i < 6)
	{
		tab[i] = malloc(6 * sizeof(char));
		i++;
	}
	if (ft_verif(argc, argv))
	{
		ft_putstr(error);
		return (0);
	}
	if (ft_verif_deux(argv))
	{
		ft_putstr(error);
		return (0);
	}
	ft_appel_fonction(argv, tab);
	free(tab);
	return (0);
}
