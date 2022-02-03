/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_too_long.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 18:46:07 by bchabot           #+#    #+#             */
/*   Updated: 2022/01/30 17:40:37 by pmailly          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../rush.h"

int	ft_is_atoi_verif(char *str)
{
	unsigned long long int	nbr;
	int						i;

	i = 0;
	nbr = 0;
	while ((str[i] != '\0') && (str[i] >= '0' && str[i] <= '9'))
	{
		nbr = nbr * 10 + (str[i] - 48);
		i++;
	}
	if (nbr > 4294967295)
		return (1);
	else
		return (0);
}
