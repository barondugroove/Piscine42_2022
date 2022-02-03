/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 11:24:09 by bchabot           #+#    #+#             */
/*   Updated: 2022/01/17 15:10:28 by bchabot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char w, char x, char y, char z)
{
	char	buf_wx[2];
	char	buf_yz[2];

	buf_wx[0] = w;
	buf_wx[1] = x;
	buf_yz[0] = y;
	buf_yz[1] = z;
	if (w == '9' && x == '8' && y == '9' && z == '9')
	{
		write(1, buf_wx, 2);
		write(1, " ", 1);
		write(1, buf_yz, 2);
	}
	else
	{
		write(1, buf_wx, 2);
		write(1, " ", 1);
		write(1, buf_yz, 2);
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	ft_int_to_char(int a, int b)
{
	char	w;
	char	x;
	char	y;
	char	z;

	w = '0' + a / 10;
	x = '0' + a % 10;
	y = '0' + b / 10;
	z = '0' + b % 10;
	ft_putchar(w, x, y, z);
}

void	ft_print_comb2(void)
{
	int	a;	
	int	b;

	a = 0;
	b = 0;
	while (a <= 99)
	{
		while (b <= 99)
		{
			if (b > a)
			{
				ft_int_to_char(a, b);
			}
			b++;
		}
		b = 0;
		a++;
	}
}
