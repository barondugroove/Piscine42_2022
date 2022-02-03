/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 10:01:58 by bchabot           #+#    #+#             */
/*   Updated: 2022/01/17 15:08:27 by bchabot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a, char b, char c)
{
	char	buf[5];

	buf[0] = a;
	buf[1] = b;
	buf[2] = c;
	buf[3] = ',';
	buf[4] = ' ';
	if (buf[0] < buf[1] && buf[1] < buf[2])
	{
		if (a == '7')
			write(1, buf, 3);
		else
			write(1, buf, 5);
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = '0';
	c = '0';
	while (a <= '9')
	{
		while (b <= '9')
		{
			while (c <= '9')
			{
				ft_putchar(a, b, c);
				c++;
			}
			c = '0';
			b++;
		}
		b = '0';
		a++;
	}
}
