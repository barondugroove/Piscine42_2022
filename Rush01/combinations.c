/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   combinations.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 16:02:48 by bchabot           #+#    #+#             */
/*   Updated: 2022/01/23 16:29:06 by bchabot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int main(void)
{
	int	a;
	int	b;
	int	c;
	int	d;
	
	a = 1;
	b = 1;
	c = 1;
	d = 1;
	while (a <= 4)
	{
		while (b <= 4)
		{
			while (c <= 4)
			{
				while (d <= 4)
				{
					if ((a + b + c + d == 10) && (a != b) && (b != c) && (c != d) && (a != c))
					{
						printf("%d%d%d%d\n", a, b, c, d);
					}
					d++;
				}
				c++;
				d = 1;
			}
			b++;
			c = 1;
		}
		a++;
		b = 1;
	}
}