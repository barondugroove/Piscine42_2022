/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johrober <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 19:30:48 by johrober          #+#    #+#             */
/*   Updated: 2022/01/29 21:13:26 by mafissie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../rush.h"

unsigned int	ft_atoi(char *str)
{
	unsigned int	nbr;
	int				i;

	i = 0;
	nbr = 0;
	while ((str[i] != '\0') && (str[i] >= '0' && str[i] <= '9'))
	{
		nbr = nbr * 10 + (str[i] - 48);
		i++;
	}
	return (nbr);
}
