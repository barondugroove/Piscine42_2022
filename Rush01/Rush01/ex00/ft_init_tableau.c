/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_tableau.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alprival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 19:18:14 by alprival          #+#    #+#             */
/*   Updated: 2022/01/23 20:09:59 by alprival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_init_tableau(char **argv, char **tab)
{
	tab[0][1] = argv[1][0];
	tab[0][2] = argv[1][2];
	tab[0][3] = argv[1][4];
	tab[0][4] = argv[1][6];
	tab[5][1] = argv[1][8];
	tab[5][2] = argv[1][10];
	tab[5][3] = argv[1][12];
	tab[5][4] = argv[1][14];
	tab[1][0] = argv[1][16];
	tab[2][0] = argv[1][18];
	tab[3][0] = argv[1][20];
	tab[4][0] = argv[1][22];
	tab[1][5] = argv[1][24];
	tab[2][5] = argv[1][26];
	tab[3][5] = argv[1][28];
	tab[4][5] = argv[1][30];
}

void	ft_init_tableau_deux(char **tab)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (a != 6 && b != 6)
	{	
		while (a != 6)
		{
			tab[a][b] = '0';
			a++;
		}
		b++;
		a = 0;
	}
}
