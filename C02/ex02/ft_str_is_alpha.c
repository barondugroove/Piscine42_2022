/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 15:28:29 by bchabot           #+#    #+#             */
/*   Updated: 2022/01/18 15:30:36 by bchabot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 97 || str[i] > 122) && (str[i] < 65 || str[i] > 90))
		{
			return (0);
		}
		else
		{
			i++;
		}
	}
	return (1);
}
