/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafissie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 18:34:56 by mafissie          #+#    #+#             */
/*   Updated: 2022/01/30 19:28:41 by johrober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../rush.h"

int	ft_error(void)
{
	write(1, "Error\n", 6);
	return (1);
}

int	ft_dict_error(void)
{
	write(1, "Dict Error\n", 11);
	return (1);
}

int	ft_process_program(char *dict_name, char *num_char, int max_size)
{
	t_dico_entry	**tab_dico;
	char			*txt_files;

	txt_files = ft_create_content_dict(dict_name);
	tab_dico = ft_build_dictionnary(txt_files, max_size);
	if (ft_verif_dico(tab_dico, max_size))
	{
		free(txt_files);
		ft_free_dictionnary(tab_dico, max_size);
		return (1);
	}
	ft_take_num_dict(ft_atoi(num_char), tab_dico, max_size);
	ft_free_dictionnary(tab_dico, max_size);
	free(txt_files);
	return (0);
}

int	main(int ac, char **av)
{
	if (ft_verif(ac, av))
		return (ft_error());
	if (ac == 3)
	{
		if (ft_is_not_open(av[1]))
			return (ft_error());
		if (ft_is_atoi_verif(av[2]))
			return (ft_error());
		if (ft_process_program(av[1], av[2], 32))
			return (ft_dict_error());
		write(1, "\n", 1);
	}
	if (ac == 2)
	{
		if (ft_is_atoi_verif(av[1]))
			return (ft_error());
		if (ft_process_program("number.dict", av[1], 32))
			return (ft_dict_error());
		write(1, "\n", 1);
	}
	return (0);
}
