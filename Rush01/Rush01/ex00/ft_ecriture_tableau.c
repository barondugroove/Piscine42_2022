/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ecriture_tableau.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephilipp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 18:53:00 by ephilipp          #+#    #+#             */
/*   Updated: 2022/01/23 18:55:20 by ephilipp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_ecriture_tableau(char **tab)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (y != 6 && x != 6)
	{
		while (x != 6)
		{	
			if ((x >= 1 && x <= 4) && (y >= 1 && y <= 4))
			{
				ft_putchar(tab[y][x]);
				ft_putchar(' ');
			}
			x++;
		}
		ft_putchar('\n');
		y++;
		x = 0;
	}
}
