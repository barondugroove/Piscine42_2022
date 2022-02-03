/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 12:09:16 by bchabot           #+#    #+#             */
/*   Updated: 2022/01/31 18:05:07 by bchabot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, str + i, 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	n;

	i = argc;
	n = 1;
	while (i != 1)
	{
		while (argv[n][0] > argv[n + 1][0] && n < i)
		{
			n++;
		}
		ft_putstr(argv[n]);
		i--;
	}
	return (0);
}
