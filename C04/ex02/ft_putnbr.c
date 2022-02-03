/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 17:58:30 by bchabot           #+#    #+#             */
/*   Updated: 2022/01/16 23:53:17 by bchabot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	unsnb;

	unsnb = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		unsnb = -nb;
	}
	if (unsnb < 10)
	{
		ft_putchar(unsnb + '0');
	}
	else
	{
		ft_putnbr(unsnb / 10);
		ft_putchar((unsnb % 10) + '0');
	}
}
