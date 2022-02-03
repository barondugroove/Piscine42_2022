/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 21:56:20 by bchabot           #+#    #+#             */
/*   Updated: 2022/01/31 17:41:41 by bchabot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	lapuissance;

	lapuissance = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power != 0)
	{
		lapuissance *= nb;
		power--;
	}
	return (lapuissance);
}
