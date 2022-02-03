/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verif.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephilipp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 18:36:14 by ephilipp          #+#    #+#             */
/*   Updated: 2022/01/23 20:11:46 by alprival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_verif(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc > 2)
		return (1);
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] == 32)
			i++;
		else if (argv[1][i] < '1' || argv[1][i] > '4')
			return (1);
		else
			i++;
	}
	return (0);
}

int	ft_verif_deux( char **argv)
{
	if ((argv[1][0] + argv[1][8] - 48) > 53
	|| (argv[1][0] + argv[1][8] - 48) < 51 )
		return (1);
	if ((argv[1][2] + argv[1][10] - 48) > 53
	|| (argv[1][2] + argv[1][10] - 48) < 51)
		return (1);
	if ((argv[1][4] + argv[1][12] - 48) > 53
	|| (argv[1][4] + argv[1][12] - 48) < 51)
		return (1);
	if ((argv[1][6] + argv[1][14] - 48) > 53
	|| (argv[1][6] + argv[1][14] - 48) < 51)
		return (1);
	if ((argv[1][16] + argv[1][24] - 48) > 53
	|| (argv[1][16] + argv[1][24] - 48) < 51)
		return (1);
	if ((argv[1][18] + argv[1][26] - 48) > 53
	|| (argv[1][18] + argv[1][26] - 48) < 51)
		return (1);
	if ((argv[1][20] + argv[1][28] - 48) > 53
	|| (argv[1][20] + argv[1][28] - 48) < 51)
		return (1);
	if ((argv[1][22] + argv[1][30] - 48) > 53
	|| (argv[1][22] + argv[1][30] - 48) < 51)
		return (1);
	return (0);
}
