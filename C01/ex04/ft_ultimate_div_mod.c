/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 16:19:42 by bchabot           #+#    #+#             */
/*   Updated: 2022/01/21 09:54:36 by bchabot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	resultat;
	int	reste;

	 resultat = *a / *b;
	 reste = *a % *b;
	 *a = resultat;
	 *b = reste;
}

int	main(void)
{
	int a;
	int b;

	a = 10;
	b = 3;
	ft_ultimate_div_mod(&a, &b);
	printf("%d, %d", a, b);
	return (0);
}
