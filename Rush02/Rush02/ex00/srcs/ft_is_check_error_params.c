/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_check_error_params.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafissie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 22:49:11 by mafissie          #+#    #+#             */
/*   Updated: 2022/01/30 16:12:36 by mafissie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../rush.h"

int	ft_is_not_open(char *str)
{
	if (open(str, O_RDONLY) <= 0 && open(str, O_DIRECTORY) <= 0)
		return (1);
	else if (open(str, O_RDONLY) >= 0 && open(str, O_DIRECTORY) >= 0)
		return (1);
	else
		return (0);
}
