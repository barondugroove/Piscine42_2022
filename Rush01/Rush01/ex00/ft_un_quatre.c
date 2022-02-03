/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_un_quatre.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alprival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 20:31:25 by alprival          #+#    #+#             */
/*   Updated: 2022/01/23 20:44:10 by alprival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_quatre_egal_all_haut(char **tab)
{
	int	y;
	int	x;

	y = 0;
	x = 0;
	while (y != 6)
	{
		while (x != 6)
		{
			if (tab[y][x] == '4' && y == 0)
			{
				tab [y + 1][x] = '1';
				tab [y + 2][x] = '2';
				tab [y + 3][x] = '3';
				tab [y + 4][x] = '4';
			}
			x++;
		}
		y++;
		x = 0;
	}
}

void	ft_quatre_egal_all_bas(char **tab)
{
	int	y;
	int	x;

	y = 0;
	x = 0;
	while (y != 6)
	{
		while (x != 6)
		{
			if (tab[y][x] == '4' && y == 5)
			{
				tab [y - 1][x] = '1';
				tab [y - 2][x] = '2';
				tab [y - 3][x] = '3';
				tab [y - 4][x] = '4';
			}
			x++;
		}
		y++;
		x = 0;
	}
}

void	ft_quatre_egal_all_gauche(char **tab)
{
	int	y;
	int	x;

	y = 0;
	x = 0;
	while (y != 6)
	{
		while (x != 6)
		{
			if (tab [y][x] == '4' && (y > 0 && y < 5) && x == 0)
			{
				tab [y][x + 1] = '1';
				tab [y][x + 2] = '2';
				tab [y][x + 3] = '3';
				tab [y][x + 4] = '4';
			}
			x++;
		}
		y++;
		x = 0;
	}
}

void	ft_quatre_egal_all_droite(char **tab)
{
	int	y;
	int	x;

	y = 0;
	x = 0;
	while (y != 6)
	{
		while (x != 6)
		{
			if (tab[y][x] == '4' && (y > 0 && y < 5) && x == 5)
			{
				tab [y][x - 1] = '1';
				tab [y][x - 2] = '2';
				tab [y][x - 3] = '3';
				tab [y][x - 4] = '4';
			}
			x++;
		}
		y++;
		x = 0;
	}
}
