/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 16:17:41 by bchabot           #+#    #+#             */
/*   Updated: 2022/01/21 09:52:30 by bchabot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{	
	*div = a / b;
	*mod = a % b;
}

int main(void)
{
	int	a;
	int	b;
	int	div;
	int mod;

	a = 10;
	b = 3;
	ft_div_mod(a, b, &div, &mod);
	printf("%d, %d", div, mod);
	return (0);
}

