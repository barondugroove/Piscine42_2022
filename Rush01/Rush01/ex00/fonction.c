/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonction.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alprival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 18:35:58 by alprival          #+#    #+#             */
/*   Updated: 2022/01/23 20:43:21 by alprival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_un_egal_quatre(char **tab)
{
	int	y;
	int	x;

	y = 0;
	x = 0;
	while (y != 6)
	{
		while (x != 6)
		{
			if (tab [y][x] == '1' && y == 0 && (x > 0 && x < 3))
				tab [y + 1][x] = '4';
			if (tab [y][x] == '1' && (y > 0 && y < 5) && x == 0)
				tab [y][x + 1] = '4';
			if (tab [y][x] == '1' && (y > 0 && y < 5) && x == 5)
				tab [y][x - 1] = '4';
			if (tab [y][x] == '1' && y == 5 && (x > 0 && x < 3))
				tab [y - 1][x] = '4';
			x++;
		}
		x = 0;
		y++;
	}
}

void	ft_un_et_deux_egal_trois(char **tab)
{
	int	y;
	int	x;

	y = 0;
	x = 0;
	while (y != 6)
	{
		while (x != 6)
		{
			if (tab[y][x] == '1' && y == 0 && tab[y + 5][x] == '2')
				tab[y + 4][x] = '3';
			if (tab[y][x] == '1' && (y > 0 && y < 5)
				&& x == 0 && tab[y][x + 5] == '2')
				tab [y][x + 4] = '3';
			if (tab[y][x] == '1' && (y > 0 && y < 5)
				&& x == 5 && tab[y][x - 5] == '2')
				tab[y][x - 4] = '3';
			if (tab[y][x] == '1' && y == 5 && tab[y - 5][x] == '2')
				tab[y - 4][x] = '3';
			x++;
		}
		x = 0;
		y++;
	}
}

void	ft_deux_et_trois_egal_quatre(char **tab)
{
	int	y;
	int	x;

	y = 0;
	x = 0;
	while (y != 6)
	{
		while (x != 6)
		{
			if (tab [y][x] == '2' && y == 0 && tab [y + 5][x] == '3')
				tab [y + 2][x] = '4';
			if (tab [y][x] == '2' && (y > 0 && y < 5)
				&& x == 0 && tab [y][x + 5] == '3')
				tab [y][x + 2] = '4';
			if (tab [y][x] == '2' && (y > 0 && y < 5)
				&& x == 5 && tab [y][x - 5] == '3')
				tab [y][x - 2] = '4';
			if (tab [y][x] == '2' && y == 5 && tab [y - 5][x] == '3')
				tab [y - 2][x] = '4';
			x++;
		}
		y++;
		x = 0;
	}
}
/*
void 	ft_brute_force(char **tab)
{
	int y_com;
	int x_com;
	int y;
	int x;

	x = 1;
	y = 1;
	y_com = 1;
	x_com = 1;
	
	while(tab[x + x_com][y + y_com] != '4')
	{
		x_com++;
		while(tab[x + 2][y + y_com] != '4')
	*/																	
/*
	while(tab[y][x] != '4')
   	{
		while(tab[y][x+1] != '4')
   		{
			while(tab[y][x+2] != '4')
   	 		{
				while(tab[y][x+3] != '4')
   	 			{
					while(tab[y+1][x] != '4')
				   	{
						while(tab[y+1][x+1] != '4')
    					{
							while(tab[y+1][x+2] != '4')
   		 					{
								while(tab[y+1][x+3] != '4')
 							  	{
									while(tab[y+2][x] != '4')
								    {
										while(tab[y+2][x+1] != '4')
									   	{
											while(tab[y+2][x+2] != '4')
   	 										{
												while(tab[y+2][x+3] != '4')
   		 										{
													while(tab[y+3][x] != '4')
 									 				{
														while(tab[y+3][x+1] != '4')
													:wq	{
															while(tab[y+3][x+2] != '4')
															{
																while(tab[y+3][x+3] != '4')
																{
																	tab[y+3][x+3]++;
																}
															tab[y+3][x+3] = '0';
															tab[y+3][x+2]++;
															}
														tab[y+3][x+2] = '0';
														tab[y+3][x+1]++;
														}
													tab[y+3][x+1] = '0';
													tab[y+3][x]++;
													}
												tab[y+3][x] = '0';
												tab[y+2][x+3]++;
												}
											tab[y+2][x+3] = '0';
											tab[y+2][x+2]++;
											}
										tab[y+2][x+2] = '0';
										tab[y+2][x+1]++;
										}
									tab[y+2][x+1] = '0';
									tab[y+2][x]++;
									}
								tab[y+2][x] = '0';
								tab[y+1][x+3]++;
								}
							tab[y+1][x+3] = '0';
							tab[y+1][x+2]++;
							}
						tab[y+1][x+2] = '0';
						tab[y+1][x+1]++;
						}
					tab[y+1][x+1] = '0';
					tab[y+1][x]++;
					}
				tab[y+1][x] = '0';
				tab[y][x+3]++;
				}
			tab[y][x+3] = '0';
			tab[y][x+2]++;
			}
		tab[y][x+2] = '0';
		tab[y][x+1]++;
		}
	tab[y][x+1] = '0';
	tab[y][x]++;
	}
}*/
